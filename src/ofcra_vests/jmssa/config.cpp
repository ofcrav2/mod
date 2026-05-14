class CfgPatches
{
	class ofcra_vests_jmssa {
		name = "ofcra_vests_jmssa";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"JMSSA_brits_mod",
			"JMSSA_ita_mod",
			"JMSSA_ger_mod"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class cfgWeapons
{

	class Vest_Camo_Base;

	class JMSSA_ita_VAmmoBeltL : Vest_Camo_Base {
		class ItemInfo;
	};
	class JMSSA_ger_VInfKit : Vest_Camo_Base {
		class ItemInfo;
	};
	class JMSSA_brit_p37pack : Vest_Camo_Base {
		class ItemInfo;
	};

	class OFCRA_JMSSA_ita_VAmmoBeltL : JMSSA_ita_VAmmoBeltL
	{
		author="wombat";
		displayName="OFCRA Italian Ammo Belt level 2 plate";
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

	class OFCRA_JMSSA_ger_VInfKit : JMSSA_ger_VInfKit
	{
		author="wombat";
		displayName="OFCRA German Infantry Kit level 2 plate";
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
					passThrough=9;
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

	class OFCRA_JMSSA_brit_p37pack : JMSSA_brit_p37pack
	{
		author="wombat";
		displayName="OFCRA British P37 Pack level 2 plate";
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