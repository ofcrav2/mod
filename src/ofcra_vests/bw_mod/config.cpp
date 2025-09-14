class CfgPatches
{
	class ofcra_vests_bw_mod {
		name = "ofcra_vests_bw_mod";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"bwa3_vests"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class OFCRA_level3_plate_HitpointsProtectionInfo;



class cfgWeapons
{
	class V_PlateCarrier2_rgr;
	class BWA3_Vest_Fleck: V_PlateCarrier2_rgr
	{
		class ItemInfo;
	};
	class BWA3_Vest_Rifleman_Fleck : BWA3_Vest_Fleck
	{
		class ItemInfo : ItemInfo{};
	};
	class OFCRA_BWA3_Vest_Rifleman_Fleck: BWA3_Vest_Rifleman_Fleck
	{
		author="wombat";
		displayName="OFCRA Flecktarn Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

	class OFCRA_BWA3_Vest_Fleck : BWA3_Vest_Fleck
	{
		author="wombat";
		displayName="OFCRA Flecktarn level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};

	class BWA3_Vest_Rifleman_Tropen : BWA3_Vest_Rifleman_Fleck{
		class ItemInfo : ItemInfo{};
	}
	class OFCRA_BWA3_Vest_Rifleman_Tropen: BWA3_Vest_Rifleman_Tropen
	{
		author="wombat";
		displayName="OFCRA Tropentarn Rifleman level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
}