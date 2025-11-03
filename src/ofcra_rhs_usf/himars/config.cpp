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
	class rhs_ammo_m26_rocket;
	

	class OFCRA_NERFED_HIMARS_CLUSTER_ROCKET : rhs_ammo_m26_rocket
	{

		//161 submunitions 5% = 8

		displayName="OFCRA M26A1 CLUSTER ROCKET";
		submunitionAmmo[]=
		{
			"OFCRA_AUTOCANNON_HE",
			0.25,
			"OFCRA_MLRS_CLUSTER_LOW_DAMAGE",
			0.25,
			"OFCRA_MLRS_CLUSTER",
			0.5
		};
		soundFly[] = {"\ofcra_ammo_base\shell.wav",4.56228,1,2000};
	};

	class OFCRA_HE_LOW_DAMAGE;
	class OFCRA_MLRS_CLUSTER_LOW_DAMAGE : OFCRA_HE_LOW_DAMAGE
	{
		hit=300;
		explosive=1;
	};

	class rhs_ammo_m77_submunition;
	
	class OFCRA_MLRS_CLUSTER : rhs_ammo_m77_submunition
	{

		hit=300;
		indirectHit=1.911;
		indirectHitRange=8;
		soundFly[] = {"\ofcra_ammo_base\shell.wav",4.56228,1,500};
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


class CfgWeapons
{
	class rockets_230mm_GAT;

	class rhs_weap_mlrs : rockets_230mm_GAT
	{
		magazines[]+={
			"OFCRA_NERFED_HIMARS_CLUSTER"
		};
	};
};