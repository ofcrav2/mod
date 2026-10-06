#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class mkk_cv_9030
	{
		units[]=
		{
			"mkk_cv_9030","mkk_cv_9030_r","mkk_cv_9030_g"
		};
		weapons[]={};
		requiredVersion=2.1600001;
		requiredAddons[]=
		{
			"rhs_main_loadorder",
			"rhsusf_main_loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class autocannon_Base_F;
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		class HE: autocannon_Base_F
		{
			class player;
			class close;
			class short;
			class Medium;
			class far;
		};
		class AP: autocannon_Base_F
		{
			class player;
			class close;
			class short;
			class Medium;
			class far;
		};
	};
	class mkk_ffp_bushmaster_mk44_CV9030: autocannon_30mm_CTWS
	{
		autoReload=1;
		magazineReloadTime=5;
		displayName="Mk 44 Bushmaster II";
		muzzles[]=
		{
			"AP",
			"HE"
		};
		class GunParticles
		{
			class Effect
			{
				directionName="Konec hlavne";
				effectName="MachineGunCloud";
				positionName="Usti hlavne";
			};
			class Shell
			{
				directionName="shell_eject_dir";
				effectName="Cartridge30mm";
				positionName="shell_eject_pos";
			};
		};
		class HE: HE
		{
			magazineReloadTime=0.30000001;
			autoReload=1;
			displayName="Mk 44 Bushmaster II";
			magazines[]=
			{
				"mkk_mag_mk44_he_80rnd",
				"mkk_mag_mk44_ap_80rnd"
			};
			modes[]=
			{
				"player"
			};
			sounds[]=
			{
				"StandardSound"
			};
			class GunParticles
			{
				class Effect
				{
					directionName="Konec hlavne";
					effectName="MachineGunCloud";
					positionName="Usti hlavne";
				};
				class Shell
				{
					directionName="shell_eject_dir";
					effectName="Cartridge30mm";
					positionName="shell_eject_pos";
				};
			};
			class player: player
			{
				reloadTime=0.30000001;
				textureType="fullAuto";
				class StandardSound {
                    soundSetShot[] = {"Autocannon30mmTurret_Shot_SoundSet", "Autocannon30mmTurret_Tail_SoundSet"};
                };
			};
			class 100rpm: player
			{
				reloadTime=0.60000002;
				textureType="burst";
			};
			class single: player
			{
				autofire=0;
				textureType="semi";
			};
		};
		class AP: AP
		{
			autoReload=1;
			displayName="Mk 44 Bushmaster II";
			magazines[]=
			{
				"mkk_mag_mk44_ap_80rnd"
			};
			showToPlayer=0;
			canlock=0;
			class player: player
			{
				showToPlayer=0;
				reloadTime=0.30000001;
			};
			class close: close
			{
				showToPlayer=0;
				reloadTime=0.30000001;
			};
			class short: short
			{
				showToPlayer=0;
				reloadTime=0.30000001;
			};
			class medium: Medium
			{
				showToPlayer=0;
				reloadTime=0.30000001;
			};
			class far: far
			{
				showToPlayer=0;
				reloadTime=0.60000002;
			};
		};
	};
	class rhs_weap_902a;
	class cv_weap_902a: rhs_weap_902a
	{
		magazines[]=
		{
			"rhs_mag_902a",
			"rhs_mag_3d17_4",
			"rhs_mag_3d17_6",
			"rhs_mag_3d17_12",
			"rhs_mag_3d17",
			"rhs_mag_3d17_10"
		};
	};
};
class cfgMagazines
{
	class rhs_mag_3uof8_150;
	class mkk_mag_mk44_he_80rnd: rhs_mag_3uof8_150
	{
		displayName="MK266 HEI";
		displayNameShort="MK266 HEI";
		count=80;
		initSpeed=1080;
		ammo="mkk_ammo_30mm_he_mk44";
	};
	class rhs_mag_3ubr8_195;
	class mkk_mag_mk44_ap_80rnd: rhs_mag_3ubr8_195
	{
		displayName="MK258 APFSDS";
		displayNameShort="MK258 APFSDS";
		count=80;
		initSpeed=1430;
		ammo="mkk_ammo_30mm_ap_mk44";
	};
	class rhs_mag_3d17_12;
	class rhs_mag_3d17_10: rhs_mag_3d17_12
	{
		count=10;
	};
};
class cfgAmmo
{
	class B_30mm_AP;
	class mkk_ammo_30mm_ap_base : B_30mm_AP
	{
		displayName = "30mm AP";
		airfriction = -0.0003;
		caliber = 3.9;
		hit = 65;
		model = "\A3\Weapons_F\Data\bullettracer\tracer_red.p3d";
		typicalSpeed = 970;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		cost = 55;
		irLock = 0;
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 3.5;
		muzzleEffect = "";
		airLock = 0;
		timeToLive = 25;
		weaponType = "special";
		missileLockMaxDistance = 1000;
		missileLockMinDistance = 80;
		aiAmmoUsageFlags = "128 + 512 + 256";
		indirectHit = 0;
		indirectHitRange = 0;
		warheadName = "AP";
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		allowAgainstInfantry = 1;

		soundHit1[] = {"A3\Sounds_F\weapons\shells\shell_30mm_ap_hit_1", 3.0, 1.0, 500};
		soundHit2[] = {"A3\Sounds_F\weapons\shells\shell_30mm_ap_hit_2", 3.0, 1.5, 500};
		soundHit3[] = {"A3\Sounds_F\weapons\shells\shell_30mm_ap_hit_3", 3.0, 1.0, 500};
		soundHit4[] = {"A3\Sounds_F\weapons\shells\shell_30mm_ap_hit_4", 3.0, 1.5, 500};
		soundHit5[] = {"A3\Sounds_F\weapons\shells\shell_30mm_ap_hit_5", 3.0, 1.2, 500};
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};

		class CamShakeExplode
		{
			power = 5;
			duration = 1;
			frequency = 20;
			distance = 56;
		};
		class CamShakeHit
		{
			power = 50;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

		SoundSetExplosion[] = {};
		ace_rearm_caliber = 30;
		soundsetbulletfly[] = {};
		cartridge = "FxCartridge_556";
		waterEffectOffset = 0.8;
		effectFly = "AmmoClassic";

		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll", 2.51189, 1, 200};
		impactGroundSoft[] = {"soundImpactDefault1", 1};
		impactGroundHard[] = {"soundImpactDefault1", 1};
		impactMan[] = {"soundImpactDefault1", 1};
		impactIron[] = {"soundImpactDefault1", 1};
		impactArmor[] = {"soundImpactDefault1", 1};
		impactBuilding[] = {"soundImpactDefault1", 1};
		impactFoliage[] = {"soundImpactDefault1", 1};
		impactWood[] = {"soundImpactDefault1", 1};
		impactGlass[] = {"soundImpactDefault1", 1};
		impactGlassArmored[] = {"soundImpactDefault1", 1};
		impactConcrete[] = {"soundImpactDefault1", 1};
		impactTyre[] = {"soundImpactDefault1", 1};
		impactRubber[] = {"soundImpactDefault1", 1};
		impactPlastic[] = {"soundImpactDefault1", 1};
		impactDefault[] = {"soundImpactDefault1", 1};
		impactMetal[] = {"soundImpactDefault1", 1};
		impactMetalplate[] = {"soundImpactDefault1", 1};
		impactWater[] = {"soundImpactDefault1", 1};

