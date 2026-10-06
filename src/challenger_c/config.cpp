#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class challenger_c
	{
		addonRootClass="A3_Armor_F_Gamma";
		requiredAddons[]=
		{
			"A3_Armor_F_Gamma",
			"challenger",
			"rhsusf_main_loadorder"
		};
		skipWhenMissingDependencies=1;
		requiredVersion=2.1600001;
		units[]=
		{
			"mkk_challenger_FV4034",
			"mkk_challenger_FV4034_TES"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_02: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
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
	class challenger_base: Tank_F
	{
		author="lemfy";
		mapSize=10.31;
		_generalMacro="challenger_base";
		displayName="$STR_Challenger";
		class Library
		{
			libTextDesc="";
		};
		vehicleClass="rhs_vehclass_tank";
		model="\challenger\challenger.p3d";
		editorSubcategory="EdSubcat_Tanks";
		memoryPointTaskMarker="TaskMarker_1_pos";
		editorPreview="\challenger\data\ui\challenger_prew.jpg";
		picture="\challenger\data\ui\challenger_side.paa";
		icon="\rhsusf\addons\rhsusf_m1a1\icons\M1A1AIM.paa";
		destrType="DestructDefault";
		TFAR_AdditionalLR_Turret[]=
		{
			{0,1}
		};
		crew="B_Crew_F";
		typicalCargo[]=
		{
			"B_Crew_F"
		};
		supplyRadius=5;
		memoryPointSupply="supply";
		maximumLoad=7000;
		driverAction="driver_apcwheeled2_out";
		driverInAction="RHS_M1A1_Driver";
		driverCompartments=1;
		driverForceOptics=1;
		driverCanSee="2+4+8";
		gunnerCanSee="2+4+8";
		commanderCanSee="2+4+8";
		memoryPointDriverOptics="driverview";
		weapons[] =
		{
			"rhs_weap_smokegen"
		};
		magazines[] =
		{
			"rhs_mag_smokegen"
		};
		class DriverOpticsIn
		{
			class OpticView: ViewPilot
			{
				OpticsModel="\rhsusf\addons\rhsusf_optics\data\rhs_periscope_BISType";
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
		LODDriverTurnedOut=0;
		LODDriverOpticsIn=1202;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		LODDriverTurnedin=1100;
		viewDriverInExternal=0;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		tracksSpeed=1.35;
		wheelCircumference=2.375;
		extCameraPosition[]={0,2.5,-8};
		maxFordingDepth=-0.75;
		waterResistance=0;
		waterDamageEngine=0.2;
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
		smokeLauncherGrenadeCount=2;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=1;
		smokeLauncherAngle=50;
		damageResistance=0.0038900001;
		cost=2500000;
		crewVulnerable=0;
		crewExplosionProtection=0.99989998;
		epeImpulseDamageCoef=18;
		TimeStartEngine=5;
		maxspeed=60;
		simulation="tankX";
		enginePower=1103;
		maxOmega=304;
		minOmega=74;
		engineMOI=12;
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
		clutchStrength=40;
		brakeIdleSpeed=5;
		latency=2;
		turnCoef=1;
		slowSpeedForwardCoef=0.5;
		normalSpeedForwardCoef=0.77999997;
		idleRpm=700;
		redRpm=2900;
		dampingRateFullThrottle=1.3;
		dampingRateZeroThrottleClutchEngaged=6;
		dampingRateZeroThrottleClutchDisengaged=1;
		tankTurnForce=1100000;
		tankTurnForceAngMinSpd=0.69999999;
		tankTurnForceAngSpd=0.69999999;
		accelAidForceCoef=2.5;
		accelAidForceYOffset=-5.5;
		accelAidForceSpd=2.23;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=42;
		antiRollbarSpeedMin=30;
		antiRollbarSpeedMax=85;
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
				-4,
				"N",
				0,
				"D1",
				4.0999999,
				"D2",
				3.5,
				"D3",
				2.5999999,
				"D4",
				2.0999999
			};
			TransmissionRatios[]=
			{
				"High",
				10
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=3;
		};
		class Wheels
		{
			class L2
			{
				boneName="wheel_podkoloL1";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				damping=75;
				steering=0;
				side="left";
				weight=150;
				mass=150;
				MOI=24;
				latStiffX=1;
				latStiffY=35;
				suspTravelDirection[]={-0.125,-1,0};
				longitudinalStiffnessPerUnitGravity=32000;
				maxBrakeTorque=11500;
				sprungMass=8000;
				springStrength=650000;
				springDamperRate=65000;
				dampingRate=1;
				dampingRateInAir=5400;
				dampingRateDamaged=10;
				dampingRateDestroyed=10000;
				maxDroop=0.18000001;
				maxCompression=0.18000001;
				frictionVsSlipGraph[]=
				{
					{0,0.80000001},
					{0.38,1},
					{0.69999999,0.64999998}
				};
			};
			class L3: L2
			{
				boneName="wheel_podkolol2";
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				sprungMass=7000;
			};
			class L4: L2
			{
				boneName="wheel_podkolol3";
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
				sprungMass=6000;
			};
			class L5: L2
			{
				boneName="wheel_podkolol4";
				center="wheel_1_5_axis";
				boundary="wheel_1_5_bound";
				sprungMass=5000;
			};
			class L6: L2
			{
				boneName="wheel_podkolol5";
				center="wheel_1_6_axis";
				boundary="wheel_1_6_bound";
				sprungMass=4000;
			};
			class L7: L2
			{
				boneName="wheel_podkolol6";
				center="wheel_1_7_axis";
				boundary="wheel_1_7_bound";
				sprungMass=3000;
			};
			class L9: L2
			{
				boneName="";
				center="wheel_1_9_axis";
				boundary="wheel_1_9_bound";
				maxDroop=0;
				maxCompression=0;
				sprungMass=2000;
			};
			class L1: L2
			{
				boneName="";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				maxDroop=0;
				maxCompression=0;
				sprungMass=10000;
			};
			class R2: L2
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_podkolop1";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				sprungMass=8000;
			};
			class R3: R2
			{
				boneName="wheel_podkolop2";
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				sprungMass=7000;
			};
			class R4: R2
			{
				boneName="wheel_podkolop3";
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
				sprungMass=6000;
			};
			class R5: R2
			{
				boneName="wheel_podkolop4";
				center="wheel_2_5_axis";
				boundary="wheel_2_5_bound";
				sprungMass=5000;
			};
			class R6: R2
			{
				boneName="wheel_podkolop5";
				center="wheel_2_6_axis";
				boundary="wheel_2_6_bound";
				sprungMass=4000;
			};
			class R7: R2
			{
				boneName="wheel_podkolop6";
				center="wheel_2_7_axis";
				boundary="wheel_2_7_bound";
				sprungMass=3000;
			};
			class R9: R2
			{
				boneName="";
				center="wheel_2_9_axis";
				boundary="wheel_2_9_bound";
				sprungMass=2000;
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
				sprungMass=10000;
			};
		};
		explosionShielding=1;
		armor=600;
		armorStructural=400;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.6;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="-";
				passThrough=1;
				minimalHit=0.22;
				explosionShielding=0.30000001;
				radius=0.2;
			};
			class HitEngine: HitEngine
			{
				armor=-100;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=1;
				radius=0.235;
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
				armor=-80;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.1;
				minimalHit=0.30000001;
				explosionShielding=2;
				radius=0.15000001;
			};
			class HitLTrack: HitLTrack
			{
				armor=-150;
				material=-1;
				name="hit_track_l_point";
				visual="-";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=0.40000001;
				radius=0.30000001;
			};
			class HitRTrack: HitRTrack
			{
				armor=-150;
				material=-1;
				name="hit_track_r_point";
				visual="-";
				passThrough=0;
				minimalHit=0.2;
				explosionShielding=0.40000001;
				radius=0.30000001;
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
						body="obsTurret";
						gun="obsGun";
						gunBeg="Usti hlavne3";
						gunEnd="Konec hlavne3";
						memoryPointGun="usti hlavne3";
						selectionFireAnim="zasleh3";
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						commanding=1;
						memoryPointGunnerOptics="commanderview";
						minElev=-20;
						maxElev=40;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						maxHorizontalRotSpeed=0.80000001;
						maxVerticalRotSpeed=0.80000001;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						weapons[]={};
						magazines[]={};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							0.56234133,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
							0.56234133,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						forceHideGunner=0;
						gunnerOutForceOptics=0;
						ejectDeadGunner=0;
						canUseScanners=0;
						allowTabLock=0;
						lockWhenDriverOut=0;
						hideWeaponsGunner=1;
						primary=0;
						primaryGunner=0;
						primaryObserver=1;
						proxyType="CPCommander";
						gunnerAction="Commander_MBT_01_cannon_F_out";
						gunnerInAction="Gunner_APC_Wheeled_01_in";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerOpticsModel="\bwa3_puma\bwa3_puma_optics_gunner.p3d";
						gunnerOpticsEffect[]={};
						gunnerForceOptics=1;
						turretFollowFreeLook=2;
						usepip=2;
						LODOpticsIn=0;
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_2";
						minOutElev=-30;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-50;
						maxOutTurn=50;
						initOutTurn=0;
						turretInfoType="kompas";
						showCrewAim=1;
						startEngine=0;
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						viewGunnerInExternal=0;
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
						class ViewOptics: ViewOptics
						{
							initFov=0.4375;
							maxFov=0.4375;
							minFov=0.034820002;
							thermalMode[]={0,1};
							visionMode[]=
							{
								"Normal",
								"TI",
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
								initFov=0.5126;
								minFov=0.5126;
								maxFov=0.5126;
								visionMode[]=
								{
									"Normal",
									"Ti",
									"NVG"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\challenger\data\ui\gunner_optics1.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
								gunnerOpticsModel="\challenger\data\ui\gunner_optics2.p3d";
							};
							class Narrow2x: Narrow
							{
								initFov="0.233/8";
								minFov="0.233/8";
								maxFov="0.233/8";
								gunnerOpticsModel="\challenger\data\ui\gunner_optics3.p3d";
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
					class Loader: CommanderOptics
					{
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1;
						maxVerticalRotSpeed=1;
						weapons[]={};
						magazines[]={};
						memoryPointGunnerOptics="loadervisor_view";
						minElev=-10;
						maxElev=40;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						gunnerForceOptics=1;
						turretFollowFreeLook=2;
						viewGunnerInExternal=0;
						outGunnerMayFire=0;
						inGunnerMayFire=0;
						isPersonTurret=1;
						lockWhenDriverOut=0;
						lodTurnedOut=1200;
						gunnerAction="RHS_M1A1_Loader_out";
						gunnerInAction="RHS_M1A1_Loader_in";
						selectionFireAnim="";
						animationSourceHatch="hatchloader";
						commanding=-3;
						primaryGunner=0;
						primaryObserver=0;
						memoryPointsGetInGunner="pos gunner";
						memoryPointsGetInGunnerDir="pos gunner dir";
						gunnername="$STR_Loader";
						soundServo[]=
						{
							"A3\sounds_f\dummysound",
							1e-006,
							1
						};
						gunnerDoor="hatchL";
						proxyindex=2;
						turretInfoType="kompas";
						minOutElev=-30;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-50;
						maxOutTurn=50;
						initOutTurn=0;
						class ViewOptics: ViewOptics
						{
							initFov=0.4375;
							maxFov=0.4375;
							minFov=0.034820002;
							thermalMode[]={0,1};
							visionMode[]=
							{
								"Normal",
								"TI",
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
								initFov=0.5126;
								minFov=0.5126;
								maxFov=0.5126;
								visionMode[]=
								{
									"Normal",
									"Ti",
									"NVG"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
							};
						};
					};
				};
				usepip=2;
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				gunnerAction="gunner_apcwheeled1_out";
				gunnerInAction="Gunner_APC_Wheeled_01_in";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",
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
				weapons[]=
				{
					"mkk_weap_l30a1",
					"mkk_weap_l94a1",
					"mkk_weap_smokelauncher",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"mkk_mag_APFSDS_L27A1",
					"mkk_mag_HESH_L31",
					"mkk_mag_L34_SMOKE",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"mkk_mag_smoke_10",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500,3600,3700,3800,3900,4000};
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				minElev=-10;
				maxElev=20;
				initElev=8;
				maxHorizontalRotSpeed=0.80000001;
				maxVerticalRotSpeed=0.60000002;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				forceHideGunner=1;
				startEngine=0;
				inGunnerMayFire=1;
				LODOpticsIn=0;
				viewGunnerInExternal=0;
				lockWhenDriverOut=1;
				class TurnIn
				{
					limitsArrayTop[]=
					{
						{20,-180},
						{20,180}
					};
					limitsArrayBottom[]=
					{
						{1.4,-180},
						{0.69999999,-134.68671},
						{-9.3683004,-133.68671},
						{-10,0},
						{-9.7173004,133.63721},
						{0.69999999,134.68671},
						{1.4,180}
					};
				};
				turretInfoType="kompas";
				class ViewOptics: ViewOptics
				{
					initFov=0.4375;
					maxFov=0.4375;
					minFov=0.034820002;
					thermalMode[]={0,1};
					visionMode[]=
					{
						"Normal",
						"TI",
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
						initFov=0.5126;
						minFov=0.5126;
						maxFov=0.5126;
						visionMode[]=
						{
							"Normal",
							"Ti",
							"NVG"
						};
						thermalMode[]={2,3};
						gunnerOpticsModel="\challenger\data\ui\gunner_optics1.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov="0.233/4";
						minFov="0.233/4";
						maxFov="0.233/4";
						gunnerOpticsModel="\challenger\data\ui\gunner_optics2.p3d";
					};
					class Narrow2x: Narrow
					{
						initFov="0.233/8";
						minFov="0.233/8";
						maxFov="0.233/8";
						gunnerOpticsModel="\challenger\data\ui\gunner_optics3.p3d";
					};
					class Narrow3x: Narrow
					{
						initFov="0.233/12";
						minFov="0.233/12";
						maxFov="0.233/12";
						gunnerOpticsModel="\challenger\data\ui\gunner_optics4.p3d";
					};
				};
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=-160;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="";
						passThrough=0;
						minimalHit=-0.2;
						explosionShielding=0.2;
						radius=0.1;
						isTurret=1;
					};
					class HitGun
					{
						armor=-150;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="";
						passThrough=0;
						minimalHit=-0.2;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
			};
		};
		class AnimationSources: AnimationSources
		{
			class user_recoil
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class revolving
			{
				source="revolving";
				weapon="mkk_weap_smokelauncher";
			};
			class zaslehrot_mg
			{
				source="ammorandom";
				weapon="RHS_M2_Abrams_Commander";
			};
			class showExtinguisher
			{
				displayName="$STR_Show_chal_extinguisher";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showRope
			{
				displayName="$STR_Show_chal_rope";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showBotles
			{
				displayName="$STR_Show_chal_botles";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showCanisters
			{
				displayName="$STR_Show_chal_canisters";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showTools
			{
				displayName="$STR_Show_chal_tools";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showLamp
			{
				displayName="$STR_Show_chal_lamp";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showMirror
			{
				displayName="$STR_Show_chal_mirror";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
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
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",
			0.63095737,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_start.wss",
			2.7943282,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop",
			2.7943282,
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
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_1.wss",5,1,400};
				frequency="1";
				volume="engineOn*camPos*(((rpm/2300) factor[(100/2300),(200/2300)])*((rpm/2300) factor[(760/2300),(600/2300)]))";
			};
			class Engine
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_2.wss",0.6,1,280};
				frequency="1";
				volume="engineOn*camPos*(((rpm/2300) factor[(420/2300),(750/2300)])*((rpm/2300) factor[(920/2300),(800/2300)]))";
			};
			class Engine1_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_3.wss",5.122,1,600};
				frequency="0.8+((rpm/2300) factor[(800/2300),(1150/2300)])*0.1";
				volume="engineOn*camPos*(((rpm/2300) factor[(800/2300),(2300/2300)])*((rpm/2300) factor[(1150/2300),(960/2300)]))";
			};
			class Engine2_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_4.wss",6.259,1,660};
				frequency="0.8+((rpm/2300) factor[(960/2300),(1500/2300)])*0.2";
				volume="engineOn*camPos*(((rpm/2300) factor[(1550/2300),(2300/2300)])*((rpm/2300) factor[(1500/2300),(1250/2300)]))";
			};
			class Engine3_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_5.wss",6.413,1,680};
				frequency="0.8+((rpm/2300) factor[(1200/2300),(1700/2300)])*0.15";
				volume="engineOn*camPos*(((rpm/2300) factor[(1250/2300),(1450/2300)])*((rpm/2300) factor[(1700/2300),(1560/2300)]))";
			};
			class Engine4_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_4.wss",6.585,1,720};
				frequency="0.8+((rpm/2300) factor[(1520/2300),(2000/2300)])*0.15";
				volume="engineOn*camPos*(((rpm/2300) factor[(1570/2300),(1670/2300)])*((rpm/2300) factor[(2000/2300),(1800/2300)]))";
			};
			class Engine5_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_ext_5.wss",6.778,1,800};
				frequency="0.8+((rpm/2300) factor[(1800/2300),(2300/2300)])*0.2";
				volume="engineOn*camPos*((rpm/2300) factor[(1850/2300),(1950/2300)])";
			};
			class IdleThrust
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm1.wss",5.622,1,500};
				frequency="1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(100/2300),(200/2300)])*((rpm/2300) factor[(760/2300),(600/2300)]))";
			};
			class EngineThrust
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm2.wss",6.013,1,500};
				frequency="1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(620/2300),(750/2300)])*((rpm/2300) factor[(920/2300),(800/2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm3.wss",7.078,1,530};
				frequency="0.8+((rpm/2300) factor[(800/2300),(1150/2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(800/2300),(900/2300)])*((rpm/2300) factor[(1150/2300),(960/2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm4.wss",7.095,1,550};
				frequency="0.8+((rpm/2300) factor[(960/2300),(1500/2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(950/2300),(1100/2300)])*((rpm/2300) factor[(1500/2300),(1250/2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm5.wss",7.078,1,690};
				frequency="0.8+((rpm/2300) factor[(1200/2300),(1700/2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(1250/2300),(1450/2300)])*((rpm/2300) factor[(1700/2300),(1560/2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm6.wss",7.039,1,620};
				frequency="0.8+((rpm/2300) factor[(1520/2300),(2000/2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(1570/2300),(1670/2300)])*((rpm/2300) factor[(2000/2300),(1800/2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_ext_rpm7.wss",7.012,1,750};
				frequency="0.8+((rpm/2300) factor[(1800/2300),(2300/2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2300) factor[(1850/2300),(1950/2300)])";
			};
			class Idle_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_1.wss",0.501,1};
				frequency="0.8+((rpm/2300) factor[(400/2300),(750/2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/2300) factor[(100/2300),(200/2300)])*((rpm/2300) factor[(760/2300),(600/2300)]))";
			};
			class Engine_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_2.wss",0.355,1};
				frequency="0.8+((rpm/2300) factor[(620/2300),(910/2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/2300) factor[(620/2300),(750/2300)])*((rpm/2300) factor[(920/2300),(800/2300)]))";
			};
			class Engine1_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_3.wss",0.398,1};
				frequency="0.8+((rpm/2300) factor[(800/2300),(1150/2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/2300) factor[(800/2300),(900/2300)])*((rpm/2300) factor[(1150/2300),(960/2300)]))";
			};
			class Engine2_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_4.wss",0.447,1};
				frequency="0.8+((rpm/2300) factor[(960/2300),(1500/2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/2300) factor[(950/2300),(1100/2300)])*((rpm/2300) factor[(1500/2300),(1250/2300)]))";
			};
			class Engine3_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_5.wss",0.501,1};
				frequency="0.8+((rpm/2300) factor[(1200/2300),(1700/2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/2300) factor[(1250/2300),(1450/2300)])*((rpm/2300) factor[(1700/2300),(1560/2300)]))";
			};
			class Engine4_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_6.wss",0.562,1};
				frequency="0.8+((rpm/2300) factor[(1520/2300),(2000/2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/2300) factor[(1570/2300),(1670/2300)])*((rpm/2300) factor[(2000/2300),(1800/2300)]))";
			};
			class Engine5_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_engine_int_7.wss",0.631,1};
				frequency="0.8+((rpm/2300) factor[(1800/2300),(2300/2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/2300) factor[(1850/2300),(1950/2300)])";
			};
			class IdleThrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm1.wss",0.631,1};
				frequency="0.8+((rpm/2300) factor[(400/2300),(750/2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(100/2300),(200/2300)])*((rpm/2300) factor[(760/2300),(600/2300)]))";
			};
			class EngineThrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm2.wss",0.398,1};
				frequency="0.8+((rpm/2300) factor[(620/2300),(910/2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(620/2300),(750/2300)])*((rpm/2300) factor[(920/2300),(800/2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm3.wss",0.447,1};
				frequency="0.8+((rpm/2300) factor[(800/2300),(1150/2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(800/2300),(900/2300)])*((rpm/2300) factor[(1150/2300),(960/2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm4.wss",0.447,1};
				frequency="0.8+((rpm/2300) factor[(960/2300),(1500/2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(950/2300),(1100/2300)])*((rpm/2300) factor[(1500/2300),(1250/2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm5.wss",0.501,1};
				frequency="0.8+((rpm/2300) factor[(1200/2300),(1700/2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(1250/2300),(1450/2300)])*((rpm/2300) factor[(1700/2300),(1560/2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm6.wss",0.562,1};
				frequency="0.8+((rpm/2300) factor[(1520/2300),(2000/2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2300) factor[(1570/2300),(1670/2300)])*((rpm/2300) factor[(2000/2300),(1800/2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\armor\MBT_01\MBT1_exhaust_int_rpm7.wss",0.631,1};
				frequency="0.8+((rpm/2300) factor[(1800/2300),(2300/2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2300) factor[(1850/2300),(1950/2300)])";
			};
			class NoiseInt
			{
				sound[]={"A3\Sounds_F\vehicles\armor\noises\noise_tank_int_1.wss",0.501,1};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[4,15])";
			};
			class NoiseExt
			{
				sound[]={"A3\Sounds_F\vehicles\armor\noises\noise_tank_ext_1.wss",0.891,1,50};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4,15])";
			};
			// Гусеницы – оставляем ванильные звуки (они у вас уже правильные)
			class ThreadsOutH0
			{
				sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1.wss",1,1,140};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/60) factor[(((-0) max 0)/60),(((-5) max 5)/60)])*((((-speed*3.6) max speed*3.6)/60) factor[(((-15) max 15)/60),(((-10) max 10)/60)]))";
			};
            class ThreadsOutH1
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2.wss",1,1,160};
                frequency="1";
                volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/60) factor[(((-10) max 10)/60),(((-15) max 15)/60)])*((((-speed*3.6) max speed*3.6)/60) factor[(((-30) max 30)/60),(((-25) max 25)/60)]))";
            };
            class ThreadsOutH2
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3.wss",1,1,180};
                frequency="1";
                volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/60) factor[(((-25) max 25)/60),(((-30) max 30)/60)])*((((-speed*3.6) max speed*3.6)/60) factor[(((-45) max 45)/60),(((-40) max 40)/60)]))";
            };
            class ThreadsOutH3
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4.wss",1,1,200};
                frequency="1";
                volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/60) factor[(((-40) max 40)/60),(((-45) max 45)/60)])*((((-speed*3.6) max speed*3.6)/60) factor[(((-55) max 55)/60),(((-50) max 50)/60)]))";
            };
            class ThreadsOutH4
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5.wss",1,1,220};
                frequency="1";
                volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/60) factor[(((-49) max 49)/60),(((-53) max 53)/60)])";
            };
            class ThreadsOutS0
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1.wss",1,1,120};
                frequency="1";
                volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/60) factor[(((-0) max 0)/60),(((-5) max 5)/60)])*((((-speed*3.6) max speed*3.6)/60) factor[(((-15) max 15)/60),(((-10) max 10)/60)]))";
            };
            class ThreadsOutS1
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2.wss",1,1,140};
                frequency="1";
                volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/60) factor[(((-10) max 10)/60),(((-15) max 15)/60)])*((((-speed*3.6) max speed*3.6)/60) factor[(((-30) max 30)/60),(((-25) max 25)/60)]))";
            };
            class ThreadsOutS2
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3.wss",1,1,160};
                frequency="1";
                volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/60) factor[(((-25) max 25)/60),(((-30) max 30)/60)])*((((-speed*3.6) max speed*3.6)/60) factor[(((-45) max 45)/60),(((-40) max 40)/60)]))";
            };
            class ThreadsOutS3
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4.wss",1,1,180};
                frequency="1";
                volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/60) factor[(((-40) max 40)/60),(((-45) max 45)/60)])*((((-speed*3.6) max speed*3.6)/60) factor[(((-55) max 55)/60),(((-50) max 50)/60)]))";
            };
            class ThreadsOutS4
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5.wss",1,1,200};
                frequency="1";
                volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/60) factor[(((-49) max 49)/60),(((-53) max 53)/60)])";
            };
            class ThreadsInH0
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1.wss",0.251,1};
                frequency="1";
                volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/55) factor[(((-0) max 0)/55),(((-5) max 5)/55)])*((((-speed*3.6) max speed*3.6)/55) factor[(((-12) max 12)/55),(((-8) max 8)/55)]))";
            };
            class ThreadsInH1
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2.wss",0.282,1};
                frequency="1";
                volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/55) factor[(((-10) max 10)/55),(((-12) max 12)/55)])*((((-speed*3.6) max speed*3.6)/55) factor[(((-23) max 23)/55),(((-16) max 16)/55)]))";
            };
            class ThreadsInH2
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3.wss",0.316,1};
                frequency="1";
                volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/55) factor[(((-20) max 20)/55),(((-22) max 22)/55)])*((((-speed*3.6) max speed*3.6)/55) factor[(((-35) max 35)/55),(((-28) max 28)/55)]))";
            };
            class ThreadsInH3
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4.wss",0.355,1};
                frequency="1";
                volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/55) factor[(((-30) max 30)/55),(((-34) max 34)/55)])*((((-speed*3.6) max speed*3.6)/55) factor[(((-42) max 42)/55),(((-36) max 36)/55)]))";
            };
            class ThreadsInH4
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5.wss",0.398,1};
                frequency="1";
                volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/55) factor[(((-39) max 39)/55),(((-42) max 42)/55)])";
            };
            class ThreadsInS0
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1.wss",0.316,1};
                frequency="1";
                volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/55) factor[(((-0) max 0)/55),(((-5) max 5)/55)])*((((-speed*3.6) max speed*3.6)/55) factor[(((-12) max 12)/55),(((-8) max 8)/55)]))";
            };
            class ThreadsInS1
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2.wss",0.316,1};
                frequency="1";
                volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/55) factor[(((-10) max 10)/55),(((-12) max 12)/55)])*((((-speed*3.6) max speed*3.6)/55) factor[(((-23) max 23)/55),(((-16) max 16)/55)]))";
            };
            class ThreadsInS2
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3.wss",0.355,1};
                frequency="1";
                volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/55) factor[(((-20) max 20)/55),(((-22) max 22)/55)])*((((-speed*3.6) max speed*3.6)/55) factor[(((-35) max 35)/55),(((-28) max 28)/55)]))";
            };
            class ThreadsInS3
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4.wss",0.355,1};
                frequency="1";
                volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/55) factor[(((-30) max 30)/55),(((-34) max 34)/55)])*((((-speed*3.6) max speed*3.6)/55) factor[(((-42) max 42)/55),(((-36) max 36)/55)]))";
            };
            class ThreadsInS4
            {
                sound[]={"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5.wss",0.398,1};
                frequency="1";
                volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/55) factor[(((-39) max 39)/55),(((-42) max 42)/55)])";
            };
        };
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"challenger\data\body.rvmat",
				"challenger\data\body_damage.rvmat",
				"challenger\data\body_destruct.rvmat",
				"challenger\data\turret.rvmat",
				"challenger\data\turret_damage.rvmat",
				"challenger\data\turret_destruct.rvmat",
				"challenger\data\gun.rvmat",
				"challenger\data\gun_damage.rvmat",
				"challenger\data\gun_destruct.rvmat",
				"challenger\data\cage.rvmat",
				"challenger\data\cage_damage.rvmat",
				"challenger\data\cage_destruct.rvmat",
				"challenger\data\armor.rvmat",
				"challenger\data\armor_damage.rvmat",
				"challenger\data\armor_destruct.rvmat",
				"challenger\data\era.rvmat",
				"challenger\data\era_damage.rvmat",
				"challenger\data\era_destruct.rvmat",
				"challenger\data\crows.rvmat",
				"challenger\data\crows_damage.rvmat",
				"challenger\data\crows_destruct.rvmat",
				"challenger\data\m2.rvmat",
				"challenger\data\m2_damage.rvmat",
				"challenger\data\m2_destruct.rvmat",
				"challenger\data\tracks.rvmat",
				"challenger\data\tracks_damage.rvmat",
				"challenger\data\tracks_destruct.rvmat",
				"challenger\data\mg.rvmat",
				"challenger\data\mg_damage.rvmat",
				"challenger\data\mg_destruct.rvmat",
				"challenger\data\net.rvmat",
				"challenger\data\net_damage.rvmat",
				"challenger\data\net_destruct.rvmat",
				"challenger\data\barrel.rvmat",
				"challenger\data\barrel_damage.rvmat",
				"challenger\data\barrel_destruct.rvmat",
				"challenger\data\reflector.rvmat",
				"challenger\data\reflectors_damage.rvmat",
				"challenger\data\reflectors_destruct.rvmat"
			};
		};
		class TextureSources
		{
			class Green
			{
				displayName="$STR_chal_Green";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_green_co.paa",
					"challenger\data\turret_green_co.paa",
					"challenger\data\gun_green_co.paa"
				};
			};
			class Green2
			{
				displayName="$STR_chal_Green";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_green2_co.paa",
					"challenger\data\turret_green2_co.paa",
					"challenger\data\gun_green2_co.paa"
				};
			};
			class lines
			{
				displayName="$STR_chal_lines";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_lines_co.paa",
					"challenger\data\turret_lines_co.paa",
					"challenger\data\gun_lines_co.paa"
				};
			};
			class winter
			{
				displayName="$STR_chal_winter";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_winter_co.paa",
					"challenger\data\turret_winter_co.paa",
					"challenger\data\gun_winter_co.paa"
				};
			};
			class pixel
			{
				displayName="$STR_chal_BAF";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_pixel_co.paa",
					"challenger\data\turret_pixel_co.paa",
					"challenger\data\gun_pixel_co.paa"
				};
			};
			class sand1
			{
				displayName="$STR_chal_sand";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_sand1_co.paa",
					"challenger\data\turret_sand1_co.paa",
					"challenger\data\gun_sand1_co.paa"
				};
			};
			class sand2
			{
				displayName="$STR_chal_sand";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_sand2_co.paa",
					"challenger\data\turret_sand2_co.paa",
					"challenger\data\gun_sand2_co.paa"
				};
			};
			class tricolor
			{
				displayName="$STR_chal_tricolor";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_tricolor_co.paa",
					"challenger\data\turret_tricolor_co.paa",
					"challenger\data\gun_tricolor_co.paa"
				};
			};
			class twocolor
			{
				displayName="$STR_chal_twocolor";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_twocolor_co.paa",
					"challenger\data\turret_twocolor_co.paa",
					"challenger\data\gun_twocolor_co.paa"
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"item1",
			"item2",
			"item3",
			"item4"
		};
		hiddenSelectionsTextures[]=
		{
			"challenger\data\body_green_co.paa",
			"challenger\data\turret_green_co.paa",
			"challenger\data\gun_green_co.paa"
		};
		attenuationEffectType="TankAttenuation";
		insideSoundCoef=0.89999998;
		numberPhysicalWheels=16;
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class Attributes
		{
			class ObjectTextureCustom1
			{
				displayName="Texture1";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [3,_value]";
				defaultValue="(getObjectTextures _this) param [3,'',['']]";
			};
			class ObjectTextureCustom2
			{
				displayName="Texture2";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom2";
				control="Edit";
				expression="_this setObjectTextureGlobal [4,_value]";
				defaultValue="(getObjectTextures _this) param [4,'',['']]";
			};
			class ObjectTextureCustom3
			{
				displayName="Texture3";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom3";
				control="Edit";
				expression="_this setObjectTextureGlobal [5,_value]";
				defaultValue="(getObjectTextures _this) param [5,'',['']]";
			};
			class ObjectTextureCustom4
			{
				displayName="Texture4";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom4";
				control="Edit";
				expression="_this setObjectTextureGlobal [6,_value]";
				defaultValue="(getObjectTextures _this) param [6,'',['']]";
			};
		};
	};
	class mkk_challenger_FV4034_F_base: challenger_base
	{
		author="lemfy";
		displayName="$STR_Challenger_f";
		model="\challenger\Challenger_2f.p3d";
		picture="\challenger\data\ui\challenger_f_side.paa";
		editorPreview="\challenger\data\ui\challenger_f_prew.jpg";
		side=1;
		scope=0;
		class TextureSources
		{
			class Green
			{
				displayName="$STR_chal_Green";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_green_co.paa",
					"challenger\data\turret_green_co.paa",
					"challenger\data\gun_green_co.paa",
					"challenger\data\cage_green_co.paa",
					"challenger\data\armor_green_co.paa",
					"challenger\data\era_green_co.paa",
					"challenger\data\crows_green_co.paa"
				};
			};
			class Green2
			{
				displayName="$STR_chal_Green";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_green2_co.paa",
					"challenger\data\turret_green2_co.paa",
					"challenger\data\gun_green2_co.paa",
					"challenger\data\cage_green2_co.paa",
					"challenger\data\armor_green2_co.paa",
					"challenger\data\era_green2_co.paa",
					"challenger\data\crows_green2_co.paa"
				};
			};
			class lines
			{
				displayName="$STR_chal_lines";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_lines_co.paa",
					"challenger\data\turret_lines_co.paa",
					"challenger\data\gun_lines_co.paa",
					"challenger\data\cage_lines_co.paa",
					"challenger\data\armor_lines_co.paa",
					"challenger\data\era_lines_co.paa",
					"challenger\data\crows_lines_co.paa"
				};
			};
			class winter
			{
				displayName="$STR_chal_winter";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_winter_co.paa",
					"challenger\data\turret_winter_co.paa",
					"challenger\data\gun_winter_co.paa",
					"challenger\data\cage_winter_co.paa",
					"challenger\data\armor_winter_co.paa",
					"challenger\data\era_winter_co.paa",
					"challenger\data\crows_winter_co.paa"
				};
			};
			class pixel
			{
				displayName="$STR_chal_BAF";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_pixel_co.paa",
					"challenger\data\turret_pixel_co.paa",
					"challenger\data\gun_pixel_co.paa",
					"challenger\data\cage_pixel_co.paa",
					"challenger\data\armor_pixel_co.paa",
					"challenger\data\era_pixel_co.paa",
					"challenger\data\crows_pixel_co.paa"
				};
			};
			class sand1
			{
				displayName="$STR_chal_sand";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_sand1_co.paa",
					"challenger\data\turret_sand1_co.paa",
					"challenger\data\gun_sand1_co.paa",
					"challenger\data\cage_sand1_co.paa",
					"challenger\data\armor_sand1_co.paa",
					"challenger\data\era_sand1_co.paa",
					"challenger\data\crows_sand1_co.paa"
				};
			};
			class sand2
			{
				displayName="$STR_chal_sand";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_sand2_co.paa",
					"challenger\data\turret_sand2_co.paa",
					"challenger\data\gun_sand2_co.paa",
					"challenger\data\cage_sand2_co.paa",
					"challenger\data\armor_sand2_co.paa",
					"challenger\data\era_sand2_co.paa",
					"challenger\data\crows_sand2_co.paa"
				};
			};
			class tricolor
			{
				displayName="$STR_chal_tricolor";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_tricolor_co.paa",
					"challenger\data\turret_tricolor_co.paa",
					"challenger\data\gun_tricolor_co.paa",
					"challenger\data\cage_tricolor_co.paa",
					"challenger\data\armor_tricolor_co.paa",
					"challenger\data\era_tricolor_co.paa",
					"challenger\data\crows_tricolor_co.paa"
				};
			};
			class twocolor
			{
				displayName="$STR_chal_twocolor";
				author="lemfy";
				textures[]=
				{
					"challenger\data\body_twocolor_co.paa",
					"challenger\data\turret_twocolor_co.paa",
					"challenger\data\gun_twocolor_co.paa",
					"challenger\data\cage_twocolor_co.paa",
					"challenger\data\armor_twocolor_co.paa",
					"challenger\data\era_twocolor_co.paa",
					"challenger\data\crows_twocolor_co.paa"
				};
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
			"camo7",
			"item1",
			"item2",
			"item3",
			"item4"
		};
		hiddenSelectionsTextures[]=
		{
			"challenger\data\body_green_co.paa",
			"challenger\data\turret_green_co.paa",
			"challenger\data\gun_green_co.paa",
			"challenger\data\cage_green_co.paa",
			"challenger\data\armor_green_co.paa",
			"challenger\data\era_green_co.paa",
			"challenger\data\crows_green_co.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[]=
						{
							"RHS_M2_Abrams_Commander"
						};
						magazines[]={"rhs_mag_100rnd_127x99_mag_Tracer_Red","rhs_mag_100rnd_127x99_mag_Tracer_Red"};
						class HitPoints
						{
							class HitComTurret
							{
								armor=-160;
								material=-1;
								armorComponent="hit_com_turret";
								name="hit_com_turret_point";
								visual="-";
								passThrough=0;
								minimalHit=0.18000001;
								explosionShielding=0.60000002;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun
							{
								armor=-160;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="-";
								passThrough=0;
								minimalHit=0.18000001;
								explosionShielding=0.60000002;
								radius=0.15000001;
								isGun=1;
							};
						};
					};
					class Loader: CommanderOptics
					{
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1;
						maxVerticalRotSpeed=1;
						weapons[]={};
						magazines[]={};
						memoryPointGunnerOptics="gunnerview";
						minElev=-10;
						maxElev=40;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						gunnerForceOptics=1;
						turretFollowFreeLook=2;
						viewGunnerInExternal=0;
						outGunnerMayFire=0;
						inGunnerMayFire=0;
						isPersonTurret=1;
						lockWhenDriverOut=0;
						lodTurnedOut=1200;
						gunnerAction="Commander_MBT_01_cannon_F_out";
						gunnerInAction="Gunner_APC_Wheeled_01_in";
						selectionFireAnim="";
						animationSourceHatch="hatchloader";
						commanding=-3;
						primaryGunner=0;
						primaryObserver=0;
						memoryPointsGetInGunner="pos loader";
						memoryPointsGetInGunnerDir="pos loader dir";
						gunnername="$STR_Loader";
						soundServo[]=
						{
							"A3\sounds_f\dummysound",
							1e-006,
							1
						};
						gunnerDoor="hatchL";
						proxyindex=2;
						turretInfoType="kompas";
						minOutElev=-30;
						maxOutElev=45;
						initOutElev=0;
						minOutTurn=-50;
						maxOutTurn=125;
						initOutTurn=0;
						class ViewOptics: ViewOptics
						{
							initFov=0.4375;
							maxFov=0.4375;
							minFov=0.034820002;
							thermalMode[]={0,1};
							visionMode[]=
							{
								"Normal",
								"TI",
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
								initFov=0.5126;
								minFov=0.5126;
								maxFov=0.5126;
								visionMode[]=
								{
									"Normal",
									"Ti",
									"NVG"
								};
								thermalMode[]={2,3};
								gunnerOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_f.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
							};
						};
					};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class user_recoil
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class revolving
			{
				source="revolving";
				weapon="mkk_weap_smokelauncher";
			};
			class zaslehrot_mg
			{
				source="ammorandom";
				weapon="RHS_M2_Abrams_Commander";
			};
			class zaslehrot_hmg
			{
				source="ammorandom";
				weapon="RHS_M2_CROWS_M153_Abrams";
			};
			class showExtinguisher
			{
				displayName="$STR_Show_chal_extinguisher";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showRope
			{
				displayName="$STR_Show_chal_rope";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showCanisters
			{
				displayName="$STR_Show_chal_canisters";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showTools
			{
				displayName="$STR_Show_chal_tools";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showLamp
			{
				displayName="$STR_Show_chal_lamp";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class showMirror
			{
				displayName="$STR_Show_chal_mirror";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class era_front_1_source
			{
				source="Hit";
				hitpoint="era_front_1";
			};
			class era_front_2_source
			{
				source="Hit";
				hitpoint="era_front_2";
			};
			class era_front_3_source
			{
				source="Hit";
				hitpoint="era_front_3";
			};
			class era_front_4_source
			{
				source="Hit";
				hitpoint="era_front_4";
			};
			class era_front_5_source
			{
				source="Hit";
				hitpoint="era_front_5";
			};
			class era_front_6_source
			{
				source="Hit";
				hitpoint="era_front_6";
			};
			class era_front_7_source
			{
				source="Hit";
				hitpoint="era_front_7";
			};
			class era_front_8_source
			{
				source="Hit";
				hitpoint="era_front_8";
			};
			class era_left_1_source
			{
				source="Hit";
				hitpoint="era_left_1";
			};
			class era_left_2_source
			{
				source="Hit";
				hitpoint="era_left_2";
			};
			class era_left_3_source
			{
				source="Hit";
				hitpoint="era_left_3";
			};
			class era_left_4_source
			{
				source="Hit";
				hitpoint="era_left_4";
			};
			class era_left_5_source
			{
				source="Hit";
				hitpoint="era_left_5";
			};
			class era_left_6_source
			{
				source="Hit";
				hitpoint="era_left_6";
			};
			class era_left_7_source
			{
				source="Hit";
				hitpoint="era_left_7";
			};
			class era_left_8_source
			{
				source="Hit";
				hitpoint="era_left_8";
			};
			class era_left_9_source
			{
				source="Hit";
				hitpoint="era_left_9";
			};
			class era_left_10_source
			{
				source="Hit";
				hitpoint="era_left_10";
			};
			class era_left_11_source
			{
				source="Hit";
				hitpoint="era_left_11";
			};
			class era_right_1_source
			{
				source="Hit";
				hitpoint="era_right_1";
			};
			class era_right_2_source
			{
				source="Hit";
				hitpoint="era_right_2";
			};
			class era_right_3_source
			{
				source="Hit";
				hitpoint="era_right_3";
			};
			class era_right_4_source
			{
				source="Hit";
				hitpoint="era_right_4";
			};
			class era_right_5_source
			{
				source="Hit";
				hitpoint="era_right_5";
			};
			class era_right_6_source
			{
				source="Hit";
				hitpoint="era_right_6";
			};
			class era_right_7_source
			{
				source="Hit";
				hitpoint="era_right_7";
			};
			class era_right_8_source
			{
				source="Hit";
				hitpoint="era_right_8";
			};
			class era_right_9_source
			{
				source="Hit";
				hitpoint="era_right_9";
			};
			class era_right_10_source
			{
				source="Hit";
				hitpoint="era_right_10";
			};
			class era_right_11_source
			{
				source="Hit";
				hitpoint="era_right_11";
			};
			class era_back_1_source
			{
				source="Hit";
				hitpoint="era_back_1";
			};
			class era_back_2_source
			{
				source="Hit";
				hitpoint="era_back_2";
			};
			class era_back_3_source
			{
				source="Hit";
				hitpoint="era_back_3";
			};
			class era_tur_left_1_source
			{
				source="Hit";
				hitpoint="era_tur_left_1";
			};
			class era_tur_left_2_source
			{
				source="Hit";
				hitpoint="era_tur_left_2";
			};
			class era_tur_left_3_source
			{
				source="Hit";
				hitpoint="era_tur_left_3";
			};
			class era_tur_left_4_source
			{
				source="Hit";
				hitpoint="era_tur_left_4";
			};
			class era_tur_left_5_source
			{
				source="Hit";
				hitpoint="era_tur_left_5";
			};
			class era_tur_left_6_source
			{
				source="Hit";
				hitpoint="era_tur_left_6";
			};
			class era_tur_left_7_source
			{
				source="Hit";
				hitpoint="era_tur_left_7";
			};
			class era_tur_left_8_source
			{
				source="Hit";
				hitpoint="era_tur_left_8";
			};
			class era_tur_right_1_source
			{
				source="Hit";
				hitpoint="era_tur_right_1";
			};
			class era_tur_right_2_source
			{
				source="Hit";
				hitpoint="era_tur_right_2";
			};
			class era_tur_right_3_source
			{
				source="Hit";
				hitpoint="era_tur_right_3";
			};
			class era_tur_right_4_source
			{
				source="Hit";
				hitpoint="era_tur_right_4";
			};
			class era_tur_right_5_source
			{
				source="Hit";
				hitpoint="era_tur_right_5";
			};
			class era_tur_right_6_source
			{
				source="Hit";
				hitpoint="era_tur_right_6";
			};
			class era_tur_right_7_source
			{
				source="Hit";
				hitpoint="era_tur_right_7";
			};
			class era_tur_right_8_source
			{
				source="Hit";
				hitpoint="era_tur_right_8";
			};
			class era_tur_back_1_source
			{
				source="Hit";
				hitpoint="era_tur_back_1";
			};
		};
		class HitPoints: HitPoints
		{
			#include "ERA_point.hpp"
		};
		class Attributes
		{
			class ObjectTextureCustom1
			{
				displayName="Texture1";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom1";
				control="Edit";
				expression="_this setObjectTextureGlobal [7,_value]";
				defaultValue="(getObjectTextures _this) param [7,'',['']]";
			};
			class ObjectTextureCustom2
			{
				displayName="Texture2";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom2";
				control="Edit";
				expression="_this setObjectTextureGlobal [8,_value]";
				defaultValue="(getObjectTextures _this) param [8,'',['']]";
			};
			class ObjectTextureCustom3
			{
				displayName="Texture3";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom3";
				control="Edit";
				expression="_this setObjectTextureGlobal [9,_value]";
				defaultValue="(getObjectTextures _this) param [9,'',['']]";
			};
			class ObjectTextureCustom4
			{
				displayName="Texture4";
				tooltip="$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property="ObjectTextureCustom4";
				control="Edit";
				expression="_this setObjectTextureGlobal [10,_value]";
				defaultValue="(getObjectTextures _this) param [10,'',['']]";
			};
		};
	};
	class mkk_challenger_FV4034: challenger_base
	{
		side=1;
		scope=2;
		faction="BLU_F";
	};
	class mkk_challenger_FV4034_TES: mkk_challenger_FV4034_F_base
	{
		side=1;
		scope=2;
		faction="BLU_F";
	};
};

class cfgWeapons
{
	class rhs_weap_m256;
	class mkk_weap_l30a1: rhs_weap_m256
	{
		ballisticsComputer = "2+16";
		displayName = "L30A1 120mm";
		magazines[]=
        {
            "mkk_mag_APFSDS_L27A1",
            "mkk_mag_HESH_L31",
            "mkk_mag_L34_SMOKE"
		};
	};
	class rhs_weap_m240_abrams;
	class mkk_weap_l94a1: rhs_weap_m240_abrams
	{
		ballisticsComputer = "2+16";
		displayName = "MG - L94A1";
		displayNameShort="L94A1";
		maxZeroing = 1500;
	};
	class rhsusf_weap_M250;
	class rhsusf_weap_M259;
	class mkk_weap_smokelauncher: rhsusf_weap_M250
	{
		magazines[]={"mkk_mag_smoke_10"};
		modes[]={"Double"};
		class Double: rhsusf_weap_M259
		{
			reloadTime=0.098999999;
			burst=2;
			showToPlayer=1;
			multiplier=1;
			minRange=0;
			maxRange=10000;
			soundBurst=0;
			autoFire=1;
			displayName="L8 (2)";
		};
	};
};
class CfgMagazines
{
	class SmokeLauncherMag;
	class mkk_mag_smoke_10: SmokeLauncherMag
	{
		count = 10;
	};
	class rhs_mag_M829A3;
	class mkk_mag_APFSDS_L27A1: rhs_mag_M829A3
	{
		displayName="APFSDS - L27A1";
        displayNameShort="L27A1";
        count=30;
	};
	class rhs_mag_M1069;
	class mkk_mag_HESH_L31: rhs_mag_M1069
	{
		displayName="HESH - L31";
        displayNameShort="L31";
		initSpeed=731;
		count = 10;
	};
	class VehicleMagazine;
	class mkk_mag_L34_SMOKE: VehicleMagazine
    {
        displayName="SMOKE - L34";
        displayNameShort="L34";
        ammo="mkk_ammo_L34_SMOKE";
        count=10;
        initSpeed=732;
        maxLeadSpeed=20;
        nameSound="heat";
    };
};
class CfgAmmo
{
	class Smoke_120mm_AMOS_White;
	class mkk_ammo_L34_SMOKE: Smoke_120mm_AMOS_White
	{
		timeToLive=45;                              // дольше держится
		explosionEffects="SmokeShellBig";          // большой дым
		effectsSmoke="SmokeShellBig";
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		explosive=0;
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
