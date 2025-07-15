class CfgPatches
{
	class ofcra_nf {
		name = "ofcra_nf";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"NORTH_StaticWeapons",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class CfgMagazines
{
	class VehicleMagazine;
	class OFCRA_NF_76_ART_NO_ARMOUR_20: VehicleMagazine	
	{
		ammo="OFCRA_8cm_NO_ARMOUR_BASE";
		count=20;
		displayNameShort="OFCRA 7.62cm HE";
		displayName="OFCRA 7.62cm HE";
	};	
};


class CfgWeapons
{
	class mortar_155mm_AMOS;
	class NORTH_wep_76mm_infhowitzer : mortar_155mm_AMOS
	{
		magazines[]+={ "OFCRA_NF_76_ART_NO_ARMOUR_20","OFCRA_SMOKE_MAGAZINE" };
	};
};