		bulletFly1[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 2.23872, 1, 75};
		bulletFly2[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 2.23872, 1, 75};
		bulletFly3[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 2.23872, 1, 75};
		bulletFly4[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 2.23872, 1, 75};
		bulletFly5[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 2.23872, 1, 75};
		bulletFly6[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 2.23872, 1, 75};
		bulletFly7[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 2.23872, 1, 75};
		bulletFly8[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 2.23872, 1, 75};
		bulletFly9[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 2.23872, 1, 75};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 2.23872, 1, 75};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 2.23872, 1, 75};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 2.23872, 1, 75};
		bulletFly[] = {
			"bulletFly1", 0.083,
			"bulletFly2", 0.083,
			"bulletFly3", 0.083,
			"bulletFly4", 0.083,
			"bulletFly5", 0.083,
			"bulletFly6", 0.083,
			"bulletFly7", 0.083,
			"bulletFly8", 0.083,
			"bulletFly9", 0.083,
			"bulletFly10", 0.083,
			"bulletFly11", 0.083,
			"bulletFly12", 0.083
		};

		supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close", 3.16228, 1, 200};
		supersonicCrackFar[]  = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle", 3.16228, 1, 200};

		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 3.16228, 1, 200};
			class SCrackForest
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3", 1, 1, 500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "forest";
			};
			class SCrackTrees
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3", 1, 1, 500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "trees";
			};
			class SCrackMeadow
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3", 1, 1, 500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "meadow max sea";
			};
			class SCrackHouses
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1", 1, 1, 500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2", 1, 1, 500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3", 1, 1, 500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "houses max interior";
			};
		};

		class HitEffects
		{
			Hit_Foliage_Banana = "ImpactBanana";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitBuilding = "ImpactConcreteSabotSmall";
			hitConcrete = "ImpactConcreteSabotSmall";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitGroundSoft = "ImpactEffectsSmallSabot";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactConcreteSabotSmall";
			hitHay = "ImpactHay";
			hitMan = "ImpactEffectsBlood";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitVirtual = "ImpactMetal";
			hitWater = "ImpactEffectsWater";
			hitWood = "ImpactWood";
		};
	};
	class mkk_ammo_30mm_ap_mk44 : mkk_ammo_30mm_ap_base
	{
		typicalSpeed = 1000;
	};
	class B_30mm_HE;
	class mkk_ammo_30mm_he_base : B_30mm_HE
	{
		displayName = "3УОФ8";
		hit = 40;
		caliber = 0.1;
		indirectHit = 10;
		indirectHitRange = 4;
		laserLock = 1;
		nvLock = 0;
		artilleryLock = 0;
		lockType = 0;
		model = "\A3\Weapons_F\Data\bullettracer\shell_tracer_red";
		typicalSpeed = 1120;
		explosion = "DefaultExplosion";
		cost = 20;
		explosive = 0.6;
		airfriction = -0.0004;
		timeToLive = 15;
		tracerScale = 1;
		tracerStartTime = 0.1;
		tracerEndTime = 10;
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "64 + 128 + 256";
		weaponType = "special";

		class CamShakeExplode
		{
			power = 6;
			duration = 1;
			frequency = 20;
			distance = 83.8178;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.34035;
			duration = 1;
			frequency = 20;
			distance = 43.8178;
		};
		class CamShakePlayerFire
		{
			power = 30;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		fuseDistance = 3;

		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 1.77828, 1, 1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02", 1.77828, 1, 1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03", 1.77828, 1, 1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04", 1.77828, 1, 1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};

		SoundSetExplosion[] = {"Rocket_Explosion_SoundSet", "Explosion_Debris_SoundSet"};
		ace_rearm_caliber = 30;
		soundsetbulletfly[] = {};
		soundFly[] = {"",1,1,50};
		explosionSoundEffect = "DefaultExplosion";
		warheadName = "HE";
		deflecting = 5;
		cartridge = "FxCartridge_556";
		muzzleEffect = "";
		waterEffectOffset = 0.8;
		effectFly = "AmmoClassic";

		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll", 2.51189, 1, 200};
		impactGroundSoft[] = {"soundImpactDefault1",1};
		impactGroundHard[] = {"soundImpactDefault1",1};
		impactMan[] = {"soundImpactDefault1",1};
		impactIron[] = {"soundImpactDefault1",1};
		impactArmor[] = {"soundImpactDefault1",1};
		impactBuilding[] = {"soundImpactDefault1",1};
		impactFoliage[] = {"soundImpactDefault1",1};
		impactWood[] = {"soundImpactDefault1",1};
		impactGlass[] = {"soundImpactDefault1",1};
		impactGlassArmored[] = {"soundImpactDefault1",1};
		impactConcrete[] = {"soundImpactDefault1",1};
		impactTyre[] = {"soundImpactDefault1",1};
		impactRubber[] = {"soundImpactDefault1",1};
		impactPlastic[] = {"soundImpactDefault1",1};
		impactDefault[] = {"soundImpactDefault1",1};
		impactMetal[] = {"soundImpactDefault1",1};
		impactMetalplate[] = {"soundImpactDefault1",1};
		impactWater[] = {"soundImpactDefault1",1};

		bulletFly1[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01", 2.23872, 1, 75};
		bulletFly2[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02", 2.23872, 1, 75};
		bulletFly3[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03", 2.23872, 1, 75};
		bulletFly4[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04", 2.23872, 1, 75};
		bulletFly5[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05", 2.23872, 1, 75};
		bulletFly6[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06", 2.23872, 1, 75};
		bulletFly7[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07", 2.23872, 1, 75};
		bulletFly8[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08", 2.23872, 1, 75};
		bulletFly9[]  = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09", 2.23872, 1, 75};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10", 2.23872, 1, 75};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11", 2.23872, 1, 75};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12", 2.23872, 1, 75};
		bulletFly[] = {"bulletFly1",0.083,"bulletFly2",0.083,"bulletFly3",0.083,"bulletFly4",0.083,"bulletFly5",0.083,"bulletFly6",0.083,"bulletFly7",0.083,"bulletFly8",0.083,"bulletFly9",0.083,"bulletFly10",0.083,"bulletFly11",0.083,"bulletFly12",0.083};

		supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close", 3.16228, 1, 200};
		supersonicCrackFar[]  = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle", 3.16228, 1, 200};

		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1", 3.16228, 1, 200};
			class SCrackForest
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1",1,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2",1,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "forest";
			};
			class SCrackTrees
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1",1,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2",1,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "trees";
			};
			class SCrackMeadow
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",1,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2",1,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "meadow max sea";
			};
			class SCrackHouses
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1",1,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2",1,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3",1,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "houses max interior";
			};
		};

		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
			Hit_Foliage_Banana = "ImpactBanana";
		};
	};
	class mkk_ammo_30mm_he_mk44 : mkk_ammo_30mm_he_base
	{
		typicalSpeed = 1080;
	};
};
class CfgVehicles
{
	class All
	{
		class TransportMagazines;
		class TransportWeapons;
		class ViewOptics;
	};
	class AllVehicles: All
	{
		class NewTurret;
		class CargoTurret;
	};
	class Land: AllVehicles
	{
	};
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class HitPoints;
		class Turrets
		{
			class MainTurret: NewTurret
			{
			};
		};
		class ViewOptics;
		class Sounds;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
				class HitPoints
				{
					class HitTurret;
					class HitGun;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class Periscope;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds
		{
		};
		class EventHandlers;
		class Components;
		class ACE_SelfActions;
	};
	class cv_9030_base_Tank_F: Tank_F
	{
		unloadInCombat = true;
		class DestructionEffects
		{
			class LightFlames1
			{
				simulation="particles";
				type="ObjectDestructionFire1Smallx";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=0.5;
				enabled="distToWater";
			};
			class LightBig1
			{
				simulation="light";
				type="ObjectDestructionLight";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=2;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class FireBig1
			{
				simulation="particles";
				type="ObjectDestructionFire1";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1
			{
				simulation="particles";
				type="ObjectDestructionSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class FireBig2
			{
				simulation="particles";
				type="ObjectDestructionFire2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class SmokeBig1_2
			{
				simulation="particles";
				type="ObjectDestructionSmoke1_2";
				position="destructionEffect2";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
			class SmokeBig2
			{
				simulation="particles";
				type="ObjectDestructionSmoke2";
				position="destructionEffect2";
				intensity=1;
				interval=1;
				lifeTime=3.2;
			};
		};
		supplyRadius=2.5;
		memoryPointSupply="supply";
		maximumLoad=8000;
		transportMaxMagazines=400;
		insideSoundCoef=0.89999998;
		driverCompartments="Compartment1";
		crewExplosionProtection=0.99989998;
		damageResistance=0.02;
		crewVulnerable=0;
		waterPPInVehicle=0;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		showNVGDriver=1;
		showNVGCommander=1;
		castDriverShadow=1;
		tf_hasLRradio=1;
		tf_hasLRradio_api=1;
		model="cv_9030\cv_9030.p3d";
		author="$STR_mkk_Cookie";
		side=0;
		faction="BLU_F";
		editorSubcategory="rhs_EdSubcat_ifv";
		vehicleClass="rhs_vehclass_ifv";
		displayName="$STR_mkk_cv_9030_short";
		displayNameShort="$STR_mkk_cv_9030_short";
		descriptionShort="$STR_mkk_cv_9030_discrp";
		type=1;
		picture="\cv_9030\data\ui\cv_9030_pic_ca.paa";
		icon="mkk_swed_vehicles\STRF90\ui\map_strf9040.paa";
		editorPreview="cv_9030\data\preview\cv_9030.jpg";
		driverWeaponsInfoType="RscOptics_MBT_01_Driver";
		unitInfoType="RHSUSF_RscUnitInfoWestTank";
		secondaryExplosion=1;
		fuelExplosionPower=50;
		fuelCapacity=20;
		crew="B_crew_F";
		driverIsCommander=0;
		attenuationEffectType="TankAttenuation";
		driverOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
		driverforceoptics=1;
		memoryPointdriverOptics="driverview";
		driverAction="RHS_BMP3_driverout";
		driverInAction="rhs_bmp2_driver";
		hideProxyInCombat=1;
		viewDriverInExternal=1;
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		tf_range_api=17000;
		enableGPS=1;
		selectionBrakeLights="brzdove svetlo";
		selectionBackLights="zadni svetlo";
		LodTurnedIn=1100;
		LodTurnedOut=1100;
		LodOpticsOut=1100;
		LODOpticsIn=1100;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInCargo[]=
		{
			"pos cargo L",
			"pos cargo R",
			"pos cargo L",
			"pos cargo R",
			"pos cargo L",
			"pos cargo R",
			"pos cargo L"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo L dir",
			"pos cargo R dir",
			"pos cargo L dir",
			"pos cargo R dir",
			"pos cargo L dir",
			"pos cargo R dir",
			"pos cargo L dir"
		};
		cargoGetInAction[]=
		{
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInAMV_cargo",
			"GetInMedium"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutLow",
			"GetOutMedium"
		};
		cargoAction[]=
		{
			"RHS_BMP_Cargo"
		};
		dustFrontLeftPos="stopa ll";
		dustFrontRightPos="stopa rl";
		memoryPointTrackFLL="stopa ll";
		memoryPointTrackFLR="stopa lr";
		memoryPointTrackFRL="stopa rl";
		memoryPointTrackFRR="stopa rr";
		dustBackLeftPos="podkolol6";
		dustBackRightPos="podkolop6";
		destrType="DestructDefault";
		tf_RadioType="tf_rt1523g";
		TFAR_AdditionalLR_Turret[]=
		{
			{0,1}
		};
		acre_hasInfantryPhone=0;
		class AcreIntercoms
		{
			class Intercom_1
			{
				displayName="$STR_ACRE_sys_intercom_crewIntercom";
				shortName="$STR_ACRE_sys_intercom_shortCrewIntercom";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				limitedPositions[]={};
				numLimitedPositions=0;
				connectedByDefault=1;
			};
		};
		class AcreRacks
		{
			class Rack_1
			{
				displayName="$STR_ACRE_sys_rack_dashUpper";
				shortName="$STR_ACRE_sys_rack_dashUpperShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="";
				isRadioRemovable=1;
				intercom[]=
				{
					"Intercom_1"
				};
			};
			class Rack_2
			{
				displayName="$STR_ACRE_sys_rack_dashLower";
				shortName="$STR_ACRE_sys_rack_dashLowerShort";
				componentName="ACRE_SEM90";
				allowedPositions[]=
				{
					"crew"
				};
				disabledPositions[]={};
				defaultComponents[]={};
				mountedRadio="ACRE_SEM70";
				isRadioRemovable=0;
				intercom[]=
				{
					"Intercom_1"
				};
			};
		};
		class Library
		{
			libTextDesc="";
		};
		typicalCargo[]=
		{
			"B_crew_F",
			"B_crew_F",
			"B_crew_F"
		};
		class ViewOptics
		{
			minAngleX=-30;
			maxAngleX=30;
			initAngleX=0;
			minAngleY=-45;
			maxAngleY=45;
			initAngleY=0;
			minFov=1;
			maxFov=1;
			initFov=1;
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
		};
		class ViewPilot
		{
			initAngleX=-10;
			minAngleX=-65;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			initFov=0.69999999;
			minFov=0.25;
			maxFov=1.4;
		};
		soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"Redd_Marder_1A5\sounds\Int_Marder_Engine_On.wss",
			"",
			0.63095737,
			1
		};
		soundEngineOnExt[]=
		{
			"Redd_Marder_1A5\sounds\Ext_Marder_Engine_On.wss",
			0.79432821,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"Redd_Marder_1A5\sounds\Int_Marder_Engine_Off.wss",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"Redd_Marder_1A5\sounds\Ext_Marder_Engine_Off.wss",
			0.79432821,
			1,
			200
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			0.17782794,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			0.17782794,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			0.17782794,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",
			1,
			1,
			100
		};
		soundGeneralCollision4[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.25,
			"soundGeneralCollision2",
			0.25,
			"soundGeneralCollision3",
			0.25,
			"soundGeneralCollision4",
			0.25
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"Redd_Marder_1A5\sounds\Ext_Marder_Engine_Fahren_1.wss",
					0.89125091,
					1,
					300
				};
				frequency="0.6  + (rpm factor[0, 2500]) * 0.6";
				volume="engineOn * camPos *     (0.5 + (rpm factor[0, 2500]) * 4.5)";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_2",
					1.4125376,
					1,
					450
				};
				frequency="0.6  + (rpm factor[0, 2500]) * 0.6";
				volume="engineOn * camPos *     (thrust factor[0.1,1]) * (rpm factor[0, 2500])";
			};
			class Engine_int
			{
				sound[]=
				{
					"Redd_Marder_1A5\sounds\Int_Marder_Engine_Fahren_1.wss",
					0.8548134,
					1
				};
				frequency="0.6  + (rpm factor[0, 2500]) * 0.6";
				volume="engineOn * (1-camPos) * (0.5 + (rpm factor[0, 2500]) * 3.5)";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2",
					0.04810717,
					1
				};
				frequency="0.6  + (rpm factor[0, 2500]) * 0.6";
				volume="engineOn * (1-camPos) * (thrust factor[0.1,1]) * (rpm factor[0, 2500])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1",
					0.80118722,
					1
				};
				frequency="1";
				volume="(1-camPos)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1",
					1.1912509,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",
					0.34810716,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",
					0.3966836,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",
					0.45118719,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",
					0.51234132,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",
					0.51234132,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",
					0.26622775,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",
					0.30813399,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",
					0.34810716,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",
					0.3966836,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",
					0.45118719,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",
					0.22118863,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",
					0.2518383,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",
					0.28622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",
					0.3248134,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",
					0.36810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",
					0.28622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",
					0.28622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",
					0.3248134,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",
					0.3248134,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",
					0.36810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		maxSpeed=60;
		canFloat=0;
		ThrowDelay=5;
		waterLeakiness=10;
		waterResistance=0;
		waterResistanceCoef=0;
		waterLinearDampingCoefY=0;
		waterLinearDampingCoefX=0;
		waterAngularDampingCoef=0;
		waterDamageEngine=0.2;
		maxFordingDepth=-0.5;
		waterEffectSpeed=5;
		engineEffectSpeed=5;
		engineShiftY=0.69999999;
		waterFastEffectSpeed=28;
		driverCanSee="2+4+8";
		gunnerCanSee="2+4+8";
		commanderCanSee="2+4+8";
		incomingMissileDetectionSystem=0;
		simulation="tankX";
		enginePower=459.68701;
		maxOmega=298.45001;
		minOmega=75;
		engineMOI=8;
		peakTorque=5770;
		torqueCurve[]=
		{
			{0.36363599,0.68000001},
			{0.45454499,0.80000001},
			{0.54545498,0.94999999},
			{0.60606098,0.98000002},
			{0.66666698,1},
			{0.72727299,0.94},
			{0.84848499,0.80000001},
			{1,0.63999999}
		};
		thrustDelay=0.050000001;
		clutchStrength=25;
		brakeIdleSpeed=0;
		latency=1;
		turnCoef=1;
		slowSpeedForwardCoef=0.80000001;
		normalSpeedForwardCoef=0.77999997;
		idleRpm=700;
		redRpm=2900;
		dampingRateFullThrottle=0.30000001;
		dampingRateZeroThrottleClutchEngaged=3;
		dampingRateZeroThrottleClutchDisengaged=0.25;
		tankTurnForce=300000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.92000002;
		accelAidForceCoef=4.3000002;
		accelAidForceYOffset=-3.9000001;
		accelAidForceSpd=2.23;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=75;
		transmissionLosses=15;
		engineLosses=25;
		switchTime=0;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.939394,0.42424199,0.909091,0.63636398,0.84848499,0.66666698,1,0.66666698};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-1.7,
				"N",
				0,
				"D1",
				4.5999999,
				"D2",
				2.9000001,
				"D3",
				1.6,
				"D4",
				1.2
			};
			TransmissionRatios[]=
			{
				"High",
				13
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0;
		};
		class Wheels
		{
			class wheel_1_0
			{
				boneName="";
				center="wheel_l_drive_axis";
				boundary="wheel_l_drive_bound";
				damping=75;
				steering=0;
				side="left";
				weight=120;
				mass=120;
				MOI=11;
				latStiffX=1;
				latStiffY=35;
				suspTravelDirection[]={-0.125,-1,0};
				longitudinalStiffnessPerUnitGravity=32000;
				maxBrakeTorque=6000;
				sprungMass=200;
				springStrength=3000;
				springDamperRate=620;
				dampingRate=1;
				dampingRateInAir=670;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0;
				maxCompression=0;
				frictionVsSlipGraph[]=
				{
					{0,0.80000001},
					{0.38,1},
					{0.69999999,0.64999998}
				};
			};
			class wheel_1_1: wheel_1_0
			{
				boneName="wheel_podkolol1";
				center="wheel_l_01_axis";
				boundary="wheel_l_01_bound";
				sprungMass=1013;
				springStrength=400000;
				springDamperRate=10000;
				maxDroop=0.18000001;
				maxCompression=0.079999998;
			};
			class wheel_1_2: wheel_1_1
			{
				boneName="wheel_podkolol2";
				center="wheel_l_02_axis";
				boundary="wheel_l_02_bound";
			};
			class wheel_1_3: wheel_1_2
			{
				boneName="wheel_podkolol3";
				center="wheel_l_03_axis";
				boundary="wheel_l_03_bound";
			};
			class wheel_1_4: wheel_1_2
			{
				boneName="wheel_podkolol4";
				center="wheel_l_04_axis";
				boundary="wheel_l_04_bound";
			};
			class wheel_1_5: wheel_1_2
			{
				boneName="wheel_podkolol5";
				center="wheel_l_05_axis";
				boundary="wheel_l_05_bound";
			};
			class wheel_1_6: wheel_1_2
			{
				boneName="wheel_podkolol6";
				center="wheel_l_06_axis";
				boundary="wheel_l_06_bound";
			};
			class wheel_1_7: wheel_1_2
			{
				boneName="wheel_podkolol7";
				center="wheel_l_07_axis";
				boundary="wheel_l_07_bound";
			};
			class wheel_1_8: wheel_1_0
			{
				boneName="";
				center="wheel_l_back_axis";
				boundary="wheel_l_back_bound";
			};
			class wheel_2_0: wheel_1_0
			{
				side="right";
				boneName="";
				center="wheel_r_drive_axis";
				boundary="wheel_r_drive_bound";
				suspTravelDirection[]={0.125,-1,0};
			};
			class wheel_2_1: wheel_1_1
			{
				boneName="wheel_podkolop1";
				center="wheel_r_01_axis";
				boundary="wheel_r_01_bound";
			};
			class wheel_2_2: wheel_1_2
			{
				boneName="wheel_podkolop2";
				center="wheel_r_02_axis";
				boundary="wheel_r_02_bound";
				side="right";
			};
			class wheel_2_3: wheel_2_2
			{
				boneName="wheel_podkolop3";
				center="wheel_r_03_axis";
				boundary="wheel_r_03_bound";
			};
			class wheel_2_4: wheel_2_2
			{
				boneName="wheel_podkolop4";
				center="wheel_r_04_axis";
				boundary="wheel_r_04_bound";
			};
			class wheel_2_5: wheel_2_2
			{
				boneName="wheel_podkolop5";
				center="wheel_r_05_axis";
				boundary="wheel_r_05_bound";
			};
			class wheel_2_6: wheel_2_2
			{
				boneName="wheel_podkolop6";
				center="wheel_r_06_axis";
				boundary="wheel_r_06_bound";
			};
			class wheel_2_7: wheel_2_2
			{
				boneName="wheel_podkolop7";
				center="wheel_r_07_axis";
				boundary="wheel_r_07_bound";
			};
			class wheel_2_8: wheel_2_0
			{
				boneName="";
				center="wheel_r_back_axis";
				boundary="wheel_r_back_bound";
			};
		};
		steerAheadSimul=0.60000002;
		steerAheadPlan=0.40000001;
		predictTurnPlan=2.8;
		predictTurnSimul=2.5999999;
		brakeDistance=25;
		precision=5;
		transportSoldier=0;
		wheelCircumference=1.9220001;
		tracksSpeed=2.5;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		cost=1500000;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_APC_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_APC_p"
				};
			};
		};
		class TextureSources
		{
			class camo_finland_polygonal_threecolor
			{
				displayName="$STR_mkk_cv9030_camo_finland_polygonal_threecolor";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\cv_9030_body_co.paa",
					"cv_9030\data\cv_9030_body_add_co.paa",
					"cv_9030\data\cv_9030_gun_co.paa",
					"cv_9030\data\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_finland_polygonal_threecolor_bs
			{
				displayName="$STR_mkk_cv9030_camo_finland_polygonal_threecolor_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\finland_polygonal_threecolor\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\finland_polygonal_threecolor\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\finland_polygonal_threecolor\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\finland_polygonal_threecolor\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_M90
			{
				displayName="$STR_mkk_cv9030_camo_modern_M90";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_m90\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_m90\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_m90\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_m90\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_M90_bs
			{
				displayName="$STR_mkk_cv9030_camo_modern_M90_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_m90\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_m90\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_m90\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_m90\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_winter_m90
			{
				displayName="$STR_mkk_cv9030_camo_winter_m90";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_winter_m90\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_winter_m90\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_winter_m90\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_winter_m90\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_winter_m90_bs
			{
				displayName="$STR_mkk_cv9030_camo_winter_m90_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_winter_m90\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_winter_m90\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_winter_m90\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_winter_m90\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_green
			{
				displayName="$STR_mkk_cv9030_camo_green";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\green\cv_9030_body_co.paa",
					"cv_9030\data\camo\green\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\green\cv_9030_gun_co.paa",
					"cv_9030\data\camo\green\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_green_bs
			{
				displayName="$STR_mkk_cv9030_camo_green_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\green\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\green\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\green\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\green\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_black_green_braun_waves
			{
				displayName="$STR_mkk_cv9030_camo_black_green_braun_waves";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\black_green_braun_waves\cv_9030_body_co.paa",
					"cv_9030\data\camo\black_green_braun_waves\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\black_green_braun_waves\cv_9030_gun_co.paa",
					"cv_9030\data\camo\black_green_braun_waves\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_black_green_braun_waves_bs
			{
				displayName="$STR_mkk_cv9030_camo_black_green_braun_waves_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\black_green_braun_waves\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\black_green_braun_waves\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\black_green_braun_waves\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\black_green_braun_waves\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_desert_three_color
			{
				displayName="$STR_mkk_cv9030_camo_desert_three_color";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\desert_three_color\cv_9030_body_co.paa",
					"cv_9030\data\camo\desert_three_color\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\desert_three_color\cv_9030_gun_co.paa",
					"cv_9030\data\camo\desert_three_color\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_desert_three_color_bs
			{
				displayName="$STR_mkk_cv9030_camo_desert_three_color_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\desert_three_color\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\desert_three_color\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\desert_three_color\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\desert_three_color\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_urban
			{
				displayName="$STR_mkk_cv9030_camo_modern_urban";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_urban\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_urban\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_urban\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_urban\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_urban_bs
			{
				displayName="$STR_mkk_cv9030_camo_modern_urban_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_urban\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_urban\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_urban\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_urban\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_deform
			{
				displayName="$STR_mkk_cv9030_camo_modern_deform";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_deform\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_deform\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_deform\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_deform\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_deform_bs
			{
				displayName="$STR_mkk_cv9030_camo_modern_deform_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_deform\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_deform\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_deform\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_deform\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_grey
			{
				displayName="$STR_mkk_cv9030_camo_grey";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\grey\cv_9030_body_co.paa",
					"cv_9030\data\camo\grey\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\grey\cv_9030_gun_co.paa",
					"cv_9030\data\camo\grey\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_grey_bs
			{
				displayName="$STR_mkk_cv9030_camo_grey_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\grey\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\grey\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\grey\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\grey\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_chdkz
			{
				displayName="$STR_BMP_2M_Camo_chdkz";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\chdkz\cv_9030_body_co.paa",
					"cv_9030\data\camo\chdkz\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\chdkz\cv_9030_gun_co.paa",
					"cv_9030\data\camo\chdkz\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_winter_bicolor
			{
				displayName="$STR_mkk_cv9030_camo_winter_bicolor";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\winter_bicolor\cv_9030_body_co.paa",
					"cv_9030\data\camo\winter_bicolor\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\winter_bicolor\cv_9030_gun_co.paa",
					"cv_9030\data\camo\winter_bicolor\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_desert
			{
				displayName="$STR_mkk_cv9030_camo_modern_desert";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_desert\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_desert\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_desert\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_desert\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_modern_desert_bs
			{
				displayName="$STR_mkk_cv9030_camo_modern_desert_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\modern_desert\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\modern_desert\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\modern_desert\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\modern_desert\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_desert_pink_lines
			{
				displayName="$STR_mkk_cv9030_camo_desert_pink_lines";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\desert_pink_lines\cv_9030_body_co.paa",
					"cv_9030\data\camo\desert_pink_lines\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\desert_pink_lines\cv_9030_gun_co.paa",
					"cv_9030\data\camo\desert_pink_lines\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_desert_pink_lines_bs
			{
				displayName="$STR_mkk_cv9030_camo_desert_pink_lines_bs";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\desert_pink_lines\battle_scarred\cv_9030_body_co.paa",
					"cv_9030\data\camo\desert_pink_lines\battle_scarred\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\desert_pink_lines\battle_scarred\cv_9030_gun_co.paa",
					"cv_9030\data\camo\desert_pink_lines\battle_scarred\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
			class camo_black_green_brown
			{
				displayName="$STR_mkk_cv9030_camo_black_green_brown";
				author="$STR_mkk_Cookie";
				textures[]=
				{
					"cv_9030\data\camo\black_green_brown\cv_9030_body_co.paa",
					"cv_9030\data\camo\black_green_brown\cv_9030_body_add_co.paa",
					"cv_9030\data\camo\black_green_brown\cv_9030_gun_co.paa",
					"cv_9030\data\camo\black_green_brown\cv_9030_turret_co.paa",
					"bmp_2m\data\rifled_barrel_b_co.paa",
					"t_64_b_bv\data\mg_pkt_co.paa",
					"cv_9030\data\strf_90c_track_co.paa"
				};
				factions[]={};
			};
		};
		class AnimationSources
		{
			class recoil
			{
				source="reload";
				weapon="mkk_ffp_bushmaster_mk44_CV9030";
			};
			class revolving
			{
				source="revolving";
				weapon="cv_weap_902a";
			};
			class zaslehrot_coax
			{
				source="ammorandom";
				weapon="rhs_weap_pkt";
			};
			class ex_armor_body_l_01_hit
			{
				source="Hit";
				hitpoint="ex_armor_body_l_01_hit";
			};
			class ex_armor_body_l_02_hit: ex_armor_body_l_01_hit
			{
				hitpoint="ex_armor_body_l_02_hit";
			};
			class ex_armor_body_l_03_hit: ex_armor_body_l_01_hit
			{
				hitpoint="ex_armor_body_l_03_hit";
			};
			class ex_armor_body_l_04_hit: ex_armor_body_l_01_hit
			{
				hitpoint="ex_armor_body_l_04_hit";
			};
			class ex_armor_body_r_01_hit: ex_armor_body_l_01_hit
			{
				hitpoint="ex_armor_body_r_01_hit";
			};
			class ex_armor_body_r_02_hit: ex_armor_body_l_01_hit
			{
				hitpoint="ex_armor_body_r_02_hit";
			};
			class ex_armor_body_r_03_hit: ex_armor_body_l_01_hit
			{
				hitpoint="ex_armor_body_r_03_hit";
			};
			class ex_armor_body_r_04_hit: ex_armor_body_l_01_hit
			{
				hitpoint="ex_armor_body_r_04_hit";
			};
			class hide_deployment_body_net
			{
				displayName="$STR_leopard_2a4_body_net_summer";
				source="user";
				animPeriod=0.01;
				initPhase=0;
			};
			class hide_deployment_turret_net
			{
				displayName="$STR_leopard_2a4_turret_net_summer";
				source="user";
				animPeriod=0.01;
				initPhase=0;
			};
		};
		class Reflectors
		{
			class RSvetla
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="p svetlo";
				direction="konec P svetla";
				hitpoint="p svetlo";
				selection="p svetlo";
				size=1;
				innerAngle=50;
				outerAngle=140;
				coneFadeCoef=10;
				intensity=2.5;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LSvetla
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
				position="l svetlo";
				direction="konec L svetla";
				hitpoint="l svetlo";
				selection="l svetlo";
				size=1;
				innerAngle=50;
				outerAngle=140;
				coneFadeCoef=10;
				intensity=2.5;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
		};
		aggregateReflectors[]=
		{
			"RSvetla",
			"LSvetla"
		};
		class MarkerLights
		{
		};
		class UserActions
		{
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="vyfuk start";
				direction="vyfuk konec";
				effect="ExhaustEffectTankBack";
			};
		};
		armor=150;
		armorStructural=1;
		minTotalDamageThreshold=0.5;
		explosionShielding=1;
		class HitPoints
		{
			class HitHull
			{
				armor=-80;
				material=-1;
				name="hithull_point";
				armorComponent="hit_hithull";
				visual="camo1";
				passThrough=0;
				minimalHit=-0.15000001;
				explosionShielding=1;
				radius=0.25;
			};
			class HitEngine
			{
				armor=-100;
				material=-1;
				name="hitengine_point";
				visual="camo1";
				armorComponent="hit_hitengine";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0099999998;
				radius=0.40000001;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke";
						intensity=0.5;
						interval=1;
						lifeTime=60;
					};
					class RHS_Engine_Fire: RHS_Engine_Smoke
					{
						type="SmallFireFPlace";
					};
					class RHS_Engine_Sparks: RHS_Engine_Smoke
					{
						type="RHS_FireSparks";
					};
					class RHS_Engine_Sounds: RHS_Engine_Smoke
					{
						simulation="sound";
						type="Fire";
					};
					class RHS_Engine_Smoke_small1: RHS_Engine_Smoke
					{
						type="WeaponWreckSmoke";
						position="vyfuk start";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position="vyfuk start2";
					};
				};
			};
			class HitFuel
			{
				armor=0.89999998;
				material=-1;
				name="hitfuel_point";
				armorComponent="hit_hitfuel";
				visual="-";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.25;
			};
			class HitLTrack
			{
				armor=-150;
				material=-1;
				name="hittrack_l_point";
				visual="camo4";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitRTrack
			{
				armor=-150;
				material=-1;
				name="hittrack_r_point";
				visual="camo4";
				passThrough=0;
				minimalHit=-0.25;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class ex_armor_body_l_01_hit
			{
				armor=0.30000001;
				material=-1;
				name="ex_armor_body_l_01_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_body_l_01";
			};
			class ex_armor_body_l_02_hit
			{
				armor=0.30000001;
				material=-1;
				name="ex_armor_body_l_02_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_body_l_02";
			};
			class ex_armor_body_l_03_hit
			{
				armor=0.30000001;
				material=-1;
				name="ex_armor_body_l_03_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_body_l_03";
			};
			class ex_armor_body_l_04_hit
			{
				armor=0.30000001;
				material=-1;
				name="ex_armor_body_l_04_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_body_l_04";
			};
			class ex_armor_body_r_01_hit
			{
				armor=0.30000001;
				material=-1;
				name="ex_armor_body_r_01_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_body_r_01";
			};
			class ex_armor_body_r_02_hit
			{
				armor=0.30000001;
				material=-1;
				name="ex_armor_body_r_02_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_body_r_02";
			};
			class ex_armor_body_r_03_hit
			{
				armor=0.30000001;
				material=-1;
				name="ex_armor_body_r_03_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_body_r_03";
			};
			class ex_armor_body_r_04_hit
			{
				armor=0.30000001;
				material=-1;
				name="ex_armor_body_r_04_hit";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=0.0099999998;
				radius=0.25;
				visual="ex_armor_body_r_04";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6",
			"camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"cv_9030\data\cv_9030_body_co.paa",
			"cv_9030\data\cv_9030_body_add_co.paa",
			"cv_9030\data\cv_9030_gun_co.paa",
			"cv_9030\data\cv_9030_turret_co.paa",
			"bmp_2m\data\rifled_barrel_b_co.paa",
			"t_64_b_bv\data\mg_pkt_co.paa",
			"cv_9030\data\strf_90c_track_co.paa"
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"cv_9030\data\materials\cv_9030_body.rvmat",
				"cv_9030\data\damage\cv_9030_body_damage.rvmat",
				"cv_9030\data\damage\cv_9030_body_destruct.rvmat",
				"cv_9030\data\materials\cv_9030_body_add.rvmat",
				"cv_9030\data\damage\cv_9030_body_add_damage.rvmat",
				"cv_9030\data\damage\cv_9030_body_add_destruct.rvmat",
				"cv_9030\data\materials\cv_9030_gun.rvmat",
				"cv_9030\data\damage\cv_9030_gun_damage.rvmat",
				"cv_9030\data\damage\cv_9030_gun_destruct.rvmat",
				"cv_9030\data\materials\cv_9030_turret.rvmat",
				"cv_9030\data\damage\cv_9030_turret_damage.rvmat",
				"cv_9030\data\damage\cv_9030_turret_destruct.rvmat",
				"bmp_2m\data\materials\rifled_barrel_b.rvmat",
				"bmp_2m\data\damage\rifled_barrel_b_damage.rvmat",
				"bmp_2m\data\damage\rifled_barrel_b_destruct.rvmat",
				"t_64_b_bv\data\materials\mg_pkt.rvmat",
				"t_64_b_bv\data\damage\mg_pkt_damage.rvmat",
				"t_64_b_bv\data\damage\mg_pkt_destruct.rvmat",
				"cv_9030\data\materials\strf_90c_track.rvmat",
				"cv_9030\data\damage\strf_90c_track_damage.rvmat",
				"cv_9030\data\damage\strf_90c_track_destruct.rvmat"
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{30,-180},
						{30,180}
					};
					limitsArrayBottom[]=
					{
						{7,-180},
						{0.69999999,-134.68671},
						{-9.3683004,-133.68671},
						{-10,-53.874802},
						{-5.8337002,-27.024599},
						{-7.2284002,-15.3257},
						{-9.4927998,-10.6161},
						{-8,0},
						{-9.4927998,10.6161},
						{-7.2284002,15.3257},
						{-5.8337002,27.024599},
						{-10,53.874802},
						{-9.7173004,133.63721},
						{0.69999999,134.68671},
						{7,180}
					};
				};
				weapons[]=
				{
					"mkk_ffp_bushmaster_mk44_CV9030",
					"rhs_weap_pkt",
					"cv_weap_902a"
				};
				magazines[]=
				{
					"mkk_mag_mk44_ap_80rnd",
					"mkk_mag_mk44_he_80rnd",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17_10"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.40000001;
				discreteDistance[]={300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000,2050,2100,2150,2200,2250,2300,2350,2400,2450,2500,2550,2600,2650,2700,2750,2800,2850,2900,2950,3000,3050,3100,3150,3200,3250,3300,3350,3400,3450,3500,3550,3600,3650,3700,3750,3800,3850,3900,3950,4000,4050,4100,4150,4200,4250,4300,4350,4400,4450,4500,4550,4600,4650,4700,4750,4800,4850,4900,4950,5000,5050,5100,5150,5200,5250,5300,5350,5400,5450,5500,5550,5600,5650,5700,5750,5800,5850,5900,5950,6000,6050,6100,6150,6200,6250,6300,6350,6400,6450,6500,6550,6600,6650,6700,6750,6800,6850,6900,6950,7000,7050,7100,7150,7200,7250,7300,7350,7400,7450,7500,7550,7600,7650,7700,7750,7800,7850,7900,7950,8000,8050,8100,8150,8200,8250,8300,8350,8400,8450,8500,8550,8600,8650,8700,8750,8800,8850,8900,8950,9000,9050,9100,9150,9200,9250,9300,9350,9400,9450,9500,9550,9600,9650,9700,9750,9800,9850,9900,9950,10000};
				discreteDistanceInitIndex=5;
				forceHideGunner=0;
				memoryPointGunnerOptics="gunnerview";
				turretInfoType="kompas";
				proxyType="CPGunner";
				proxyIndex=1;
				outGunnerMayFire=0;
				primary=1;
				primaryGunner=1;
				primaryObserver=0;
				minElev=-10;
				maxElev=45;
				initElev=0;
				initTurn=0;
				stabilizedInAxes=3;
				animationSourceBody="mainTurret";
				animationSourceGun="maingun";
				body="mainTurret";
				gun="maingun";
				memoryPointGun="usti hlavne 3";
				gunnerOpticsEffect[]={};
				ejectDeadGunner=0;
				viewGunnerInExternal=1;
				lockWhenDriverOut=1;
				radarType=0;
				startEngine=0;
				LodTurnedIn=1000;
				LodTurnedOut=1000;
				LodOpticsOut=1000;
				LODOpticsIn=1000;
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerAction="RHS_M2A2_GunnerOut";
				gunnerInAction="rhs_bmp3_gunner";
				personTurretAction="RHS_passenger_inside_6";
				gunnerOpticsModel="";
				gunnerForceoptics=1;
				hasGunner=1;
				allowTabLock=0;
				hideWeaponsGunner=1;
				selectionFireAnim="zasleh2";
				driverCompartments="Compartment1";
				gunnerOutOpticsModel="";
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						class EmptyDisplay
						{
							componentType="EmptyDisplayComponent";
						};
						class CrewDisplay
						{
							componentType="CrewDisplayComponent";
							resource="RscCustomInfoCrew";
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=-80;
						material=-1;
						name="hitturret_point";
						armorComponent="hit_hitturret";
						visual="camo4";
						passThrough=0;
						minimalHit=-0.18000001;
						explosionShielding=0.001;
						radius=0.2;
						isTurret=1;
					};
					class HitGun
					{
						armor=-100;
						material=-1;
						name="hitgun_point";
						visual="camo3";
						armorComponent="gun_barrel";
						passThrough=0;
						minimalHit=-0.15000001;
						explosionShielding=0;
						radius=0.07;
						isGun=1;
					};
				};
				class ViewOptics
				{
					minAngleX=-45;
					maxAngleX=45;
					initAngleX=0;
					minAngleY=-75;
					maxAngleY=75;
					initAngleY=0;
					minFov=0.5;
					maxFov=0.09375;
					initFov=0.75;
					visionMode[]=
					{
						"Normal"
					};
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
						thermalMode[]={2,3};
						minFov=0.699;
						maxFov=0.699;
						initFov=0.699;
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\gunnerOptics_M1A2_2.p3d";
						gunnerOpticsEffect[]={};
					};
					class Medium: Wide
					{
						opticsDisplayName="";
						minFov=0.058249999;
						maxFov=0.058249999;
						initFov=0.058249999;
						thermalMode[]={2,3};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\gunnerOptics_M1A2_3.p3d";
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
					};
					class Narrow: Medium
					{
						opticsDisplayName="";
						minFov=0.029124999;
						maxFov=0.029124999;
						initFov=0.029124999;
						thermalMode[]={2,3};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\gunnerOptics_M1A2_3.p3d";
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						proxyType="CPCommander";
						proxyIndex=1;
						weapons[]={};
						magazines[]={};
						memoryPointGunnerOptics="commanderview";
						body="obsturret";
						gun="obsgun";
						minElev=-10;
						maxElev=40;
						commanding=4;
						animationSourceBody="obsturret";
						animationSourceGun="obsgun";
						viewGunnerInExternal=1;
						ejectDeadGunner=0;
						gunnerType="B_crew_F";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerAction="RHS_M2A2_GunnerOut";
						gunnerInAction="rhs_bmp3_commander";
						gunnerOutForceOptics=0;
						isPersonTurret=0;
						gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
						gunnerOutOpticsModel="";
						gunnerHasFlares=1;
						canUseScanners=0;
						allowTabLock=0;
						turretInfoType="kompas";
						startEngine=0;
						personTurretAction="";
						lockWhenDriverOut=0;
						outGunnerMayFire=1;
						LodTurnedIn=1000;
						LodTurnedOut=1000;
						LodOpticsOut=1000;
						LODOpticsIn=1000;
						memoryPointsGetInGunner="pos commander";
						memoryPointsGetInGunnerDir="pos commander dir";
						primary=0;
						primaryGunner=0;
						primaryObserver=1;
						maxTurn=30;
						minTurn=-50;
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-95;
						maxOutTurn=95;
						initOutTurn=0;
						maxHorizontalRotSpeed=1;
						maxVerticalRotSpeed=1;
						stabilizedInAxes=3;
						inGunnerMayFire=1;
						hideWeaponsGunner=1;
						gunnerCompartments="Compartment1";
						class ViewOptics: ViewOptics
						{
						};
						class OpticsIn
						{
							class Wide: ViewOptics
							{
								gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType.p3d";
								initFov=0.46599999;
								minFov=0.46599999;
								maxFov=0.46599999;
								visionMode[]=
								{
									"Normal",
									"NVG",
									"TI"
								};
								thermalMode[]={2,3};
							};
							class com_norm: Wide
							{
								initFov=0.058249999;
								minFov=0.058249999;
								maxFov=0.058249999;
								gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType.p3d";
								visionMode[]=
								{
									"Normal",
									"NVG",
									"TI"
								};
								thermalMode[]={2,3};
							};
							class com_norm_back: com_norm
							{
								gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block.p3d";
								camPos="commanderview_back_pos";
								camDir="commanderview_back_dir";
								initFov=0.233;
								minFov=0.233;
								maxFov=0.233;
								visionMode[]=
								{
									"Normal"
								};
								thermalMode[]={2,3};
							};
						};
						class HitPoints
						{
							class HitTurretCom
							{
								armor=1;
								material=-1;
								name="obsturret_hitpoint";
								visual="bone_commander_sight_h";
								passThrough=0.5;
								minimalHit=0.25;
								explosionShielding=0.30000001;
								radius=0.30000001;
								isTurret=1;
							};
						};
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft
							{
								class EmptyDisplay
								{
									componentType="EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType="CrewDisplayComponent";
									resource="RscCustomInfoCrew";
								};
							};
							class VehicleSystemsDisplayManagerComponentRight
							{
								class EmptyDisplay
								{
									componentType="EmptyDisplayComponent";
								};
								class CrewDisplay
								{
									componentType="CrewDisplayComponent";
									resource="RscCustomInfoCrew";
								};
							};
						};
					};
				};
			};
			class CargoInside_Left_1: NewTurret
			{
				proxyIndex=1;
				gunnerName="$STR_CargoBackLeft";
				proxyType="CPCargo";
				showAsCargo=1;
				memoryPointsGetInGunner="pos cargo l";
				memoryPointsGetInGunnerDir="pos cargo l dir";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				memoryPointGunnerOptics="pass_cam_pos";
				gunnerInAction="rhs_bmd_cargo_in";
				forceHideGunner=1;
				viewGunnerInExternal=1;
				dontCreateAI=1;
				primaryGunner=0;
				primaryObserver=0;
				canUseScanners=0;
				allowTabLock=0;
				gunnerForceOptics=1;
				startEngine=0;
				maxHorizontalRotSpeed=0;
				maxVerticalRotSpeed=0;
				LODTurnedIn=1000;
				LODTurnedOut=1000;
				LodOpticsIn=1000;
				LodOpticsOut=1000;
				gunnerCompartments="Compartment2";
				class ViewOptics: ViewOptics
				{
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="pass_cam_pos";
						camDir="pass_cam_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.699;
						maxFov=0.699;
						initFov=0.699;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block.p3d";
						gunnerOpticsEffect[]={};
					};
				};
				class HitPoints
				{
				};
			};
			class CargoInside_Left_2: CargoInside_Left_1
			{
				proxyIndex=2;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="pass_cam_pos";
						camDir="pass_cam_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.699;
						maxFov=0.699;
						initFov=0.699;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Left_3: CargoInside_Left_1
			{
				proxyIndex=3;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="pass_cam_pos";
						camDir="pass_cam_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.699;
						maxFov=0.699;
						initFov=0.699;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Right_1: CargoInside_Left_1
			{
				proxyIndex=4;
				gunnerName="$STR_CargoBackRight";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="pass_cam_pos";
						camDir="pass_cam_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.699;
						maxFov=0.699;
						initFov=0.699;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Right_2: CargoInside_Left_1
			{
				proxyIndex=5;
				gunnerName="$STR_CargoBackRight";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="pass_cam_pos";
						camDir="pass_cam_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.699;
						maxFov=0.699;
						initFov=0.699;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Right_3: CargoInside_Left_1
			{
				proxyIndex=6;
				gunnerName="$STR_CargoBackRight";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="pass_cam_pos";
						camDir="pass_cam_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.699;
						maxFov=0.699;
						initFov=0.699;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoInside_Right_4: CargoInside_Left_1
			{
				proxyIndex=7;
				gunnerName="$STR_CargoBackRight";
				memoryPointsGetInGunner="pos cargo r";
				memoryPointsGetInGunnerDir="pos cargo r dir";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="pass_cam_pos";
						camDir="pass_cam_dir";
						opticsDisplayName="";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						visionMode[]=
						{
							"Normal"
						};
						minFov=0.699;
						maxFov=0.699;
						initFov=0.699;
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
		};
		getInProxyOrder[]={1,2,3,4,5,6,7};
		class EventHandlers: EventHandlers
		{
			fired="[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class mkk_cv9030: cv_9030_base_Tank_F
	{
		author="$STR_mkk_Cookie";
		faction="BLU_F";
		side=1;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
	};
	class mkk_cv_9030_r: mkk_cv9030
	{
		faction="OPF_F";
		side=0;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"cv_9030\data\camo\grey\cv_9030_body_co.paa",
			"cv_9030\data\camo\grey\cv_9030_body_add_co.paa",
			"cv_9030\data\camo\grey\cv_9030_gun_co.paa",
			"cv_9030\data\camo\grey\cv_9030_turret_co.paa",
			"bmp_2m\data\rifled_barrel_b_co.paa",
			"t_64_b_bv\data\mg_pkt_co.paa",
			"cv_9030\data\strf_90c_track_co.paa"
		};
	};
	class mkk_cv_9030_g: mkk_cv9030
	{
		faction="IND_F";
		side=2;
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"cv_9030\data\camo\chdkz\cv_9030_body_co.paa",
			"cv_9030\data\camo\chdkz\cv_9030_body_add_co.paa",
			"cv_9030\data\camo\chdkz\cv_9030_gun_co.paa",
			"cv_9030\data\camo\chdkz\cv_9030_turret_co.paa",
			"bmp_2m\data\rifled_barrel_b_co.paa",
			"t_64_b_bv\data\mg_pkt_co.paa",
			"cv_9030\data\strf_90c_track_co.paa"
		};
	};
};

class RscPicture;
class RscControlsGroup;
class RscOpticsValue;
class RscOpticsText;
class RscText;
class VScrollbar;
class HScrollbar;
class RscInGameUI
{
	class RscUnitInfo;
	class kompas: RscUnitInfo
	{
		idd = 300;
		onLoad = "['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
		controls[] = {"CA_Zeroing","CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc = 170;
			class VScrollbar: VScrollbar
			{
				width = 0;
			};
			class HScrollbar: HScrollbar
			{
				height = 0;
			};
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CA_TurretIndicator: RscPicture
				{
					IDC = 206;
					type = 105;
					textSize = "0.02*SafezoneH";
					style = 0;
					color[] = {1,1,1,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					x = "5.25 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "6 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\turretIndicatorObsTurret2.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class CA_HorizontalCompass: RscPicture
				{
					IDC = 207;
					type = 105;
					font = "TahomaB";
					style = 1;
					color[] = {1,1,1,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					textSize = "0.02*SafezoneH";
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture
				{
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {1,1,1,1};
					shadow = 3;
					colorShadow[] = {100,100,100,95};
				};
				class CA_Heading: RscText
				{
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 3;
					colorShadow[] = {100,100,100,95};
					font = "TahomaB";
					colorText[] = {1,1,1,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "6.25 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
};

class CfgCloudlets
{
    class MachineGunCartridge;
    class MachineGunCartridge2 : MachineGunCartridge
    {
        lifeTime = 6;
        moveVelocity[] = {"-directionX * 2", "-directionY * 2", "-directionZ * 2"};
        size[] = {1.6};
        randomDirectionPeriod = 1;
        randomDirectionIntensity = 0;
        bounceOnSurface = 0.1;
        bounceOnSurfaceVar = 0.12;
        lifeTimeVar = 0;
    };

    class Cartridge30mm : MachineGunCartridge2
    {
        moveVelocity[] = {"-directionX * 3", "-directionY * 3", "-directionZ * 3"};
        size[] = {4.5};
        sizeVar = 0;
        bounceOnSurface = 0.25;
        bounceOnSurfaceVar = 0.15;
        lifeTime = 8;
        lifeTimeVar = 0;
        angleVar = 0.5;
        rotationVelocity = 1.2;
        rotationVelocityVar = 2;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.05;
        MoveVelocityVar[] = {0.3, 0.3, 0.3};
        positionVar[] = {0.05, 0.05, 0.05};
        positionVarConst[] = {0, 0, 0};
    };
};
class Cartridge30mm
{
	class Cartridge30mm
    {
        simulation = "particles";
        type = "Cartridge30mm";
        position[] = {0, 0, 0};
        intensity = 1;
        interval = 1;
        lifeTime = 0.05;
 
    };
};