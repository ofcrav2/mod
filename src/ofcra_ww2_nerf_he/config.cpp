class CfgPatches
{
	class ofcra_ww2_nerf_he {
		name = "ofcra_ww2_nerf_he";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"LIB_t34_76",
			"LIB_StuG_III_G",
			"WW2_Assets_c_Weapons_InfantryWeapons_c",
			"WW2_Assets_c_Vehicles_Tanks_c_Churchill",
			"WW2_Assets_c_Vehicles_Wheeled_c_Zis5v",
			"WW2_Assets_c_Vehicles_Winter_c",
			"WW2_Core_c_IF_ZZZ_LastLoaded_c",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class CfgAmmo
{
	class LIB_Bomb_base;

	class LIB_SC50_Bomb: LIB_Bomb_base
	{
		ACE_damageType="explosive";
		deflecting=0; 
		//needed for submunitions to work can't have submunitionType = shotMissile or shotRocket... But those are needed to make work with submunitions nicely (or maybe even ace frag??)
		hit=3000;                //satchel should take down a building
		indirectHit=60;
		indirectHitRange=10;   //lethal to ~ 30m with no body armour

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		ace_frag_skip=1;	
		explosive=1; 	

		//More camera shake .. this is gets added if they stack
		class CamShakeExplode
		{
			power=8;
			duration=6.4000001;
			frequency=20;
			distance=139.599;
		};

		triggerOnImpact=1;
		submunitionConeAngle[]={170,182}; //downwards slightly
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			40
		};
		submunitionAmmo[]={"OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR",0.20,"OFCRA_MEDIUM_VEHICLE_DESTRUCTION",0.8  };
		submunitionInitialOffset[]={0,0,-0.3}; 
		triggerDistance=2.5;
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=50;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;

	};

	class OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR;
	class OFCRA_WW2_37mm_FRAG: OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR
	{
		hit=0.4;
		indirectHit=0.161; 		// minimal damage to infantry
	};


	class LIB_S_37L57_M63;
	class OFCRA_WW2_NERFED_HE_37mm : LIB_S_37L57_M63 {
		ACE_damageType="explosive";
		hit=50;
		indirectHit=0.221;
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
		submunitionAmmo[]={"OFCRA_WW2_37mm_FRAG",1};
		submunitionInitialOffset[]={0,0,1.0}; //100cm above/behind projectile. this is needed to make sure it is not underground
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=24;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;
	};


	class LIB_SprGr34_KWK40_HE;
	class OFCRA_WW2_Artillery_NERFED_HE_Small: LIB_SprGr34_KWK40_HE
	{
		ACE_damageType="explosive";
		hit=100;
		indirectHit=0.231;
		indirectHitRange=7;   


		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		ace_frag_skip=1;		
		explosive=1;



		//More camera shake .. this is gets added if they stack
		class CamShakeExplode
		{
			power=8;
			duration=6.4000001;
			frequency=20;
			distance=139.599;
		};

		triggerOnImpact=1;
		submunitionConeAngle[]={160,174}; //random degree range from verticle ....  0 = veritcle,180 = We want slightly downward so we can hit down hills etc
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			16
		};
		submunitionAmmo[]={"OFCRA_WW2_37mm_FRAG",0.5,"OFCRA_LIGHT_VEHICLE_DESTRUCTION",0.5  };
		submunitionInitialOffset[]={0,0,1.0}; //100cm above/behind projectile. this is needed to make sure it is not underground
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=30;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;

	}

	class LIB_Sh_81_HE;
	class OFCRA_WW2_MORTAR_HE : LIB_Sh_81_HE
	{

		//Helps make a more reliable sound when hitting target to warn infantry this plays from 1km out
		soundFly[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",4.56228,1,800};
		
		//soundFall[] = {"\ofcra_ww2_nerf_he\mortar1.wav",4.56228,1,800};
		soundFakeFall[] = {"soundFakeFall0",0.25,"soundFakeFall1",0.25,"soundFakeFall2",0.25,"soundFakeFall3",0.25};
		soundFakeFall0[] = {"\ofcra_ww2_nerf_he\mortar1.wav",4.56228,1,1000};
		soundFakeFall1[] = {"\ofcra_ww2_nerf_he\mortar2.wav",4.56228,1,1000};
		soundFakeFall2[] = {"\ofcra_ww2_nerf_he\mortar3.wav",4.56228,1,1000};
		soundFakeFall3[] = {"\ofcra_ww2_nerf_he\mortar4.wav",4.56228,1,1000};


		ACE_damageType="explosive";
		hit=200;
		indirectHit=9;			//grenade code 18
		indirectHitRange=6;		//grenade code 7


		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		ace_frag_skip=1;	
		explosive=1; 	

		//More camera shake .. this is gets added if they stack
		class CamShakeExplode
		{
			power=8;
			duration=6.4000001;
			frequency=20;
			distance=139.599;
		};

		triggerOnImpact=1;
		submunitionConeAngle[]={160,174}; //random degree range from verticle ....  0 = veritcle,180 = We want slightly downward so we can hit down hills etc
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			16
		};
		submunitionAmmo[]={"OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR",0.5,"OFCRA_LIGHT_VEHICLE_DESTRUCTION",0.5  };
		submunitionInitialOffset[]={0,0,-0.7}; //70cm above/behind projectile. this is needed to make sure it is not underground
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=35;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;
	};

	
	class LIB_Bullet_AA_base;
	class LIB_B_37mm_AA: LIB_Bullet_AA_base
	{
		hit=45;		//from 40  as we are missing some indirect damage
		ACE_damageType="explosive";
		ace_frag_skip=1;
		ace_frag_force=0;
		ace_frag_enabled=0;

		indirectHit=0.3011;  //From 6, should KO infantry
		indirectHitRange=2; //From 4				
	};

	// German AA
	//["LIB_80x_SprGr_FlaK_38_APHE_T",
	class LIB_4x_SprGr_FlaK_38: LIB_Bullet_AA_base
	{
		hit=45;		//from 40  as we are missing some indirect damage
		ACE_damageType="explosive";
		ace_frag_skip=1;
		ace_frag_force=0;
		ace_frag_enabled=0;

		indirectHit=0.2011;  //From 4, should KO infantry quickly kill after a bit
		indirectHitRange=2; //From 3				
	};


	class LIB_Bullet_Plane_base;
	class LIB_B_20x82_Ball: LIB_Bullet_Plane_base
	{
		hit=20;
		indirectHit=0.241;
		indirectHitRange=2;
	};

	class SmokeShell;
	class OFCRA_WW2_MortarSmoke : SmokeShell
	{
		effectsSmoke="OFCRA_MortarSmokeEffect";
	};

	class Smoke_82mm_AMOS_White;
	class OFCRA_WW2_MortarSmoke_Main : Smoke_82mm_AMOS_White
	{
		submunitionAmmo="OFCRA_WW2_MortarSmoke";
	}
};

