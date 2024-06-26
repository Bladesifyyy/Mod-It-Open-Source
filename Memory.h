#ifndef __MEMORY_H__
#define __MEMORY_H__

#pragma once
namespace Mod_Hub_Base
{
	char* byteCompare(char* ptr, size_t size, const std::string& pattern, const std::string& mask, int find);
	char* ptrScan(const std::string& pattern, uintptr_t startAddress = 0, int find = 0);
	char* ptrScan(const std::string& pattern, const std::string& mask, uintptr_t startAddress = 0, int find = 0);
	char* virtualPtrScan(const std::string& pattern, const std::string& mask, uintptr_t startAddress = 0, int find = 0);
	char* virtualPtrScan(const std::string& pattern, uintptr_t startAddress = 0, int find = 0);
	char* rel(char* ptr, int offset = 3);
	template<typename T> T ptrScan(const std::string& pattern, uintptr_t startAddress = 0, int find = 0)
	{
		return reinterpret_cast<T>(ptrScan(pattern, startAddress, find));
	}
	template<typename T> T ptrScan(const std::string& pattern, const std::string& mask, uintptr_t startAddress = 0, int find = 0)
	{
		return reinterpret_cast<T>(ptrScan(pattern, mask, startAddress, find));
	}

	// from boost libraries
	template <uint64_t FnvPrime, uint64_t OffsetBasis>
	struct basic_fnv_1 {

		uint64_t operator()(std::string const& text) const {

			uint64_t hash = OffsetBasis;
			for (std::string::const_iterator it = text.begin(), end = text.end(); it != end; ++it) {

				hash *= FnvPrime;
				hash ^= *it;
			}

			return hash;
		}
	};

	const uint64_t fnv_prime = 1099511628211u;
	const uint64_t fnv_offset_basis = 14695981039346656037u;

	typedef basic_fnv_1<fnv_prime, fnv_offset_basis> fnv_1;

	namespace Memory {

		void TransformPattern(const std::string& pattern, std::string& data, std::string& mask);

		class executable_meta {
		private:

			uintptr_t	m_begin;
			uintptr_t	m_end;
			DWORD		m_size;
		public:

			executable_meta()
				: m_begin(0), m_end(0) {
			}

			void EnsureInit();

			inline uintptr_t begin() { return m_begin; }
			inline uintptr_t end() { return m_end; }
			inline DWORD size() { return m_size; }
		};

		class pattern_match {
		private:

			void* m_pointer;

		public:

			inline pattern_match(void* pointer) {

				m_pointer = pointer;
			}

			template<typename T>
			T* get(int offset) {

				if (m_pointer == nullptr) {
					return nullptr;
				}

				char* ptr = reinterpret_cast<char*>(m_pointer);
				return reinterpret_cast<T*>(ptr + offset);
			}

			template<typename T>
			T* get() {

				return get<T>(0);
			}
		};

		typedef std::vector<pattern_match> matchVec;

		class pattern {
		private:

			std::string			m_bytes;
			std::string			m_mask;

			uint64_t			m_hash;

			size_t				m_size;

			matchVec			m_matches;

			bool				m_matched;

		private:

			void Initialize(const char* pattern, size_t length);

			bool ConsiderMatch(uintptr_t offset);

			void EnsureMatches(int maxCount);

		public:

			template<size_t Len>
			pattern(const char(&pattern)[Len]) {

				Initialize(pattern, Len);
			}

			inline pattern& count(int expected) {

				if (!m_matched) {
					EnsureMatches(expected);
				}

				return *this;
			}

			inline size_t size() {

				if (!m_matched) {
					EnsureMatches(INT_MAX);
				}

				return m_matches.size();
			}

			inline pattern_match& get(int index) {

				if (!m_matched) {
					EnsureMatches(INT_MAX);
				}

				if (m_matches.size() == 0) {

					m_matches.push_back(pattern_match(nullptr));
					return m_matches[0];
				}

				return m_matches[index];
			}

		public:
			// define a hint
			static void hint(uint64_t hash, uintptr_t address);
		};

		// for link /DYNAMICBASE executables
		static ptrdiff_t baseAddressDifference;

