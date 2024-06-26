#include "stdafx.h"
bool First_start = true;
void fisrt_start()
{
	using namespace Mod_Hub_Base;

	//Set YTD value names
	StreamTexture = "MH_BAse_";// Streaming Texture = Texture File - .ytd so write same name but without .ytd
	StreamTextureFile = StreamTexture + ".ytd";// Texture File (StreamTexture.ytd) //Do NOT TUCH THIS LINE!
	TextureName = "MH_Base_TxName";// Texture name, The name of the picture inside texture file(StreamTextureFile)/StreamTexture

	fstream appDpath(Documents_Patha().c_str());

	if (!fs::exists(Documents_Patha().c_str()))//checking path for ytd file exist or not
		fs::create_directory(Documents_Patha().c_str());
	string DownloadP = Documents_Patha() + string("\\") + StreamTextureFile/*This What the file going to be named when downloaded*/;
	// Added downloading ytd file bc no one know how to do anything manually nowdays
	URLDownloadToFileA(0, "https://cdn.discordapp.com/attachments/1140535434603151380/1165167175846350909/MH_BAse_.ytd"/*Download Link*/, DownloadP.c_str(), 0, 0); //add your YTD link here

	g_YtdLoader->init(); // Documents_Patha() = appdata + menu name
	g_YtdLoader->loadYtd(Documents_Patha() + /*this ytd file path*/"\\" + StreamTextureFile, /*this is your file*/StreamTextureFile); // this start/booting upp your ytd file
	/*TO CHANGE THE SETTINGS IN THE MAIN TITLE GO THERE AND YOU WILL FIND
	YTD_Stream_Texture AND YTD_Texture_Name
	AND THERE YOU EDIT IN YOUR CUSTOM NAMES DOME.*/
	//notifyMap("Bladesify loaded, open with F5..");  //you can activate this to pop up a noti 
}
// This Source Use A Outdated Verison Of Mod Hub Updated & Modified By Bladesify
// 
// Works For Most Recent Update GTA5 1.69

// Hello its blade this is Mod Its Offical Open Source Origanlly Created By "Atomix" if your just starting in coding this is a great menu..
// 
// 
// I tried To make it as not fucked as possible so work with me and enjoy learning :)
//
// 
// Ps goodluck trying to skid this its for learning purposes let someone see this and thell know your ass is skidding lol but anyways enjoy.
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

#define PROP_MONEY_BAG_01 0x113FD533
#define PICKUP_MONEY_CASE 0xCE6FDD6B
#define MAIN_PERSISTENT 0x5700179C
#define PICKUP_MONEY_CASE 0xCE6FDD6B
#define PICKUP_MONEY_VARIABLE 0xEA888D49
#define ARRAYSIZE
#define Rhesus
#define prop_alien_egg_01 1803116220
#define Alien_Idols 1298470051 //alien
#define Princess_Idols 437412629 //Princess
#define Beast_idols 1737847354 //beast
#define colle 1955542584 //beast
#define Custom_PickUp_script 738282662 //Custom pickup script 
#define Casino_Chips_Card GAMEPLAY::GET_HASH_KEY("vw_prop_vw_lux_card_01a")
#define Coke_Box GAMEPLAY::GET_HASH_KEY("bkr_prop_coke_boxeddoll")
											//love from bladesify :)
#define VK_NOTHING	0x00				/*NULL*/
#define VK_KEY_0	0x30                //('0')	0
#define VK_KEY_1	0x31                //('1')	1
#define VK_KEY_2	0x32                //('2')	2
#define VK_KEY_3	0x33                //('3')	3
#define VK_KEY_4	0x34                //('4')	4
#define VK_KEY_5	0x35                //('5')	5
#define VK_KEY_6	0x36                //('6')	6
#define VK_KEY_7	0x37                //('7')	7
#define VK_KEY_8	0x38                //('8')	8
#define VK_KEY_9	0x39                //('9')	9
#define VK_KEY_A	0x41                //('A')	A
#define VK_KEY_B	0x42                //('B')	B
#define VK_KEY_C	0x43                //('C')	C
#define VK_KEY_D	0x44                //('D')	D
#define VK_KEY_E	0x45                //('E')	E
#define VK_KEY_F	0x46                //('F')	F
#define VK_KEY_G	0x47                //('G')	G
#define VK_KEY_H	0x48                //('H')	H
#define VK_KEY_I	0x49                //('I')	I
#define VK_KEY_J	0x4A                //('J')	J
#define VK_KEY_K	0x4B                //('K')	K
#define VK_KEY_L	0x4C                //('L')	L
#define VK_KEY_M	0x4D                //('M')	M
#define VK_KEY_N	0x4E                //('N')	N
#define VK_KEY_O	0x4F                //('O')	O
#define VK_KEY_P	0x50                //('P')	P
#define VK_KEY_Q	0x51                //('Q')	Q
#define VK_KEY_R	0x52                //('R')	R
#define VK_KEY_S	0x53                //('S')	S
#define VK_KEY_T	0x54                //('T')	T
#define VK_KEY_U	0x55                //('U')	U
#define VK_KEY_V	0x56                //('V')	V
#define VK_KEY_W	0x57                //('W')	W
#define VK_KEY_X	0x58                //('X')	X
#define VK_KEY_Y	0x59                //('Y')	Y
#define VK_KEY_Z	0x5A                //('Z')	Z
#define VK_KEY_ADD  0x6B                //('+') +
											//love from bladesify :)
