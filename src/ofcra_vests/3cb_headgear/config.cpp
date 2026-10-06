// OFCRA armoured copy of the 3CB black beanie (head armor 6, passThrough 0.5, mass 20)
class CfgPatches
{
	class ofcra_vests_3cb_headgear {
		name = "ofcra_vests_3cb_headgear";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"UK3CB_Factions_Headgear"
		};
		units[] = {};
		weapons[] = {"OFCRA_UK3CB_H_Beanie_02_BLK"};
		ammo[]={};
	};
};

class cfgWeapons
{
	class rhs_beanie;
	class UK3CB_H_Beanie_02_BLK : rhs_beanie {
		class ItemInfo;
	};
	class OFCRA_UK3CB_H_Beanie_02_BLK : UK3CB_H_Beanie_02_BLK
	{
		author="wombat";
		displayName="OFCRA Beanie (Black)";
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
		};
	};
};
