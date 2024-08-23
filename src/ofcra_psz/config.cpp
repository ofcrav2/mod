class CfgPatches
{
	class ofcra_psz {
		name = "ofcra_psz";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"psz_weapons",
			"ofcra_ammo_base",
			"ofcra_rhs_afrf"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};

class CfgMagazines
{
	class rhs_mag_3uof8_230;
	class PSZ_30x173_Belt_151_MP_T: rhs_mag_3uof8_230
	{
		displayName="OFCRA HE 30mm";
		ammo="rhs_ammo_3uof8";
		count=150;
		displayNameShort="OFCRA 30mm HE";
	};
}