class CfgMagazines
{
	class LIB_8Rnd_81mmHE_GRWR34;
	class OFCRA_WW2_MORTAR_SINGLE: LIB_8Rnd_81mmHE_GRWR34
	{
		displayName="OFCRA HE 81mm Mortar Round";
		ammo="OFCRA_WW2_MORTAR_HE";
		count=1;
		displayNameShort="OFCRA 81mm HE";
	};
	
	//For Stug III and  Pak 40 and Pz IV
	class LIB_HE_VehicleMagazine_base;
	class LIB_SprGr34_KWK40_HE: LIB_HE_VehicleMagazine_base
	{
		displayName="OFCRA KWK40 HE";
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
		LIB_replace = "OFCRA_WW2_Artillery_NERFED_HE_Small";
	};
	class LIB_30x_SprGr34_StuK40_HE: LIB_SprGr34_KWK40_HE
	{
		displayName="OFCRA Pak40 HE";
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
		LIB_replace = "OFCRA_WW2_Artillery_NERFED_HE_Small";
	};
	class LIB_50x_SprGr34_Pak40_HE: LIB_SprGr34_KWK40_HE
	{
		displayName="OFCRA Pak40 HE";
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
		LIB_replace = "OFCRA_WW2_Artillery_NERFED_HE_Small";
	};


