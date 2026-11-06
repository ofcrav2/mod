// OFCRA Polish Olive m1a1 as placeable vehicles in Polish Armed Forces '20 (WDL), with PSZ crew.
class CfgPatches
{
	class ofcra_psz_units_m1a1
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {
			"OFCRA_PL_rhsusf_m1a1aimwd_usarmy",
			"OFCRA_PL_rhsusf_m1a1aim_tuski_wd",
			"OFCRA_PL_rhsusf_m1a1fep_wd",
			"OFCRA_PL_rhsusf_m1a1fep_od",
			"OFCRA_PL_rhsusf_m1a1hc_wd"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsusf_c_m1a1", "ofcra_psz_m1a1_olive", "psz_characters"};
	};
};

class CfgVehicles
{
	class rhsusf_m1a1aimwd_usarmy;
	class rhsusf_m1a1aim_tuski_wd;
	class rhsusf_m1a1fep_wd;
	class rhsusf_m1a1fep_od;
	class rhsusf_m1a1hc_wd;

	class OFCRA_PL_rhsusf_m1a1aimwd_usarmy: rhsusf_m1a1aimwd_usarmy
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
			"ofcra_psz\m1a1_olive\m1a1_olive_0.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_1.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_3.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1a1aim_tuski_wd: rhsusf_m1a1aim_tuski_wd
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
			"ofcra_psz\m1a1_olive\m1a1_olive_tusk_0.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_tusk_1.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_tusk_3.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_tusk_4.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_tusk_5.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1a1fep_wd: rhsusf_m1a1fep_wd
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
			"ofcra_psz\m1a1_olive\m1a1_olive_0.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_1.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_3.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_fep_4.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1a1fep_od: rhsusf_m1a1fep_od
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
			"ofcra_psz\m1a1_olive\m1a1_olive_0.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_1.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_3.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_fep_4.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1a1hc_wd: rhsusf_m1a1hc_wd
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
			"ofcra_psz\m1a1_olive\m1a1_olive_0.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_1.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_2.paa",
			"ofcra_psz\m1a1_olive\m1a1_olive_3.paa"
		};
	};
};
