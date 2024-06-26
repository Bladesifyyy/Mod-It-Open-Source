#pragma once
#include "../types.h"
namespace Mod_Hub_Base::UserInterface
{
	enum class Font : std::int32_t
	{
		ChaletLondon = 0,
		HouseScript = 1,				//this is where you customize the menu such as the ui or header or whatever you want
		Monospace = 2,					// theres 6 fonts you can use can change all the colors can make it rainbow and etc
		Wingdings = 3,
		ChaletComprimeCologne = 4,
		Pricedown = 7
	};

	enum class HeaderType : std::int32_t
	{
		Static = 7,
		Gradient = 1,
		Game_YTD = 9,
		YTD = 4
	};

	struct Rectangle
	{
		Vector2 m_Center;
		Vector2 m_Size;

		bool IsInBounds(Vector2 point)
		{
			auto left = m_Center.x - (m_Size.x / 2.f);
			auto right = m_Center.x + (m_Size.x / 2.f);
			auto top = m_Center.y + (m_Size.y / 2.f);
			auto bottom = m_Center.y - (m_Size.y / 2.f);

			if (point.x > right || point.x < left)
				return false;
			if (point.y > top || point.y < bottom)
				return false;

			return true;
		}
	};

	class UIManager
	{
	public:
		explicit UIManager() = default;
		~UIManager() noexcept = default;
		UIManager(UIManager const&) = delete;
		UIManager(UIManager&&) = delete;
		UIManager& operator=(UIManager const&) = delete;
		UIManager& operator=(UIManager&&) = delete;

		template <typename SubmenuType, typename ...TArgs>
		void AddSubmenu(TArgs&&... args)
		{
			auto sub = std::make_unique<SubmenuType>(std::forward<TArgs>(args)...);
			if (m_SubmenuStack.empty())
			{
				m_SubmenuStack.push(sub.get());
			}

			m_AllSubmenus.push_back(std::move(sub));
		}

		void SwitchToSubmenu(std::uint32_t id)
		{
			for (auto&& sub : m_AllSubmenus)
			{
				if (sub->GetId() == id)
				{
					m_SubmenuStack.push(sub.get());
					return;
				}
			}
		}

		void OnTick();
	public:
		std::mutex m_Mutex;

		bool m_Opened = false;
		bool m_MouseLocked = false;
		float m_PosX = 0.14f;
		float m_PosY = 0.1f;	//position of the menu can be changed here		
		float m_Width = 0.21f;
		std::size_t m_OptionsPerPage = 10;
		bool m_Sounds = true;
		bool m_Controllerinput = false; // turn it to true if you want controller input

		// Input
		std::int32_t m_OpenDelay = 200;
		std::int32_t m_BackDelay = 300;
		std::int32_t m_EnterDelay = 300;
		std::int32_t m_VerticalDelay = 120;
		std::int32_t m_HorizontalDelay = 120;

		// Header
		float m_HeaderHeight = 0.090f;
		bool m_HeaderText = true; //toggle the menu name
		bool DrawGlare = true; // toggle the lil world on the side
		bool Rainbowmenu_titleBool = false; //make true; for rainbow
		float m_HeaderTextSize = 1.f;			//customize the header here
		Font m_HeaderFont = Font::Pricedown; //change font
		Color m_HeaderBackgroundColor{ 100, 0 , 255 };
		Color m_HeaderTextColor{ 255, 255, 255, 255 };
		HeaderType m_HeaderType = HeaderType::Static; //change header type to either "Static" or "YTD"  

		bool m_HeaderGradientTransparent = false;
		bool m_HeaderGradientFlip = false;
		float m_HeaderGradientStretch = 0.f;
		float m_HeaderGradientFiller = 0.f;		//dont touch this no point
		Color m_HeaderGradientColorLeft{ 255, 0, 255, 200 };
		Color m_HeaderGradientColorRight{ 255, 255, 255, 30 };

