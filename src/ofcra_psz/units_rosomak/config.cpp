// OFCRA Polish Olive rosomak as placeable vehicles in Polish Armed Forces '20 (WDL), with PSZ crew.
class CfgPatches
{
	class ofcra_psz_units_rosomak
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {
			"OFCRA_PL_PSZ_PL_WDL20_Rosomak_1",
			"OFCRA_PL_PSZ_PL_WDL20_Rosomak_M1M"
		};
		weapons[] = {};
		requiredAddons[] = {"psz_wheeled_rosomak", "ofcra_psz_rosomak_olive", "psz_characters"};
	};
};

class CfgVehicles
{
	class PSZ_PL_WDL20_Rosomak_1;
	class PSZ_PL_WDL20_Rosomak_M1M;

	class OFCRA_PL_PSZ_PL_WDL20_Rosomak_1: PSZ_PL_WDL20_Rosomak_1
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		displayName = "Rosomak (Olive)";
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\rosomak_olive\rosomak_olive_0.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_1.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_2.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_3.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_4.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_5.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_6.paa",
			"\a3\armor_f\data\camonet_nato_green_co.paa"
		};
	};
	class OFCRA_PL_PSZ_PL_WDL20_Rosomak_M1M: PSZ_PL_WDL20_Rosomak_M1M
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		displayName = "Rosomak M1 (Olive)";
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\rosomak_olive\rosomak_olive_0.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_1.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_2.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_3.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_4.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_5.paa",
			"ofcra_psz\rosomak_olive\rosomak_olive_6.paa",
			"\a3\armor_f\data\camonet_nato_green_co.paa"
		};
	};
};
