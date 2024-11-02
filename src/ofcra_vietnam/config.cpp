class CfgPatches
{
	class ofcra_vietnam
	{
		name = "ofcra_vietnam";
		author = "wombat";
		url = "http://example.com";
        requiredVersion=0.1;

		//skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"simc_nv_67_assets",
			"ofcra_textures"
		};

		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};

class cfgWeapons
{

	class UniformItem;
	class U_Simc_nva_2;
	class OFCRA_nva_uniform: U_Simc_nva_2
	{
		author="wombat";
		scope=2;
		displayName="OFCRA NVA";
		hiddenSelections[]=
		{
			"camo"
		};
		class ItemInfo: UniformItem
		{
			uniformClass = "Simc_nva_2";
			containerClass = "Supply30";
			mass = 20;
			type = 801;
			uniformModel = "-";
		};
	};
};

class CfgVehicles
{
	class OFCRA_soldier_base;
	class OFCRA_nva_soldier: OFCRA_soldier_base
	{
		displayName="OFCRA NVA";
		_generalMacro="OFCRA_nva_soldier";
		uniformClass="OFCRA_nva_uniform";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_vietnam\nva.paa"
		};
	};
};