		// Submenu bar
		float m_SubmenuBarHeight = 0.035f;
		float m_SubmenuBarTextSize = 0.33f;  
		Font m_SubmenuBarFont = Font::ChaletLondon; //change font
		float m_SubmenuBarPadding = 2.1f;
		Color m_SubmenuBarBackgroundColor{ 17, 17, 17, 255 };
		Color m_SubmenuBarTextColor{ 100, 0 , 255 }; //color options for the sub bar at top

		// Options
		float m_OptionHeight = 0.033f;
		float m_OptionTextSize = 0.29f;
		Font m_OptionFont = Font::ChaletLondon; //change font
		float m_OptionPadding = 2.1f;
		Color m_OptionSelectedTextColor{ 181,181,181, 181 };
		Color m_OptionUnselectedTextColor{ 255, 255, 255, 255 };  //heres your color options for main ui
		Color m_OptionSelectedBackgroundColor{ 100, 0 , 255 };
		Color m_OptionUnselectedBackgroundColor{ 17, 17, 17, 255 };
		Color m_OptionNOTHING{ 0, 0, 0, 0 };

		// Toggle / bool
		bool Toggle_RainbowBool = false;    //Want rainbow bool change false to true;
		Color m_Toggle_On{ 0, 255, 0, 255 };		//toggle bool function to whatever color on and off
		Color m_Toggle_Off{ 255, 0, 0, 255 };

		// Footer
		float m_FooterHeight = 0.030f;
		float m_FooterSpriteSize = 0.030f;
		Color m_FooterBackgroundColor{ 17, 17, 17, 255 };
		Color m_FooterSpriteColor{ 181,181,181, 255 };		//change footer colors here which is the bottom bar

		// Description
		float m_DescriptionHeightPadding = 0.01f;
		float m_DescriptionHeight = 0.033f;
		float m_DescriptionTextSize = 0.23f;
		Font m_DescriptionFont = Font::ChaletLondon;		//dont touch this shit no point
		Color m_DescriptionBackgroundColor{ 0, 0, 0, 120 };
		Color m_DescriptionTextColor{ 255, 255, 255, 255 };
		float m_DescriptionSpriteSize = 0.025f;
		float m_DescriptionPadding = 2.1f;
		Color m_DescriptionSpriteColor{ 255, 255, 255, 255 };
	private:
		bool m_OpenKeyPressed = false;
		bool m_BackKeyPressed = false;
		bool m_EnterKeyPressed = false;
		bool m_UpKeyPressed = false;
		bool m_DownKeyPressed = false;
		bool m_LeftKeyPressed = false;
		bool m_RightKeyPressed = false;
		void CheckForInput();
		void HandleInput();
		void ResetInput();

		float m_DrawBaseY{};
		void Rainbow_Title();
		void DrawHeader();
		void DrawSubmenuBar(AbstractSubmenu* sub);
		void Toggle_Rainbow();
		void DrawOption(AbstractOption* opt, bool selected, AbstractSubmenu& sub, bool editableVersion);
		void DrawFooter();
		void DrawDescription();

		void DrawRect(float x, float y, float width, float height, Color color);
		void DrawGlareSetup(float pc, float py, float x, float y);
		void DrawGlare_();
		void DrawSprite(const char* dict, const char* texture, float x, float y, float width, float height, Color color, float rotation);
		void DrawLeftText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		void DrawCenteredText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		void DrawRightText(const char* text, float x, float y, float size, Font font, Color color, bool outline, bool shadow);
		float GetTextHeight(Font font, float size);
		Vector2 GetSpriteScale(float size);

		bool IsMouseLocked();
		Rectangle GetMenuRect();
		Vector2 GetMousePos();

		std::vector<std::unique_ptr<AbstractSubmenu>> m_AllSubmenus;
		std::stack<AbstractSubmenu*, std::vector<AbstractSubmenu*>> m_SubmenuStack;
	};
}

namespace Mod_Hub_Base
{
	inline std::unique_ptr<UserInterface::UIManager> g_UiManager;
}
