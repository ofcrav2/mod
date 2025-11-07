class CfgPatches
{
	class ofcra_rhs_usf_himars {
		name = "ofcra_rhs_usf_himars";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"rhsusf_main_loadorder",
			"ofcra_ammo_base",
			"ofcra_ammo_base_vls"
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

		author="wombat";
		displayName="OFCRA Cruise Missile Cluster";
		triggerDistance=150; 
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0; 
		effectsMissile="OFCRA_CruiseMissile";

		submunitionConeAngle=35;
		submunitionConeType[]=
		{
			"randomcenter",
			40
		};

		submunitionAmmo[]=
		{
			"OFCRA_MLRS_CLUSTER_LOW_DAMAGE",
			0.65,
			"OFCRA_MLRS_CLUSTER",
			0.15,
			"OFCRA_MLRS_CLUSTER_FRAG",
			0.20
		};
	
		
		soundFly[] = {"\ofcra_ammo_base\shell.wav",4.99,1,5000};

		class Cruise
		{
			preferredFlightAltitude=800;
			//horizontal distance when it starts to home in
			//this always seems to speed up
			lockDistanceToTarget=50; 
		};
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