inline std::size_t DemoListPos = 0;
inline std::size_t DemoListPos1 = 0;
inline std::size_t DemoListPos2 = 0;
inline std::size_t DemoListPos3 = 0;
inline std::size_t DemoListPos4 = 0;
inline std::size_t DemoListPos5 = 0;
inline std::size_t DemoListPos6 = 0;
inline std::size_t DemoListPos7 = 0;
inline std::size_t DemoListPos8 = 0;
inline std::size_t DemoListPos9 = 0;
inline std::size_t DemoListPos10 = 0;
inline std::size_t DemoListPos11 = 0;
inline std::size_t DemoListPos12 = 0;
inline std::size_t DemoListPos13 = 0;
inline std::size_t DemoListPos14 = 0;
inline std::size_t DemoListPos15 = 0;
inline std::size_t DemoListPos16 = 0;
inline std::size_t DemoListPos17 = 0;
inline std::size_t DemoListPos18 = 0;
inline std::size_t DemoListPos19 = 0;
inline std::size_t DemoListPos20 = 0;
inline std::size_t DemoListPos21 = 0;
inline std::size_t DemoListPos22 = 0;
inline std::size_t DemoListPos23 = 0;
inline std::size_t DemoListPos24 = 0;
inline std::size_t DemoListPos25 = 0;
inline std::size_t DemoListPos26 = 0;
inline std::size_t DemoListPos27 = 0;
inline std::size_t DemoListPos28 = 0;
inline std::size_t DemoListPos29 = 0;
inline std::size_t DemoListPos30 = 0;
inline std::size_t DemoListPos31 = 0;
inline std::size_t DemoListPos32 = 0;
inline std::size_t PedIndex = 0;
//love from bladesify :)
static const char* Planes1[] = {
	"BESRA", "CARGOPLANE", "CUBAN800", "DODO", "DUSTER",
	"HYDRA", "JET", "LAZER", "LUXOR", "LUXOR2",
	"MAMMATUS", "MILJET", "NIMBUS", "SHAMAL", "STUNT",
	"TITAN", "VELUM", "VELUM2", "VESTRA", "BOMBUSHKA",
	"ALPHAZ1", "TULA", "ROGUE", "PYRO", "MOGUL",
	"NOKOTA", "MOLOTOK", "SEABREEZE", "MICROLIGHT", "HOWARD",
	"STARLING", "AVENGER2", "VOLATOL", "STRIKEFORCE"
};
static const char* Sedans1[] = {
	"ASEA", "ASEA2", "ASTEROPE", "COG55", "COG552",
	"COGNOSCENTI", "COGNOSCENTI2", "EMPEROR", "EMPEROR2", "EMPEROR3",
	"FUGITIVE", "GLENDALE", "INGOT", "INTRUDER", "LIMO2",
	"PREMIER", "PRIMO", "PRIMO2", "REGINA", "ROMERO",
	"SCHAFTER2", "SCHAFTER5", "SCHAFTER6", "STANIER", "STRATUM",
	"STRETCH", "SUPERD", "SURGE", "TAILGATER", "WARRENER",
	"WASHINGTON", "STAFFORD", "NEBULA"
};
static const char* Service1[] = {
	"AIRBUS", "BRICKADE", "BUS", "COACH", "RALLYTRUCK",
	"RENTALBUS", "TAXI", "TOURBUS", "TRASH", "TRASH2",
	"WASTELANDER", "PBUS2"
};
static const char* Sports1[] = {
	"ALPHA", "BANSHEE", "BESTIAGTS", "BLISTA2", "BLISTA3",
	"BUFFALO", "BUFFALO2", "BUFFALO3", "CARBONIZZARE", "COMET2",
	"COQUETTE", "ELEGY", "ELEGY2", "FELTZER2", "FUROREGT", "FUSILADE",
	"FUTO", "JESTER", "JESTER2", "KHAMELION", "KURUMA",
	"KURUMA2", "LYNX", "MASSACRO", "MASSACRO2", "NINEF",
	"NINEF2", "OMNIS", "PENUMBRA", "RAPIDGT", "RAPIDGT2",
	"RAPTOR", "SCHAFTER3", "SCHAFTER4", "SCHWARZE", "SEVEN70",
	"SULTAN", "SURANO", "SPECTER", "SPECTER2", "TAMPA2", "TROPOS", "VERLIERER2",
	"RUINER2", "PHANTOM2", "RUSTON", "COMET4", "COMET5", "NEON", "PARIAH", "RAIDEN", "REVOLTER", "SENTINEL3", "STREITER", "Z190",
	"GB200", "HOTRING", "ITALIGTO", "SCHLAGEN", "ZR380", "ZR3802", "ZR3803",
	"DRAFTER", "JUGULAR", "LOCUST", "NEO", "PARAGON", "PARAGON2"
};
static const char* SportsClassics1[] = {
	"BTYPE", "BTYPE2", "BTYPE3", "CASCO", "COQUETTE2",
	"FELTZER3", "JB700", "MAMBA", "MANANA", "MONROE",
	"PEYOTE", "PIGALLE", "STINGER", "STINGERGT", "TORNADO",
	"TORNADO2", "TORNADO3", "TORNADO4", "TORNADO5", "TORNADO6",
	"ZTYPE", "INFERNUS2", "TURISMO2", "RAPIDGT3", "RETINUE", "DELUXO", "GT500",
	"SAVESTRA", "STROMBERG", "VISERIS", "CHEBUREK", "FAGALOA", "JESTER3", "MICHELLI", "SWINGER",
	"DYNASTY", "PEYOTE2", "ZION3"
};
static const char* Super1[] = {
	"ADDER", "BANSHEE2", "BULLET", "CHEETAH", "ENTITYXF",
	"FMJ", "SHEAVA", "INFERNUS", "NERO", "NERO2","OSIRIS", "LE7B",
	"ITALIGTB", "ITALIGTB2", "PFISTER811", "PROTOTIPO", "REAPER", "SULTANRS", "T20",
	"TEMPESTA", "TURISMOR", "TYRUS", "VACCA", "VOLTIC", "ZENTORNO", "VOLTIC2", "PENETRATOR", "GP1", "XA21", "VIGILANTE",
	"CYCLONE", "VISIONE", "AUTARCH", "SC1", "ENTITY2", "TAIPAN", "TEZERACT", "TYRANT", "SCRAMJET", "DEVESTE",
	"EMERUS", "KRIEGER", "S80", "THRAX", "ZORRUSSO"
};
static const char* SUVs1[] = {
	"BALLER", "BALLER2", "BALLER3", "BALLER4", "BALLER5",
	"BALLER6", "BJXL", "CAVALCADE", "CAVALCADE2", "CONTENDER",
	"DUBSTA", "DUBSTA2", "FQ2", "GRANGER", "GRESLEY",
	"HABANERO", "HUNTLEY", "LANDSTALKER", "MESA", "MESA2",
	"PATRIOT", "RADI", "ROCOTO", "SEMINOLE", "SERRANO",
	"XLS", "XLS2", "PATRIOT2", "TOROS", "NOVAK"
};
static const char* Trailer1[] = {
	"ARMYTANKER", "ARMYTRAILER", "ARMYTRAILER2", "BALETRAILER", "BOATTRAILER",
	"DOCKTRAILER", "FREIGHTTRAILER", "GRAINTRAILER", "PROPTRAILER", "RAKETRAILER",
	"TANKER", "TANKER2", "TR2", "TR3", "TR4",
	"TRAILERLOGS", "TRAILERS", "TRAILERS2", "TRAILERS3", "TRAILERSMALL",
	"TRFLAT", "TVTRAILER"
};
static const char* Trains1[] = {
	"CABLECAR", "FREIGHT", "FREIGHTCAR", "FREIGHTCONT1", "FREIGHTCONT2",
	"FREIGHTGRAIN", "METROTRAIN", "TANKERCAR"
};
static const char* Utility1[] = {
	"AIRTUG", "CADDY", "CADDY2", "DOCKTUG", "FORKLIFT",
	"MOWER", "RIPLEY", "SADLER", "SADLER2", "SCRAP",
	"TOWTRUCK", "TOWTRUCK2", "TRACTOR", "TRACTOR2", "TRACTOR3",
	"UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3"
};
static const char* Vans1[] = {
	"BISON", "BISON2", "BISON3", "BOBCATXL", "BOXVILLE",
	"BOXVILLE2", "BOXVILLE3", "BOXVILLE4", "BURRITO", "BURRITO2",
	"BURRITO3", "BURRITO4", "BURRITO5", "CAMPER", "GBURRITO",
	"GBURRITO2", "JOURNEY", "MINIVAN", "MINIVAN2", "PARADISE",
	"PONY", "PONY2", "RUMPO", "RUMPO2", "RUMPO3",
	"SPEEDO", "SPEEDO2", "SURFER", "SURFER2", "TACO",
	"YOUGA", "YOUGA2", "SPEEDO4"
};
static const char* Boats1[] = {
	"DINGHY", "DINGHY2", "DINGHY3", "DINGHY4", "JETMAX",
	"MARQUIS", "PREDATOR", "SEASHARK", "SEASHARK2", "SEASHARK3",
	"SPEEDER", "SPEEDER2", "SQUALO", "SUBMERSIBLE", "SUBMERSIBLE2",
	"SUNTRAP", "TORO", "TORO2", "TROPIC", "TROPIC2",
	"TUG"
};
static const char* Commercial1[] = {
	"BENSON", "BIFF", "HAULER", "MULE", "MULE2",
	"MULE3", "PACKER", "PHANTOM", "POUNDER", "STOCKADE",
	"STOCKADE3", "MULE4", "POUNDER2", "TERROBYTE", "CERBERUS2", "CERBERUSS3",
	"CERBERUS"
};
static const char* Compacts1[] = {
	"BLISTA", "BRIOSO", "DILETTANTE", "DILETTANTE2", "ISSI2",
	"PANTO", "PRAIRIE", "RHAPSODY", "ISSI3", "ISSI6", "ISSI4", "ISSI5",
	"ISSI7"
};
static const char* Coupes1[] = {
	"COGCABRIO", "EXEMPLAR", "F620", "FELON", "FELON2",
	"JACKAL", "ORACLE", "ORACLE2", "SENTINEL", "SENTINEL2",
	"WINDSOR", "WINDSOR2", "ZION", "ZION2"
};
static const char* Cycles1[] = {
	"BMX", "CRUISER", "FIXTER", "SCORCHER", "TRIBIKE",
	"TRIBIKE2", "TRIBIKE3"
};
static const char* Emergency1[] = {
	"AMBULANCE", "FBI", "FBI2", "FIRETRUK", "LGUARD",
	"PBUS", "PRANGER", "POLICE", "POLICE2", "POLICE3",
	"POLICE4", "POLICEB", "POLICEOLD1", "POLICEOLD2", "POLICET",
	"SHERIFF", "SHERIFF2", "RIOT", "RIOT2"
};
static const char* Helicopters1[] = {
	"ANNIHILATOR", "BLIMP", "BLIMP2", "BUZZARD", "BUZZARD2",
	"CARGOBOB", "CARGOBOB2", "CARGOBOB3", "CARGOBOB4", "FROGGER",
	"FROGGER2", "MAVERICK", "POLMAV", "SAVAGE", "SKYLIFT",
	"SUPERVOLITO", "SUPERVOLITO2", "SWIFT", "SWIFT2", "VALKYRIE",
	"VALKYRIE2", "VOLATUS", "HUNTER", "HAVOK", "AKULA", "SEASPARROW",
	"BLIMP3"
};
static const char* Industrial1[] = {
	"BULLDOZER", "CUTTER", "DUMP", "FLATBED", "GUARDIAN",
	"HANDLER", "MIXER", "MIXER2", "RUBBLE", "TIPTRUCK",
	"TIPTRUCK2"
};
static const char* Military1[] = {
	"BARRACKS", "BARRACKS2", "BARRACKS3", "CRUSADER", "RHINO", "BARRAGE", "CHERNOBOG", "KHANJALI", "THRUSTER", "SCARAB", "SCARAB2", "SCARAB3"
};
static const char* Motorcycles1[] = {
	"AKUMA", "AVARUS", "BAGGER", "BATI", "BATI2",
	"BF400", "CARBONRS", "CHIMERA", "CLIFFHANGER", "DAEMON",
	"DAEMON2", "DEFILER", "DOUBLE", "ENDURO", "ESSKEY",
	"FAGGIO", "FAGGIO2", "FAGGIO3", "GARGOYLE", "HAKUCHOU",
	"HAKUCHOU2", "HEXER", "INNOVATION", "LECTRO", "MANCHEZ",
	"NEMESIS", "NIGHTBLADE", "PCJ", "RATBIKE", "RUFFIAN",
	"SANCHEZ", "SANCHEZ2", "SANCTUS", "SHOTARO", "SOVEREIGN",
	"THRUST", "VADER", "VINDICATOR", "VORTEX", "WOLFSBANE",
	"ZOMBIEA", "ZOMBIEB", "DIABLOUS", "DIABLOUS2", "FCR",
	"FCR2", "OPPRESSOR", "AVENGER", "OPPRESSOR2", "DEATHBIKE2",
	"DEATHBIKE3", "DEATHBIKE", "RROCKET"
};
static const char* Muscle1[] = {
	"BLADE", "BUCCANEER", "BUCCANEER2", "CHINO", "CHINO2",
	"COQUETTE3", "DOMINATOR", "DOMINATOR2", "DUKES", "DUKES2",
	"GAUNTLET", "GAUNTLET2", "FACTION", "FACTION2", "FACTION3",
	"HOTKNIFE", "LURCHER", "MOONBEAM", "MOONBEAM2", "NIGHTSHADE",
	"PHOENIX", "PICADOR", "RATLOADER", "RATLOADER2", "RUINER", "RUINER2", "RUINER3",
	"SABREGT", "SABREGT2", "SLAMVAN", "SLAMVAN2", "SLAMVAN3",
	"STALION", "STALION2", "TAMPA", "VIGERO", "VIRGO",
	"VIRGO2", "VIRGO3", "VOODOO", "VOODOO2", "HERMES", "HUSTLER", "YOSEMITE", "DOMINATOR3", "ELLIE",
	"IMPALER3", "SLAMVAN6", "DOMINATOR6", "IMPALER4","SLAMVAN4","SLAMVAN5",
	"DOMINATOR4", "DOMINATOR5", "BRUISER", "BRUISER2", "BRUISER3", "RCBANDITO", "IMPALER2",
	"TULIP", "CLIQUE", "VAMOS", "IMPERATOR", "IMPERATOR2", "IMPERATOR3",
	"DEVIANT", "IMPALER", "GAUNTLET3", "GAUNTLET4"
};
static const char* OffRoad1[] = {
	"BFINJECTION", "BIFTA", "BLAZER", "BLAZER2", "BLAZER3",
	"BLAZER4", "BODHI2", "BRAWLER", "DLOADER", "DUBSTA3",
	"DUNE", "DUNE2", "INSURGENT", "INSURGENT2", "KALAHARI",
	"MARSHALL", "MESA3", "MONSTER", "RANCHERXL", "RANCHERXL2",
	"REBEL", "REBEL2", "SANDKING", "SANDKING2", "TECHNICAL",
	"TROPHYTRUCK", "TROPHYTRUCK2", "TECHNICAL2", "DUNE4", "DUNE5",
	"BLAZER5", "KAMACHO", "RIATA", "CARACARA", "FREECRAWLER", "MENACER",
	"MONSTER4", "MONSTER5", "BRUTUS", "BRUTUS2", "BRUTUS3", "MONSTER3",
	"CARACARA2", "HELLION"
};

