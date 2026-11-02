// Vanilla artillery (Sholef / Scorcher, and every mod gun that keeps the vanilla 155mm gun's magazines): OFCRA
// shells only. Loads after ACE, which adds its 155mm magazine well to the vanilla gun.
// Also: every indirect-fire artillery vehicle OFCRA patches gets 2 ACE range tables, 2 MicroDAGRs and 2 map tools
// in its inventory (Extended_InitPost_EventHandlers at the bottom).
class CfgPatches
{
	class ofcra_ammo_base_artillery
	{
		author = "OFCRA Wombat";
		requiredVersion = 1.98;
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"ofcra_ammo_base",
			"A3_Weapons_F",
			"A3_Armor_F_Gamma_MBT_01",
			"A3_Armor_F_Gamma_MBT_02",
			"ace_missile_clgp",
			"cba_xeh"
		};
	};
};

class CfgWeapons
{
	class CannonCore;
	class mortar_155mm_AMOS: CannonCore
	{
		magazines[] = {"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"};
		magazineWell[] = {};
	};
};

class CfgVehicles
{
	class Tank;
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class MBT_01_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class MBT_02_base_F: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class MBT_01_arty_base_F: MBT_01_base_F            // M4 Scorcher
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE","OFCRA_SMOKE_MAGAZINE"};
			};
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F            // 2S9 Sochor
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"OFCRA_ARTILLERY_HE_MAG_32","OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE","OFCRA_SMOKE_MAGAZINE"};
			};
		};
	};
};

// Artillery kit in the vehicle inventory, for the crew / infantry: 2 range tables, 2 MicroDAGRs, 2 map tools.
// Added by script on spawn rather than through TransportItems: RHS and the vanilla side classes (B_ / O_ ...) and
// mod faction copies all define their own TransportItems, which would hide one set on the base class. CBA's
// init event handlers apply to every class that inherits the one listed (all factions' copies, OFCRA's M109 / PzH).
// Only indirect-fire guns: the direct-fire (AT) 2S1 / 2S3 are excluded. The D-30 / M119 are static guns with no
// inventory, so they're not listed.
#define OFCRA_ARTY_KIT_INIT init = "params ['_v']; if (!isServer) exitWith {}; { _v addItemCargoGlobal _x } forEach [['ACE_artilleryTable', 2], ['ACE_microDAGR', 2], ['ACE_MapTools', 2]];"
#define OFCRA_ARTY_KIT class ofcra_arty_kit { OFCRA_ARTY_KIT_INIT; }
#define OFCRA_ARTY_KIT_EXCEPT(EXCL) class ofcra_arty_kit { OFCRA_ARTY_KIT_INIT; exclude[] = {EXCL}; }
class Extended_InitPost_EventHandlers
{
	class MBT_01_arty_base_F { OFCRA_ARTY_KIT; };                        // M4 Scorcher, RHS / 3CB M109, OFCRA M109
	class MBT_02_arty_base_F { OFCRA_ARTY_KIT; };                        // 2S9 Sochor
	class rhs_2s1tank_base { OFCRA_ARTY_KIT_EXCEPT("rhs_2s1tank_at_base"); };     // every faction's 2S1, not the AT one
	class rhs_2s3tank_base { OFCRA_ARTY_KIT_EXCEPT("rhs_2s3tank_at_base"); };     // every faction's 2S3, not the AT one
	class BWA3_Panzerhaubitze2000_base { OFCRA_ARTY_KIT; };              // BWMod PzH 2000, OFCRA PzH 2000
};