		// sets the base address difference based on an obtained pointer
		inline void set_base(uintptr_t address)
		{
#ifdef _M_IX86
			uintptr_t addressDiff = (address - 0x400000);
#elif defined(_M_AMD64)
			uintptr_t addressDiff = (address - 0x140000000);
#endif

			// pointer-style cast to ensure unsigned overflow ends up copied directly into a signed value
			baseAddressDifference = *(ptrdiff_t*)&addressDiff;
		}

		// gets the main base of the process
		uintptr_t get_base();
		DWORD get_size();
		// gets the main base of the process with Offset
		uintptr_t get_base_offsetted(DWORD offset);

		// gets a multilayer pointer address
		uintptr_t get_multilayer_pointer(uintptr_t base_address, std::vector<DWORD> offsets);

		// sets the base to the process main base
		inline void set_base()
		{
			set_base((uintptr_t)GetModuleHandle(NULL));
		}

		// adjusts the address passed to the base as set above
		template<typename T>
		inline void adjust_base(T& address)
		{
			*(uintptr_t*)&address += baseAddressDifference;
		}

		// returns the adjusted address to the stated base
		template<typename T>
		inline uintptr_t get_adjusted(T address)
		{
			return (uintptr_t)address + baseAddressDifference;
		}

		template<typename ValueType, typename AddressType>
		inline void put(AddressType address, ValueType value)
		{
			adjust_base(address);

			memcpy((void*)address, &value, sizeof(value));
		}

		template<typename ValueType, typename AddressType>
		inline void putVP(AddressType address, ValueType value)
		{
			adjust_base(address);

			DWORD oldProtect;
			VirtualProtect((void*)address, sizeof(value), PAGE_EXECUTE_READWRITE, &oldProtect);

			memcpy((void*)address, &value, sizeof(value));

			VirtualProtect((void*)address, sizeof(value), oldProtect, &oldProtect);
		}

		template<typename AddressType>
		inline void nop(AddressType address, size_t length)
		{
			adjust_base(address);

			memset((void*)address, 0x90, length);
		}

		template<typename AddressType>
		inline void return_function(AddressType address, uint16_t stackSize = 0)
		{
			if (stackSize == 0)
			{
				put<uint8_t>(address, 0xC3);
			}
			else
			{
				put<uint8_t>(address, 0xC2);
				put<uint16_t>((uintptr_t)address + 1, stackSize);
			}
		}

		template<typename T>
		inline T* getRVA(uintptr_t rva)
		{
#ifdef _M_IX86
			return (T*)(baseAddressDifference + 0x400000 + rva);
#elif defined(_M_AMD64)
			return (T*)(0x140000000 + rva);
#endif
		}

		template<typename T, typename AT>
		inline void jump(AT address, T func)
		{
			put<uint8_t>(address, 0xE9);
			put<int>((uintptr_t)address + 1, (intptr_t)func - (intptr_t)get_adjusted(address) - 5);
		}

		template<typename T, typename AT>
		inline void call(AT address, T func)
		{
			put<uint8_t>(address, 0xE8);
			put<int>((uintptr_t)address + 1, (intptr_t)func - (intptr_t)get_adjusted(address) - 5);
		}

		template<typename T>
		inline T get_call(T address)
		{
			intptr_t target = *(uintptr_t*)(get_adjusted(address) + 1);
			target += (get_adjusted(address) + 5);

			return (T)target;
		}

		template<typename TTarget, typename T>
		inline void set_call(TTarget* target, T address)
		{
			*(T*)target = get_call(address);
		}

		namespace vp
		{
			template<typename T, typename AT>
			inline void jump(AT address, T func)
			{
				putVP<uint8_t>(address, 0xE9);
				putVP<int>((uintptr_t)address + 1, (intptr_t)func - (intptr_t)get_adjusted(address) - 5);
			}

			template<typename T, typename AT>
			inline void call(AT address, T func)
			{
				putVP<uint8_t>(address, 0xE8);
				putVP<int>((uintptr_t)address + 1, (intptr_t)func - (intptr_t)get_adjusted(address) - 5);
			}
		}

