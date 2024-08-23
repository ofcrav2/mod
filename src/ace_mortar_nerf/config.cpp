class CfgPatches
{
	class ofcra_ace_csw_nerf {
		name = "ofcra_mortar_nerf";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ace_common",
			"ace_frag",
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class CfgAmmo
{

	class Sh_155mm_AMOS;
	class BulletBase;

	class OFCRA_MORTAR_FRAG : BulletBase {
		deflecting=0;    //can't be disrupted !! important without this submunition can get destroyed by parent
		ace_vehicle_damage_incendiary=0; //set fire to vehicles
		caliber=7;                      //should pen light vehicles only but because submunitions are moving very slowly this need to be high penetration is caliber * speed... SHould do nothing to BMP2
		hit=5;                         //one solid hit should kill soft vehicle. penetration means this does nothing to armour. Keeping this high means we can have fewer sub munitions flying around which should be better performance
		indirectHitRange=0;
		indirectHit=0; 
		typicalSpeed=60;                //needs to match the speed of the submunition below as with explosive=0 damage is based on velocity... This also seems to effect penetration of armour

		//put to zero to better control penetration and explosion graphics
		explosive=0;                    //this controls veolicty does not matter.... docs say there is a quirk with armour penetration of explosive i set above 0.7 though also explosions effects appear if this is non-zero
		ACE_damageType="bullet";        //does nice damage to soft vehciles, no explosion animation / particles on hit

		airFriction=-0.1;  //ace_frag_small_HD = -0.045 
	}
        

	class OFCRA_MORTAR_HE_LOW_DAMAGE_SMALL: BulletBase
	{
		//ACE_damageType="explosive";
		hit=5;
		deflecting=0;    //can't be disrupted !! important without this submunition can get destroyed by parent
		indirectHit=1.4; // < want to just cause bleeding. With recent ACE settings 1.01 = only bruises, 1.4= KOs, 1.2= some bleeding
		indirectHitRange=6;
		explosive=1;    //latest ACE update seems to refuse to do indirect damage going through any body armor if explosive=0
		//no effects from the submunitions
		CraterEffects="";
		explosionEffects="";
		//airFriction=-0.1; //ace_frag_small_HD = -0.045 
	};


	class Sh_82mm_AMOS: Sh_155mm_AMOS
	{
		displayNameShort="OFCRA 82mm HE";
		displayName="OFCRA 82mm HE";
		


		//https://community.bistudio.com/wiki/Arma_3:_Damage_Description
		// " iH=85 is enough to kill any human target without bodyarmor (iH_mod required = 0.33) within 4xiHR. "
		// large radius this means potentially it can go out to 4 times radius with more damage
		// With damage 100 we would have
		// 4 times = 0.39
		// 3 times = 1.5      
		// 2 times = 6.25

		hit=5;              //from 165 we don'y want to take out APC with direct hits even
		caliber=7;    
		indirectHit=5;			//Grenade default is 18 
		indirectHitRange=7;   //Grenade is 7 but see above higher damage gives higher range, plus there are the extra frags etc

		ace_frag_force=0;       //disable ace frag to make things more consistent
		ace_frag_enabled=0;
		explosive=1;

		soundFly[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",4.56228,1,800};
		
		soundFakeFall[] = {"soundFakeFall0",0.25,"soundFakeFall1",0.25,"soundFakeFall2",0.25,"soundFakeFall3",0.25};
		soundFakeFall0[] = {"a3\Sounds_F\weapons\falling_bomb\fall_01",4.56228,1,1000};
		soundFakeFall1[] = {"a3\Sounds_F\weapons\falling_bomb\fall_02",4.56228,1,1000};
		soundFakeFall2[] = {"a3\Sounds_F\weapons\falling_bomb\fall_03",4.56228,1,1000};
		soundFakeFall3[] = {"a3\Sounds_F\weapons\falling_bomb\fall_04",4.56228,1,1000};
		
		
		triggerOnImpact=1;
		submunitionConeAngle[]={170,179}; //random degree range from verticle ....  0 = veritcle,180 = We want slightly downward so we can hit down hills etc
		submunitionConeAngleHorizontal=720;
		submunitionAutoleveling=1;
		submunitionConeType[]=
		{
			"randomupcone",
			32
		};
		submunitionAmmo[]={"OFCRA_MORTAR_FRAG",0.75,"OFCRA_MORTAR_HE_LOW_DAMAGE_SMALL",0.25  };
		submunitionInitialOffset[]={0,0,-1.0}; //100cm above/behind projectile. this is needed to make sure it is not underground
		submunitionParentSpeedCoef=0;
		submunitionDirectionType="SubmunitionAutoLeveling";
		submunitionInitSpeed=40;               //this also effects pentration and damage of sub projectiles as a ratio of their expected speed
		deleteParentWhenTriggered=0;


	};
};

