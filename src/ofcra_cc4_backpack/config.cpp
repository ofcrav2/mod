// ofcra_cc4_backpack - the CC4 mission exporter puts all of a soldier's cargo into the backpack, and a dedicated
// server drops what doesn't fit, so these backpacks get a load of about 200 kg (maximumLoad 4410 = 4410 x 0.1 / 2.2046 kg
// in ACE). Only maximumLoad changes: each class keeps its own parent (checked with Find-ConfigInfo.ps1) and the parent
// classes are not touched, so no other backpack changes. The backpack's own mass and the soldier's total weight stay
// the same - the items only move between containers.
//
// Loads only when every mod the CC4 vehicles need is there (skipWhenMissingDependencies + the full ofcra_cc4 list).
// Air_Globe_UAV_02 is left out: ofcra_cc4 only uses it for an optional Greyhawk patch and it isn't in the mod set.
// Load it (signed) on the server and every client. Check on the server: getContainerMaxLoad "UK3CB_B_Backpack_Pocket"

class CfgPatches
{
	class ofcra_cc4_backpack
	{
		name = "ofcra_cc4_backpack";
		author = "OFCRA Wombat";
		requiredVersion = 1.98;
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"ofcra_cc4",
			"UK3CB_Factions_Equipment_Backpack",
			"UK3CB_Factions_PLM_O",
			"rhs_c_troops",
			"A3_Air_F_Exp_UAV_03",
			"A3_Data_F",
			"A3_Drones_F_Air_F_Gamma_UAV_02",
			"A3_Drones_F_Soft_F_Gamma_UGV_01",
			"A3_Weapons_F",
			"boxer_c",
			"bwa3_pylon",
			"bwa3_tiger",
			"mkk_cv_9030",
			"MMM_UA_BabaYaga",
			"ofcra_ammo_base",
			"ofcra_grenade_drone",
			"ofcra_rhs_usf_m109",
			"ofcra_textures",
			"RHS_A2_AirImport",
			"rhs_c_a2port_air",
			"rhs_c_airweapons",
			"RHS_US_A2_AirImport",
			"rhsusf_c_Caiman",
			"rhsusf_c_m109",
			"rhsusf_c_m113",
			"rhsusf_c_MATV",
			"rhsusf_c_mrzr",
			"UK3CB_Factions_AAF_B",
			"UK3CB_Factions_AAF_O",
			"UK3CB_Factions_ADA_B",
			"UK3CB_Factions_ADC_B",
			"UK3CB_Factions_ADC_O",
			"UK3CB_Factions_ADE_O",
			"UK3CB_Factions_ADG_B",
			"UK3CB_Factions_ANA_B",
			"UK3CB_Factions_APD_B",
			"UK3CB_Factions_CSAT_A_O",
			"UK3CB_Factions_FIA_O",
			"UK3CB_Factions_ION_B_Urban",
			"UK3CB_Factions_KRG_O",
			"UK3CB_Factions_LDF_O",
			"UK3CB_Factions_TKA_O",
			"UK3CB_Factions_TPD_O",
			"UK3CB_Factions_Vehicles_Ababil",
			"UK3CB_Factions_Vehicles_Caiman",
			"UK3CB_Factions_Vehicles_Dingo",
			"UK3CB_Factions_Vehicles_HMMWV",
			"UK3CB_Factions_Vehicles_LandRover",
			"UK3CB_Factions_Vehicles_LandRover_WMIK",
			"UK3CB_Factions_Vehicles_M109",
			"UK3CB_Factions_Vehicles_M113",
			"UK3CB_Factions_Vehicles_M60",
			"UK3CB_Factions_Vehicles_Motorbikes",
			"UK3CB_Factions_Vehicles_Orca",
			"UK3CB_Factions_Vehicles_Quadbike",
			"UK3CB_Factions_Vehicles_Shahed",
			"UK3CB_Factions_Vehicles_Stomper",
			"UK3CB_Factions_Vehicles_Transit",
			"UK3CB_Factions_Vehicles_UH1H",
			"UK3CB_Factions_WEI_B",
			"UK3CB_Factions_WEI_O",
			"warrior_c"
		};
	};
};

class CfgVehicles
{
	class B_Bergen_Base;
	class TFAR_rt1523g_big;
	class rhs_r148;

	class UK3CB_B_Backpack_Pocket: B_Bergen_Base              // Small Pack (Tan)
	{
		maximumLoad = 4410;
	};
	class UK3CB_B_Invisible: B_Bergen_Base                    // Backpack (invisible)
	{
		maximumLoad = 4410;
	};
	class UK3CB_B_B_Backpack_Radio_Chem: TFAR_rt1523g_big     // Small Radio Pack RT1523g (Tan)
	{
		maximumLoad = 4410;
	};
	class UK3CB_PLM_O_B_R148_RADIO: rhs_r148                  // R-148 Radio MR3000
	{
		maximumLoad = 4410;
	};
};
