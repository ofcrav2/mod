class CfgPatches
{
	class ofcra_vests_3cb {
		name = "ofcra_vests_3cb";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"UK3CB_Factions_Vehicles_Tseries"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class cfgWeapons
{


	/*
UK3CB_V_MBAV_RIFLEMAN_MULTI  -> ["rhsusf_mbav_rifleman","rhsusf_mbav_light","rhsusf_mbav","rhsusf_iotv_ocp_base","Vest_Camo_Base","ItemCore","Default"]
UK3CB_V_MBAV_RIFLEMAN_OLI  -> ["rhsusf_mbav_rifleman","rhsusf_mbav_light","rhsusf_mbav","rhsusf_iotv_ocp_base","Vest_Camo_Base","ItemCore","Default"]
UK3CB_V_MBAV_RIFLEMAN_BLK  -> ["rhsusf_mbav_rifleman","rhsusf_mbav_light","rhsusf_mbav","rhsusf_iotv_ocp_base","Vest_Camo_Base","ItemCore","Default"]
UK3CB_MD12_VEST_OLI  -> ["rhssaf_vest_md12_digital","rhssaf_balistic_vest_base","Vest_Camo_Base","ItemCore","Default"]
UK3CB_V_SOV_CHICOM_GRN -> ["UK3CB_V_SOV_CHICOM_BASE","Vest_NoCamo_Base","ItemCore","Default"]
UK3CB_V_SOV_CHICOM_TAN -> ["UK3CB_V_SOV_CHICOM_BASE","Vest_NoCamo_Base","ItemCore","Default"]
UK3CB_V_Chestrig_2_Small_OLI -> ["UK3CB_V_Chestrig_Base","Vest_NoCamo_Base","ItemCore","Default"]
UK3CB_CW_US_B_LATE_V_PASGT_Rif_Vest -> ["UK3CB_V_PASGT_RIF_Vest","UK3CB_PASGT_Vest_Base","V_PlateCarrier1_rgr","Vest_NoCamo_Base","ItemCore","Default"]
UK3CB_LDF_B_V_RIF_ALT_Vest_KKZ10_OLI -> ["rhsusf_spcs_ocp_rifleman","rhsusf_spcs_ocp","rhsusf_iotv_ocp_base","Vest_Camo_Base","ItemCore","Default"]

	*/


	class rhsusf_mbav_rifleman;
	class rhssaf_vest_md12_digital;
	class UK3CB_V_SOV_CHICOM_BASE;
	class UK3CB_V_Chestrig_Base;
	class UK3CB_V_PASGT_RIF_Vest;
	class rhsusf_spcs_ocp_rifleman;


	class UK3CB_V_MBAV_RIFLEMAN_MULTI : rhsusf_mbav_rifleman {
		class ItemInfo;
	};
	class OFCRA_UK3CB_V_MBAV_RIFLEMAN_MULTI : UK3CB_V_MBAV_RIFLEMAN_MULTI
	{
		author="wombat";
		displayName="OFCRA MBAV MultiCam Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

	class UK3CB_V_MBAV_RIFLEMAN_OLI  : rhsusf_mbav_rifleman {
		class ItemInfo;
	};
	class OFCRA_UK3CB_V_MBAV_RIFLEMAN_OLI : UK3CB_V_MBAV_RIFLEMAN_OLI
	{
		author="wombat";
		displayName="OFCRA MBAV OCP Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

	class UK3CB_V_MBAV_RIFLEMAN_BLK : rhsusf_mbav_rifleman {
		class ItemInfo;
	};
	class OFCRA_UK3CB_V_MBAV_RIFLEMAN_BLK : UK3CB_V_MBAV_RIFLEMAN_BLK
	{
		author="wombat";
		displayName="OFCRA MBAV Black Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

	class UK3CB_MD12_VEST_OLI : rhssaf_vest_md12_digital {
		class ItemInfo;
	};
	class OFCRA_rhssaf_vest_md12_digital : UK3CB_MD12_VEST_OLI
	{
		author="wombat";
		displayName="OFCRA MD12 Digital Vest level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

	class UK3CB_V_SOV_CHICOM_GRN : UK3CB_V_SOV_CHICOM_BASE {
		class ItemInfo;
	};
	class OFCRA_UK3CB_V_SOV_CHICOM_GRN : UK3CB_V_SOV_CHICOM_GRN
	{
		author="wombat";
		displayName="OFCRA SOV CHICOM Green level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

	class UK3CB_V_SOV_CHICOM_TAN : UK3CB_V_SOV_CHICOM_BASE {
		class ItemInfo;
	};
	class OFCRA_UK3CB_V_SOV_CHICOM_TAN : UK3CB_V_SOV_CHICOM_TAN
	{
		author="wombat";
		displayName="OFCRA SOV CHICOM Tan level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

	class UK3CB_V_Chestrig_2_Small_OLI : UK3CB_V_Chestrig_Base {
		class ItemInfo;
	};
	class OFCRA_UK3CB_V_Chestrig_2_Small_OLI : UK3CB_V_Chestrig_2_Small_OLI
	{
		author="wombat";
		displayName="OFCRA Chestrig 2 Small OLI level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

	class UK3CB_CW_US_B_LATE_V_PASGT_Rif_Vest : UK3CB_V_PASGT_RIF_Vest {
		class ItemInfo;
	};
	class OFCRA_UK3CB_CW_US_B_LATE_V_PASGT_Rif_Vest : UK3CB_CW_US_B_LATE_V_PASGT_Rif_Vest
	{
		author="wombat";
		displayName="OFCRA PASGT Rifle Vest level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

	class UK3CB_LDF_B_V_RIF_ALT_Vest_KKZ10_OLI : rhsusf_spcs_ocp_rifleman {
		class ItemInfo;
	};
	class OFCRA_UK3CB_LDF_B_V_RIF_ALT_Vest_KKZ10_OLI : UK3CB_LDF_B_V_RIF_ALT_Vest_KKZ10_OLI
	{
		author="wombat";
		displayName="OFCRA LDF V-RIF ALT Vest KKZ10 OLI level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		}
	};

}