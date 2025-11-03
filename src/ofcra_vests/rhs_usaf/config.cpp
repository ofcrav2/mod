class CfgPatches
{
	class ofcra_vests_rhs_usf {
		name = "ofcra_vests_rhs_usf";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"rhsusf_main_loadorder"

		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};



class OFCRA_level3_plate_HitpointsProtectionInfo;



//rhsusaf_mbav_rifleman - ["rhsusf_iotv_ocp_base","Vest_Camo_Base","ItemCore","Default"]
//rhsusaf_plateframe_rifleman - ["rhsusf_plateframe_sapi","rhsusf_iotv_ocp_base","Vest_Camo_Base","ItemCore","Default"]
//rhsusaf_spc_rifleman - ["rhsusf_spc","rhsusf_iotv_ocp_base","Vest_Camo_Base","ItemCore","Default"]
//rhsusaf_spcs_ucp_rifleman_alt - ["rhsusf_spcs_ocp_rifleman_alt","rhsusf_spcs_ocp","rhsusf_iotv_ocp_base","Vest_Camo_Base","ItemCore","Default"]

class cfgWeapons
{

	class rhsusf_iotv_ocp_base;
	class rhsusf_plateframe_sapi;
	class rhsusf_spc;
	class rhsusf_spcs_ocp_rifleman_alt;

	class rhsusf_mbav_rifleman : rhsusf_iotv_ocp_base {
		class ItemInfo;
	};
	class OFCRA_rhsusf_mbav_rifleman : rhsusf_mbav_rifleman
	{
		author="wombat";
		displayName="OFCRA MBAV Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

	class rhsusf_plateframe_rifleman : rhsusf_plateframe_sapi {
		class ItemInfo;
	};
	class OFCRA_rhsusf_plateframe_rifleman : rhsusf_plateframe_rifleman
	{
		author="wombat";
		displayName="OFCRA Plateframe Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

	class rhsusf_spc_rifleman : rhsusf_spc {
		class ItemInfo;
	};
	class OFCRA_rhsusf_spc_rifleman : rhsusf_spc_rifleman
	{
		author="wombat";
		displayName="OFCRA SPC Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

	class rhsusaf_spcs_ucp_rifleman_alt : rhsusf_spcs_ocp_rifleman_alt {
		class ItemInfo;
	};
	class OFCRA_rhsusf_spcs_ocp_rifleman_alt : rhsusaf_spcs_ucp_rifleman_alt
	{
		author="wombat";
		displayName="OFCRA SPCS OCP Rifleman Alt level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

};