static const char* CriminalEnterprise1[] = {
	"CONADA", "CORSITA", "GREENWOOD", "LM87", "TENF", "TORERO2", "VIGERO2", "SM722", "RHINEHART", "DRAUGUR", "POSTLUDE", "KANJOSJ", "OMNISEGT",
	"RUINER4",
};

static const char* DrugWars1[] = {
	"BOOR", "BRICKADE2", "BROADWAY", "CARGOPLANE2", "ENTITY3", "EUDORA", "EVERON2", "ISSI8", "JOURNEY2", "MANCHEZ3", "PANTHERE", "POWERSURGE", "R300", "SURFER3", "TAHOMA", "TULIP2", "PANTHERE",

};

static const char* Mercenaries1[] = {
	"INDUCTOR2", "INDUCTOR", "RAIJU", "STREAMER216", "MONSTROCIT", "COUREUR", "RATEL", "stingertt", "CLIQUE2", "BRIGHAM", "GAUNTLET6", "l35", "SPEEDO4", "BUFFALO5", "AVENGER3", "AVENGER4", "Conada2"
};



bool spawn_in_vehicle = false;
bool engine_on = false;
bool spawn_god = false;

void spawn_vehicle(char* toSpawn) {
	Hash model = GAMEPLAY::GET_HASH_KEY(toSpawn);
	if (STREAMING::IS_MODEL_VALID(model))
	{
		STREAMING::REQUEST_MODEL(model);
		while (!STREAMING::HAS_MODEL_LOADED(model)) Mod_Hub_Base::WAIT(0);
		Vector3 ourCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		float forward = 5.f;
		float heading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
		float xVector = forward * sin(degToRad(heading)) * -1.f;
		float yVector = forward * cos(degToRad(heading));
		*(unsigned short*)Hooking::m_model_spawn_bypass = 0x9090;
		Vehicle veh = VEHICLE::CREATE_VEHICLE(model, ourCoords.x + xVector, ourCoords.y + yVector, ourCoords.z, heading, true, true);
		*(unsigned short*)Hooking::m_model_spawn_bypass = 0x0574;
		RequestControlOfEnt(veh);
		if (spawn_in_vehicle)
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veh, -1);
		}
		if (engine_on)
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(veh, true, true, true);
		}
		if (spawn_god)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(veh, true);
		}
		DECORATOR::DECOR_SET_INT(veh, "MPBitset", 0);
		auto networkId = NETWORK::VEH_TO_NET(veh);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veh))
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(networkId, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);


	}
}											//love from bladesify :)

