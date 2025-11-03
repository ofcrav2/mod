class CfgPatches
{
	class ofcra_vests_rhs_afrf {
		name = "ofcra_vests_rhs_afrf";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"rhs_main_loadorder"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};



class OFCRA_level3_plate_HitpointsProtectionInfo;



//rhs_6b45_rifleman ["rhs_6b45","rhs_6b43","rhs_6b23","Vest_Camo_Base","ItemCore","Default"]
//rhs_6b3_AK_2 ["rhs_6b3","rhs_6b2","Vest_Camo_Base","ItemCore","Default"]
//rhs_6sh117_val ["rhs_6sh117_rifleman","Vest_Camo_Base","ItemCore","Default"]


class cfgWeapons
{
	class rhs_6b45;
	class rhs_6b3;
	class rhs_6sh117_rifleman;

	class rhs_6b45_rifleman : rhs_6b45 {
		class ItemInfo;
	}
	class OFCRA_rhs_6b45_rifleman : rhs_6b45_rifleman
	{
		author="wombat";
		displayName="OFCRA 6B45 Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

	class rhs_6b3_AK_2 : rhs_6b3 {
		class ItemInfo;
	}
	class OFCRA_rhs_6b3_AK_2 : rhs_6b3_AK_2
	{
		author="wombat";
		displayName="OFCRA 6B3 AK-2 level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

	class rhs_6sh117_val : rhs_6sh117_rifleman {
		class ItemInfo;
	}
	class OFCRA_rhs_6sh117_val : rhs_6sh117_val
	{
		author="wombat";
		displayName="OFCRA 6Sh117 Val level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

};