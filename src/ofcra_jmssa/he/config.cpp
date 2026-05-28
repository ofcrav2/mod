class CfgPatches
{
	class ofcra_jmssa_he {
		name = "ofcra_jmssa_he";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_ammo_base",
			"JMSSA_veh_gr",
			"JMSSA_veh_gr_apc"

		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class CfgAmmo
{

	///All the AA HE tend to inherit from this
	class JMSSA_Bullet_AA_Ball;
	class JMSSA_20x138_AA_Ball : JMSSA_Bullet_AA_Ball
	{
		indirectHit=0.3; // from 6
		indirectHitRange=3.2;  //from 1.6
	};

	class OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR;
	class OFCRA_JMSSA_HE_FRAG: OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR
	{
		hit=1.2;
		indirectHit=0.5; 		// minimal damage to infantry
	};



	class JMSSA_75mm_qf75_m48HE_Shell;
	class OFCRA_JMSSA_HE: JMSSA_75mm_qf75_m48HE_Shell
	{
		indirectHit=0.7;
		indirectHitRange=5;  


		ACE_damageType="explosive";
		hit=100;

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		ace_frag_skip=1;		
		explosive=1;


		triggerOnImpact=1;
		submunitionConeAngle[]={160,174}; //random degree range from verticle ....  0 = veritcle,180 = We want slightly downward so we can hit down hills etc
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			16
		};
		submunitionAmmo[]={"OFCRA_JMSSA_HE_FRAG",0.5,"OFCRA_LIGHT_VEHICLE_DESTRUCTION",0.5  };
		submunitionInitialOffset[]={0,0,1.0}; //100cm above/behind projectile. this is needed to make sure it is not underground
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=30;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;
	};

	class JMSSA_37mm_kwk36_HE_Shell;
	class OFCRA_JMSSA_37mm_HE :  JMSSA_37mm_kwk36_HE_Shell
	{
		ACE_damageType="explosive";
		hit=50;
		indirectHit=0.55;
		indirectHitRange=3;   


		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		ace_frag_skip=1;		
		explosive=1;


		triggerOnImpact=1;
		submunitionConeAngle[]={160,174}; //random degree range from verticle ....  0 = veritcle,180 = We want slightly downward so we can hit down hills etc
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			4
		};
		submunitionAmmo[]={"OFCRA_JMSSA_HE_FRAG",1};
		submunitionInitialOffset[]={0,0,1.0}; //100cm above/behind projectile. this is needed to make sure it is not underground
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=24;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;
	};
};

class CfgMagazines
{
	class VehicleMagazine;

	class JMSSA_4Rnd_75mm_ob7518_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 75mm HE";
		ammo="OFCRA_JMSSA_HE";
	};

	class JMSSA_20Rnd_75mm_ob7534_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 75mm HE";
		ammo="OFCRA_JMSSA_HE";
	};

	class JMSSA_10Rnd_75mm_qf75_m48HE_shells : VehicleMagazine
	{
		displayName = "OFCRA 75mm HE";
		ammo="OFCRA_JMSSA_HE";
	};

	class JMSSA_10Rnd_37mm_kwk36_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 37mm HE";
		ammo="OFCRA_JMSSA_37mm_HE";
	};

	class JMSSA_10Rnd_37mm_kwk38t_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 37mm HE";
		ammo="OFCRA_JMSSA_37mm_HE";
	};

	class JMSSA_10Rnd_37mm_m5_m63_st_mag : VehicleMagazine
	{
		displayName = "OFCRA 37mm HE";
		ammo="OFCRA_JMSSA_37mm_HE";
	};

	class JMSSA_10Rnd_37mm_pak36_HE_st_mag : VehicleMagazine
	{
		displayName = "OFCRA 37mm HE";
		ammo="OFCRA_JMSSA_37mm_HE";
	};

    //For now 50mm HE is going to be same as 37mm HE
	class JMSSA_10Rnd_50mm_kwkL42_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 50mm HE";
		ammo="OFCRA_JMSSA_37mm_HE"; 
	};

	class JMSSA_10Rnd_50mm_SprGr38_st_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 50mm HE";
		ammo="OFCRA_JMSSA_37mm_HE"; 
	};

	class JMSSA_5Rnd_47mm_can4732_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 47mm HE";
		ammo="OFCRA_JMSSA_37mm_HE";
	};


	class JMSSA_10Rnd_55inch_140mm_HE_shells : VehicleMagazine
	{
		displayName = "OFCRA HE";
		ammo="OFCRA_JMSSA_HE"; 
	};

	class JMSSA_10Rnd_57mm_6pdr_mk10T_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 57mm HE";
		ammo="OFCRA_JMSSA_HE"; 
	};

	class JMSSA_10Rnd_88mm_SprGr43_Pak432_HE : VehicleMagazine
	{
		displayName = "OFCRA 88mm HE";
		ammo="OFCRA_JMSSA_HE";
	};
	
	class JMSSA_10Rnd_can7527_75mm_HE_shells : VehicleMagazine
	{
		displayName = "OFCRA 75mm HE";
		ammo="OFCRA_JMSSA_HE";
	};

	class JMSSA_5Rnd_75mm_ig18_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA 75mm HE";
		ammo="OFCRA_JMSSA_HE";
	};
	class JMSSA_5Rnd_95mm_37inch_HE_mag : VehicleMagazine
	{
		displayName = "OFCRA HE";
		ammo="OFCRA_JMSSA_HE";
	};


};

