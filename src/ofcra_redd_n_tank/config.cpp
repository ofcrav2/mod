class CfgPatches
{
	class ofcra_redd_n_tank {
		name = "ofcra_redd_n_tank";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"redd_marder_1a5",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};



class CfgMagazines
{

	//////////////////////////////////////////
	// Marder
	class 140Rnd_30mm_MP_shells;
	class Redd_MK20_HE_Mag: 140Rnd_30mm_MP_shells
	{
		displayName="OFCRA Autocannon HE";
		displayNameShort="OFCRA Autocannon HE";
		ammo="OFCRA_AUTOCANNON_HE_FRAG";
	};

};
