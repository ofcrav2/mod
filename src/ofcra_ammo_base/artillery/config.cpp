// Vanilla artillery (Sholef / Scorcher, and every mod gun that keeps the vanilla 155mm gun's magazines): OFCRA
// shells only. Loads after ACE, which adds its 155mm magazine well to the vanilla gun.
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
			"ace_missile_clgp"
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
