#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class warrior_c
	{
		requiredAddons[]=
		{
			"warrior",
			"rhs_main_loadorder",
			"rhsusf_main_loadorder"
		};
		skipWhenMissingDependencies=1;
		requiredVersion=2.1600001;
		units[]=
		{
			"mkk_warrior_b"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class EventHandlers;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class mkk_warrior_base: Tank_F
	{
		author="lemfy";
		mapSize=10.31;
		_generalMacro="mkk_warrior_base";
		displayName="$STR_warrior_name";
		class Library
		{
			libTextDesc="";
		};
		vehicleClass="Armored";
		side=0;
		model="\warrior\warrior.p3d";
		faction="BLU_F";
		editorSubcategory="EdSubcat_Tanks";
		driverWeaponsInfoType="kompas";
		unitInfoType="RscUnitInfoTank";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
		editorPreview="\warrior\data\ui\warrior_prew.jpg";
		picture="\warrior\data\ui\warrior_side.paa";
		icon="\A3\Armor_F_EPB\APC_Tracked_03\Data\UI\map_APC_Tracked_03_CA.paa";
		memoryPointTaskMarker="TaskMarker_1_pos";
		driverForceOptics=1;
		driverAction="driver_apcwheeled2_out";
		driverInAction="rhs_t72_driver";
		getInAction="GetInMRAP_01";
		getOutAction="GetOutLow";
		viewDriverInExternal=1;
		destrType="DestructDefault";
		supplyRadius=5;
		memoryPointSupply="supply";
		weapons[]={};
		magazines[]={};
		driverCompartments=1;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		tracksSpeed=-2.75;
		wheelCircumference=1.9;
		extCameraPosition[]={0,2.5,-8};
		canFloat=0;
		maxFordingDepth=-1.35;
		waterResistance=0;
		waterDamageEngine=0.2;
		engineShiftY=0.69999999;
		engineEffectSpeed=5;
		driverOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				opticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
				initFov=0.69999999;
				minFov=0.69999999;
				maxFov=0.69999999;
			};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.25;
			minFov=0.13;
			maxFov=0.25;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX=-5;
			initAngleY=0;
			initFov=0.89999998;
			minFov=0.25;
			maxFov=1.25;
			minAngleX=-65;
			maxAngleX=85;
			minAngleY=-150;
			maxAngleY=150;
			minMoveX=-0.075000003;
			maxMoveX=0.075000003;
			minMoveY=-0.075000003;
			maxMoveY=0.075000003;
			minMoveZ=-0.075000003;
			maxMoveZ=0.1;
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustEffectTankSide";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustEffectTankSide";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1000,1000,1000};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=2;
				innerAngle=22;
				outerAngle=35;
				coneFadeCoef=1;
				intensity=300;
				useFlare=0;
				dayLight=0;
				flareSize=2.5;
				flareMaxDistance=1500;
				class Attenuation
				{
					start=0;
					constant=0.5;
					linear=0.1;
					quadratic=1;
					hardLimitStart=1000;
					hardLimitEnd=1500;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};
		aggregateReflectors[]=
		{
			"Left",
			"Right"
		};
		selectionBrakeLights="brzdove svetlo";
		selectionBackLights="zadni svetlo";
		LODDriverTurnedOut=0;
		damageResistance=0.0038900001;
		cost=2500000;
		crewVulnerable=1;
		crewExplosionProtection=0.99989998;
		epeImpulseDamageCoef=18;
		TimeStartEngine=5;
		maxSpeed=75;
		simulation="tankX";
		fuelCapacity=28;
		brakeIdleSpeed=0.1;
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.2;
		engineMOI=9;
		enginePower=485;
		minOmega=64;
		maxOmega=272;
		peakTorque=2610;
		idleRpm=610;
		redRpm=2600;
		torqueCurve[]=
		{
			{0.234615,0},
			{0.384615,0.61302698},
			{0.53846198,1},
			{0.884615,0.72796899},
			{1.26923,0}
		};
		thrustDelay=0.5;
		engineLosses=35;
		transmissionLosses=45;
		clutchStrength=20;
		latency=1.5;
		turnCoef=5;
		changeGearType="rpmratio";
		changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.939394,0.42424199,0.909091,0.63636398,0.909091,0.66666698,1,0.66666698};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3,
				"N",
				0,
				"D1",
				4.1599998,
				"D2",
				2,
				"D3",
				1.28,
				"D4",
				0.86000001
			};
			TransmissionRatios[]=
			{
				"High",
				13.06
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=2;
		};
		tankTurnForce=890000;
		tankTurnForceAngMinSpd=0.60000002;
		tankTurnForceAngSpd=0.91000003;
		accelAidForceCoef=3;
		accelAidForceYOffset=-3.5;
		accelAidForceSpd=3.4000001;
		antiRollbarForceCoef=15;
		antiRollbarForceLimit=12;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=55;
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				steering=0;
				side="left";
				width=0.47;
				mass=120;
				MOI=15.7133;
				latStiffX=3.5;
				latStiffY=35;
				suspTravelDirection[]={-0.125,-1,0};
				longitudinalStiffnessPerUnitGravity=14000;
				maxBrakeTorque=5000;
				sprungMass=-1;
				springStrength=350000;
				springDamperRate=27000;
				dampingRate=1;
				dampingRateInAir=3365;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				frictionVsSlipGraph[]=
				{
					{0,0.44999999},
					{0.18000001,1},
					{0.60000002,0.60000002}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				sprungMass=1600;
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
				sprungMass=1500;
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
				sprungMass=1400;
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
				sprungMass=1300;
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
				sprungMass=1200;
			};
			class L9: L2
			{
				boneName="";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				maxDroop=0;
				maxCompression=0;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxDroop=0;
				maxCompression=0;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				sprungMass=1600;
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
				sprungMass=1500;
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
				sprungMass=1400;
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
				sprungMass=1300;
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
				sprungMass=1200;
			};
			class R9: R2
			{
				boneName="";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				maxDroop=0;
				maxCompression=0;
			};
			class R1: R2
			{
				boneName="";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				maxDroop=0;
				maxCompression=0;
			};
		};
		dustFrontLeftPos="dustFrontLeft";
		dustFrontRightPos="dustFrontRight";
		dustBackLeftPos="dustBackLeft";
		dustBackRightPos="dustBackRight";
		armor=300;
		armorStructural=15;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.27500001;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="-";
				passThrough=1;
				minimalHit=0.34999999;
				explosionShielding=0.30000001;
				radius=0.15000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.34999999;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.34999999;
				explosionShielding=0.2;
				radius=0.2;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class Engine_Smoke1
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke";
						intensity=0.5;
						interval=1;
						lifeTime=60;
					};
					class Engine_Fire: Engine_Smoke1
					{
						type="SmallFireFPlace";
					};
					class Engine_Sounds: Engine_Smoke1
					{
						simulation="sound";
						type="Fire";
					};
					class Engine_Smoke_small1: Engine_Smoke1
					{
						type="WeaponWreckSmoke";
						position="engine_fire1";
					};
					class Engine_Smoke_small2: Engine_Smoke_small1
					{
						position="engine_fire2";
					};
				};
			};
			class HitFuel: HitFuel
			{
				armor=0.40000001;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.40000001;
				explosionShielding=0.2;
				radius=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=0.40000001;
				material=-1;
				name="hit_trackL_point";
				passThrough=0;
				minimalHit=0.34999999;
				explosionShielding=0.40000001;
				radius=0.25;
			};
			class HitRTrack: HitRTrack
			{
				armor=0.40000001;
				material=-1;
				name="hit_trackR_point";
				passThrough=0;
				minimalHit=0.34999999;
				explosionShielding=0.40000001;
				radius=0.25;
			};
			class era_l1
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_l1_point";
				armorComponent="armor_l1";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_l1_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_l1_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_l1_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_l2
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_l2_point";
				armorComponent="armor_l2";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_l2_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_l2_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_l2_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_l3
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_l3_point";
				armorComponent="armor_l3";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_l3_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_l3_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_l3_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_l4
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_l4_point";
				armorComponent="armor_l4";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_l4_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_l4_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_l4_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_l5
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_l5_point";
				armorComponent="armor_l5";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_l5_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_l5_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_l5_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_l6
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_l6_point";
				armorComponent="armor_l6";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_l6_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_l6_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_l6_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_l7
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_l7_point";
				armorComponent="armor_l7";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_l7_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_l7_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_l7_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_r1
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_r1_point";
				armorComponent="armor_r1";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_r1_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_r1_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_r1_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_r2
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_r2_point";
				armorComponent="armor_r2";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_r2_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_r2_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_r2_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_r3
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_r3_point";
				armorComponent="armor_r3";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_r3_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_r3_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_r3_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_r4
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_r4_point";
				armorComponent="armor_r4";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_r4_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_r4_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_r4_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_r5
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_r5_point";
				armorComponent="armor_r5";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_r5_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_r5_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_r5_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
			class era_r6
			{
				simulation="RHS_ERA_K1";
				armor=0.25;
				material=-1;
				name="armor_r6_point";
				armorComponent="armor_r6";
				passThrough=0;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
				visual="-";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_ERA_Flash
					{
						simulation="particles";
						type="RHS_ERA_Flash";
						position="armor_r6_fx";
						intensity=0.5;
						interval=1;
						lifeTime=0.0060000001;
					};
					class RHS_ERA_Sound
					{
						simulation="sound";
						type="RHS_ERA_Explosion_Sound";
						position="armor_r6_fx";
						intensity=1;
						interval=1;
						lifeTime=1;
					};
					class RHS_ERA_Smoke
					{
						simulation="particles";
						type="RHS_ERA_Smoke";
						position="armor_r6_fx";
						intensity=0.1;
						interval=1;
						lifeTime=0.039999999;
					};
				};
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						commanding=1;
						memoryPointGunnerOptics="commanderview";
						minElev=-10;
						maxElev=20;
						initElev=0;
						minTurn=-30;
						maxTurn=30;
						initTurn=0;
						maxHorizontalRotSpeed=0.69999999;
						maxVerticalRotSpeed=0.69999999;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						weapons[]={};
						magazines[]={};
						primary=0;
						primaryGunner=0;
						primaryObserver=1;
						proxyType="CPCommander";
						gunnerAction="Gunner_MBT_02_cannon_F_out";
						gunnerInAction="rhs_t72_commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F.p3d";
						gunnerOpticsEffect[]={};
						gunnerForceOptics=1;
						turretFollowFreeLook=2;
						usepip=2;
						LODOpticsIn=0;
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_2";
						minOutElev=-25;
						maxOutElev=35;
						initOutElev=0;
						minOutTurn=-55;
						maxOutTurn=55;
						initOutTurn=0;
						turretInfoType="kompas";
						showCrewAim=1;
						startEngine=0;
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						viewGunnerInexternal=1;
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
						class ViewOptics: ViewOptics
						{
							initFov=0.4375;
							maxFov=0.4375;
							minFov=0.034820002;
							thermalMode[]={2,3};
							visionMode[]=
							{
								"Normal",
								"NVG"
							};
						};
						class OpticsIn
						{
							class Wide
							{
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.233;
								minFov=0.233;
								maxFov=0.233;
								visionMode[]=
								{
									"Normal",
									"TI",
									"NVG"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/2.5";
								minFov="0.233/2.5";
								maxFov="0.233/2.5";
								gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F.p3d";
							};
							class Narrow2x: Narrow
							{
								initFov="0.233/5";
								minFov="0.233/5";
								maxFov="0.233/5";
							};
						};
						class ViewGunner: ViewGunner
						{
							initAngleX=-5;
							initAngleY=0;
							initFov=0.89999998;
							minFov=0.25;
							maxFov=1.25;
							minAngleX=-65;
							maxAngleX=85;
							minAngleY=-150;
							maxAngleY=150;
							minMoveX=-0.075000003;
							maxMoveX=0.075000003;
							minMoveY=-0.075000003;
							maxMoveY=0.075000003;
							minMoveZ=-0.075000003;
							maxMoveZ=0.1;
						};
					};
				};
				missileBeg="spice rakety";
				missileEnd="konec rakety";
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]=
				{
					"mkk_warrior_weap",
					"weap_l94a1_coax",
					"rhsusf_weap_M259"
				};
				magazines[]=
				{
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_ap",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mkk_warrior_mag_he",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"mag_762x51_100",
					"milan2_mag",
					"milan2_mag",
					"milan2_mag",
					"milan2_mag",
					"rhsusf_mag_L8A3_8"
				};
				soundServo[]=
				{
					"rhsafrf\addons\rhs_t80\Sound\servo.ogg",
					0.56234097,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
					0.56234097,
					1,
					30
				};
				commanding=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInexternal=1;
				forceHideGunner=0;
				castGunnerShadow=1;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\gunnerOptics_M2A2_1x.p3d";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				lockWhenDriverOut=0;
				minElev=-10;
				initElev=0;
				maxElev=45;
				maxHorizontalRotSpeed=0.75;
				maxVerticalRotSpeed=0.40000001;
				turretFollowFreeLook=2;
				usepip=2;
				LODOpticsIn=0;
				isPersonTurret=1;
				personTurretAction="vehicle_turnout_2";
				minOutElev=-25;
				maxOutElev=35;
				initOutElev=0;
				minOutTurn=-55;
				maxOutTurn=55;
				initOutTurn=0;
				turretInfoType="kompas";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=0;
				gunnerHasFlares=1;
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				class ViewOptics: ViewOptics
				{
					initFov=0.4375;
					maxFov=0.4375;
					minFov=0.034820002;
					thermalMode[]={2,3};
					visionMode[]=
					{
						"Normal",
						"TI",
						"NVG"
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
						initFov="0.233*1.5";
						minFov="0.233*1.5";
						maxFov="0.233*1.5";
						thermalMode[]={2,3};
						visionMode[]=
						{
							"Normal",
							"TI",
							"NVG"
						};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\gunnerOptics_M2A2_1x.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov="0.233/4.5";
						minFov="0.233/4.5";
						maxFov="0.233/4.5";
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\gunnerOptics_M2A2_4.5x.p3d";
					};
					class Narrow2x: Narrow
					{
						initFov="0.233/8";
						minFov="0.233/8";
						maxFov="0.233/8";
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\gunnerOptics_M2A2_8x.p3d";
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.40000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="";
						passThrough=0.5;
						minimalHit=0.25;
						explosionShielding=0.2;
						radius=0.15000001;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.40000001;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="";
						passThrough=0;
						minimalHit=0.25;
						explosionShielding=0.40000001;
						radius=0.1;
						isGun=1;
					};
				};
			};
			class CargoTurret1: NewTurret
			{
				proxyIndex=1;
				gunnerName="$STR_warrior_pass";
				proxyType="CPCargo";
				showAsCargo=1;
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				memoryPointGunnerOptics="cam_pass_l";
				gunnerInAction="rhs_t72_driver";
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
				gunnerCompartments="Compartment1";
				class ViewOptics: ViewOptics
				{
				};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cam_pass_l";
						camDir="cam_pass_l_dir";
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
						gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoTurret2: CargoTurret1
			{
				proxyIndex=2;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cam_pass_r";
						camDir="cam_pass_r_dir";
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
						gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoTurret3: CargoTurret1
			{
				proxyIndex=3;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cam_pass_l";
						camDir="cam_pass_l_dir";
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
						gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoTurret4: CargoTurret1
			{
				proxyIndex=4;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cam_pass_r";
						camDir="cam_pass_r_dir";
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
						gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoTurret5: CargoTurret1
			{
				proxyIndex=5;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cam_pass_l";
						camDir="cam_pass_l_dir";
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
						gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoTurret6: CargoTurret1
			{
				proxyIndex=6;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cam_pass_r";
						camDir="cam_pass_r_dir";
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
						gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
			class CargoTurret7: CargoTurret1
			{
				proxyIndex=7;
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="cam_pass_l";
						camDir="cam_pass_l_dir";
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
						gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
						gunnerOpticsEffect[]={};
					};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			class MKK_EventHandlers
			{
				init="_this spawn {params ['_vehicle']; waitUntil {!isNull _vehicle}; if (_vehicle animationPhase 'hide_launcher' > 0.1 && !(_vehicle getVariable ['launcher_added', false])) then {_vehicle addWeaponTurret ['weap_milan_launcher', [0]]; _vehicle setVariable ['launcher_added', true];};};";
			};
		};
		class AnimationSources: AnimationSources
		{
			class zaslehrot_mg
			{
				source="ammorandom";
				weapon="weap_l94a1_coax";
			};
			class recoil
			{
				source="reload";
				weapon="mkk_warrior_weap";
			};
			class revolving
			{
				source="revolving";
				weapon="rhsusf_weap_M259";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="weap_milan_launcher";
			};
			class hide_armor
			{
				displayName="$STR_warrior_hide_armors";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class hide_rope
			{
				displayName="$STR_warrior_hide_rope";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class hide_bottles
			{
				displayName="$STR_warrior_hide_bottles";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class hide_launcher
			{
				displayName="$STR_warrior_hide_launcher";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_box1
			{
				displayName="$STR_warrior_hide_box1";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_box2
			{
				displayName="$STR_warrior_hide_box2";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_loker1
			{
				displayName="$STR_warrior_hide_loker1";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_loker2
			{
				displayName="$STR_warrior_hide_loker2";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_mirrors
			{
				displayName="$STR_warrior_hide_mirrors";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_tent
			{
				displayName="$STR_warrior_hide_tent";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_extinguisher
			{
				displayName="$STR_warrior_hide_extinguisher";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_box3
			{
				displayName="$STR_warrior_hide_box3";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_can1
			{
				displayName="$STR_warrior_hide_can1";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_can2
			{
				displayName="$STR_warrior_hide_can2";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_bag
			{
				displayName="$STR_warrior_hide_bag";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_antenna1
			{
				displayName="$STR_warrior_hide_antenna1";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_antenna2
			{
				displayName="$STR_warrior_hide_antenna2";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class hide_flag
			{
				displayName="$STR_warrior_hide_flag";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
			class gun_source
			{
				source="Hit";
				hitpoint="HitGun";
			};
			class left_track_source
			{
				source="Hit";
				hitpoint="HitLTrack";
			};
			class right_track_source
			{
				source="Hit";
				hitpoint="HitRTrack";
			};
			class wheel_source
			{
				source="Hit";
				hitpoint="HitHull";
			};
			class era_l1_source
			{
				source="Hit";
				hitpoint="era_l1";
			};
			class era_l2_source
			{
				source="Hit";
				hitpoint="era_l2";
			};
			class era_l3_source
			{
				source="Hit";
				hitpoint="era_l3";
			};
			class era_l4_source
			{
				source="Hit";
				hitpoint="era_l4";
			};
			class era_l5_source
			{
				source="Hit";
				hitpoint="era_l5";
			};
			class era_l6_source
			{
				source="Hit";
				hitpoint="era_l6";
			};
			class era_l7_source
			{
				source="Hit";
				hitpoint="era_l7";
			};
			class era_r1_source
			{
				source="Hit";
				hitpoint="era_r1";
			};
			class era_r2_source
			{
				source="Hit";
				hitpoint="era_r2";
			};
			class era_r3_source
			{
				source="Hit";
				hitpoint="era_r3";
			};
			class era_r4_source
			{
				source="Hit";
				hitpoint="era_r4";
			};
			class era_r5_source
			{
				source="Hit";
				hitpoint="era_r5";
			};
			class era_r6_source
			{
				source="Hit";
				hitpoint="era_r6";
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"item1",
			"item2",
			"item3",
			"item4"
		};
		hiddenSelectionsTextures[]=
		{
			"warrior\data\body_green_co.paa",
			"warrior\data\turret_green_co.paa",
			"warrior\data\gun_green_co.paa",
			"warrior\data\mount_green_co.paa",
			"warrior\data\armor_green_co.paa"
		};
		class textureSources
		{
			class green
			{
				displayName="$STR_warrior_green";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_green_co.paa",
					"warrior\data\turret_green_co.paa",
					"warrior\data\gun_green_co.paa",
					"warrior\data\mount_green_co.paa",
					"warrior\data\armor_green_co.paa"
				};
				factions[]={};
			};
			class green2
			{
				displayName="$STR_warrior_green";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_green2_co.paa",
					"warrior\data\turret_green2_co.paa",
					"warrior\data\gun_green2_co.paa",
					"warrior\data\mount_green2_co.paa",
					"warrior\data\armor_green2_co.paa"
				};
				factions[]={};
			};
			class sand
			{
				displayName="$STR_warrior_sand";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_sand_co.paa",
					"warrior\data\turret_sand_co.paa",
					"warrior\data\gun_sand_co.paa",
					"warrior\data\mount_sand_co.paa",
					"warrior\data\armor_sand_co.paa"
				};
				factions[]={};
			};
			class sand2
			{
				displayName="$STR_warrior_sand";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_sand2_co.paa",
					"warrior\data\turret_sand2_co.paa",
					"warrior\data\gun_sand2_co.paa",
					"warrior\data\mount_sand2_co.paa",
					"warrior\data\armor_sand2_co.paa"
				};
				factions[]={};
			};
			class lines
			{
				displayName="$STR_warrior_lines";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_lines_co.paa",
					"warrior\data\turret_lines_co.paa",
					"warrior\data\gun_lines_co.paa",
					"warrior\data\mount_lines_co.paa",
					"warrior\data\armor_lines_co.paa"
				};
				factions[]={};
			};
			class lines2
			{
				displayName="$STR_warrior_lines";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_lines2_co.paa",
					"warrior\data\turret_lines2_co.paa",
					"warrior\data\gun_lines2_co.paa",
					"warrior\data\mount_lines2_co.paa",
					"warrior\data\armor_lines2_co.paa"
				};
				factions[]={};
			};
			class winter
			{
				displayName="$STR_warrior_winter";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_winter_co.paa",
					"warrior\data\turret_winter_co.paa",
					"warrior\data\gun_winter_co.paa",
					"warrior\data\mount_winter_co.paa",
					"warrior\data\armor_winter_co.paa"
				};
				factions[]={};
			};
			class baf
			{
				displayName="$STR_warrior_baf";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_baf_co.paa",
					"warrior\data\turret_baf_co.paa",
					"warrior\data\gun_baf_co.paa",
					"warrior\data\mount_baf_co.paa",
					"warrior\data\armor_baf_co.paa"
				};
				factions[]={};
			};
			class racs
			{
				displayName="$STR_warrior_racs";
				author="lemfy";
				textures[]=
				{
					"warrior\data\body_racs_co.paa",
					"warrior\data\turret_racs_co.paa",
					"warrior\data\gun_racs_co.paa",
					"warrior\data\mount_racs_co.paa",
					"warrior\data\armor_racs_co.paa"
				};
				factions[]={};
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"warrior\data\body.rvmat",
				"warrior\data\body_damage.rvmat",
				"warrior\data\body_destruct.rvmat",
				"warrior\data\turret.rvmat",
				"warrior\data\turret_damage.rvmat",
				"warrior\data\turret_destruct.rvmat",
				"warrior\data\gun.rvmat",
				"warrior\data\gun_damage.rvmat",
				"warrior\data\gun_destruct.rvmat",
				"warrior\data\mount.rvmat",
				"warrior\data\mount_damage.rvmat",
				"warrior\data\mount_destruct.rvmat",
				"warrior\data\armor.rvmat",
				"warrior\data\armor_damage.rvmat",
				"warrior\data\armor_destruct.rvmat",
				"warrior\data\tracks.rvmat",
				"warrior\data\tracks_damage.rvmat",
				"warrior\data\tracks_destruct.rvmat",
				"warrior\data\mg.rvmat",
				"warrior\data\mg_damage.rvmat",
				"warrior\data\mg_destruct.rvmat"
			};
		};
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
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
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_start",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			0.63095737,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
			0.63095737,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
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
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
			1,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_01",
			1,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
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
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_08",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_09",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_10",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\crashes\crash_11",
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
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_idle",
					0.70794576,
					1,
					200
				};
				frequency="0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.79432821,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.79432821,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.89125091,
					1,
					250
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1,
					1,
					300
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1.1220185,
					1,
					340
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1.4125376,
					1,
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_idle",
					0.89125091,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm2",
					1.2589254,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm3",
					1.4125376,
					1,
					250
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm4",
					1.5848932,
					1,
					350
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm5",
					1.7782794,
					1,
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm6",
					1.9952624,
					1,
					450
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_idle",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm1",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm4",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm5",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm6",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_idle",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm1",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm2",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm4",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm5",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm6",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.56234133,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.79432821,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 25])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_2.ogg",
					0.35481337,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_3.ogg",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_4.ogg",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\lanc_5.ogg",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_01",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_02",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_03",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_04",
					0.50118721,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_hard_05",
					0.56234133,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_01",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-0) max 0)/	60),(((-5) max 5)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-15) max 15)/	60),(((-10) max 10)/	60)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_02",
					0.35481337,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-10) max 10)/	60),(((-15) max 15)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-30) max 30)/	60),(((-25) max 25)/	60)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_03",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-25) max 25)/	60),(((-30) max 30)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-45) max 45)/	60),(((-40) max 40)/	60)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_04",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	60) factor[(((-40) max 40)/	60),(((-45) max 45)/	60)])	*	((((-speed*3.6) max speed*3.6)/	60) factor[(((-55) max 55)/	60),(((-50) max 50)/	60)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\treads\int_treads_soft_05",
					0.44668359,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	60) factor[(((-49) max 49)/	60),(((-53) max 53)/	60)])";
			};
		};
		class RenderTargets
		{
			class Mirror_Left
			{
				renderTarget="mirror_left";
				class Mirror_Left
				{
					fov=0.80000001;
					pointDirection="mirror_left_dir";
					pointPosition="mirror_left_pos";
					renderQuality=2;
					renderVisionMode=0;
				};
			};
			class Mirror_Right
			{
				renderTarget="mirror_right";
				class Mirror_Right
				{
					fov=0.80000001;
					pointDirection="mirror_right_dir";
					pointPosition="mirror_right_pos";
					renderQuality=2;
					renderVisionMode=0;
				};
			};
		};
		attenuationEffectType="TankAttenuation";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		insideSoundCoef=0.89999998;
		LodTurnedIn=0;
		LodTurnedOut=0;
		LodOpticsOut=0;
		LODOpticsIn=0;
		numberPhysicalWheels=16;
		incomingMissileDetectionSystem=0;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		transportSoldier=0;
		class Attributes
		{
			class ObjectTextureCustom1
			{
				displayName="Texture1";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [5,_value]";
				defaultValue="(getObjectTextures _this) param [5,'',['']]";
			};
			class ObjectTextureCustom2
			{
				displayName="Texture2";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom2";
				control="Edit";
				expression="_this setObjectTextureGlobal [6,_value]";
				defaultValue="(getObjectTextures _this) param [6,'',['']]";
			};
			class ObjectTextureCustom3
			{
				displayName="Texture3";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom3";
				control="Edit";
				expression="_this setObjectTextureGlobal [7,_value]";
				defaultValue="(getObjectTextures _this) param [7,'',['']]";
			};
			class ObjectTextureCustom4
			{
				displayName="Texture4";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom4";
				control="Edit";
				expression="_this setObjectTextureGlobal [8,_value]";
				defaultValue="(getObjectTextures _this) param [8,'',['']]";
			};
		};
	};
	class mkk_warrior_b: mkk_warrior_base
	{
		scope=2;
		side=1;
		faction="BLU_F";
		editorSubcategory="rhs_EdSubcat_ifv";
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
            class medium;
            class far;
        };
        class AP: autocannon_Base_F
        {
            class player;
            class close;
            class short;
            class medium;
            class far;
        };
    };
    
    class mkk_warrior_weap: autocannon_30mm_CTWS {
        scope = 2;
        displayName = "L21A1";
		muzzles[] = {"HE"};
        autoFire = 0;
        canLock = 0;
        ballisticsComputer = 0;
        weaponLockSystem = 0;
        
        // Только одно дуло HE, в котором перечислены оба типа магазинов
        class HE: HE {
            displayName = "L21A1";
            showToPlayer = 1;
            magazineReloadTime = 2.5;
            autoReload = 1;
            magazines[] = {"mkk_warrior_mag_he", "mkk_warrior_mag_ap"};
            modes[] = {"player", "close", "short", "medium", "far"};
            
            class player: player {
                reloadTime = 0.5;
                dispersion = 0.0003;
                magazines[] = {"mkk_warrior_mag_he", "mkk_warrior_mag_ap"};
            };
            class close: close {
                reloadTime = 0.5;
                dispersion = 0.0003;
                magazines[] = {"mkk_warrior_mag_he", "mkk_warrior_mag_ap"};
            };
            class short: short {
                reloadTime = 0.5;
                dispersion = 0.0003;
                magazines[] = {"mkk_warrior_mag_he", "mkk_warrior_mag_ap"};
            };
            class medium: medium {
                reloadTime = 0.5;
                dispersion = 0.0003;
                magazines[] = {"mkk_warrior_mag_he", "mkk_warrior_mag_ap"};
            };
            class far: far {
                reloadTime = 0.5;
                dispersion = 0.0003;
                magazines[] = {"mkk_warrior_mag_he", "mkk_warrior_mag_ap"};
            };
        };
        
        // Класс AP полностью удалён, чтобы не создавалось второе дуло
        
        class GunParticles {
            class effect {
                effectName = "AutoCannonFired";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
            class shell {
                effectName = "Redd_HeavyGunCartridge_2";
                positionName = "shell_eject_pos";
                directionName = "shell_eject_dir";
            };
        };
    };
	class rhs_weap_TOW_Launcher;
	class weap_milan_launcher: rhs_weap_TOW_Launcher
	{
		displayName="MILAN";
		minRange=10;
		minRangeProbab=0.5;
		midRange=1000;
		midRangeProbab=1;
		maxRange=2000;
		maxRangeProbab=0.60000002;
		reloadTime=2;
		magazineReloadTime=60;
		magazines[]=
		{
			"milan2_mag"
		};
	};
	class rhs_weap_m240_abrams_coax;
	class weap_l94a1_coax: rhs_weap_m240_abrams_coax
	{
		displayName="L94A1";
		magazines[]=
		{
			"mag_762x51_100"
		};
	};
};
class CfgMagazines
{
	class 140Rnd_30mm_MP_shells_Tracer_Green;
    class mkk_warrior_mag_he: 140Rnd_30mm_MP_shells_Tracer_Green {
        displayName = "30x170 HE-I-T";
        displayNameShort = "HE";
        count = 6;
        ammo = "mkk_ammo_warrior_he";
    };
    
    class 60Rnd_30mm_APFSDS_shells_Tracer_Green;
    class mkk_warrior_mag_ap: 60Rnd_30mm_APFSDS_shells_Tracer_Green {
        displayName = "APDS-T 30mm";
        displayNameShort = "AP";
        count = 6;
        ammo = "mkk_ammo_warrior_ap";
    };
	class rhs_mag_2Rnd_TOW2A;
	class milan2_mag: rhs_mag_2Rnd_TOW2A
	{
		scope=2;
		ammo="rhs_ammo_TOW2A_AT";
		displayname="Milan 2";
		displaynameshort="Milan 2";
		count=1;
	};
	class rhs_mag_1100Rnd_762x51_M240;
	class mag_762x51_100: rhs_mag_1100Rnd_762x51_M240
	{
		count=100;
	};
};

class CfgAmmo {
    class B_30mm_HE;
    class mkk_ammo_warrior_he: B_30mm_HE {
        hit = 40;
        indirectHit = 10;
        indirectHitRange = 4;
        typicalSpeed = 1070;
        tracerColor[] = {1,0,0,1};
        model = "\A3\Weapons_F\Data\bullettracer\tracer_red";
        // при желании добавьте другие параметры
    };
    
    class B_30mm_AP;
    class mkk_ammo_warrior_ap: B_30mm_AP {
        hit = 65;
        typicalSpeed = 1175;
        tracerColor[] = {1,1,1,1};
        model = "\A3\Weapons_F\Data\bullettracer\tracer_white";
    };
};

class CfgCloudlets
{
	class Default;
	class MachineGunCartridge : Default
	{
		interval = 0.06;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\weapons_f\ammo\cartridge_762.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {"directionX/2", "directionY/2", "directionZ/2"};
		rotationVelocity = 1;
		weight = 6;
		volume = 1;
		rubbing = 0;
		size[] = {1.8};
		color[] = {{0.9, 0.9, 0.9, 1}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.12;
		blockAIVisibility = 0;
		sizeCoef = 1;
		colorCoef[] = {1, 1, 1, 1};
		animationSpeedCoef = 1;
		position[] = {"positionX", "positionY", "positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0, 0, 0};
		MoveVelocityVar[] = {0.15, 0.15, 0.15};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0, 0, 0, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
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
	class Redd_HeavyGunCartridge : MachineGunCartridge2
	{
		moveVelocity[] = {"-directionX * 5", "-directionY * 5", "-directionZ * 5"};
		size[] = {2.5};
		sizeVar = 0;
		bounceOnSurface = 0.3;
		bounceOnSurfaceVar = 0.2;
		lifeTimeVar = 0;
		angleVar = 0.5;
		rotationVelocity = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		MoveVelocityVar[] = {0.2, 0.2, 0.2};
		rotationVelocityVar = 2;
		positionVar[] = {0.05, 0.05, 0.05};
		positionVarConst[] = {0, 0, 0};
		lifeTime = 10;
	};
	class Redd_HeavyGunCartridge_2 : Redd_HeavyGunCartridge
	{
		size[] = {3.5};
	};
};

class Redd_HeavyGunCartridge_2
{
	class Redd_HeavyGunCartridge_2
	{
		simulation="particles";
		type="Redd_HeavyGunCartridge_2";
		position[] = {0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.05;
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