// OFCRA armoured copy of the MMM Soviet balaclava (head armor 6, passThrough 0.5, mass 20)
class CfgPatches
{
	class ofcra_vests_mmm {
		name = "ofcra_vests_mmm";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"MMM_SOV_Balaclava"
		};
		units[] = {};
		weapons[] = {"OFCRA_MMM_SOV_Balaclava_3_Black"};
		ammo[]={};
	};
};

class cfgWeapons
{
	class MMM_SOV_Balaclava_1_Black;
	class MMM_SOV_Balaclava_3_Black : MMM_SOV_Balaclava_1_Black {
		class ItemInfo;
	};
	class OFCRA_MMM_SOV_Balaclava_3_Black : MMM_SOV_Balaclava_3_Black
	{
		author="wombat";
		displayName="OFCRA Balaclava (3-Hole, Black)";
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