		std::vector<DWORD64> get_string_addresses(std::string str);

		template <typename T>
		T get_value(std::vector<DWORD> offsets) {

			uintptr_t Addr = get_multilayer_pointer(Hooking::m_world_pointer, offsets);
			if (Addr == NULL) {
				return NULL;
			}

			return *((T*)Addr);
		}

		template <typename T>
		void set_value(std::vector<DWORD> offsets, T value) {
			uintptr_t Addr = get_multilayer_pointer(Hooking::m_world_pointer, offsets);
			if (Addr == NULL) {
				return;
			}

			*reinterpret_cast<T*>(Addr) = value;
		}

	}

	//extra imported shitt u prob like if you love bigbase!
	class MemoryHandle
	{
	public:
		/**
		 * \brief Constructs the object with a pointer
		 * \param p The pointer to initialize the object with, optional
		 */
		MemoryHandle(void* p = nullptr) :
			m_Ptr(p)
		{}

		/**
		 * \brief Constructs the object with an integral pointer
		 * \param p The integral pointer to initialize the object with
		 */
		explicit MemoryHandle(std::uintptr_t p) :
			m_Ptr(reinterpret_cast<void*>(p))
		{}

		/**
		 * \brief Retrieves the pointer as a pointer
		 * \return A pointer
		 */
		template <typename T>
		std::enable_if_t<std::is_pointer_v<T>, T> As()
		{
			return static_cast<T>(m_Ptr);
		}

		/**
		 * \brief Retrieves the pointer as a reference
		 * \return A pointer
		 */
		template <typename T>
		std::enable_if_t<std::is_lvalue_reference_v<T>, T> As()
		{
			return *static_cast<std::add_pointer_t<std::remove_reference_t<T>>>(m_Ptr);
		}

		/**
		 * \brief Retrieves the pointer as an integral pointer
		 * \return An integral pointer
		 */
		template <typename T>
		std::enable_if_t<std::is_same_v<T, std::uintptr_t>, T> As()
		{
			return reinterpret_cast<T>(m_Ptr);
		}

		/**
		 * \brief Adds an offset to the pointer
		 * \param offset The offset to be added
		 * \return MemoryHandle
		 */
		template <typename T>
		MemoryHandle Add(T offset)
		{
			return MemoryHandle(As<std::uintptr_t>() + offset);
		}

		/**
		 * \brief Subtracted an offset to the pointer
		 * \param offset The offset to be subtracted
		 * \return MemoryHandle
		 */
		template <typename T>
		MemoryHandle Sub(T offset)
		{
			return MemoryHandle(As<std::uintptr_t>() - offset);
		}

		/**
		 * \brief Gets the relative displacement of the pointer
		 * \return MemoryHandle
		 */
		MemoryHandle Rip()
		{
			if (!m_Ptr)
				return nullptr;
			return Add(As<std::int32_t&>()).Add(4U);
		}

		/**
		 * \brief Checks if the stored pointer is valid
		 * \return bool
		 */
		explicit operator bool() noexcept
		{
			return m_Ptr;
		}
	protected:
		void* m_Ptr;
	};

	class MemoryRegion
	{
	public:
		/**
		 * \brief Constructs the region
		 * \param base The base of the region
		 * \param size The size of the region
		 */
		explicit MemoryRegion(MemoryHandle base, std::size_t size) :
			m_Base(base),
			m_Size(size)
		{}

		/**
		 * \brief Gets the base of the region
		 * \return MemoryHandle
		 */
		MemoryHandle Base()
		{
			return m_Base;
		}

		/**
		 * \brief Gets the end of the region
		 * \return MemoryHandle
		 */
		MemoryHandle End()
		{
			return m_Base.Add(m_Size);
		}

		/**
		 * \brief Gets the size of the region
		 * \return std::size_t
		 */
		std::size_t Size()
		{
			return m_Size;
		}

		/**
		 * \brief Checks if p is within this region
		 * \param p The pointer
		 * \return bool
		 */
		bool Contains(MemoryHandle p)
		{
			if (p.As<std::uintptr_t>() < m_Base.As<std::uintptr_t>())
				return false;
			if (p.As<std::uintptr_t>() > m_Base.Add(m_Size).As<std::uintptr_t>())
				return false;

			return true;
		}
	protected:
		MemoryHandle m_Base;
		std::size_t m_Size;
	};

