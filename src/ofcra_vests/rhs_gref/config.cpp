class CfgPatches
{
	class ofcra_vests_rhs_gref {
		name = "ofcra_vests_rhs_gref";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"rhsgref_main_loadorder"

		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class OFCRA_level3_plate_HitpointsProtectionInfo;

class cfgWeapons
{
	class rhsgref_alice_webbing{
		class ItemInfo;
	}
	class OFCRA_rhsgref_alice_webbing: rhsgref_alice_webbing
	{
		author="wombat";
		displayName="OFCRA Alice Webbing level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
}

