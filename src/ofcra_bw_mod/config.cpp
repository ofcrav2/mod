class CfgPatches
{
	class ofcra_bw_mod {
		name = "ofcra_bw_mod";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ace_frag",
			"rhs_main_loadorder",
			"bwa3_leopard2",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};



class CfgAmmo
{
	class OFCRA_12cm_HEAT;
	class BWA3_Sh_120mm_MZ: OFCRA_12cm_HEAT
	{
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
	};	
};
class CfgMagazines
{
	class 30Rnd_120mm_HE_shells;
	class BWA3_1Rnd_MZ_shells: 30Rnd_120mm_HE_shells
	{
		displayNameShort="OFCRA 12cm HEAT";
		ammo="OFCRA_12cm_HEAT";
	};

	class BWA3_1Rnd_HE_shells: 30Rnd_120mm_HE_shells
	{
		displayNameShort="OFCRA 12cm HE";
		ammo="OFCRA_12cm_BASE";
	};	
	
};


class Mode_SemiAuto;
class CfgWeapons
{
	class CannonCore;
	class BWA3_RH155mm_AMOS: CannonCore
	{
		magazines[]+={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_32"
		};
		class Single1: Mode_SemiAuto
		{
			artilleryDispersion=1.7999998;  //mortar = 1.9, artillery base = 7.2
		};
	};
};