	class Module : public MemoryRegion
	{
	public:
		/**
		 * \brief Constructs the class with the main moduée
		 */
		explicit Module(std::nullptr_t) :
			Module(static_cast<char*>(nullptr))
		{}

		/**
		 * \brief Constructs the class with a module name
		 * \param name The name of the module
		 */
		explicit Module(const char* name) :
			Module(GetModuleHandleA(name))
		{
		}

		/**
		 * \brief Constructs the class with a module base
		 */
		Module(HMODULE hmod) :
			MemoryRegion(hmod, 0)
		{
			auto dosHeader = m_Base.As<IMAGE_DOS_HEADER*>();
			auto ntHeader = m_Base.Add(dosHeader->e_lfanew).As<IMAGE_NT_HEADERS64*>();
			m_Size = ntHeader->OptionalHeader.SizeOfImage;
		}

		/**
		 * \brief Gets the DOS headers for the module
		 */
		IMAGE_DOS_HEADER* GetDosHeaders()
		{
			return m_Base.As<IMAGE_DOS_HEADER*>();
		}

		/**
		 * \brief Gets the NT headers for the module
		 */
		IMAGE_NT_HEADERS64* GetNtHeaders()
		{
			return m_Base.Add(m_Base.As<IMAGE_DOS_HEADER*>()->e_lfanew).As<IMAGE_NT_HEADERS64*>();
		}
	private:
		/**
		 * \brief Transforms a relative virtual address to a virtual address
		 */
		template <typename TReturn, typename TOffset>
		TReturn GetRVA(TOffset rva)
		{
			return m_Base.Add(rva).As<TReturn>();
		}
	};

	class Signature
	{
	public:
		struct Element
		{
			std::uint8_t m_Data{};
			bool m_Wildcard{};
		};

		/**
		 * \brief Constructs the signature with an IDA pattern
		 * \param pattern The IDA pattern string
		 */
		explicit Signature(const char* pattern)
		{
			auto toUpper = [](char c) -> char
			{
				return c >= 'a' && c <= 'z' ? static_cast<char>(c + ('A' - 'a')) : static_cast<char>(c);
			};

			auto isHex = [&](char c) -> bool
			{
				switch (toUpper(c))
				{
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
				case 'A':
				case 'B':
				case 'C':
				case 'D':
				case 'E':
				case 'F':
					return true;
				default:
					return false;
				}
			};

			do
			{
				if (*pattern == ' ')
					continue;
				if (*pattern == '?')
				{
					m_Elements.push_back(Element{ {}, true });
					continue;
				}

				if (*(pattern + 1) && isHex(*pattern) && isHex(*(pattern + 1)))
				{
					char str[3] = { *pattern, *(pattern + 1), '\0' };
					auto data = std::strtol(str, nullptr, 16);

					m_Elements.push_back(Element{ static_cast<std::uint8_t>(data), false });
				}
			} while (*(pattern++));
		}

		/**
		 * \brief Scans for the pattern in a memory region
		 * \param region The region to search in, default is the main module
		 * \return MemoryHandle
		 */
		MemoryHandle Scan(MemoryRegion region = Module(nullptr))
		{
			auto compareMemory = [](std::uint8_t* data, Element* elem, std::size_t num) -> bool
			{
				for (std::size_t i = 0; i < num; ++i)
				{
					if (!elem[i].m_Wildcard)
						if (data[i] != elem[i].m_Data)
							return false;
				}

				return true;
			};

			for (std::uintptr_t i = region.Base().As<std::uintptr_t>(), end = region.End().As<std::uintptr_t>(); i != end; ++i)
			{
				if (compareMemory(reinterpret_cast<std::uint8_t*>(i), m_Elements.data(), m_Elements.size()))
				{
					return MemoryHandle(i);
				}
			}

			return {};
		}
	private:
		std::vector<Element> m_Elements;
	};
}

#endif // __MEMORY_H__