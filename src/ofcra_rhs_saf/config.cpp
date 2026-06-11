class CfgPatches
{
	class ofcra_rhs_saf
	{
		name = "ofcra_rhs_saf";
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



class cfgWeapons
{
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

	class rhssaf_helmet_base;
	class rhssaf_beret_blue_un : rhssaf_helmet_base
	{
		class ItemInfo;
	};
	class OFCRA_UN_BERET_BLUE : rhssaf_beret_blue_un
	{
		author="wombat";
		displayName="OFCRA UN Blue Beret";
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
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

class CfgVehicles
{
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
};
