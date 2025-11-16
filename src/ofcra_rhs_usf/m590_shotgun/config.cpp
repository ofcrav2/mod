class CfgPatches
{
	class ofcra_rhs_usf_m590_shotgun {
		name = "ofcra_rhs_usf_m590_shotgun";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"rhsusf_main_loadorder",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {
			"OFCRRA_M590"
		};
		ammo[]={};

	};
};




class CfgAmmo
{


	class rhs_ammo_12g_00buckshot;
	class OFCRA_12g_birdshot : rhs_ammo_12g_00buckshot
	{
		author="OFCRA Wombat";
		submunitionAmmo="OFCRA_12g_birdshot_pellet";
		submunitionConeAngle=2.8;  //from 0.95
		triggerSpeedCoef[]={0.87999997,1};
		triggerTime=0.00003   //from 0.0001
		submunitionConeType[]=
		{
			"poissondisccenter",
			46
		};
	};

	class OFCRA_12g_buckshot : rhs_ammo_12g_00buckshot
	{
		author="OFCRA Wombat";
		submunitionAmmo="OFCRA_12g_00buckshot_pellet";
		triggerSpeedCoef[]={0.87999997,1};
		submunitionConeAngle=1.2;  //from 0.95
		submunitionConeType[]=
		{
			"poissondisc",
			11
		};
	};

	class rhs_ammo_12g_slug;
	class OFCRA_12g_slug : rhs_ammo_12g_slug
	{
		author="OFCRA Wombat";
		hit=41; // from 34.5
		caliber=0.9048; // from 0.3048
	};

	class rhs_ammo_12g_HE;
	class OFCRA_12g_HE : rhs_ammo_12g_HE
	{
		author="OFCRA Wombat";
		caliber=0.4048; // from 0.2
		explosive=0.5;      
		hit=15;
		indirectHit=1.043;        // from 1.143
		indirectHitRange=3.1;   //from 1.9
	};


	class rhs_ammo_12g_00buckshot_pellet;
	class OFCRA_12g_00buckshot_pellet : rhs_ammo_12g_00buckshot_pellet
	{
		author="OFCRA Wombat";
		hit=8.75;  // from 4.75
		caliber=0.74; // from 0.23999999	
	};
	class OFCRA_12g_birdshot_pellet : rhs_ammo_12g_00buckshot_pellet
	{
		author="OFCRA Wombat";
		hit=1.75;
		caliber=0.149;   //this often does not even pen clothing
	};
};

class CfgMagazines
{

	class rhsusf_8Rnd_00Buck;
	class OFCRA_8Rnd_Birdshot : rhsusf_8Rnd_00Buck
	{
		author="OFCRA Wombat";
		ammo="OFCRA_12g_birdshot";
		displayName="8Rnd Birdshot";
		displayNameShort="Birdshot";
		description="Birdshot";
		descriptionShort="Birdshot";
		initSpeed=450; //from 403
	};

	class OFCRA_8rnd_buck : rhsusf_8Rnd_00Buck
	{
		author="OFCRA Wombat";
		ammo="OFCRA_12g_buckshot";
		displayName="8Rnd Buckshot";
		description="Buckshot";
		descriptionShort="Buckshot";
		initSpeed=450; //from 403
	};

	class rhsusf_8Rnd_Slug;
	class OFCRA_8Rnd_Slug : rhsusf_8Rnd_Slug
	{
		author="OFCRA Wombat";
		ammo="OFCRA_12g_slug";
		displayName="8Rnd Slug";
		description="Slug";
		descriptionShort="Slug";
		initSpeed=570;  //from 475

	};

	class rhsusf_8Rnd_HE;
	class OFCRA_8Rnd_HE : rhsusf_8Rnd_HE
	{
		author="OFCRA Wombat";
		ammo="OFCRA_12g_HE";
		displayName="8Rnd HE";
		description="High Explosive";
		descriptionShort="HE";
		initSpeed=140;  //from 150
	};
};


class CfgWeapons
{

	class rhs_weap_M590_5RD;
	class rhs_weap_M590_8RD : rhs_weap_M590_5RD
	{
		class Single;
	};

	class OFCRA_M590 : rhs_weap_M590_8RD
	{
		description = "M590 slamfire"
		displayname="M590 (Slamfire)";
		author="OFCRA Wombat";
		magazines[]=
		{
			"OFCRA_8Rnd_Birdshot",
			"OFCRA_8rnd_buck",
			"OFCRA_8Rnd_Slug",
			"OFCRA_8Rnd_HE"
		};
		magazineWell[]=	{};
		inertia=0.34999999; // from 0.6
		dexterity=2.0; //from 1.4


		class Single: Single
		{
			reloadTime=0.30000002;
		};

		recoil="OFCRA_recoil_m590";
	};
};

class CfgRecoils 
{
	class rhs_recoil_m590;

	class OFCRA_recoil_m590: rhs_recoil_m590
	{
		muzzleOuter[]={0.15000001,0.6,0.30000001,0.3};
		kickBack[]={0.040000006,0.040000004};
		permanent=0.02;
		temporary=0.03;
	};
}