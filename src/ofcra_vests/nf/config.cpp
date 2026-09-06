class CfgPatches
{
	class ofcra_vests_nf {
		name = "ofcra_vests_nf";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"NORTH_StaticWeapons"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class cfgWeapons
{

	class Vest_Camo_Base;
	class H_NORTH_cap_base;



	class V_NORTH_SOV_Belt_Mosin : Vest_Camo_Base {
		class ItemInfo;
	};
	class V_NORTH_SOV_Marine_Pouch_SMG_1 : Vest_Camo_Base {
		class ItemInfo;
	};

	class H_NORTH_SOV_Obr40_Ushanka : H_NORTH_cap_base {
		class ItemInfo;
	};
	class H_NORTH_Workercap_bl : H_NORTH_cap_base {
		class ItemInfo;
	};



	class OFCRA_SOV_Belt_Mosin : V_NORTH_SOV_Belt_Mosin
	{
		author="wombat";
		displayName="OFCRA SOV Belt Mosin level 2 plate";
		nameSound = "";
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

	class OFCRA_SOV_Marine_Pouch_SMG_1 : V_NORTH_SOV_Marine_Pouch_SMG_1
	{
		author="wombat";
		displayName="OFCRA SOV Marine Pouch level 2 plate";
		nameSound = "";
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

	class OFCRA_SOV_Obr40_Ushanka : H_NORTH_SOV_Obr40_Ushanka
	{
		author="wombat";
		displayName="OFCRA Ushanka";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 20;
			class HitpointsProtectionInfo {
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		}
	};

	class OFCRA_Workercap_bl : H_NORTH_Workercap_bl
	{
		author="wombat";
		displayName="OFCRA Worker Cap";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 20;
			class HitpointsProtectionInfo {
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		}
	};


}