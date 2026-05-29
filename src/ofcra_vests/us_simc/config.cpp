class CfgPatches
{
	class ofcra_vests_us_simc {
		name = "ofcra_vests_jmssa";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"simc_uaf_44_assets"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class cfgWeapons
{

	class Vest_Camo_Base;

	class V_Simc_US_Vest_basic;
	class V_Simc_US_AB_Vest_Carbine_2 : V_Simc_US_Vest_basic {
		class ItemInfo;
	};


	class OFCRA_Simc_US_AB_Carbine : V_Simc_US_AB_Vest_Carbine_2 
	{
		author="wombat";
		displayName="OFCRA US AB Carbine level 2 plate";
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
			};
		};
	};
};