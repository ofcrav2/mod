class CfgPatches
{
	class ofcra_textures_kitbag
	{
		name = "ofcra_textures_kitbag";
		author = "wombat";
        requiredVersion=0.1;
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};




class CfgVehicles
{
	class B_Kitbag_rgr;
	class OFCRA_Kitbag_Winter : B_Kitbag_rgr
	{
		author = "OFCRA Wombat";
		displayName = "Kitbag (Winter)";

		hiddenSelectionsTextures[] = {"ofcra_textures\kitbag\winter.paa"};
	};

};
