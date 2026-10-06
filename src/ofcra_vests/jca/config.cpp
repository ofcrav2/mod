// OFCRA armoured copies of JCA headwear (same armour as the other OFCRA caps: head armor 6, passThrough 0.5, mass 20)
class CfgPatches
{
	class ofcra_vests_jca {
		name = "ofcra_vests_jca";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"Headwear_F_JCA_IE"
		};
		units[] = {};
		weapons[] = {
			"OFCRA_JCA_H_Beanie_01_headset_sand_F",
			"OFCRA_JCA_H_balaclava_01_headset_sand_F",
			"OFCRA_JCA_H_Cap_01_headset_sand_F",
			"OFCRA_JCA_H_Cap_01_headset_black_F"
		};
		ammo[]={};
	};
};

class cfgWeapons
{
	class JCA_H_Beanie_01_headset_base_F;
	class JCA_H_Beanie_01_headset_sand_F : JCA_H_Beanie_01_headset_base_F {
		class ItemInfo;
	};
	class OFCRA_JCA_H_Beanie_01_headset_sand_F : JCA_H_Beanie_01_headset_sand_F
	{
		author="wombat";
		displayName="OFCRA Beanie (Sand, Headset)";
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

	class JCA_H_balaclava_01_headset_base_F;
	class JCA_H_balaclava_01_headset_sand_F : JCA_H_balaclava_01_headset_base_F {
		class ItemInfo;
	};
	class OFCRA_JCA_H_balaclava_01_headset_sand_F : JCA_H_balaclava_01_headset_sand_F
	{
		author="wombat";
		displayName="OFCRA Tactical Balaclava (Sand, Headset)";
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

	class JCA_H_Cap_01_headset_base_F;
	class JCA_H_Cap_01_headset_sand_F : JCA_H_Cap_01_headset_base_F {
		class ItemInfo;
	};
	class OFCRA_JCA_H_Cap_01_headset_sand_F : JCA_H_Cap_01_headset_sand_F
	{
		author="wombat";
		displayName="OFCRA Cap (Sand, Headset)";
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

	class JCA_H_Cap_01_headset_black_F : JCA_H_Cap_01_headset_base_F {
		class ItemInfo;
	};
	class OFCRA_JCA_H_Cap_01_headset_black_F : JCA_H_Cap_01_headset_black_F
	{
		author="wombat";
		displayName="OFCRA Cap (Black, Headset)";
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
