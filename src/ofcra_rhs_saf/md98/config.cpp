class CfgPatches
{
	class ofcra_rhs_saf_md98
	{
		name = "ofcra_rhs_saf_md98";
		author = "wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"rhssaf_main_loadorder",
			"ofcra_textures"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};

/*

"UK3CB_MD98_VEST_KHK"
["rhssaf_vest_md98_woodland","rhssaf_balistic_vest_base","Vest_Camo_Base","ItemCore","Default"]
hiddenSelectionsTextures[] = {"UK3CB_Factions\addons\UK3CB_Factions_Equipment2\vests\saf\data\md98_vest_khk_co.paa"};
*/


class cfgWeapons
{

	class rhssaf_balistic_vest_base;
	class rhssaf_vest_md98_woodland: rhssaf_balistic_vest_base
	{
		class ItemInfo;
	};


	class OFCRA_DPM_M98_Vest : rhssaf_vest_md98_woodland
	{
		author="wombat";
		displayName="OFCRA M98 Vest";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ofcra_rhs_saf\md98\dpm-vest.jpg"
		};
		class ItemInfo: ItemInfo
		{
			containerClass="Supply120";
			mass= 80;
			class HitpointsProtectionInfo {
				class Chest
				{
					HitpointName="HitChest";
					armor=16;
					PassThrough=0.3;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=16;
					PassThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					PassThrough=0.3;
				};
				class Body
				{
					hitpointName="HitBody";
					PassThrough=0.3;
				};
			}
		};
		
	
	};


	/*
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class OFCRA_ITALY_M29_uniform: U_B_CombatUniform_mcam
	{
		author="wombat";
		scope=2;
		displayName="OFCRA Italy M29";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_ITALY_M29_soldier";
			containerClass="Supply40";
			mass=40;
		};
	};
	*/
};

class CfgVehicles
{
	/*
	class B_Soldier_F;
	class OFCRA_soldier_base;
	

	class OFCRA_ITALY_M29_soldier : OFCRA_soldier_base
	{
		author="wombat";
		displayName="OFCRA Italy M29";
		_generalMacro="OFCRA_ITALY_M29";
		model="\rhssaf\addons\rhssaf_m_uniform_m93\rhssaf_uniform_m93";
		uniformClass="OFCRA_ITALY_M29_uniform";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\italy\m93_co.paa"
		};
	};
	*/
};
