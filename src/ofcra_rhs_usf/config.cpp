class CfgPatches
{
	class ofcra_rhs_usf {
		name = "ofcra_rhs_usf";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ace_frag",
			"rhsusf_main_loadorder",
			"rhsusf_c_m1a1",
			"rhsusf_c_m1a2",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


/*
			"rhs_mag_M829A4", //AP
			"rhs_mag_M829A3", //AP
			"rhs_mag_M829A2", //AP
			"rhs_mag_M829A1", //AP
			"rhs_mag_M829",   //AP
			"rhs_mag_M830",		//HEAT
			"rhs_mag_M830A1",	//HEAT
			"rhs_mag_M1069",	//HE-FRAG Base for everything else
			"rhs_mag_M1147",	//HE-FRAG
			"rhs_mag_M1028",	//Canister
			"rhs_mag_M416",		//HEAT
			"rhs_mag_M829A4_max",
			"rhs_mag_M829A3_max",
			"rhs_mag_M829A2_max",
			"rhs_mag_M829A1_max",
			"rhs_mag_M829_max",
			"rhs_mag_M830_max",
			"rhs_mag_M830A1_max",
			"rhs_mag_M1069_max",
			"rhs_mag_M1147_max",
			"rhs_mag_M1028_max",
			"rhs_mag_M416_max"
*/

class CfgMagazines
{
	////////////////////////////////////////// 
	// M1A1 / M1A2 Abrams
	class VehicleMagazine;
	class rhs_mag_M1069: VehicleMagazine
	{
		displayNameShort="OFCRA 12cm HE";
		ammo="OFCRA_12cm_HE";
	};
	class rhs_mag_M1069_max: rhs_mag_M1069
	{
		displayNameShort="OFCRA 12cm HE";
		ammo="OFCRA_12cm_HE";
	}

	class rhs_mag_M1147: rhs_mag_M1069
	{
		displayNameShort="OFCRA 12cm HE";
		ammo="OFCRA_12cm_HE";
	};
	class rhs_mag_M1147_max: rhs_mag_M1069
	{
		displayNameShort="OFCRA 12cm HE";
		ammo="OFCRA_12cm_HE";
	};

	class rhs_mag_M830: rhs_mag_M1069
	{
		displayNameShort="OFCRA 12cm HEAT";
		ammo="OFCRA_12cm_HEAT";
	};

	class rhs_mag_M830A1: rhs_mag_M1069
	{
		displayNameShort="OFCRA 12cm HEAT";
		ammo="OFCRA_12cm_HEAT";
	};


	//////////////////////////////////////////
	// M2A2 Bradley
	class 140Rnd_30mm_MP_shells_Tracer_Red;
	class rhs_mag_230Rnd_25mm_M242_HEI: 140Rnd_30mm_MP_shells_Tracer_Red
	{
		displayName="OFCRA Autocannon HE";
		displayNameShort="OFCRA Autocannon HE";
		ammo="OFCRA_AUTOCANNON_HE";
	};

};