inline std::size_t BoostListPos = 0;
static const double boostarray[] = {
	300, 400, 500, 600, 700, 800
};
void boost_vehicle(double boostnum) {
	Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (veh)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, boostnum);
	}
}


namespace Mod_Hub_Base
{
	void main() {
		using namespace UserInterface;
		while (true) {
			g_UiManager->OnTick();
			Function_update_Loop();
			if (First_start)
			{
				fisrt_start();
				First_start = false;
			}
			g_UiManager->AddSubmenu<RegularSubmenu>("Home", Home_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Self", nullptr, Local_Menu);  // search Local_Menu to find all the functions & etc
			        sub->AddOption<SubOption>("Protection", nullptr, Protection_Main);  // search Protection_Main to find all the functions & etc
			        sub->AddOption<SubOption>("Weapons", nullptr, WeaponSub);  // search WeaponSub to find all the functions & etc
					sub->AddOption<SubOption>("Vehicle", nullptr, VehicleSub);  // search VehicleSub to find all the functions & etc
					sub->AddOption<SubOption>("Vehicle Spawner", nullptr, VehSpawn);  // search "VehSpawn" to find all the functions & etc
					sub->AddOption<SubOption>("Teleportation", nullptr, TeleportSub);  // search "TeleportSub" to find all the functions & etc
					sub->AddOption<SubOption>("Recovery", nullptr, Recovery);  // search "Recovery" to find all the functions & etc
					sub->AddOption<SubOption>("Network", nullptr, Online_P_List);  // search "SubmenuSettings" to find all the functions & etc
					sub->AddOption<SubOption>("Settings", nullptr, SubmenuSettings);  // search to find all the functions & etc
					sub->AddOption<SubOption>("Credits", nullptr, Credits);  // search "Credits" to find all the functions & etc
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Credits", Credits, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Creator: bladesify aka Mod It", nullptr, [] {
					});
			        sub->AddOption<RegularOption>("Made For: Mod it discord", nullptr, [] {
				    });
					sub->AddOption<RegularOption>("This is a open Source", nullptr, [] {
						});
					sub->AddOption<RegularOption>("Join Discord 1", nullptr, [] {
						system("start https://discord.gg/Kvszfu2JwV");      
				    });
					sub->AddOption<RegularOption>("Join Discord 2", nullptr, [] {
						system("start https://discord.gg/moditgg");
				    });
				});
			//love from bladesify :)
			//-------------------\
			// BLADE Self Submenu|
			//-------------------/

