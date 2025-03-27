class CfgPatches
{
	class ofcra_rhs_afrf_2A42 {
		name = "ofcra_rhs_afrf_2A42";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ace_frag",
			"rhs_main_loadorder",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class CfgAmmo
{

	class rhs_ammo_3ubr11;

	class OFCRA_ammo_M929: rhs_ammo_3ubr11
	{
		hit=80;
		caliber=9.0;
	};

};


class CfgMagazines
{

	class rhs_mag_3ubr11_230;


	class OFCRA_mag_M929_230: rhs_mag_3ubr11_230
	{
		displayName="30mm M929 APFSDS-T";
		displayNameShort="APFSDS-T";
		ammo="OFCRA_ammo_M929";
		weight=69;
		initSpeed=1300; // 1260
	};


};

class CfgMagazineWells
{
	class RHS_AutoCannon_30mm_2A42_AP
	{
		RHS_30mm_AP_Magazines[]+=
		{
			"OFCRA_mag_M929_230"
		};
	};
};




class CfgWeapons
{

};