	//For Stuka and PE2
	class LIB_Bomb_VehicleMagazine_base;
	class LIB_1Rnd_SC50: LIB_Bomb_VehicleMagazine_base
	{
		displayName="OFCRA SC50 Bomb";
		ammo="LIB_SC50_Bomb";	
	};

	//For T34 76
	class LIB_OF350_HE: LIB_HE_VehicleMagazine_base
	{
		displayName="OFCRA OF-350 HE";
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
	};

	//For churchill and cromwell
	class LIB_M42A1_M1_HE: LIB_HE_VehicleMagazine_base
	{
		displayName="OFCRA M42A1 M1 HE";
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
	};

	//Firefly
	class LIB_Shell_76L55_M42_HE: LIB_HE_VehicleMagazine_base
	{
		displayName="OFCRA M42 HE";
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
	};

	//Tiger
	class LIB_SprGr_KwK36_HE: LIB_HE_VehicleMagazine_base
	{
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
		displayName="OFCRA KwK36 HE";
	};

	//Panther
	class LIB_SprGr42_KwK42_HE: LIB_HE_VehicleMagazine_base
	{
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
		displayName="OFCRA KwK42 HE";
	};

	//For T34 85 and su85
	class LIB_O365_HE: LIB_HE_VehicleMagazine_base
	{
		displayName="OFCRA OF-350 HE";
		ammo="OFCRA_WW2_Artillery_NERFED_HE_Small";
	};

	class 8Rnd_82mm_Mo_shells;
	class 8Rnd_82mm_Mo_Smoke_white: 8Rnd_82mm_Mo_shells
	{
		ammo="OFCRA_WW2_MortarSmoke_Main";
	};

	class LIB_81mm_GRWR34_SmokeShell: 8Rnd_82mm_Mo_Smoke_white
	{
		displayName="OFCRA Smoke";
		submunitionAmmo="OFCRA_WW2_MortarSmoke";
	};

    class LIB_Shell_37L57_M63_HE : LIB_HE_VehicleMagazine_base
	{
		displayName = "OFCRA 37mm M63 HE";
		ammo="OFCRA_WW2_NERFED_HE_37mm";

	};

	class LIB_30x_37L57_M63_HE : LIB_Shell_37L57_M63_HE
	{
		displayName = "OFCRA 37mm M63 HE";
		ammo="OFCRA_WW2_NERFED_HE_37mm";
	};

	//Armoured cars BA-10
	// possible race condition on loading this see how it goes
	class FA_19x_UO243_HE: LIB_30x_37L57_M63_HE
	{
		displayName = "OFCRA UO-243 HE";
		ammo="OFCRA_WW2_NERFED_HE_37mm";
	};
	
};



class Mode_SemiAuto;
class CfgWeapons
{
	class LIB_MortarCannon_base;
	class LIB_GRWR34: LIB_MortarCannon_base
	{
		magazines[]+={ "OFCRA_WW2_MORTAR_SINGLE" };
		class Single1: Mode_SemiAuto
		{	
			//IFA default 6
			artilleryDispersion=1.7;  //vanilla mortar = 1.9, artillery base = 7.2
		};
		class Single2: Single1
		{
			//IFA default 8
			artilleryDispersion=1.8;
		};
		class Single3: Single1
		{
			//IFA default 10
			artilleryDispersion=2;  
		};
	};
};


