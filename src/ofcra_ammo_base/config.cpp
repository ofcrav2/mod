class CfgPatches
{
	class ofcra_ammo_base {
		name = "ofcra_ammo_base";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ace_frag",
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};

class CfgAmmo
{
	class BulletBase;

	class OFCRA_LIGHT_VEHICLE_DESTRUCTION : BulletBase {
		deflecting=0;    					//can't be disrupted !! important without this submunition can get destroyed by parent
		ace_vehicle_damage_incendiary=0; 	//set fire to vehicles
		caliber=2;                      	//should pen light vehicles only but because submunitions are moving very slowly this need to be high penetration is caliber * speed... SHould do nothing to BMP2
		hit=100;   
		indirectHitRange=0;
		indirectHit=0; 
		typicalSpeed=35;                	//needs to match the speed of the submunition below as with explosive=0 damage is based on velocity... This also seems to effect penetration of armour

		//put to zero to better control penetration and explosion graphics
		explosive=0;                    	//this controls veolicty does not matter.... docs say there is a quirk with armour penetration of explosive i set above 0.7 though also explosions effects appear if this is non-zero
		ACE_damageType="bullet";        	//does nice damage to soft vehciles, no explosion animation / particles on hit
	}

	class OFCRA_MEDIUM_VEHICLE_DESTRUCTION : OFCRA_LIGHT_VEHICLE_DESTRUCTION {
		caliber=4;
		hit=300;
	}

	class OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR: BulletBase
	{
		ACE_damageType="explosive";
		hit=0.5;
		deflecting=0;    		//can't be disrupted !! important without this submunition can get destroyed by parent
		indirectHit=0.201; 		// minimal damage to infantry
		indirectHitRange=12;
		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		ace_frag_skip=1;		
		explosive=1;    
		CraterEffects="";
		explosionEffects="";
		airFriction=-0.7; //ace_frag_small_HD = -0.045 
		caliber=0.6; 
	};

	class Smoke_82mm_AMOS_White;
	class OFCRA_SMOKE_MAIN: Smoke_82mm_AMOS_White
	{
		submunitionAmmo="OFCRA_SMOKE_SHELL";
	};

	class SmokeShellArty;
	class OFCRA_SMOKE_SHELL : SmokeShellArty
	{
		effectsSmoke="OFCRA_MortarSmokeEffect";
	}


	class OFCRA_HE_LOW_DAMAGE : OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR
	{
		hit=2;
		indirectHit=1.6; 
		indirectHitRange=9;	
	};


	class OFCRA_FRAG_BIG : OFCRA_LIGHT_VEHICLE_DESTRUCTION {
		hit=11.47;
		typicalSpeed=800;
		caliber=0.741151; 
		airFriction=-0.099999998; //very high drag
	}

	class OFCRA_FRAG_SMALL : OFCRA_FRAG_BIG {
		hit=1.901;
		caliber=0.25;
		airFriction=-0.199999998; //very very high drag
	}

	class B_19mm_HE;
	class B_30mm_HE: B_19mm_HE
	{
		displayNameShort="OFCRA AUTOCANNON HE";
		displayName="OFCRA AUTOCANNON HE";

		indirectHit=1.911;
		indirectHitRange=2.601;   

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;
	}
	class B_30mm_MP: B_30mm_HE
	{
		displayNameShort="OFCRA AUTOCANNON HE";
		displayName="OFCRA AUTOCANNON HE";

		indirectHit=1.911;
		indirectHitRange=2.601;   

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;
	}

	class B_40mm_GPR: B_30mm_HE
	{
		displayNameShort="OFCRA AUTOCANNON HE";
		displayName="OFCRA AUTOCANNON HE";

		indirectHit=1.911;
		indirectHitRange=3.301;   

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;
	}

	class OFCRA_AUTOCANNON_HE: B_30mm_HE
	{
		displayNameShort="OFCRA AUTOCANNON HE";
		displayName="OFCRA AUTOCANNON HE";

		indirectHit=1.911;
		indirectHitRange=2.601;   

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;
	};

	class Sh_155mm_AMOS;
	class OFCRA_ARTILLERY_HE_BASE: Sh_155mm_AMOS
	{
		displayNameShort="OFCRA 15cm HE";
		displayName="OFCRA 15cm HE";
		hit=3600;                //Take out most altis buildings in 2-4 direct hits, seems to be almost completely in effective against M1A1, OFCRA_LIGHT_VEHICLE_DESTRUCTION also damage buildings
		//if main shell does blast damage it destroys submunitions unless they have delecting=0
		// just enough to knock people out

		//https://community.bistudio.com/wiki/Arma_3:_Damage_Description
		// " iH=85 is enough to kill any human target without bodyarmor (iH_mod required = 0.33) within 4xiHR. "
		// large radius this means potentially it can go out to 4 times radius with more damage
		// With damage 100 we would have
		// 4 times = 0.39
		// 3 times = 1.5      
		// 2 times = 6.25
		indirectHit=18;			//Grenade default is 18 
		indirectHitRange=4.5;   //Grenade is 7 

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;

		soundFly[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",4.56228,1,800};
		
		triggerOnImpact=1;
		submunitionConeAngle[]={160,174}; //random degree range from verticle ....  0 = veritcle,180 = We want slightly downward so we can hit down hills etc
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			40
		};
		submunitionAmmo[]={"OFCRA_MEDIUM_VEHICLE_DESTRUCTION",0.75,"OFCRA_HE_LOW_DAMAGE",0.25  };
		submunitionInitialOffset[]={0,0,-1.0}; //100cm above/behind projectile. this is needed to make sure it is not underground
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=60;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;


		//as the explosion is nerfed we want to make the effects bigger to compensate
		CraterEffects="OFCRA_CRATER";
		ExplosionEffects="OFCRA_EXPLOSION";
	};

	cl


	class OFCRA_12cm_BASE: OFCRA_ARTILLERY_HE_BASE
	{

		submunitionConeType[]=
		{
			"randomupcone",
			20
		};
		hit=100;
		indirectHit=10;
		indirectHitRange=3;
		caliber=12;
	}

	class OFCRA_8cm_LOW_ARMOUR_BASE: OFCRA_12cm_BASE
	{
		submunitionAmmo[]={"OFCRA_LIGHT_VEHICLE_DESTRUCTION",0.75,"OFCRA_HE_LOW_DAMAGE",0.25  };
		submunitionInitSpeed=30; 
		indirectHit=4.9;
		indirectHitRange=6.3;
		caliber=8;
	}


	class OFCRA_8cm_NO_ARMOUR_BASE: OFCRA_8cm_LOW_ARMOUR_BASE
	{
		submunitionAmmo[]={"OFCRA_HE_LOW_DAMAGE_SMALL_NO_ARMOUR",0.5,"OFCRA_LIGHT_VEHICLE_DESTRUCTION",0.5  };
		indirectHit=0.241;
		indirectHitRange=9;
	}

	class OFCRA_12cm_HEAT: OFCRA_12cm_BASE
	{
		submunitionConeType[]=
		{
			"randomupcone",
			10
		};
		submunitionInitSpeed=20; 
		hit=600;
		indirectHit=8;
		indirectHitRange=2;
		caliber=40;
	}

	//Maybe should be in rhs afrf folder?
	class B_35mm_AA;
	class RHS_ammo_23mm_AA: B_35mm_AA
    {
        hit=85;                // from 60,  with lowered HE damage this needs to go up 
		indirectHit=1.911;      // from 40
		indirectHitRange=2.501; // from 1.8
        explosive=0.10000002;   // from 0.6  By reducing this then it becomes less effective at longer ranges
		caliber=1.1; 			// from 1.1  
		airFriction=-0.001		// from airFriction=-0.00047100001;
    };
};


class CfgMagazines
{
	class VehicleMagazine;
	class OFCRA_ARTILLERY_HE_MAG_SINGLE: VehicleMagazine	
	{
		ammo="OFCRA_ARTILLERY_HE_BASE";
		count=1;
		displayNameShort="OFCRA 15cm HE";
		displayName="OFCRA 15cm HE";
	};

	class OFCRA_ARTILLERY_HE_MAG_32: OFCRA_ARTILLERY_HE_MAG_SINGLE	
	{
		count=32; //32 seems to be standard for artillery
	};


	class 8Rnd_82mm_Mo_Smoke_white;
	class OFCRA_SMOKE_MAGAZINE: 8Rnd_82mm_Mo_Smoke_white
	{
		initSpeed=600;
		displayName="OFCRA Smoke";
		displayNameShort="OFCRA Smoke";
		ammo="OFCRA_SMOKE_MAIN";
		count=32; 
	}

	class 32Rnd_155mm_Mo_shells: VehicleMagazine
	{
		displayName="OFCRA 15cm HE";
		displayNameShort="OFCRA 15cm HE";
		ammo="OFCRA_ARTILLERY_HE_BASE";
		count=32; 
	};
};


class Mode_SemiAuto;
class CfgWeapons
{
	class CannonCore;
	class mortar_155mm_AMOS: CannonCore
	{
		magazines[]+={
			"OFCRA_ARTILLERY_HE_MAG_SINGLE","OFCRA_ARTILLERY_HE_MAG_30"
		};
		class Single1: Mode_SemiAuto
		{
			artilleryDispersion=1.7999998;  //mortar = 1.9, artillery base = 7.2
		};
	}


	

	class rhs_weap_azp23: CannonCore
	{
		class manual: CannonCore
		{
		}
	}

}

class OFCRA_EXPLOSION
{
	class Light1
	{
		simulation="light";
		type="GrenadeExploLight";
		position[]={0,0,0};
		intensity=0.0099999998;
		interval=1;
		lifeTime=1;
	};
	class MortarExp1
	{
		simulation="particles";
		type="MortarExp";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MortarSmoke1
	{
		simulation="particles";
		type="CloudBigDark";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};


class OFCRA_CRATER
{
	class ShellSmokeTrail1
	{
		simulation="particles";
		type="ShellSmokeTrail1";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellSmokeTrail2
	{
		simulation="particles";
		type="ShellSmokeTrail2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellSmokeTrail3
	{
		simulation="particles";
		type="ShellSmokeTrail3";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShellStones
	{
		simulation="particles";
		type="DirtBig";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class MissileCircleDust
	{
		simulation="particles";
		type="CircleDustBig";
		enabled="distToWater interpolate [0.0,0.01,-1,1]";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.25;
	};
};


class OFCRA_MortarSmokeEffect
{


	class SmokeShell
	{
		simulation="particles";
		type="SmokeShellWhite";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2
	{
		simulation="particles";
		type="SmokeShellWhite2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};


   	class OFCRA_SmokeShellWhite
	{
		simulation="particles";
		type="OFCRA_SmokeShellWhite";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};



};


class CfgCloudlets
{
	class SmokeShellWhiteSmall;
	class OFCRA_SmokeShellWhite: SmokeShellWhiteSmall
	{
		weight=1.271; //from 1.26 ... air is 1.293
		interval=0.05;  //time between spawning particles from 0.2
		lifeTime=30; //per particle life,  from 14
		moveVelocity[]={0.1,0.25000001,0.1};
		size[]={1.66,6.5,27};
		MoveVelocityVar[]={0.5,0.15,0.5};
		rubbing=0.02;  //less effected by wind than normal smoke (0.05)

		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.9},
			{0.69999999,0.69999999,0.69999999,0.85},
			{0.69999999,0.69999999,0.69999999,0.8},
			{0.69999999,0.69999999,0.69999999,0.7},
			{0.69999999,0.69999999,0.69999999,0.6},
			{0.69999999,0.69999999,0.69999999,0.4},
			{0.69999999,0.69999999,0.69999999,0.2}
		};
	};




};

class CfgMarkerColors
{
	class Default;

	class ColorTree: Default
	{
		color[]={0.74,0.68,0.34,0.8};
		name="ColorTree";
		scope=2;
	};
};
