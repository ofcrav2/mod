class CfgPatches
{
	class ofcra_ammo_base_vls {
		name = "ofcra_ammo_base";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_ammo_base",
		};
		units[] = {
			"OFCRA_MRLS_VLS"
		};
		weapons[] = {};
		ammo[]={};
	};
};

class CfgAmmo
{

	class ammo_Missile_Cruise_01_Cluster;

	class OFCRA_Missile_Cruise_01_Cluster: ammo_Missile_Cruise_01_Cluster
	{
		author="wombat";
		displayName="OFCRA Cruise Missile Cluster";
		triggerDistance=150; 
		submunitionParentSpeedCoef=1;
		submunitionInitSpeed=0; 
		effectsMissile="OFCRA_CruiseMissile";
		maxSpeed=150; //from 		maxSpeed=194.444;
		submunitionConeAngle=35;
		submunitionConeType[]=
		{
			"randomcenter",
			50
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

	class OFCRA_AUTOCANNON_HE;
	class OFCRA_MLRS_CLUSTER_LOW_DAMAGE : OFCRA_AUTOCANNON_HE
	{
		hit=300;
		indirectHit=1.6; 
		indirectHitRange=20;
		caliber=5; //same as 30mm GAU8
		simulation="shotMissile";
		effectsMissile="OFCRA_CruiseMissile_CLUSTER";
	};

	
	class OFCRA_MLRS_CLUSTER : OFCRA_MLRS_CLUSTER_LOW_DAMAGE
	{
		hit=300;
		indirectHit=1200;
		indirectHitRange=0.7;
	};

	class OFCRA_ARTILLERY_HE_BASE;

//This is to kill light vehicles with frag
// This will also likely kill infantry standing up
	class OFCRA_MLRS_CLUSTER_FRAG : OFCRA_ARTILLERY_HE_BASE
	{
		hit=300;
		indirectHit=1.911;
		indirectHitRange=3.5;
		submunitionAmmo[]={"OFCRA_MEDIUM_VEHICLE_DESTRUCTION",1.00 };
		simulation="shotMissile";
		effectsMissile="OFCRA_CruiseMissile_CLUSTER";
	};

};

class CfgMagazines
{
	class magazine_Missiles_Cruise_01_x18;

	class OFCRA_VLS_MAGAZINE: magazine_Missiles_Cruise_01_x18
	{
		author="wombat";
		displayName="OFCRA VLS Cruise Missiles x18";
		ammo="OFCRA_Missile_Cruise_01_Cluster";
	};
};


class CfgWeapons
{
	class weapon_VLS_01;

	class OFCRA_VLS_WEAPON: weapon_VLS_01
	{
		author="wombat";
		displayName="OFCRA VLS";
		reloadTime=5;
		magazines[]=
		{
			"OFCRA_VLS_MAGAZINE",
		};
	};
};

class CfgVehicles
{

	class StaticMGWeapon;
	
	class B_Ship_MRLS_01_base_F: StaticMGWeapon
	{
		class Turrets;
	};

	class B_Ship_MRLS_01_F: B_Ship_MRLS_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};

	class OFCRA_MRLS_VLS : B_Ship_MRLS_01_F
	{
		author="wombat";
		displayName="OFCRA MRLS VLS";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OFCRA_VLS_WEAPON"
				};
				magazines[]=
				{
					"OFCRA_VLS_MAGAZINE"
				};
			};
		};
		isUav=0;

	};
};



class OFCRA_CruiseMissile
{
	class Light1
	{
		simulation="light";
		type="CruiseMissileLight";
		position[]={0,0,-2};
		intensity=1;
		interval=1;
		lifeTime=1;
	};

	class OFCRRA_Back_Smoke
	{
		simulation="particles";
		type="OFCRA_RocketBacksmoke";
		enabled=1;
	};
};


class OFCRA_CruiseMissile_CLUSTER
{
	class Light1
	{
		simulation="light";
		type="CruiseMissileLight";
		position[]={0,0,-2};
		intensity=1;
		interval=1;
		lifeTime=1;
	};



	class OFCRRA_Back_Smoke_small
	{
		simulation="particles";
		type="OFCRA_RocketBacksmoke_small";
		enabled=1;
	};



};

class CfgCloudlets
{
	class RocketBacksmokeRPG;

	class OFCRA_RocketBacksmoke: RocketBacksmokeRPG
	{
		interval=0.01;
		lifeTime=2.5;
		size[]={0.40000001,27};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.3},
			{0.80000001,0.80000001,0.80000001,0.0}
		};
		colorVar[] = {0.2, 0.2, 0.2, 0.2};	
	};

	class OFCRA_RocketBacksmoke_small: OFCRA_RocketBacksmoke
	{
		interval=0.05;
		lifeTime=1.5;
		size[]={0.20000001,10};
		color[]=
		{
			{0.80000001,0.80000001,0.80000001,0.3},
			{0.80000001,0.80000001,0.80000001,0.0}
		};
		colorVar[] = {0.2, 0.2, 0.2, 0.2};	
	};

};