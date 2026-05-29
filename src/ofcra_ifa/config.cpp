class CfgPatches
{
	class ofcra_ifa {
		name = "ofcra_ifa";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"LIB_t34_76",
			"LIB_StuG_III_G",
			"WW2_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_Assets_c_Vehicles_Tanks_c_Churchill",
			"WW2_Assets_c_Vehicles_Wheeled_c_Zis5v",
			"WW2_Assets_c_Vehicles_Winter_c",
			"WW2_Core_c_IF_ZZZ_LastLoaded_c",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class CfgAmmo
{
	class LIB_Bullet_base;
	class LIB_B_762x63_Ball : LIB_Bullet_base {
		caliber = 1.6; // from 0.~ 46 to match jmssa
	};

	class LIB_B_762x33_Ball : LIB_B_762x63_Ball {
		caliber = 1.5; // from 0.~ 43 to match jmssa
	};
	
};


