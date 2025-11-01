class CfgPatches
{
	class ofcra_rhs_usf_himars {
		name = "ofcra_rhs_usf_himars";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"rhsusf_main_loadorder",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};




class CfgAmmo
{
	class rhs_ammo_m26a1_rocket;

	class OFCRA_NERFED_HIMARS_CLUSTER_ROCKET : rhs_ammo_m26a1_rocket
	{

		//161 submunitions 5% = 8

		displayName="OFCRA M26A1 CLUSTER ROCKET";
		submunitionAmmo[]=
		{
			"OFCRA_AUTOCANNON_HE",
			0.88,
			"OFCRA_ARTILLERY_HE_BASE",
			0.05,
			"Mo_cluster_AP_UXO_deploy",
			0.07
		};
		soundFly[] = {"\ofcra_ammo_base\shell.wav",4.56228,1,2000};
	};
}

class CfgMagazines
{
	class rhs_mag_m26a1_6;

	class OFCRA_NERFED_HIMARS_CLUSTER : rhs_mag_m26a1_6
	{
		displayName="OFCRA M26A1 CLUSTER";
		descriptionShort="227mm rocket, ×65 M85 DPICM (NERFED)";
		ammo="OFCRA_NERFED_HIMARS_CLUSTER_ROCKET";
		initSpeed=425;
	};
};

