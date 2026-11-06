// OFCRA Polish Olive m109 as placeable vehicles in Polish Armed Forces '20 (WDL), with PSZ crew.
class CfgPatches
{
	class ofcra_psz_units_m109
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {
			"OFCRA_PL_OFCRA_m109tank"
		};
		weapons[] = {};
		requiredAddons[] = {"ofcra_rhs_usf_m109", "ofcra_psz_m109_olive", "psz_characters"};
	};
};

class CfgVehicles
{
	class OFCRA_m109tank;

	class OFCRA_PL_OFCRA_m109tank: OFCRA_m109tank
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_TankDriver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_TankDriver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m109_olive\m109_olive_0.paa",
			"ofcra_psz\m109_olive\m109_olive_1.paa",
			"ofcra_psz\m109_olive\m109_olive_2.paa",
			"\rhsusf\addons\rhsusf_m109\data\rhsusf_m109a6_mesh_wd_ca.paa",
			"ofcra_psz\m109_olive\m109_olive_4.paa"
		};
	};
};
