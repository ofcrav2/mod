// OFCRA Polish Olive m1240 as placeable vehicles in Polish Armed Forces '20 (WDL), with PSZ crew.
class CfgPatches
{
	class ofcra_psz_units_m1240
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {
			"OFCRA_PL_rhsusf_m1240a1_usarmy_wd",
			"OFCRA_PL_rhsusf_m1240a1_m2_usarmy_wd",
			"OFCRA_PL_rhsusf_m1240a1_m2_uik_usarmy_wd",
			"OFCRA_PL_rhsusf_m1240a1_mk19_usarmy_wd",
			"OFCRA_PL_rhsusf_m1240a1_mk19_uik_usarmy_wd",
			"OFCRA_PL_rhsusf_m1240a1_m240_usarmy_wd",
			"OFCRA_PL_rhsusf_m1240a1_m240_uik_usarmy_wd",
			"OFCRA_PL_rhsusf_m1240a1_m2crows_usarmy_wd",
			"OFCRA_PL_rhsusf_m1240a1_mk19crows_usarmy_wd",
			"OFCRA_PL_rhsusf_m1245_m2crows_socom_d",
			"OFCRA_PL_rhsusf_m1245_mk19crows_socom_d"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsusf_c_MATV", "ofcra_psz_m1240_olive", "psz_characters"};
	};
};

class CfgVehicles
{
	class rhsusf_m1240a1_usarmy_wd;
	class rhsusf_m1240a1_m2_usarmy_wd;
	class rhsusf_m1240a1_m2_uik_usarmy_wd;
	class rhsusf_m1240a1_mk19_usarmy_wd;
	class rhsusf_m1240a1_mk19_uik_usarmy_wd;
	class rhsusf_m1240a1_m240_usarmy_wd;
	class rhsusf_m1240a1_m240_uik_usarmy_wd;
	class rhsusf_m1240a1_m2crows_usarmy_wd;
	class rhsusf_m1240a1_mk19crows_usarmy_wd;
	class rhsusf_m1245_m2crows_socom_d;
	class rhsusf_m1245_mk19crows_socom_d;

	class OFCRA_PL_rhsusf_m1240a1_usarmy_wd: rhsusf_m1240a1_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1240a1_m2_usarmy_wd: rhsusf_m1240a1_m2_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1240a1_m2_uik_usarmy_wd: rhsusf_m1240a1_m2_uik_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1240a1_mk19_usarmy_wd: rhsusf_m1240a1_mk19_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1240a1_mk19_uik_usarmy_wd: rhsusf_m1240a1_mk19_uik_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1240a1_m240_usarmy_wd: rhsusf_m1240a1_m240_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa",
			"ofcra_psz\m1240_olive\m1240_olive_10.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1240a1_m240_uik_usarmy_wd: rhsusf_m1240a1_m240_uik_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa",
			"ofcra_psz\m1240_olive\m1240_olive_10.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1240a1_m2crows_usarmy_wd: rhsusf_m1240a1_m2crows_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1240a1_mk19crows_usarmy_wd: rhsusf_m1240a1_mk19crows_usarmy_wd
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1245_m2crows_socom_d: rhsusf_m1245_m2crows_socom_d
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
	class OFCRA_PL_rhsusf_m1245_mk19crows_socom_d: rhsusf_m1245_mk19crows_socom_d
	{
		author = "OFCRA Wombat";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PSZ_PolishArmedForces_WDL20";
		crew = "PSZ_PL_WDL20_Soldier_Driver";
		typicalCargo[] = {"PSZ_PL_WDL20_Soldier_Driver"};
		textureList[] = {"OFCRA_PL_Olive", 1};
		hiddenSelectionsTextures[] =
		{
			"ofcra_psz\m1240_olive\m1240_olive_0.paa",
			"ofcra_psz\m1240_olive\m1240_olive_1.paa",
			"ofcra_psz\m1240_olive\m1240_olive_2.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa",
			"\rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa",
			"ofcra_psz\m1240_olive\m1240_olive_5.paa",
			"ofcra_psz\m1240_olive\m1240_olive_6.paa",
			"ofcra_psz\m1240_olive\m1240_olive_7.paa",
			"ofcra_psz\m1240_olive\m1240_olive_8.paa",
			"\rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa"
		};
	};
};
