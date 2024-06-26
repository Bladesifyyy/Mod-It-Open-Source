#pragma once
namespace Mod_Hub_Base
{

//__________.__              .___      
//\______   \  | _____     __| _/____  
// |    |  _/  | \__  \   / __ |/ __ \ 
// |    |   \  |__/ __ \_/ /_/ \  ___/ 
// |______  /____(____  /\____ |\____
//        \/          \/      \/     
// 
// ___  ___          _   _____ _   
//|  \/  |         | | |_   _| |  
//| .  . | ___   __| |   | | | |_ 
//| |\/| |/ _ \ / _` |   | | | __|
//| |  | | (_) | (_| |  _| |_| |_ 
//\_|  |_/\___/ \__,_|  \___/ \__|
// This Source Use A Outdated Verison Of Mod Hub Updated & Modified By Bladesify
//
// 
// Hello its blade this is Mod Its Offical Open Source Origanlly Created By "Atomix" if your just starting in coding this is a great menu..
// 
// 
// I tried To make it as not fucked as possible so work with me and enjoy learning :)
//
// 
// Ps goodluck trying to skid this is for learning purposes let someone see this and thell know your ass is skidding lol but anyways enjoy.
	//love from bladesify :)
	//----------------\
	// FUNCTIONS	   |
	//----------------/
									//this is your function.h this enables your function.cpp options using either voids bools or floats
	extern bool Godmode;
	extern bool Invisible;
	extern bool SuperJump;
	extern bool NeverWanted;
	extern bool NoRagdoll;
	extern bool FlashRun;
	extern bool SuperMan;
	extern bool NoClip;
	extern bool InfiniteAmmo;
	extern bool RapidFire;
	extern bool AirstrikeGun;
	extern bool MoneyGun;
	void TPtoCoords(Vector3 Coords);
	void waypoint();
	inline float handred{ 0.f };
	inline float handgreen{ 0.f };
	inline float handblue{ 0.f };
	extern bool VehicleGodmode;
	extern bool VehInvisible;
	extern bool HornBoost;
	extern bool CarColor;
	extern bool NoBike;
	extern bool DestroyPhone;
	extern bool HideHud;
	extern bool MoneyLoop;
	inline int custom_level = 125;
	void setInstantLevel(int level);
	extern bool MoneyDrop;
	extern bool MoneyDrop1;
	extern bool NinjaJump;
	extern bool Fire;
	extern bool SpectatePlayer;
	
	void Function_update_Loop();
	void ClonePlayer(Player selectedPed);


	//=================
	// PED FUNCTIONS
	//=================

	Ped ClonePed(Ped ped);
	Ped CreatePed(const char* PedName, Vector3 SpawnCoordinates, int ped_type, bool network_handle);

	//Animations
	void LoadAnim(const char* dict);
	void playAnimation(Ped ped, bool loop, const char* dict, const char* anim);

	//SKINS
	bool applyChosenSkin(std::string skinName);

	//CONTROL
	void RequestControlOfEnt(Entity entity);

	//FORCE
	void ApplyForceToEntity(Entity e, float x, float y, float z);

	//NEARBY PEDS
	std::set<Ped> getNearbyPeds();
	void update_nearby_peds(Ped playerPed, int count);

	//VEHICLE
	bool get_vehicle_keyboard_result(uint* outModel);

	//little one-line function called '$' to convert $TRING into a hash-key:
	Hash $(std::string str);

	//Converts Radians to Degrees
	float degToRad(float degs);

	//quick function to get-coords-of-entity:
	Vector3 coordsOf(Entity entity);

	//quick function to get distance between 2 points:
	float distanceBetween(Vector3 A, Vector3 B);

	//quick "get random int in range 0-x" function:
	int rndInt(int start, int end);

	//TELEPORTATION
	Vector3 get_blip_marker();
	void teleport_to_marker();
	void teleport_to_objective();
	void teleport_to_coords(Entity e, Vector3 coords);

	//KEYBOARD
	std::string show_keyboard(const char* title_id, const char* prepopulated_text);

	//VECTOR/FLOAT
	Vector3 rot_to_direction(Vector3* rot);
	Vector3 add(Vector3* vectorA, Vector3* vectorB);
	Vector3 multiply(Vector3* vector, float x);
	float get_distance(Vector3* pointA, Vector3* pointB);
	float get_vector_length(Vector3* vector);

	//NOTIFICATION													//noti functions you can make your on notifactions
	void notifyBottom(const char* fmt, ...);
	void notifyBottom(std::string str);
	void notifyMap(const char* fmt, ...);
	void notifyMap(std::string str);
	void notifyCenter(const char* fmt, ...);
	void notifyCenter(std::string str);
	void update_status_text();
	void notifyleft(const char* msg);
	void notify_Custom(const char* Head_txt, const char* fmt, ...);
	void notify_Original(const char* fmt, ...);
	void notify_Red(const char* fmt, ...);
	void notify_Green(const char* fmt, ...);

	// Header
	extern bool HeaderImage;
	const char* Add_Strings(const char* string1, const char* string2);
	std::string Documents_Patha();

	//DRAWING FUNCTIONS
	void draw_rect(float A_0, float A_1, float A_2, float A_3, int A_4, int A_5, int A_6, int A_7);
	void draw_menu_line(std::string caption, float lineWidth, float lineHeight, float lineTop, float lineLeft, float textLeft, bool active, bool title, bool rescaleText = true);
}											//love from bladesify :)