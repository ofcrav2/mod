class CfgPatches
{
	class ofcra_sfp {
		name = "ofcra_sfp";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"sfp_ak4",
			"sfp_ak5",
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};

class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class sfp_ak5_base: Rifle_Base_F
	{
		recoil="recoil_mx";
	};
	class sfp_ak5c: sfp_ak5_base
	{
		recoil="recoil_mx";
	};
	class sfp_ak5dmk2 :sfp_ak5c
	{
		recoil="recoil_mx";
	};

	class sfp_ak5b : sfp_ak5_base
	{
		recoil="recoil_mx";
	};
	class sfp_ak5 : sfp_ak5b
	{
		recoil="recoil_mx";
	};
	class sfp_ak5d : sfp_ak5
	{
		recoil="recoil_mx";
	};
	
	class sfp_ak4_base : Rifle_Base_F
	{
		recoil="recoil_mx";
	};
	class sfp_ak4 : sfp_ak4_base
	{
		recoil="recoil_mx";
	};
};