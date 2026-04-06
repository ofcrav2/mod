class CfgPatches
{
	class ofcra_nf {
		name = "ofcra_nf";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"NORTH_StaticWeapons",
			"ofcra_ammo_base",
			"ofcra_textures"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class CfgAmmo
{
	class OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR;
	class OFCRA_NF_SPLASH_NO_AROUR : OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR
	{
		hit=2; 
		indirectHit=0.16; // from 0.201
	};


	class OFCRA_8cm_NO_ARMOUR_BASE;
	class OFCRA_NF_76_NO_ARMOUR : OFCRA_8cm_NO_ARMOUR_BASE
	{
		hit=3600;
		indirectHit=0.5;
		indirectHitRange=2.4;

		submunitionConeType[]=
		{
			"randomupcone",
			30
		};
		submunitionAmmo[]={"OFCRA_NF_SPLASH_NO_AROUR",0.25,"OFCRA_LIGHT_VEHICLE_DESTRUCTION",0.75  };
		submunitionInitSpeed=40;   
	};
};

class CfgMagazines
{
	class VehicleMagazine;
	class OFCRA_NF_76_ART_NO_ARMOUR_20: VehicleMagazine	
	{
		ammo="OFCRA_NF_76_NO_ARMOUR"
		count=20;
		displayNameShort="OFCRA 7.62cm HE";
		displayName="OFCRA 7.62cm HE";
	};	
};

class Mode_SemiAuto;
class CfgWeapons
{
	class mortar_155mm_AMOS;
	class NORTH_wep_76mm_infhowitzer : mortar_155mm_AMOS
	{
		reloadTime=21;
		magazineReloadTime=30;
		magazines[]+={ "OFCRA_NF_76_ART_NO_ARMOUR_20","OFCRA_SMOKE_MAGAZINE" };
		class Single1: Mode_SemiAuto
		{
			reloadTime=21;
		};
	};


	class U_NORTH_FIN_M36_W_Greatcoat_camo;
	class UniformItem;
	class OFCRA_gomier_uniform : U_NORTH_FIN_M36_W_Greatcoat_camo
	{
		author="OFCRA Wombat";
		displayName="OFCRA Goumier Uniform";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_textures\top_goumier.paa",
			"\ofcra_textures\greatcoat_goumier.paa"
		};

		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="OFCRA_goumier_soldier";
			containerClass="Supply40";
			mass=40;
		};
	};

};


class CfgVehicles
{

	class I_NORTH_FIN_M36_W_Greatcoat_camo;
	class OFCRA_goumier_soldier: I_NORTH_FIN_M36_W_Greatcoat_camo
	{
		displayName="OFCRA Goumier";
		_generalMacro="OFCRA_goumier_soldier";
		uniformClass="OFCRA_gomier_uniform";
		hiddenSelectionsTextures[]=
		{
			"\ofcra_nf\top_goumier.paa",
			"\ofcra_nf\greatcoat_goumier.paa"
		};
	};

};
