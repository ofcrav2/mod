class CfgPatches
{
	class ofcra_vests_fow {
		name = "ofcra_vests_fow";
		requiredVersion = 1.98;
		author = "OFCRA Pirate Sandwich";
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

class cfgWeapons
{

	class fow_v_base;
	class fow_v_heer_mp40 : fow_v_base
	{
		class ItemInfo;
	};
	class OFCRA_vest_mp40: fow_v_heer_mp40
	{
		author="Pirate Sandwich";
		displayName="OFCRA MP40 Vest (level 2 plate)";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=12;					//This sets explosive resistance in GUI. Seems to be accurate in game. Normal level 2 plate is 12
					passThrough=0.4;            // this seems to be a multiplier roughly from explosvie damage to direct hit. Normal level 2 playte is 0.4
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=12;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
			}
		}
	};

	class fow_v_heer_mg : fow_v_base{
		class ItemInfo;
	};
	class OFCRA_vest_heer_mg : fow_v_heer_mg 
	{
		author="Pirate Sandwich";
		displayName="OFCRA MG Vest (level 2 plate)";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=12;
					passThrough=0.4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=12;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
			}
		}
	};
	 
	class fow_v_heer_k98: fow_v_base{
		class ItemInfo;
	};
	class OFCRA_vest_heer_k98 : fow_v_heer_k98
	{
		author="Pirate Sandwich";
		displayName="OFCRA K98 Vest (level 2 plate)";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=12;
					passThrough=0.4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=12;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
			}
		}
	};

        
		
	class fow_v_uk_sten : fow_v_base{
		class ItemInfo;
	};		
	class fow_v_uk_sten_green : fow_v_uk_sten{
		class ItemInfo;
	};
	class OFCRA_vest_sten_green : fow_v_uk_sten_green
	{
		author="Pirate Sandwich";
		displayName="OFCRA sten Vest (level 2 plate)";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=12;
					passThrough=0.4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=12;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
			}
		}
	};
	class OFCRA_vest_sten : fow_v_uk_sten
	{
		author="Pirate Sandwich";
		displayName="OFCRA sten Vest (level 2 plate)";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=12;
					passThrough=0.4;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=12;
					passThrough=0.4;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=12;
					passThrough=0.4;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.4;
				};
			}
		}
	};

}