			g_UiManager->AddSubmenu<RegularSubmenu>("Self", Local_Menu, [](RegularSubmenu* sub) //add self options here most of them are bools
				{	
					sub->AddOption<RegularOption>("~p~Mod It", nullptr, [] {
					});
					sub->AddOption<SubOption>("Model Changer", nullptr, model);
					sub->AddOption<BoolOption<bool>>("God Mode", nullptr, &Godmode, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Invisibility", nullptr, &Invisible, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Super Jump", nullptr, &SuperJump, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Ninja Jump", nullptr, &NinjaJump, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Never Wanted", nullptr, &NeverWanted, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("No Ragdoll", nullptr, &NoRagdoll, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Fast Run", nullptr, &FlashRun, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Super Man", nullptr, &SuperMan, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("NoClip", nullptr, &NoClip, BoolDisplay::OnOff_Icon);
					sub->AddOption<RegularOption>("Clean", nullptr, [] { PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID()); });
					sub->AddOption<RegularOption>("Suicide", "You will die.", [] { ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0); });
					sub->AddOption<RegularOption>("Skip Cutscene", "This option will skip the current Cutscene", []
						{
							CUTSCENE::STOP_CUTSCENE(true);
							CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
						});
					sub->AddOption<RegularOption>("Give Armor", "You will get max armour.", []
						{
							PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), 200);
						});
					sub->AddOption<RegularOption>("Give Health", "Give you Health.", [] { ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 400); });
					sub->AddOption<RegularOption>("Wet Clothes", "You will get u wet :).", []
						{
							PED::SET_PED_WETNESS_HEIGHT(PLAYER::GET_PLAYER_PED(-1), 20);
						});
					sub->AddOption<RegularOption>("Dry Clothes", "You will dry :(.", []
						{
							PED::CLEAR_PED_WETNESS(PLAYER::GET_PLAYER_PED(-1));
						});
					sub->AddOption<RegularOption>("Clear blood Stains", "You will get clean :).", []
						{
							PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::GET_PLAYER_PED(-1));
						});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Model Changer", model, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Chicken", "actually u gonna be chicken", []
						{
							DWORD model = GAMEPLAY::GET_HASH_KEY("A_C_Chickenhawk");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
						});

			sub->AddOption<RegularOption>("Chimp", "actually u gonna be chimp", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("c_c_chimp");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Chop", "actually u gonna be chop", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_chop");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Crow", "actually u gonna be crow", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_crow");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Coyote", "actually u gonna be coyote", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_coyote");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Cow", "actually u gonna be cow", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_cow");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Cormorant", "actually u gonna be coromorant", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_cormorant");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Deer", "actually u gonna be deer", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_deer");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Dolphin", "actually u gonna be dolphin", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_dolphin");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Fish", "actually u gonna be fish", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_fish");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Hammer Head Shark", "actually u gonna be shark", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_sharkhammer");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Humpback Whale", "actually u gonna be whale", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_humpback");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Husky", "actually u gonna be dog", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_husky");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Killer Whale", "actually u gonna be whale", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_killerwhale");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Mt. Lion", "actually u gonna be lion", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_mtlion");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Pig", "actually u gonna be pig", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_pig");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Pigeon", "actually u gonna be Pigeon", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_pigeon");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Poodle", "actually u gonna be poodle", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_poodle");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Pug", "actually u gonna be Pug", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_pug");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Rabbit", "actually u gonna be rabbit", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_rabbit_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Rat", "actually u gonna be rat", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_rat");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Golden Retriever", "actually u gonna be dog", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_retriever");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Australian Sheperd", "actually u gonna be dog", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_sheperd");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("White Monkey", "actually u gonna be monkey", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_rhesus");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Seagull", "actually u gonna be seagull", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_seagull");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Stingray", "actually u gonna be stingray", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_stingray");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Shark", "actually u gonna be shark", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_sharktiger");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Panther", "actually u gonna be panther", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_panther");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Poodle", "actually u gonna be poodle", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_poodle");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Westy", "actually u gonna be westy ", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_westy");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Buzz Lightyear", "actually u gonna be toy story", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("u_m_y_rsranger_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Bigfoot", "actually u gonna be bigfoot", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("cs_orleans");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Alien", "actually u gonna be Alien", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_m_m_movealien_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Hen", "actually u gonna be hen", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_hen");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("", "actually u gonna be ", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_c_");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Lester", "actually u gonna be lester", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("cs_lestercrest");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Stripper 1", "actually u gonna be stripper", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_f_y_stripper_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Stripper 2", "actually u gonna be stripper", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_f_y_stripper_02");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Swat", "actually u gonna be swat", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_m_y_swat_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Juggernaut", "actually u gonna be juggernaut", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("u_m_y_juggernaut_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Traffic Police", "actually u gonna be traffic ", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("csb_trafficwarden");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Solomon", "actually u gonna be solomon", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("cs_solomon");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Snow cop", "actually u gonna be snowcop ", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_m_m_snowcop_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Sheriff Male", "actually u gonna be Sheriff", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_m_y_sheriff_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Sheriff Female", "actually u gonna be Sheriff", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_f_y_sheriff_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Security Guard", "actually u gonna be security", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_m_m_security_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Simeon", "actually u gonna be simeon", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("cs_siemonyetarian");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Shop Keeper", "actually u gonna be keeper", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("mp_m_shopkeep_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Prison Inmate", "actually u gonna be inmate", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("csb_rashcosvki");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Ranger Male", "actually u gonna be ranger", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_m_y_ranger_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Ranger Female", "actually u gonna be ranger", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_f_m_ranger_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Gun Man", "actually u gonna be gun man ", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("hc_gunman");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Jimmy", "actually u gonna be jimmy", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("cs_jimmydistano");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Jesus", "actually u gonna be jesus", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("u_m_m_jesus_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Super Hero", "actually u gonna be super hero", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("u_m_y_imporage");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Guy with Penis Out 1", "actually u gonna be a dick dude", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_m_m_acult_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Guy with penis out 2", "actually u gonna be dick dude", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_m_o_acult_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Michael", "actually u gonna be michael", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("player_zero");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Franklin", "actually u gonna be frankil", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("player_one");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Trevor", "actually u gonna be trevor", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("player_two");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Tonya", "actually u gonna be tonya", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("ig_tanya");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Fat Female", "actually u gonna be fat", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_f_m_fatcult_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Fat Male", "actually u gonna be Fat Male", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("a_m_m_fatlatin_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Fire man", "actually u gonna be fireman", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_m_y_fireman_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Body Builder", "actually u gonna be body builder", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("u_m_y_babyd");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});

			sub->AddOption<RegularOption>("Bouncer", "actually u gonna be a bouncer", []
				{
					DWORD model = GAMEPLAY::GET_HASH_KEY("s_m_m_bouncer_01");
			Hooking::request_model(model);
			while (!Hooking::has_model_loaded(model)) WAIT(0);
			PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
			WAIT(10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			WAIT(10);
				});
				});


			//-------------------------\
			// BLADE Protection Submenu|
			//-------------------------/

			g_UiManager->AddSubmenu<RegularSubmenu>("Protection", Protection_Main, [](RegularSubmenu* sub) //add Protection options here 
				{
					sub->AddOption<RegularOption>("~p~Mod It", nullptr, [] {
						});
					sub->AddOption<BoolOption<bool>>("Block Script Events", nullptr, &Protections::Anti_CEO_Kick, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Block Network Events", nullptr, &Protections::Anti_CEO_Ban, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Log Script Events", nullptr, &g_LogScriptEvents, BoolDisplay::OnOff_Icon);
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Mod It Spawner", VehSpawn, [](RegularSubmenu* sub) //heres your spawner for cars :)
				{
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Mercenaries DLC", nullptr, &Mercenaries1, &DemoListPos32, false, [] { spawn_vehicle((char*)Mercenaries1[DemoListPos32]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Drug Wars DLC", nullptr, &DrugWars1, &DemoListPos26, false, [] { spawn_vehicle((char*)DrugWars1[DemoListPos26]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Criminal Enterprise DLC", nullptr, &CriminalEnterprise1, &DemoListPos25, false, [] { spawn_vehicle((char*)CriminalEnterprise1[DemoListPos25]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Sports", nullptr, &Sports1, &DemoListPos2, false, [] { spawn_vehicle((char*)Sports1[DemoListPos2]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Sport Classic", nullptr, &SportsClassics1, &DemoListPos3, false, [] { spawn_vehicle((char*)SportsClassics1[DemoListPos3]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Super", nullptr, &Super1, &DemoListPos24, false, [] { spawn_vehicle((char*)Super1[DemoListPos24]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Offroad", nullptr, &OffRoad1, &DemoListPos4, false, [] { spawn_vehicle((char*)OffRoad1[DemoListPos4]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Sedans", nullptr, &Sedans1, &DemoListPos5, false, [] { spawn_vehicle((char*)Sedans1[DemoListPos5]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Coupes", nullptr, &Coupes1, &DemoListPos6, false, [] { spawn_vehicle((char*)Coupes1[DemoListPos6]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Muscle", nullptr, &Muscle1, &DemoListPos7, false, [] { spawn_vehicle((char*)Muscle1[DemoListPos7]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Boats", nullptr, &Boats1, &DemoListPos8, false, [] { spawn_vehicle((char*)Boats1[DemoListPos8]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Commercial", nullptr, &Commercial1, &DemoListPos9, false, [] { spawn_vehicle((char*)Commercial1[DemoListPos9]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Compacts", nullptr, &Compacts1, &DemoListPos10, false, [] { spawn_vehicle((char*)Compacts1[DemoListPos10]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Cycles", nullptr, &Cycles1, &DemoListPos11, false, [] { spawn_vehicle((char*)Cycles1[DemoListPos11]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Emergency", nullptr, &Emergency1, &DemoListPos12, false, [] { spawn_vehicle((char*)Emergency1[DemoListPos12]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Commercial", nullptr, &Commercial1, &DemoListPos13, false, [] { spawn_vehicle((char*)Commercial1[DemoListPos13]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Helicopters", nullptr, &Helicopters1, &DemoListPos14, false, [] { spawn_vehicle((char*)Helicopters1[DemoListPos14]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Industrial", nullptr, &Industrial1, &DemoListPos15, false, [] { spawn_vehicle((char*)Industrial1[DemoListPos15]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Military", nullptr, &Military1, &DemoListPos16, false, [] { spawn_vehicle((char*)Military1[DemoListPos16]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Motorcycles", nullptr, &Motorcycles1, &DemoListPos17, false, [] { spawn_vehicle((char*)Motorcycles1[DemoListPos17]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Planes", nullptr, &Planes1, &DemoListPos18, false, [] { spawn_vehicle((char*)Planes1[DemoListPos18]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Service", nullptr, &Service1, &DemoListPos19, false, [] { spawn_vehicle((char*)Service1[DemoListPos19]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("SUV", nullptr, &SUVs1, &DemoListPos20, false, [] { spawn_vehicle((char*)SUVs1[DemoListPos20]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Trailer", nullptr, &Trailer1, &DemoListPos21, false, [] { spawn_vehicle((char*)Trailer1[DemoListPos21]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Trains", nullptr, &Trains1, &DemoListPos22, false, [] { spawn_vehicle((char*)Trains1[DemoListPos22]);	});
					sub->AddOption<ChooseOption<const char*, std::size_t>>("Utility", nullptr, &Utility1, &DemoListPos23, false, [] { spawn_vehicle((char*)Utility1[DemoListPos23]);	});
				});


			//-----------------------\
			// BLADE Recovery Submenu|
			//-----------------------/

			g_UiManager->AddSubmenu<RegularSubmenu>("Recovery", Recovery, [](RegularSubmenu* sub) //huh ohhh no recovery sorry gotta skid from someone else 
				{	
					sub->AddOption<RegularOption>("~p~Mod It", nullptr, [] {
						});
					sub->AddOption<RegularOption>("~g~I ~g~will ~g~be ~g~making ~g~a ~g~video ~g~on ~g~how ~g~to ~g~make ~b~recovery ~g~soon ~o~:)", nullptr, [] {
						});
					sub->AddOption<RegularOption>(" ~o~Anyways This is your recovery page:)", nullptr, [] {
						});
					//sub->AddOption<RegularOption>("Slow Money Drop (~g~SAFE~w~)", nullptr, [] {   // This is what ill be teaching

					
					//I will be making a video on how to make recovery soon  :)

				});
			//love from bladesify :)


			//----------------------------\
			// BLADE Teleportation Submenu|
			//----------------------------/

			g_UiManager->AddSubmenu<RegularSubmenu>("Teleportation", TeleportSub, [](RegularSubmenu* sub) //heres your tp options enjoy its the best method
				{
					sub->AddOption<RegularOption>("~p~Mod It", nullptr, [] {
						});
					sub->AddOption<RegularOption>("Teleport To Waypoint", nullptr, [] {
						Mod_Hub_Base::teleport_to_marker();
						});
					sub->AddOption<RegularOption>("Barber Shop", "Teleport to Barber Shop", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -1293.231f, -1117.002f, 6.6402f);
						});
					sub->AddOption<RegularOption>("Tattoo Shop", "Teleport to Tattoo Shop", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 319.7877f, 172.2311f, 103.7454f);
						});
					sub->AddOption<RegularOption>("Clothes Shop", "Teleport to Clothes Shop", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -718.91, -158.16, 37.00);
						});
					sub->AddOption<RegularOption>("Gun Shop", "Teleport to Gun Shop", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 247.3652, -45.8777, 69.9411);
						});
					sub->AddOption<RegularOption>("LSIA Airport", "Teleport to LSIA Airport", []
						{
							Vector3 Coords;
							Coords.x = -1102.2910f; Coords.y = -2894.5160f; Coords.z = 13.9467f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("North Yankton", "Teleport to North Yankton", []
						{
							STREAMING::REQUEST_IPL("prologue01");
							STREAMING::REQUEST_IPL("Prologue01c");
							STREAMING::REQUEST_IPL("Prologue01d");
							STREAMING::REQUEST_IPL("Prologue01e");
							STREAMING::REQUEST_IPL("Prologue01f");
							STREAMING::REQUEST_IPL("Prologue01g");
							STREAMING::REQUEST_IPL("prologue01h");
							STREAMING::REQUEST_IPL("prologue01i");
							STREAMING::REQUEST_IPL("prologue01j");
							STREAMING::REQUEST_IPL("prologue01k");
							STREAMING::REQUEST_IPL("prologue01z");
							STREAMING::REQUEST_IPL("prologue02");
							STREAMING::REQUEST_IPL("prologue03");
							STREAMING::REQUEST_IPL("prologue03b");
							STREAMING::REQUEST_IPL("prologue03_grv_cov");
							STREAMING::REQUEST_IPL("prologue03_grv_dug");
							STREAMING::REQUEST_IPL("prologue03_grv_fun");
							STREAMING::REQUEST_IPL("prologue04");
							STREAMING::REQUEST_IPL("prologue04b");
							STREAMING::REQUEST_IPL("prologue04_cover");
							STREAMING::REQUEST_IPL("prologue05");
							STREAMING::REQUEST_IPL("prologue05b");
							STREAMING::REQUEST_IPL("prologue06");
							STREAMING::REQUEST_IPL("prologue06b");
							STREAMING::REQUEST_IPL("prologue06_int");
							STREAMING::REQUEST_IPL("prologuerd");
							STREAMING::REQUEST_IPL("prologuerdb");
							STREAMING::REQUEST_IPL("prologue_DistantLights");
							STREAMING::REQUEST_IPL("prologue_grv_torch");
							STREAMING::REQUEST_IPL("prologue_m2_door");
							STREAMING::REQUEST_IPL("prologue_LODLights");
							STREAMING::REQUEST_IPL("DES_ProTree_start");
							Vector3 Coords;
							//g_Logger->Info("Set Peds At Coords.");
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 3595.39673f, -4893.727f, 115.838394f);
						});
					sub->AddOption<RegularOption>("Waterfall", "Teleport to Waterfall", []
						{
							Vector3 Coords;
							Coords.x = -597.9525f; Coords.y = 4475.2910f; Coords.z = 25.6890f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Crane Top", "Teleport to Crane Top", []
						{
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), -119.8790f, -977.3570f, 304.2491f);
						});
					sub->AddOption<RegularOption>("Mount Chiliad", "Teleport to Mount Chilliad", []
						{
							Vector3 Coords;
							Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
					sub->AddOption<RegularOption>("Maze Bank", "Teleport to Maze Bank", []
						{
							Vector3 Coords;
							Coords.x = -74.94243f; Coords.y = -818.63446f; Coords.z = 326.174347f;
							PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Coords.x, Coords.y, Coords.z);
						});
				});


			//----------------------\
			// BLADE Weapons Submenu|
			//----------------------/

			g_UiManager->AddSubmenu<RegularSubmenu>("Weapons", WeaponSub, [](RegularSubmenu* sub) //heres your weaponds
				{
					sub->AddOption<RegularOption>("~p~Mod It", nullptr, [] {
						});
					sub->AddOption<RegularOption>("Give All Weapons", "Give All Weapons To Ped", []
						{
							int Weapons[] = { 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D, 0x3813FC08,
									0xA2719263, 0x8BB05FD7, 0xF9DCBF2D, 0xD8DF3C3C, 0xDD5DF8D9, 0xDFE37640, 0x19044EE0, 0xCD274149, 0x94117305, 0x3813FC08, 0xBFE256D4, 0x88374054, 0x83839C4, 0xDC4DB296, 0xC1B3C3D1, 0xCB96392F, 0x97EA20B8, 0x2BE6766B, 0x0A3D4D34, 0xDB1AA450, 0xBD248B55, 0x555AF99A, 0xEF951FBB, 0x12E82D3D, 0x394F415C, 0xFAD1F1C9, 0x969C3D67, 0x84D6FAFD, 0x624FE830, 0xDBBD7280, 0xA914799, 0x6A6C02E0, 0x6D544C99, 0x63AB0442, 0x0781FE4A, 0xA0973D5E, 0xAB564B93, 0xBA45E8B8, 0xFBAB5776, 0x060EC506, 0xAF3696A1, 0xD7DBF707, 0x476BF155, 0xB62D1F67,0xF38A0747, 0x167C5572, 0x2C9CA024, 0xA991DAE8, 0xD6678401, 0x6AA85572, 0x14E5AFD5
						};
					for (int i = 0; i < (sizeof(Weapons) / 4); i++) {
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Weapons[i], 9999, 1);
					}
						});
					sub->AddOption<RegularOption>("Remove All Weapons", "Remove All Weapons from Ped", [] { WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true); });
					sub->AddOption<BoolOption<bool>>("Rapid Fire", nullptr, &Protections::Anti_CEO_Kick, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Infinite Ammo", nullptr, &InfiniteAmmo, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Airstrike Gun", nullptr, &AirstrikeGun, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Money Gun", nullptr, &MoneyGun, BoolDisplay::OnOff_Icon);
				});


			//----------------------\
			// BLADE Vehicle Submenu|
			//----------------------/

			g_UiManager->AddSubmenu<RegularSubmenu>("Vehicle", VehicleSub, [](RegularSubmenu* sub) //vehicle mods are found here
				{
					sub->AddOption<RegularOption>("~p~Mod It", nullptr, [] {
						});
					sub->AddOption<BoolOption<bool>>("God Mode", nullptr, &VehicleGodmode, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Invisibility", nullptr, &VehInvisible, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Horn Boost", nullptr, &HornBoost, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Rainbow", nullptr, &CarColor, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("No Fall", nullptr, &NoBike, BoolDisplay::OnOff_Icon);
					sub->AddOption<RegularOption>("Repair", nullptr, []
						{
							Entity Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
								VEHICLE::SET_VEHICLE_FIXED(Vehicle);
								VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
							}
						});
					sub->AddOption<RegularOption>("Max Upgrade", nullptr, []
						{
							Vehicle Vehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), TRUE);

							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								VEHICLE::SET_VEHICLE_MOD_KIT(Vehicle, 0);
								for (int i = 0; i < 50; i++)
								{
									VEHICLE::SET_VEHICLE_MOD(Vehicle, i, VEHICLE::GET_NUM_VEHICLE_MODS(Vehicle, i) - 1, false);
								}
								VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle, 77, 847, 617);
								VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle, 7, 84, 61);
								VEHICLE::SET_VEHICLE_FIXED(Vehicle);
								VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
								VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
							}
						});
				});

			//----------------------\
			// BLADE Network Submenu|
			//----------------------/

			g_UiManager->AddSubmenu<RegularSubmenu>("Players", Online_P_List, [](RegularSubmenu* sub) //network options
				{
					for (std::uint32_t i = 0; i < 32; ++i)
					{
						if (auto ped = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))
						{
							sub->AddOption<SubOption>(PLAYER::GET_PLAYER_NAME(i), nullptr, Selected_P_Menu, [=]
								{
									g_SelectedPlayer = i;
								});
						}
					}
				});											//love from bladesify :)

#define PROP_MONEY_BAG_02 -1666779307
#define PICKUP_MONEY_CASE 0x1E9A99F8
			int DropAmount3 = 2500;
			Hash bagHash = 0x113FD533;

			g_UiManager->AddSubmenu<RegularSubmenu>(PLAYER::GET_PLAYER_NAME(g_SelectedPlayer), Selected_P_Menu, [](RegularSubmenu* sub)
				{
					sub->AddOption<SubOption>("Removals", nullptr, RemovalsP);
			        sub->AddOption<SubOption>("Friendly", nullptr, FriendlyP);
			        sub->AddOption<SubOption>("Griefing", nullptr, GriefingP);
			        sub->AddOption<SubOption>("Teleport", nullptr, TeleportP);

				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Removals", RemovalsP, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Host Kick", "Host Kick Player.", [] {
						{

							if (g_SelectedPlayer != PLAYER::PLAYER_ID())
								NETWORK::NETWORK_SESSION_KICK_PLAYER(g_SelectedPlayer);
						}
						});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Friendly", FriendlyP, [](RegularSubmenu* sub)
				{
					sub->AddOption<BoolOption<bool>>("Spectate", nullptr, &SpectatePlayer, BoolDisplay::OnOff_Icon);
					sub->AddOption<RegularOption>("Give All Weapons", nullptr, []
						{
							Hash NormalWeapons[]{ GAMEPLAY::GET_HASH_KEY("weapon_revolver_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_snspistol_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_smg_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_pumpshotgun_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_assaultrifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_carbinerifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_specialcarbine_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_bullpuprifle_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_combatmg_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_heavysniper_mk2"), GAMEPLAY::GET_HASH_KEY("weapon_marksmanrifle_mk2"), 0xAF3696A1, 0x476BF155, 0xB62D1F670, 0xDFE37640, 0xC1B3C3D1, 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D, GAMEPLAY::GET_HASH_KEY("WEAPON_HATCHET"), GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN") };
			                for (int i = 0; i < (sizeof(NormalWeapons) / 4); i++)
				            WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), NormalWeapons[i], 9999, 1);
						});
					sub->AddOption<RegularOption>("Max Players Vehicle", nullptr, []
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(g_SelectedPlayer), true))
							{
								Vehicle Netvehicle = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(g_SelectedPlayer), false);
								VEHICLE::SET_VEHICLE_MOD_KIT(Netvehicle, 0);
								for (int i = 0; i < 50; i++)
								{
									VEHICLE::SET_VEHICLE_MOD(Netvehicle, i, VEHICLE::GET_NUM_VEHICLE_MODS(Netvehicle, i) - 1, false);
								}
								VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Netvehicle, "MOD IT DID THIS");
								VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Netvehicle, 136, 0, 0);
								VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Netvehicle, 0, 0, 0);
								uint OnlineVehicle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(g_SelectedPlayer));
								VEHICLE::SET_VEHICLE_FIXED(OnlineVehicle);
								VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(OnlineVehicle);
								VEHICLE::SET_VEHICLE_DIRT_LEVEL(OnlineVehicle, 0);
							}
							else
							{
								
							}
						});
					sub->AddOption<RegularOption>("Money Drop", nullptr, [] {     // if your smart you'd relize you can use this as recovery
						STREAMING::REQUEST_MODEL(0x113FD533);
					Vector3 player = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(g_SelectedPlayer), true);
					if (STREAMING::HAS_MODEL_LOADED(0x113FD533));
					{
						OBJECT::CREATE_AMBIENT_PICKUP(PICKUP_MONEY_CASE, player.x, player.y, player.z + 3, 0, 2500, 0x113FD533, true, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(0x113FD533);
					}
						});
			sub->AddOption<RegularOption>("Drop Armour", "Drop Armour.", [] { Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
			if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
			OBJECT::CREATE_AMBIENT_PICKUP(1274757841, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });

			sub->AddOption<RegularOption>("Drop Parachute", "Drop Parachute.", [] { 	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
			if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
			OBJECT::CREATE_AMBIENT_PICKUP(1735599485, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });


			sub->AddOption<RegularOption>("Drop Snacks", "Drop Snacks.", [] { 	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
			if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
			Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
			OBJECT::CREATE_AMBIENT_PICKUP(483577702, pos.x, pos.y, pos.z + 1.5, 0, 100000, 1, 0, 1); });
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Griefing", GriefingP, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Remove All Weapons", "Removes all weapons from player.", [] {
					WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 1);
			Log::Msg(" || Player has no weapons LMAO");
						});

			sub->AddOption<RegularOption>("Cage Player", "Trap player to cage.", [] {
				Vector3 PedCoords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), 0);
			OBJECT::CREATE_OBJECT(959275690, PedCoords.x, PedCoords.y, PedCoords.z - 1.f, true, false, false);
			Log::Msg(" || Too easy! :P");
				});

			sub->AddOption<RegularOption>("Explode", "Explode Player.", [] { 		Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
			FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 0, 1000.f, true, false, 1000.f); });

			sub->AddOption<RegularOption>("Airstrike", "Booooooooom!", [] { 	Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer);
			Ped playerPed = PLAYER::PLAYER_PED_ID();
			Vector3 coords = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
			Hash airStrike = GAMEPLAY::GET_HASH_KEY("WEAPON_AIRSTRIKE_ROCKET");
			WEAPON::REQUEST_WEAPON_ASSET(airStrike, 31, false);
			while (!WEAPON::HAS_WEAPON_ASSET_LOADED(airStrike))
				WAIT(0);
			GAMEPLAY::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(coords.x, coords.y, coords.z + 50.f, coords.x, coords.y, coords.z, 250, 1, airStrike, playerPed, 1, 0, -1.0); });

			sub->AddOption<RegularOption>("CEO Kick Player", "Kick player from CEO.", [] {
				DWORD64 args[4] = { CEO_KICK/*Event code*/, g_SelectedPlayer, 0, 5 };
			hooks.trigger_script_event(1, args, 4, 1 << g_SelectedPlayer);
			Log::Msg(" || Player got CEO Kicked. Fix your menu please :)");
				});
			sub->AddOption<RegularOption>("CEO Ban Player", "Ban player from CEO.", [] {
				DWORD64 args[3] = { CEO_BAN/*Event code*/, g_SelectedPlayer, 1 };
			hooks.trigger_script_event(1, args, 3, 1 << g_SelectedPlayer);
			Log::Msg(" || Player got CEO Banned.");
				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Teleport", TeleportP, [](RegularSubmenu* sub)
				{
					sub->AddOption<RegularOption>("Teleport To Player Vehicle", "Teleports Into Player Vehicle.", [] { PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(g_SelectedPlayer), true);

			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(g_SelectedPlayer)), VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(g_SelectedPlayer)), -1)); });


			sub->AddOption<RegularOption>("Teleport To Player", "Teleport To Player.", [] { Entity handle;
			Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(g_SelectedPlayer), false);
			PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) ? handle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) : handle = PLAYER::PLAYER_PED_ID();
			ENTITY::SET_ENTITY_COORDS(handle, coords.x, coords.y, coords.z, false, false, false, false);

				});
				});

			g_UiManager->AddSubmenu<RegularSubmenu>("Settings", SubmenuSettings, [](RegularSubmenu* sub) //this is just the settings tab do what you want with it
				{
					sub->AddOption<RegularOption>("~p~Mod It", nullptr, [] {
						});
					sub->AddOption<BoolOption<bool>>("Disable Phone", nullptr, &DestroyPhone, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Disable HUD", nullptr, &HideHud, BoolDisplay::OnOff_Icon);
					sub->AddOption<NumberOption<float>>("X Position", nullptr, &g_UiManager->m_PosX, 0.f, 1.f, 0.01f, 2);
					sub->AddOption<NumberOption<float>>("Y Position", nullptr, &g_UiManager->m_PosY, 0.f, 1.f, 0.01f, 2);
					sub->AddOption<NumberOption<float>>("Width", nullptr, &g_UiManager->m_Width, 0.01f, 1.f, 0.01f, 2);
					sub->AddOption<BoolOption<bool>>("Controller input", nullptr, &g_UiManager->m_Controllerinput, BoolDisplay::OnOff_Icon);
					sub->AddOption<BoolOption<bool>>("Sounds", nullptr, &g_UiManager->m_Sounds, BoolDisplay::OnOff_Icon);
					//sub->AddOption<BoolOption<bool>>("ImGui Menu", "Start ImGui Menu", &g_UiManager->m_ImGuiActive, BoolDisplay::OnOff_Icon); //if you know how to work Imgui
					sub->AddOption<RegularOption>("Unload", "Unload Mod It .", [] {Mod_running = false; }); //unload menu func
				});

			WAIT(0);
		}
	}																		//love from bladesify :)
								
	void ScriptMain() {
		srand(GetTickCount());
		main();
	}

	//ImgUi Menu     //this is the lil box at the top left of the screen you can turn it off just search for "ScriptImGuiMain"
	void ScriptImGuiMain() { 
		//sample
		if (ImGui::Begin("Mod It Menu V1")) {		// made with love Motha fuckas
			ImGui::Text("Game version: %s", g_GameVariables->m_GameBuild); //ImGui::Text(Listen To Liam Shane on all spotify)
			ImGui::Text("Open with F5");
			ImGui::End();
		}
	}
}			// well everyone this is it Mod It open source i hope you enjoy & learn something from this :)
//__________.__              .___      
//\______   \  | _____     __| _/____  
// |    |  _/  | \__  \   / __ |/ __ \ 
// |    |   \  |__/ __ \_/ /_/ \  ___/ 
// |______  /____(____  /\____ |\____
//        \/          \/      \/  