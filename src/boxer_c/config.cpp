#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class boxer_c
	{
		units[]=
		{
			"mkk_boxer_ifv_b",
			"mkk_boxer_ifv_r",
			"mkk_boxer_ifv_g",
			"mkk_boxer_m2_b",
			"mkk_boxer_m2_r",
			"mkk_boxer_m2_g",
			"mkk_boxer_gmw_b",
			"mkk_boxer_gmw_r",
			"mkk_boxer_gmw_g",
			"mkk_boxer_mgs_b",
			"mkk_boxer_mgs_r",
			"mkk_boxer_mgs_g",
			"mkk_boxer_ranger_b",
			"mkk_boxer_ranger_r",
			"mkk_boxer_ranger_g",
			"mkk_boxer_unarmed_b",
			"mkk_boxer_unarmed_r",
			"mkk_boxer_unarmed_g",
			"mkk_boxer_med_b",
			"mkk_boxer_med_r",
			"mkk_boxer_med_g"
		};
		weapons[]={};
		requiredVersion=2.1600001;
		requiredAddons[]=
		{
			"boxer",
			"rhs_main_loadorder",
			"rhsusf_main_loadorder",
			"bwa3_weapons",
			"bwa3_mg3"
		};
		skipWhenMissingDependencies=1;
	};
};
class pzn_vdisp_Radar_boxer_Left
{
	componentType="VehicleSystemsDisplayManager";
	x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 						(			((safezoneW / safezoneH) min 1.2) / 40))])";
	y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	left=1;
	defaultDisplay="EmptyDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType="SensorsDisplayComponent";
			range[]={7500,3500,1000};
			showTargetTypes=317;
		};
		class EmptyDisplay
		{
			componentType="EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType="MinimapDisplayComponent";
		};
	};
};
class pzn_vdisp_Radar_boxer_Right
{
	componentType="VehicleSystemsDisplayManager";
	x="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
	y="(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
	right=1;
	defaultDisplay="SensorDisplay";
	class Components
	{
		class SensorDisplay
		{
			componentType="SensorsDisplayComponent";
			range[]={7500,3500,1000};
			showTargetTypes=317;
		};
		class EmptyDisplay
		{
			componentType="EmptyDisplayComponent";
		};
		class MinimapDisplay
		{
			componentType="MinimapDisplayComponent";
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class SensorsManagerComponent;
class ActiveRadarSensorComponent;
class DefaultVehicleSystemsDisplayManagerLeft;
class WeaponCloudsMGun;
class cfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
				class Components;
			};
		};
		class AnimationSources;
		class Components;
		class EventHandlers;
	};
	class mkk_boxer_base: Wheeled_APC_F
	{
		author="lemfy";
		_generalMacro="mkk_boxer_base";
		accuracy=0.25;
		class Library
		{
			libTextDesc="";
		};
		model="\boxer\boxer_ifv.p3d";
		displayName="Boxer";
		picture="\boxer\data\ui\boxer_ifv_side.paa";
		Icon="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
		editorPreview="\boxer\data\ui\boxer_ifv_prew.jpg";
		faction="BLU_F";
		editorSubcategory="EdSubcat_Tanks";
		memoryPointTaskMarker="TaskMarker_1_pos";
		driverWeaponsInfoType="RscOptics_MBT_01_Driver";
		destrType="DestructDefault";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_crew_F"
		};
		tf_hasLRradio=1;
		supplyRadius=5;
		memoryPointSupply="supply";
		maximumLoad=8000;
		transportMaxMagazines=400;
		hideWeaponsDriver=1;
		enableGPS=1;
		fuelCapacity=25;
		simulation="carx";
		wheelCircumference=3.51386;
		brakeIdleSpeed=2.4000001;
		maxSpeed=110;
		normalSpeedForwardCoef=0.75;
		slowSpeedForwardCoef=0.44999999;
		turnCoef=2.8;
		terrainCoef=1;
		dampersBumpCoef=4.5;
		differentialType="all_limited";
		frontRearSplit=0.34999999;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=50;
		maxOmega=251.327;
		minOmega=83.775803;
		enginePower=750;
		peakTorque=3000;
		idleRPM=800;
		redRPM=2400;
		thrustDelay=0.5;
		engineMOI=3;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=1;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			
			{
				"(0/2300)",
				"(0/2260)"
			},
			
			{
				"(1000/2300)",
				"(1625/2260)"
			},
			
			{
				"(1400/2300)",
				"(2100/2260)"
			},
			
			{
				"(1500/2300)",
				"(2200/2260)"
			},
			
			{
				"(1550/2300)",
				"(2260/2260)"
			},
			
			{
				"(1600/2300)",
				"(2200/2260)"
			},
			
			{
				"(2300/2300)",
				"(1700/2260)"
			},
			
			{
				"(4700/2300)",
				"(0/2260)"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.25,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.01,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.81999999,
				"D6",
				0.67000002
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0;
		};
		switchTime=0.0099999998;
		latency=1;
		accelAidForceCoef=4;
		accelAidForceYOffset=-1.5;
		accelAidForceSpd=2.5;
		antiRollbarForceCoef=2;
		antiRollbarForceLimit=2;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				steering=1;
				mass=187.5;
				Moi=60;
				dampingRate=0.1;
				dampingRateInAir=4000;
				dampingRateDamaged=10;
				dampingRateDestroyed=1000;
				maxBrakeTorque=25000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.18000001;
				maxDroop=0.18000001;
				sprungMass=6000;
				springStrength=350000;
				springDamperRate=35000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				sprungMass=5000;
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=25000;
				sprungMass=4000;
			};
			class L4: L1
			{
				boneName="wheel_1_4_damper";
				steering=0;
				center="wheel_1_4_axis";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_axis";
				tireForceAppPointOffset="wheel_1_4_axis";
				maxHandBrakeTorque=25000;
				sprungMass=3000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				sprungMass=5000;
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=25000;
				sprungMass=4000;
			};
			class R4: R1
			{
				boneName="wheel_2_4_damper";
				steering=0;
				center="wheel_2_4_axis";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_axis";
				tireForceAppPointOffset="wheel_2_4_axis";
				maxHandBrakeTorque=25000;
				sprungMass=3000;
			};
		};
		canFloat=0;
		waterLeakiness=7.5;
		waterResistance=0;
		waterResistanceCoef=0;
		waterLinearDampingCoefY=0;
		waterLinearDampingCoefX=0;
		waterAngularDampingCoef=0.2;
		waterDamageEngine=1;
		maxFordingDepth=-1;
		waterEffectSpeed=5;
		engineShiftY=0.5;
		viewDriverInexternal=0;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		armorLights=0.1;
		crewExplosionProtection=0.99949998;
		damageResistance=0.0071899998;
		LODDriverTurnedOut=0;
		driverAction="driver_apcwheeled1_out";
		driverInAction="Driver_APC_Wheeled_01_in";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic03",
			"passenger_apc_narrow_generic01",
			"passenger_apc_generic04",
			"passenger_generic01_foldhands",
			"passenger_apc_narrow_generic02",
			"passenger_apc_generic02b",
			"passenger_generic01_leanright",
			"passenger_apc_narrow_generic01"
		};
		hideWeaponsCargo=1;
		driverForceOptics=1;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		memoryPointDriverOptics="driverview";
		LodTurnedIn=1100;
		LodTurnedOut=1100;
		LodOpticsOut=1100;
		LODOpticsIn=1100;
		cargoIsCoDriver[]={0};
		forceHideDriver=0;
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos="driverview";
				opticsModel="\bwa3_puma\bwa3_puma_optics_driver";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				initFov=0.60000002;
				minFov=0.60000002;
				maxFov=0.60000002;
			};
			class cam_front: ViewOptics
            {
                camPos = "view_front";
                camDir = "view_front_dir";
                opticsModel = "\A3\weapons_f\reticle\optics_generic_empty_f.p3d";
                thermalMode[] = {0};
                visionMode[] = {"Normal","Ti","NVG"};
                initFov = 0.6;
                minFov = 0.6;
                maxFov = 0.6;
            };
            class cam_rear: ViewOptics
            {
                camPos = "view_rear";
                camDir = "view_rear_dir";
                opticsModel = "\A3\weapons_f\reticle\optics_generic_empty_f.p3d";
                thermalMode[] = {0};
                visionMode[] = {"Normal","Ti","NVG"};
                initFov = 0.6;
                minFov = 0.6;
                maxFov = 0.6;
            };
		};
		class ViewOptics
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
		class ViewPilot
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
		extCameraPosition[]={0,2.75,-9.25};
		unitInfoType="RscUnitInfoTank";
		armor=300;
		armorStructural=15;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=0.2;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="-";
				passThrough=1;
				minimalHit=0.40000001;
				explosionShielding=0.1;
				radius=0.2;
			};
			class HitEngine: HitEngine
			{
				armor=0.2;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.40000001;
				minimalHit=0.34999999;
				explosionShielding=0.30000001;
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
				armor=0.25;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=1;
				minimalHit=0.40000001;
				explosionShielding=0.5;
				radius=0.15000001;
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.25;
				visual="wheel_1_1_hide";
				armorComponent="wheel_1_1_hide";
				armor=-100;
				minimalHit=-0.13;
				explosionShielding=0.60000002;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.25;
				visual="wheel_1_2_hide";
				armorComponent="wheel_1_2_hide";
				armor=-100;
				minimalHit=-0.13;
				explosionShielding=0.60000002;
				passThrough=0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius=0.25;
				visual="wheel_1_3_hide";
				armorComponent="wheel_1_3_hide";
				armor=-100;
				minimalHit=-0.13;
				explosionShielding=0.60000002;
				passThrough=0;
			};
			class HitLBWheel: HitLBWheel
			{
				radius=0.25;
				visual="wheel_1_4_hide";
				armorComponent="wheel_1_4_hide";
				armor=-100;
				minimalHit=-0.13;
				explosionShielding=0.60000002;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.25;
				visual="wheel_2_1_hide";
				armorComponent="wheel_2_1_hide";
				armor=-100;
				minimalHit=-0.13;
				explosionShielding=0.60000002;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.25;
				visual="wheel_2_2_hide";
				armorComponent="wheel_2_2_hide";
				armor=-100;
				minimalHit=-0.13;
				explosionShielding=0.60000002;
				passThrough=0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius=0.25;
				visual="wheel_2_3_hide";
				armorComponent="wheel_2_3_hide";
				armor=-100;
				minimalHit=-0.13;
				explosionShielding=0.2;
				passThrough=0;
			};
			class HitRBWheel: HitRBWheel
			{
				radius=0.25;
				visual="wheel_2_4_hide";
				armorComponent="wheel_2_4_hide";
				armor=-100;
				minimalHit=-0.13;
				explosionShielding=0.2;
				passThrough=0;
			};
			class HitGlass1
			{
				armor=0.2;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass2
			{
				armor=0.2;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass3
			{
				armor=0.2;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
		};
		wheelDamageThreshold=0.18000001;
		wheelDamageRadiusCoef=0.75;
		weapons[]=
		{
			"TruckHorn3"
		};
		magazines[]={};
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		soundGear[]=
		{
			"",
			"db-85",
			1
		};
		soundGetIn[]=
		{
			"\mkk_sound_vehicles\LAV_25\getin.ogg",
			0.75,
			1
		};
		soundGetOut[]=
		{
			"\mkk_sound_vehicles\LAV_25\getout.ogg",
			0.75,
			1,
			40
		};
		soundEngineOnInt[]=
		{
			"\mkk_sound_vehicles\LAV_25\WAPC1\start_int.ogg",
			0.5,
			1
		};
		soundEngineOnExt[]=
		{
			"\mkk_sound_vehicles\LAV_25\WAPC1\start_ext.ogg",
			1,
			1,
			125
		};
		soundEngineOffInt[]=
		{
			"\mkk_sound_vehicles\LAV_25\WAPC1\stop_int.ogg",
			0.25,
			1
		};
		soundEngineOffExt[]=
		{
			"\mkk_sound_vehicles\LAV_25\WAPC1\stop_ext.ogg",
			1,
			1,
			125
		};
		buildCrash0[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_building_01.ogg",
			1.5,
			1,
			300
		};
		buildCrash1[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_building_02.ogg",
			1.5,
			1,
			300
		};
		buildCrash2[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_building_03.ogg",
			1.5,
			1,
			300
		};
		buildCrash3[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_building_04.ogg",
			1.5,
			1,
			300
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
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_mix_wood_01.ogg",
			1.5,
			1,
			300
		};
		WoodCrash1[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_mix_wood_02.ogg",
			1.5,
			1,
			300
		};
		WoodCrash2[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_mix_wood_03.ogg",
			1.5,
			1,
			300
		};
		WoodCrash3[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_mix_wood_04.ogg",
			1.5,
			1,
			300
		};
		WoodCrash4[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_mix_wood_05.ogg",
			1.5,
			1,
			300
		};
		WoodCrash5[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_mix_wood_06.ogg",
			1.5,
			1,
			300
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
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_vehicle_01.ogg",
			1.5,
			1,
			300
		};
		ArmorCrash1[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_vehicle_02.ogg",
			1.5,
			1,
			300
		};
		ArmorCrash2[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_vehicle_03.ogg",
			1.5,
			1,
			300
		};
		ArmorCrash3[]=
		{
			"\mkk_sound_vehicles\LAV_25\Shared\Noises\Crash\crash_vehicle_04.ogg",
			1.5,
			1,
			300
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
					"\mkk_sound_vehicles\LAV_25\WAPC1\idle_ext.ogg",
					1,
					1,
					350
				};
				frequency="0.95	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="1*engineOn*camPos*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\WAPC1\engine_Ext.ogg",
					1,
					1,
					400
				};
				frequency="0.5	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*1";
				volume="1*engineOn*camPos*(thrust factor[0.8,0])*((rpm/	2300) factor[(450/	2300),(900/	2300)])";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\WAPC1\gear_Ext.ogg",
					1,
					1,
					250
				};
				frequency="1.5*(speed factor[1, 25])";
				volume="1*engineOn*camPos*((((-speed*3.6) max speed*3.6)/	95) factor[(((-01) max 01)/	95),(((-35) max 35)/	95)])";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Shared\Turbo\wapc_turbo.ogg",
					0.75,
					1,
					100
				};
				frequency="1";
				volume="1*engineOn*camPos*(thrust factor[0,0.7])*((rpm/	2300) factor[(1700/	2300),(1750/	2300)])";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Shared\Rev\WAPC_rev_ext.ogg",
					1,
					1,
					420
				};
				frequency="0.5	+	((rpm/	2300) factor[(1000/	2300),(2300/	2300)])*1";
				volume="engineOn*camPos*(thrust factor[0.8,0])*((rpm/	2300) factor[(1100/	2300),(2300/	2300)])";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\WAPC1\thrust_ext.ogg",
					1,
					1,
					700
				};
				frequency="0.5	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*1";
				volume="1*engineOn*camPos*(thrust factor[0,1])*((rpm/	2300) factor[(450/	2300),(900/	2300)])";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\WAPC1\distance.ogg",
					1,
					1,
					800
				};
				frequency="0.5	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*1";
				volume="1*engineOn*camPos*(thrust factor[0,0.6])*((rpm/	2300) factor[(450/	2300),(900/	2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\ext_exhaust_1.ogg",
					2,
					1,
					220
				};
				frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\ext_exhaust_2.ogg",
					2,
					1,
					420
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\ext_exhaust_3.ogg",
					2,
					1,
					420
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\ext_exhaust_4.ogg",
					2,
					1,
					420
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\ext_exhaust_5.ogg",
					2,
					1,
					420
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\ext_exhaust_6.ogg",
					2,
					1,
					420
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\ext_exhaust_7.ogg",
					2,
					1,
					420
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.63095701,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					2,
					1,
					300
				};
				frequency="0.95*(speed factor[2, 10])";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					1.58489,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class Idle_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\WAPC1\idle_int.ogg",
					0.5,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(10/	2300),(100/	2300)])	*	((rpm/	2300) factor[(750/	2300),(700/	2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\WAPC1\engine_int.ogg",
					0.5,
					1
				};
				frequency="0.5	+	((rpm/	2300) factor[(600/	2300),(2300/	2300)])*1";
				volume="1*engineOn*(1-camPos)*((rpm/	2300) factor[(450/	2300),(900/	2300)])";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\WAPC1\gear_int.ogg",
					0.5,
					1
				};
				frequency="1.5*(speed factor[1, 25])";
				volume="1*engineOn*(1-camPos)*((((-speed*3.6) max speed*3.6)/	95) factor[(((-01) max 01)/	95),(((-35) max 35)/	95)])";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Shared\Turbo\wapc_turbo.ogg",
					0.25,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(thrust factor[0.9,1])*(((rpm/	2300) factor[(1500/	2300),(2300/	2300)])	*	((rpm/	2300) factor[(2300/	2300),(1700/	2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Shared\Rev\wapc_rev.ogg",
					0.25,
					1
				};
				frequency="0.5	+	((rpm/	2300) factor[(1000/	2300),(2300/	2300)])*1";
				volume="engineOn*(1-camPos)*((rpm/	2300) factor[(1700/	2300),(2300/	2300)])";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\WAPC1\thrust_int.ogg",
					0.5,
					1
				};
				frequency="0.25	+	((rpm/	2300) factor[(300/	2300),(2000/	2300)])*1";
				volume="1*engineOn*(1-camPos)*(thrust factor[0,1])";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\NoSound",
					0,
					0
				};
				frequency="0";
				volume="0";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\int_exhaust_1.ogg",
					0.60000002,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\int_exhaust_2.ogg",
					0.60000002,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\int_exhaust_3.ogg",
					0.60000002,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\int_exhaust_4.ogg",
					0.60000002,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\int_exhaust_5.ogg",
					0.60000002,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\int_exhaust_6.ogg",
					0.60000002,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Engines\exhaust\apcs\int_exhaust_7.ogg",
					0.60000002,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Rattle\Int_Noises.ogg",
					0.75,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(speed factor[1, 10])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\int_sand_apc.ogg",
					0.75,
					1
				};
				frequency="0.95*(speed factor[2, 10])";
				volume="rock*camPos*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\int_sand_apc.ogg",
					0.75,
					1
				};
				frequency="0.95*(speed factor[2, 10])";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\int_grs_apc.ogg",
					0.75,
					1
				};
				frequency="0.95*(speed factor[2, 10])";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\int_grv_apc.ogg",
					0.75,
					1
				};
				frequency="0.95*(speed factor[2, 10])";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\int_grv_apc.ogg",
					0.75,
					1
				};
				frequency="0.95*(speed factor[2, 10])";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\int_asp_apc.ogg",
					0.75,
					1
				};
				frequency="(speed factor[1, 20])";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Rattle\APC Road.ogg",
					0.75,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(damper0 max 0.02)*3*(angVelocity max 0.02)*(speed factor[0, 5])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Noise\turn_int_road.ogg",
					0.75,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Noise\turn_int_road.ogg",
					0.75,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class TiresCloseDry
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\Close_dry.ogg",
					2,
					1,
					300
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[5, 40])";
			};
			class TiresCloseWet
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\Close_wet.ogg",
					5,
					1,
					400
				};
				frequency="1";
				volume="camPos*rain*asphalt*(speed factor[5, 40])";
			};
			class TiresDistance
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\Far_truck.ogg",
					2,
					1,
					500
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[5, 40])";
			};
			class NoiseInDirt
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Rattle\APC OffRoad.ogg",
					0.75,
					1
				};
				frequency="1";
				volume="(1-camPos)*(1-asphalt)*(damper0 max 0.02)*3*(angVelocity max 0.02)*(speed factor[0, 5])";
			};
			class TiresOffRoadIn
			{
				sound[]=
				{
					"\mkk_sound_vehicles\LAV_25\Tires\int_sand_apc.ogg",
					0.75,
					1
				};
				frequency="0.95*(speed factor[2, 10])";
				volume="(1-camPos)*(1-asphalt)*(1-Mud)*(1-rock)*(1-Sand)*(1-Grass)*(1-Gravel)*(speed factor[2, 20])";
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
						commanding=1;
						memoryPointGunnerOptics="commanderview";
						minElev=-10;
						maxElev=45;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						maxHorizontalRotSpeed=0.69999999;
						maxVerticalRotSpeed=0.69999999;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						weapons[]={};
						magazines[]={};
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
						gunnerAction="Gunner_MBT_02_cannon_F_out";
						gunnerInAction="rhs_t72_commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
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
						turretInfoType="RscOptics_MBT_01_Driver";
						showCrewAim=1;
						startEngine=0;
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						viewGunnerInexternal=0;
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
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/2";
								minFov="0.233/2";
								maxFov="0.233/2";
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
							};
							class Narrow2x: Narrow
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
							};
							class Narrow3x: Narrow
							{
								initFov="0.233/8";
								minFov="0.233/8";
								maxFov="0.233/8";
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
						class HitPoints
						{
							class HitComGun
							{
								armor=0.2;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="-";
								passThrough=0;
								minimalHit=0.2;
								explosionShielding=0.5;
								radius=0.1;
								isGun=1;
							};
						};
					};
				};
				missileBeg="spice rakety";
				missileEnd="konec rakety";
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]={};
				magazines[]={};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.19952622,
					1,
					15
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.19952622,
					1,
					15
				};
				commanding=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInexternal=0;
				forceHideGunner=0;
				castGunnerShadow=1;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				lockWhenDriverOut=0;
				minElev=-10;
				initElev=0;
				maxElev=60;
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.69999999;
				turretFollowFreeLook=2;
				usepip=2;
				LODOpticsIn=0;
				turretInfoType="RscOptics_MBT_01_Driver";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=3;
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
						initFov=0.5126;
						minFov=0.5126;
						maxFov=0.5126;
						thermalMode[]={2,3};
						visionMode[]=
						{
							"Normal",
							"TI",
							"NVG"
						};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov="0.233/4";
						minFov="0.233/4";
						maxFov="0.233/4";
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
					};
					class Narrow2x: Narrow
					{
						initFov="0.233/8";
						minFov="0.233/8";
						maxFov="0.233/8";
					};
					class Narrow3x: Narrow
					{
						initFov="0.233/12";
						minFov="0.233/12";
						maxFov="0.233/12";
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
						radius=0.1;
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
		};
		viewCargoShadowDiff=0.050000001;
		viewCargoShadowAmb=0.5;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
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
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustEffectTankSide";
			};
		};
		engineStartSpeed=5;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name="nvg_marker";
				color[]={0.029999999,0.003,0.003,1};
				ambient[]={0.003,0.00030000001,0.00030000001,1};
				brightness=0.001;
				blinking=1;
			};
		};
		explosionEffect="FuelExplosionBig";
		engineEffectSpeed=5;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
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
		selectionFireAnim="";
		transportSoldier=8;
		showNVGCommander=0;
		showNVGGunner=0;
		showNVGDriver=0;
		numberPhysicalWheels=8;
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"boxer\data\body.rvmat",
				"boxer\data\body_damage.rvmat",
				"boxer\data\body_destruct.rvmat",
				"boxer\data\turret.rvmat",
				"boxer\data\turret_damage.rvmat",
				"boxer\data\turret_destruct.rvmat",
				"boxer\data\gun.rvmat",
				"boxer\data\gun_damage.rvmat",
				"boxer\data\gun_destruct.rvmat",
				"boxer\data\mg.rvmat",
				"boxer\data\mg_damage.rvmat",
				"boxer\data\mg_destruct.rvmat",
				"boxer\data\barrel.rvmat",
				"boxer\data\barrel_damage.rvmat",
				"boxer\data\barrel_destruct.rvmat",
				"boxer\data\reflectors.rvmat",
				"boxer\data\reflectors_damage.rvmat",
				"boxer\data\reflectors_destruct.rvmat",
				"boxer\data\crows_base.rvmat",
				"boxer\data\crows_base_damage.rvmat",
				"boxer\data\crows_base_destruct.rvmat",
				"boxer\data\crows_gmw.rvmat",
				"boxer\data\crows_gmw_damage.rvmat",
				"boxer\data\crows_gmw_destruct.rvmat",
				"boxer\data\crows_m2.rvmat",
				"boxer\data\crows_m2_damage.rvmat",
				"boxer\data\crows_m2_destruct.rvmat",
				"boxer\data\mgs_turret.rvmat",
				"boxer\data\mgs_turret_damage.rvmat",
				"boxer\data\mgs_turret_destruct.rvmat",
				"boxer\data\mgs_gun.rvmat",
				"boxer\data\mgs_gun_damage.rvmat",
				"boxer\data\mgs_gun_destruct.rvmat",
				"boxer\data\ranger.rvmat",
				"boxer\data\ranger_damage.rvmat",
				"boxer\data\ranger_destruct.rvmat",
				"boxer\data\metal.rvmat",
				"boxer\data\metal_damage.rvmat",
				"boxer\data\metal_destruct.rvmat",
				"boxer\data\optic.rvmat",
				"boxer\data\optic_damage.rvmat",
				"boxer\data\optic_destruct.rvmat",
				"boxer\data\glass.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_glass_damage.rvmat",
				"A3\soft_f_beta\Truck_02\Data\Truck_02_glass_damage.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\boxer\data\body_green_co.paa",
			"\boxer\data\turret_green_co.paa",
			"\boxer\data\gun_green_co.paa"
		};
		class TextureSources
		{
			class green
			{
				displayName="$STR_boxer_green";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_green_co.paa",
					"\boxer\data\turret_green_co.paa",
					"\boxer\data\gun_green_co.paa"
				};
			};
			class carc
			{
				displayName="$STR_boxer_carc";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_carc_co.paa",
					"\boxer\data\turret_carc_co.paa",
					"\boxer\data\gun_carc_co.paa"
				};
			};
			class sand
			{
				displayName="$STR_boxer_sand";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_sand_co.paa",
					"\boxer\data\turret_sand_co.paa",
					"\boxer\data\gun_sand_co.paa"
				};
			};
			class winter
			{
				displayName="$STR_boxer_winter";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_winter_co.paa",
					"\boxer\data\turret_winter_co.paa",
					"\boxer\data\gun_winter_co.paa"
				};
			};
			class field
			{
				displayName="$STR_boxer_field";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_field_co.paa",
					"\boxer\data\turret_field_co.paa",
					"\boxer\data\gun_field_co.paa"
				};
			};
			class woodland
			{
				displayName="$STR_boxer_woodland";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_woodland_co.paa",
					"\boxer\data\turret_woodland_co.paa",
					"\boxer\data\gun_woodland_co.paa"
				};
			};
			class baf
			{
				displayName="$STR_boxer_baf";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_baf_co.paa",
					"\boxer\data\turret_baf_co.paa",
					"\boxer\data\gun_baf_co.paa"
				};
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
		};
		class RenderTargets
		{
			class display1
			{
				renderTarget="display1";
				class CameraView1
				{
					pointPosition="view_rear";
					pointDirection="view_rear_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=1;
				};
			};
			class display2
			{
				renderTarget="display2";
				class CameraView1
				{
					pointPosition="view_front";
					pointDirection="view_front_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.60000002;
				};
			};
		};
		attenuationEffectType="TankAttenuation";
		insideSoundCoef=0.89999998;
	};
	class mkk_boxer_ifv_base: mkk_boxer_base
	{
		model="\boxer\boxer_ifv.p3d";
		displayName="Boxer IFV";
		picture="\boxer\data\ui\boxer_ifv_side.paa";
		editorPreview="\boxer\data\ui\boxer_ifv_prew.jpg";
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="BWA3_MG5_vehicle";
			};
			class zasleh_hmg
			{
				source="ammorandom";
				weapon="RHS_M2_CROWS_M153_Abrams";
			};
			class recoil
			{
				source="reload";
				weapon="mkk_mk30";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="BWA3_Spike_LR";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class revolving
			{
				source="revolving";
				weapon="lem_smoke_b_16rnd";
			};
			class show_spike
			{
				displayName="$STR_boxer_spike";
				author="lemfy";
				source="user";
				animPeriod=0.001;
				initPhase=1;
				mass=-50;
			};
			class hit_glass1
			{
				hitpoint="HitGlass1";
				source="Hit";
			};
			class hit_glass2
			{
				hitpoint="HitGlass2";
				source="Hit";
			};
			class hit_glass3
			{
				hitpoint="HitGlass3";
				source="Hit";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.5;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass2
			{
				armor=0.5;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass3
			{
				armor=0.5;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
		};
		class EventHandlers: EventHandlers
		{
			class MKK_EventHandlers
			{
				init="_this spawn {params ['_vehicle']; waitUntil {!isNull _vehicle}; if (_vehicle animationPhase 'show_spike' > 0.1 && !(_vehicle getVariable ['spike_added', false])) then {_vehicle addWeaponTurret ['BWA3_Spike_LR', [0]]; _vehicle setVariable ['spike_added', true];};};";
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
						commanding=1;
						memoryPointGunnerOptics="commanderview";
						minElev=-10;
						maxElev=45;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						maxHorizontalRotSpeed=0.69999999;
						maxVerticalRotSpeed=0.69999999;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						weapons[]=
						{
							"RHS_M2_CROWS_M153_Abrams"
						};
						magazines[]=
						{
							"rhs_mag_400rnd_127x99_mag_Tracer_Red"
						};
						discreteDistance[]={0,100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
						discreteDistanceInitIndex=3;
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
						gunnerAction="Gunner_MBT_02_cannon_F_out";
						gunnerInAction="rhs_t72_commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
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
						turretInfoType="RscOptics_MBT_01_Driver";
						showCrewAim=1;
						startEngine=0;
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						viewGunnerInexternal=0;
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
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/2";
								minFov="0.233/2";
								maxFov="0.233/2";
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
							};
							class Narrow2x: Narrow
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
							};
							class Narrow3x: Narrow
							{
								initFov="0.233/8";
								minFov="0.233/8";
								maxFov="0.233/8";
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
						class HitPoints
						{
							class HitComGun
							{
								armor=0.2;
								material=-1;
								armorComponent="hit_com_gun";
								name="hit_com_gun_point";
								visual="-";
								passThrough=0;
								minimalHit=0.2;
								explosionShielding=0.5;
								radius=0.1;
								isGun=1;
							};
						};
					};
				};
				missileBeg="spice rakety";
				missileEnd="konec rakety";
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]=
				{
					"mkk_mk30",
					"BWA3_MG5_vehicle",
					"lem_smoke_b_16rnd",
					"BWA3_Spike_LR"
				};
				magazines[]=
				{
					"mkk_MK30_100Rnd_APFSDS_shells",
					"mkk_MK30_100Rnd_APFSDS_shells",
					"mkk_MK30_100Rnd_HE_shells",
					"mkk_MK30_100Rnd_HE_shells",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_2Rnd_Spike_Lr",
					"lem_smoke_b_16rnd_mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.19952622,
					1,
					15
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.19952622,
					1,
					15
				};
				commanding=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInexternal=0;
				forceHideGunner=0;
				castGunnerShadow=1;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				lockWhenDriverOut=0;
				minElev=-10;
				initElev=0;
				maxElev=60;
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.69999999;
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
				turretInfoType="RscOptics_MBT_01_Driver";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=3;
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
						initFov=0.5126;
						minFov=0.5126;
						maxFov=0.5126;
						thermalMode[]={2,3};
						visionMode[]=
						{
							"Normal",
							"TI",
							"NVG"
						};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov="0.233/4";
						minFov="0.233/4";
						maxFov="0.233/4";
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
					};
					class Narrow2x: Narrow
					{
						initFov="0.233/8";
						minFov="0.233/8";
						maxFov="0.233/8";
					};
					class Narrow3x: Narrow
					{
						initFov="0.233/12";
						minFov="0.233/12";
						maxFov="0.233/12";
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
						radius=0.1;
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
		};
	};
	class mkk_boxer_m2_base: mkk_boxer_base
	{
		model="\boxer\boxer_m2.p3d";
		displayName="Boxer M2";
		picture="\boxer\data\ui\boxer_m2_side.paa";
		editorPreview="\boxer\data\ui\boxer_m2_prew.jpg";
		class AnimationSources: AnimationSources
		{
			class zasleh_hmg
			{
				source="ammorandom";
				weapon="mkk_weap_boxer_m2";
			};
			class revolving
			{
				source="revolving";
				weapon="lem_smoke_b_6rnd";
			};
			class hit_glass1
			{
				hitpoint="HitGlass1";
				source="Hit";
			};
			class hit_glass2
			{
				hitpoint="HitGlass2";
				source="Hit";
			};
			class hit_glass3
			{
				hitpoint="HitGlass3";
				source="Hit";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.5;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass2
			{
				armor=0.5;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass3
			{
				armor=0.5;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
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
						maxElev=25;
						initElev=0;
						minTurn=-25;
						maxTurn=25;
						initTurn=0;
						maxHorizontalRotSpeed=0.5;
						maxVerticalRotSpeed=0.5;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						weapons[]={};
						magazines[]={};
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
						gunnerAction="Gunner_MBT_02_cannon_F_out";
						gunnerInAction="rhs_t72_commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
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
						turretInfoType="RscOptics_MBT_01_Driver";
						showCrewAim=1;
						startEngine=0;
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						viewGunnerInexternal=0;
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
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/2";
								minFov="0.233/2";
								maxFov="0.233/2";
							};
							class Narrow2x: Narrow
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
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
				gunBeg="Usti hlavne3";
				gunEnd="Konec hlavne3";
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh3";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]=
				{
					"mkk_weap_boxer_m2",
					"lem_smoke_b_6rnd"
				};
				magazines[]=
				{
					"rhs_mag_400rnd_127x99_mag_Tracer_Red",
					"lem_smoke_b_6rnd_mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.19952622,
					1,
					15
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.19952622,
					1,
					15
				};
				commanding=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInexternal=0;
				forceHideGunner=1;
				castGunnerShadow=1;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				lockWhenDriverOut=0;
				minElev=-10;
				initElev=0;
				maxElev=60;
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.69999999;
				turretFollowFreeLook=2;
				usepip=2;
				LODOpticsIn=0;
				turretInfoType="RscOptics_MBT_01_Driver";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=3;
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
						initFov=0.5126;
						minFov=0.5126;
						maxFov=0.5126;
						thermalMode[]={2,3};
						visionMode[]=
						{
							"Normal",
							"TI",
							"NVG"
						};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov="0.233/4";
						minFov="0.233/4";
						maxFov="0.233/4";
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
					};
					class Narrow2x: Narrow
					{
						initFov="0.233/8";
						minFov="0.233/8";
						maxFov="0.233/8";
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.2;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="";
						passThrough=0.25;
						minimalHit=0.34999999;
						explosionShielding=0.2;
						radius=0.15000001;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.2;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="";
						passThrough=0;
						minimalHit=0.2;
						explosionShielding=0.40000001;
						radius=0.1;
						isGun=1;
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"\boxer\data\body_green_co.paa",
			"\boxer\data\turret_green_co.paa",
			"\boxer\data\gun_green_co.paa",
			"\boxer\data\crows_base_green_co.paa",
			"\boxer\data\crows_m2_green_co.paa"
		};
		class TextureSources
		{
			class green
			{
				displayName="$STR_boxer_green";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_green_co.paa",
					"\boxer\data\turret_green_co.paa",
					"\boxer\data\gun_green_co.paa",
					"\boxer\data\crows_base_green_co.paa",
					"\boxer\data\crows_m2_green_co.paa"
				};
			};
			class carc
			{
				displayName="$STR_boxer_carc";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_carc_co.paa",
					"\boxer\data\turret_carc_co.paa",
					"\boxer\data\gun_carc_co.paa",
					"\boxer\data\crows_base_carc_co.paa",
					"\boxer\data\crows_m2_carc_co.paa"
				};
			};
			class sand
			{
				displayName="$STR_boxer_sand";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_sand_co.paa",
					"\boxer\data\turret_sand_co.paa",
					"\boxer\data\gun_sand_co.paa",
					"\boxer\data\crows_base_sand_co.paa",
					"\boxer\data\crows_m2_sand_co.paa"
				};
			};
			class winter
			{
				displayName="$STR_boxer_winter";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_winter_co.paa",
					"\boxer\data\turret_winter_co.paa",
					"\boxer\data\gun_winter_co.paa",
					"\boxer\data\crows_base_winter_co.paa",
					"\boxer\data\crows_m2_winter_co.paa"
				};
			};
			class field
			{
				displayName="$STR_boxer_field";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_field_co.paa",
					"\boxer\data\turret_field_co.paa",
					"\boxer\data\gun_field_co.paa",
					"\boxer\data\crows_base_field_co.paa",
					"\boxer\data\crows_m2_field_co.paa"
				};
			};
			class woodland
			{
				displayName="$STR_boxer_woodland";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_woodland_co.paa",
					"\boxer\data\turret_woodland_co.paa",
					"\boxer\data\gun_woodland_co.paa",
					"\boxer\data\crows_base_woodland_co.paa",
					"\boxer\data\crows_m2_woodland_co.paa"
				};
			};
			class baf
			{
				displayName="$STR_boxer_baf";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_baf_co.paa",
					"\boxer\data\turret_baf_co.paa",
					"\boxer\data\gun_baf_co.paa",
					"\boxer\data\crows_base_baf_co.paa",
					"\boxer\data\crows_m2_baf_co.paa"
				};
			};
		};
	};
	class mkk_boxer_gmw_base: mkk_boxer_base
	{
		model="\boxer\boxer_gmw.p3d";
		displayName="Boxer GMW";
		picture="\boxer\data\ui\boxer_gmw_side.paa";
		editorPreview="\boxer\data\ui\boxer_gmw_prew.jpg";
		class AnimationSources: AnimationSources
		{
			class revolving
			{
				source="revolving";
				weapon="lem_smoke_b_6rnd";
			};
			class hit_glass1
			{
				hitpoint="HitGlass1";
				source="Hit";
			};
			class hit_glass2
			{
				hitpoint="HitGlass2";
				source="Hit";
			};
			class hit_glass3
			{
				hitpoint="HitGlass3";
				source="Hit";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.5;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass2
			{
				armor=0.5;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass3
			{
				armor=0.5;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
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
						maxElev=25;
						initElev=0;
						minTurn=-25;
						maxTurn=25;
						initTurn=0;
						maxHorizontalRotSpeed=0.5;
						maxVerticalRotSpeed=0.5;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						weapons[]={};
						magazines[]={};
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
						gunnerAction="Gunner_MBT_02_cannon_F_out";
						gunnerInAction="rhs_t72_commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
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
						turretInfoType="RscOptics_MBT_01_Driver";
						showCrewAim=1;
						startEngine=0;
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						viewGunnerInexternal=0;
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
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/2";
								minFov="0.233/2";
								maxFov="0.233/2";
							};
							class Narrow2x: Narrow
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
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
				gunBeg="Usti hlavne3";
				gunEnd="Konec hlavne3";
				memoryPointGun="usti hlavne3";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]=
				{
					"BWA3_GMW_vehicle_flw200",
					"lem_smoke_b_6rnd"
				};
				magazines[]=
				{
					"32Rnd_40mm_G_belt",
					"32Rnd_40mm_G_belt",
					"32Rnd_40mm_G_belt",
					"lem_smoke_b_6rnd_mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.19952622,
					1,
					15
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.19952622,
					1,
					15
				};
				commanding=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInexternal=0;
				forceHideGunner=1;
				castGunnerShadow=1;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				lockWhenDriverOut=0;
				minElev=-10;
				initElev=0;
				maxElev=60;
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.69999999;
				turretFollowFreeLook=2;
				usepip=2;
				LODOpticsIn=0;
				turretInfoType="RscOptics_MBT_01_Driver";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=3;
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
						initFov=0.5126;
						minFov=0.5126;
						maxFov=0.5126;
						thermalMode[]={2,3};
						visionMode[]=
						{
							"Normal",
							"TI",
							"NVG"
						};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov="0.233/4";
						minFov="0.233/4";
						maxFov="0.233/4";
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
					};
					class Narrow2x: Narrow
					{
						initFov="0.233/8";
						minFov="0.233/8";
						maxFov="0.233/8";
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.2;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_point";
						visual="";
						passThrough=0.25;
						minimalHit=0.34999999;
						explosionShielding=0.2;
						radius=0.15000001;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.2;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_point";
						visual="";
						passThrough=0;
						minimalHit=0.2;
						explosionShielding=0.40000001;
						radius=0.1;
						isGun=1;
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"\boxer\data\body_green_co.paa",
			"\boxer\data\turret_green_co.paa",
			"\boxer\data\gun_green_co.paa",
			"\boxer\data\crows_base_green_co.paa"
		};
		class TextureSources
		{
			class green
			{
				displayName="$STR_boxer_green";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_green_co.paa",
					"\boxer\data\turret_green_co.paa",
					"\boxer\data\gun_green_co.paa",
					"\boxer\data\crows_base_green_co.paa"
				};
			};
			class carc
			{
				displayName="$STR_boxer_carc";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_carc_co.paa",
					"\boxer\data\turret_carc_co.paa",
					"\boxer\data\gun_carc_co.paa",
					"\boxer\data\crows_base_carc_co.paa"
				};
			};
			class sand
			{
				displayName="$STR_boxer_sand";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_sand_co.paa",
					"\boxer\data\turret_sand_co.paa",
					"\boxer\data\gun_sand_co.paa",
					"\boxer\data\crows_base_sand_co.paa"
				};
			};
			class winter
			{
				displayName="$STR_boxer_winter";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_winter_co.paa",
					"\boxer\data\turret_winter_co.paa",
					"\boxer\data\gun_winter_co.paa",
					"\boxer\data\crows_base_winter_co.paa"
				};
			};
			class field
			{
				displayName="$STR_boxer_field";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_field_co.paa",
					"\boxer\data\turret_field_co.paa",
					"\boxer\data\gun_field_co.paa",
					"\boxer\data\crows_base_field_co.paa"
				};
			};
			class woodland
			{
				displayName="$STR_boxer_woodland";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_woodland_co.paa",
					"\boxer\data\turret_woodland_co.paa",
					"\boxer\data\gun_woodland_co.paa",
					"\boxer\data\crows_base_woodland_co.paa"
				};
			};
			class baf
			{
				displayName="$STR_boxer_baf";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_baf_co.paa",
					"\boxer\data\turret_baf_co.paa",
					"\boxer\data\gun_baf_co.paa",
					"\boxer\data\crows_base_baf_co.paa"
				};
			};
		};
	};
	class mkk_boxer_mgs_base: mkk_boxer_base
	{
		model="\boxer\boxer_mgs.p3d";
		displayName="Boxer MGS";
		picture="\boxer\data\ui\boxer_mgs_side.paa";
		editorPreview="\boxer\data\ui\boxer_mgs_prew.jpg";
		transportSoldier=0;
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="BWA3_MG5_vehicle";
			};
			class recoil
			{
				source="reload";
				weapon="mkk_boxmgs_weap_cockerill";
			};
			class revolving
			{
				source="revolving";
				weapon="lem_smoke_b_8rnd";
			};
			class hit_glass1
			{
				hitpoint="HitGlass1";
				source="Hit";
			};
			class hit_glass2
			{
				hitpoint="HitGlass2";
				source="Hit";
			};
			class hit_glass3
			{
				hitpoint="HitGlass3";
				source="Hit";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.5;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass2
			{
				armor=0.5;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass3
			{
				armor=0.5;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
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
						commanding=1;
						memoryPointGunnerOptics="commanderview";
						minElev=-10;
						maxElev=45;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						maxHorizontalRotSpeed=0.69999999;
						maxVerticalRotSpeed=0.69999999;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						weapons[]={};
						magazines[]={};
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
						gunnerAction="Gunner_MBT_02_cannon_F_out";
						gunnerInAction="rhs_t72_commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
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
						turretInfoType="RscOptics_MBT_01_Driver";
						showCrewAim=1;
						startEngine=0;
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						viewGunnerInexternal=0;
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
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/2";
								minFov="0.233/2";
								maxFov="0.233/2";
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
							};
							class Narrow2x: Narrow
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
							};
							class Narrow3x: Narrow
							{
								initFov="0.233/8";
								minFov="0.233/8";
								maxFov="0.233/8";
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
				gunBeg="Usti hlavne";
				gunEnd="Konec hlavne";
				memoryPointGun="usti hlavne2";
				selectionFireAnim="zasleh2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]=
				{
					"mkk_boxmgs_weap_cockerill",
					"BWA3_MG5_vehicle",
					"lem_smoke_b_8rnd"
				};
				magazines[]=
				{
					"mkk_boxmgs_mag_dm33",
					"mkk_boxmgs_mag_dm12",
					"mkk_boxmgs_mag_dm512",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"lem_smoke_b_8rnd_mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.19952622,
					1,
					15
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.19952622,
					1,
					15
				};
				commanding=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInexternal=0;
				forceHideGunner=0;
				castGunnerShadow=1;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				lockWhenDriverOut=0;
				minElev=-10;
				initElev=0;
				maxElev=60;
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.69999999;
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
				turretInfoType="RscOptics_MBT_01_Driver";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=3;
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
						initFov=0.5126;
						minFov=0.5126;
						maxFov=0.5126;
						thermalMode[]={2,3};
						visionMode[]=
						{
							"Normal",
							"TI",
							"NVG"
						};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov="0.233/4";
						minFov="0.233/4";
						maxFov="0.233/4";
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
					};
					class Narrow2x: Narrow
					{
						initFov="0.233/8";
						minFov="0.233/8";
						maxFov="0.233/8";
					};
					class Narrow3x: Narrow
					{
						initFov="0.233/12";
						minFov="0.233/12";
						maxFov="0.233/12";
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
						radius=0.1;
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
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\boxer\data\body_green_co.paa",
			"\boxer\data\mgs_turret_green_co.paa",
			"\boxer\data\mgs_gun_green_co.paa"
		};
		class TextureSources
		{
			class green
			{
				displayName="$STR_boxer_green";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_green_co.paa",
					"\boxer\data\mgs_turret_green_co.paa",
					"\boxer\data\mgs_gun_green_co.paa"
				};
			};
			class carc
			{
				displayName="$STR_boxer_carc";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_carc_co.paa",
					"\boxer\data\mgs_turret_carc_co.paa",
					"\boxer\data\mgs_gun_carc_co.paa"
				};
			};
			class sand
			{
				displayName="$STR_boxer_sand";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_sand_co.paa",
					"\boxer\data\mgs_turret_sand_co.paa",
					"\boxer\data\mgs_gun_sand_co.paa"
				};
			};
			class winter
			{
				displayName="$STR_boxer_winter";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_winter_co.paa",
					"\boxer\data\mgs_turret_winter_co.paa",
					"\boxer\data\mgs_gun_winter_co.paa"
				};
			};
			class field
			{
				displayName="$STR_boxer_field";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_field_co.paa",
					"\boxer\data\mgs_turret_field_co.paa",
					"\boxer\data\mgs_gun_field_co.paa"
				};
			};
			class woodland
			{
				displayName="$STR_boxer_woodland";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_woodland_co.paa",
					"\boxer\data\mgs_turret_woodland_co.paa",
					"\boxer\data\mgs_gun_woodland_co.paa"
				};
			};
			class baf
			{
				displayName="$STR_boxer_baf";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_baf_co.paa",
					"\boxer\data\mgs_turret_baf_co.paa",
					"\boxer\data\mgs_gun_baf_co.paa"
				};
			};
		};
	};
	class mkk_boxer_ranger_base: mkk_boxer_base
	{
		model="\boxer\boxer_ranger.p3d";
		displayName="Boxer Skyranger 30";
		picture="\boxer\data\ui\boxer_ranger_side.paa";
		editorPreview="\boxer\data\ui\boxer_ranger_prew.jpg";
		transportSoldier=0;
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="BWA3_MG5_vehicle";
			};
			class recoil
			{
				source="reload";
				weapon="mkk_weap_ranger_oerlikon";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="mkk_weap_ranger_stinger";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
			};
			class revolving
			{
				source="revolving";
				weapon="lem_smoke_b_18rnd";
			};
			class hit_glass1
			{
				hitpoint="HitGlass1";
				source="Hit";
			};
			class hit_glass2
			{
				hitpoint="HitGlass2";
				source="Hit";
			};
			class hit_glass3
			{
				hitpoint="HitGlass3";
				source="Hit";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.5;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass2
			{
				armor=0.5;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass3
			{
				armor=0.5;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
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
						commanding=1;
						memoryPointGunnerOptics="commanderview";
						minElev=-10;
						maxElev=45;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						maxHorizontalRotSpeed=0.69999999;
						maxVerticalRotSpeed=0.69999999;
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						weapons[]={};
						magazines[]={};
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
						gunnerAction="Gunner_MBT_02_cannon_F_out";
						gunnerInAction="rhs_t72_commander";
						gunnerGetInAction="GetInHigh";
						gunnerGetOutAction="GetOutHigh";
						gunnerOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
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
						turretInfoType="RscOptics_MBT_01_Driver";
						showCrewAim=1;
						startEngine=0;
						stabilizedInAxes=3;
						gunnerHasFlares=1;
						viewGunnerInexternal=0;
						viewGunnerShadowAmb=0.5;
						viewGunnerShadowDiff=0.050000001;
						class Components
						{
							class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_boxer_Left
							{
							};
							class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_boxer_Right
							{
							};
						};
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
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
								gunnerOpticsEffect[]={};
							};
							class Narrow: Wide
							{
								initFov="0.233/2";
								minFov="0.233/2";
								maxFov="0.233/2";
								gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
							};
							class Narrow2x: Narrow
							{
								initFov="0.233/4";
								minFov="0.233/4";
								maxFov="0.233/4";
							};
							class Narrow3x: Narrow
							{
								initFov="0.233/8";
								minFov="0.233/8";
								maxFov="0.233/8";
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
				selectionFireAnim="zasleh2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				weapons[]=
				{
					"mkk_weap_ranger_oerlikon",
					"mkk_weap_ranger_stinger",
					"BWA3_MG5_vehicle",
					"lem_smoke_b_18rnd"
				};
				magazines[]=
				{
					"mkk_mag_ranger_oerlikon_252rnd",
					"mkk_mag_ranger_oerlikon_252rnd",
					"mkk_mag_ranger_fim92M_2rnd",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"BWA3_120Rnd_762x51",
					"lem_smoke_b_18rnd_mag"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.19952622,
					1,
					15
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.19952622,
					1,
					15
				};
				commanding=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInexternal=0;
				forceHideGunner=1;
				castGunnerShadow=1;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				lockWhenDriverOut=0;
				minElev=-10;
				initElev=0;
				maxElev=60;
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.69999999;
				turretFollowFreeLook=2;
				usepip=2;
				LODOpticsIn=0;
				turretInfoType="RscOptics_MBT_01_Driver";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=3;
				gunnerHasFlares=1;
				viewGunnerShadowAmb=0.5;
				viewGunnerShadowDiff=0.050000001;
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: pzn_vdisp_Radar_boxer_Left
					{
					};
					class VehicleSystemsDisplayManagerComponentRight: pzn_vdisp_Radar_boxer_Right
					{
					};
				};
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
						initFov=0.5126;
						minFov=0.5126;
						maxFov=0.5126;
						thermalMode[]={2,3};
						visionMode[]=
						{
							"Normal",
							"TI",
							"NVG"
						};
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_1x.p3d";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						initFov="0.233/4";
						minFov="0.233/4";
						maxFov="0.233/4";
						gunnerOpticsModel="\mkk_rhs_usaf_fix_m\optics\rhsusf_IBAS_4x.p3d";
					};
					class Narrow2x: Narrow
					{
						initFov="0.233/8";
						minFov="0.233/8";
						maxFov="0.233/8";
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
						radius=0.1;
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
						radius=0.15000001;
						isGun=1;
					};
				};
			};
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\boxer\data\body_green_co.paa",
			"\boxer\data\turret_green_co.paa",
			"\boxer\data\ranger_green_co.paa"
		};
		class TextureSources
		{
			class green
			{
				displayName="$STR_boxer_green";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_green_co.paa",
					"\boxer\data\turret_green_co.paa",
					"\boxer\data\ranger_green_co.paa"
				};
			};
			class carc
			{
				displayName="$STR_boxer_carc";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_carc_co.paa",
					"\boxer\data\turret_carc_co.paa",
					"\boxer\data\ranger_carc_co.paa"
				};
			};
			class sand
			{
				displayName="$STR_boxer_sand";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_sand_co.paa",
					"\boxer\data\turret_sand_co.paa",
					"\boxer\data\ranger_sand_co.paa"
				};
			};
			class winter
			{
				displayName="$STR_boxer_winter";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_winter_co.paa",
					"\boxer\data\turret_winter_co.paa",
					"\boxer\data\ranger_winter_co.paa"
				};
			};
			class field
			{
				displayName="$STR_boxer_field";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_field_co.paa",
					"\boxer\data\turret_field_co.paa",
					"\boxer\data\ranger_field_co.paa"
				};
			};
			class woodland
			{
				displayName="$STR_boxer_woodland";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_woodland_co.paa",
					"\boxer\data\turret_woodland_co.paa",
					"\boxer\data\ranger_woodland_co.paa"
				};
			};
			class baf
			{
				displayName="$STR_boxer_baf";
				author="lemfy";
				textures[]=
				{
					"\boxer\data\body_baf_co.paa",
					"\boxer\data\turret_baf_co.paa",
					"\boxer\data\ranger_baf_co.paa"
				};
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=500;
							maxRange=7500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=7500;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=7500;
						aimDown=0;
						animDirection="mainTurret";
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						minSpeedThreshold=0;
						maxSpeedThreshold=1000;
						minTrackableATL=20;
						maxTrackableATL=1e+010;
						minTrackableSpeed=-10000000000;
						maxTrackableSpeed=1e+010;
					};
				};
			};
		};
	};
	class mkk_boxer_unarmed_base: mkk_boxer_base
	{
		model="\boxer\boxer_unarmed.p3d";
		displayName="Boxer Unarmed";
		picture="\boxer\data\ui\boxer_unarmed_side.paa";
		editorPreview="\boxer\data\ui\boxer_unarmed_prew.jpg";
		class AnimationSources: AnimationSources
		{
			class revolving
			{
				source="revolving";
				weapon="lem_smoke_b_16rnd";
			};
			class hit_glass1
			{
				hitpoint="HitGlass1";
				source="Hit";
			};
			class hit_glass2
			{
				hitpoint="HitGlass2";
				source="Hit";
			};
			class hit_glass3
			{
				hitpoint="HitGlass3";
				source="Hit";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.5;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass2
			{
				armor=0.5;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass3
			{
				armor=0.5;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				commanding=1;
				memoryPointGunnerOptics="commanderview";
				gunnername="$STR_boxer_commander";
				gunnerDoor="hatchcommander";
				animationSourceHatch="hatchcommander";
				minElev=0;
				maxElev=0;
				initElev=0;
				minTurn=0;
				maxTurn=0;
				initTurn=0;
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.69999999;
				weapons[]=
				{
					"lem_smoke_b_16rnd"
				};
				magazines[]=
				{
					"lem_smoke_b_16rnd_mag"
				};
				outGunnerMayFire=0;
				inGunnerMayFire=1;
				forceHideGunner=0;
				gunnerOutForceOptics=0;
				ejectDeadGunner=0;
				canUseScanners=0;
				allowTabLock=0;
				lockWhenDriverOut=0;
				primary=0;
				primaryGunner=0;
				primaryObserver=1;
				proxyType="CPGunner";
				proxyIndex=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
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
				turretInfoType="RscOptics_MBT_01_Driver";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=3;
				gunnerHasFlares=1;
				viewGunnerInexternal=0;
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
				class DriverOpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="driverview";
						opticsModel="\bwa3_puma\bwa3_puma_optics_driver";
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						initFov=0.60000002;
						minFov=0.60000002;
						maxFov=0.60000002;
					};
					class cam_front: ViewOptics
					{
						camPos = "view_front";
						camDir = "view_front_dir";
						opticsModel = "\A3\weapons_f\reticle\optics_generic_empty_f.p3d";
						thermalMode[] = {0};
						visionMode[] = {"Normal","Ti","NVG"};
						initFov = 0.6;
						minFov = 0.6;
						maxFov = 0.6;
					};
					class cam_rear: ViewOptics
					{
						camPos = "view_rear";
						camDir = "view_rear_dir";
						opticsModel = "\A3\weapons_f\reticle\optics_generic_empty_f.p3d";
						thermalMode[] = {0};
						visionMode[] = {"Normal","Ti","NVG"};
						initFov = 0.6;
						minFov = 0.6;
						maxFov = 0.6;
					};
				};
			};
		};
	};
	class mkk_boxer_med_base: mkk_boxer_base
	{
		model="\boxer\boxer_med.p3d";
		displayName="Boxer Ambulance";
		picture="\boxer\data\ui\boxer_unarmed_side.paa";
		editorPreview="\boxer\data\ui\boxer_med_prew.jpg";
		transportSoldier=4;
		class AnimationSources: AnimationSources
		{
			class revolving
			{
				source="revolving";
				weapon="lem_smoke_b_16rnd";
			};
			class hit_glass1
			{
				hitpoint="HitGlass1";
				source="Hit";
			};
			class hit_glass2
			{
				hitpoint="HitGlass2";
				source="Hit";
			};
			class hit_glass3
			{
				hitpoint="HitGlass3";
				source="Hit";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor=0.5;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass2
			{
				armor=0.5;
				material=-1;
				name="glass2";
				visual="glass2";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
			class HitGlass3
			{
				armor=0.5;
				material=-1;
				name="glass3";
				visual="glass3";
				passThrough=1;
				explosionShielding=1;
				radius=0.1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				commanding=1;
				memoryPointGunnerOptics="commanderview";
				gunnername="$STR_boxer_commander";
				gunnerDoor="hatchcommander";
				animationSourceHatch="hatchcommander";
				minElev=0;
				maxElev=0;
				initElev=0;
				minTurn=0;
				maxTurn=0;
				initTurn=0;
				maxHorizontalRotSpeed=0.69999999;
				maxVerticalRotSpeed=0.69999999;
				weapons[]=
				{
					"lem_smoke_b_16rnd"
				};
				magazines[]=
				{
					"lem_smoke_b_16rnd_mag"
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
				proxyType="CPGunner";
				proxyIndex=1;
				gunnerAction="Gunner_MBT_02_cannon_F_out";
				gunnerInAction="rhs_t72_commander";
				gunnerGetInAction="GetInHigh";
				gunnerGetOutAction="GetOutHigh";
				gunnerOpticsModel="\a3\weapons_f\reticle\optics_driver_01_f.p3d";
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
				turretInfoType="RscOptics_MBT_01_Driver";
				showCrewAim=1;
				startEngine=0;
				stabilizedInAxes=3;
				gunnerHasFlares=1;
				viewGunnerInexternal=0;
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
				class DriverOpticsIn
				{
					class Wide: ViewOptics
					{
						camPos="driverview";
						opticsModel="\bwa3_puma\bwa3_puma_optics_driver";
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						initFov=0.60000002;
						minFov=0.60000002;
						maxFov=0.60000002;
					};
					class cam_front: ViewOptics
					{
						camPos = "view_front";
						camDir = "view_front_dir";
						opticsModel = "\A3\weapons_f\reticle\optics_generic_empty_f.p3d";
						thermalMode[] = {0};
						visionMode[] = {"Normal","Ti","NVG"};
						initFov = 0.6;
						minFov = 0.6;
						maxFov = 0.6;
					};
					class cam_rear: ViewOptics
					{
						camPos = "view_rear";
						camDir = "view_rear_dir";
						opticsModel = "\A3\weapons_f\reticle\optics_generic_empty_f.p3d";
						thermalMode[] = {0};
						visionMode[] = {"Normal","Ti","NVG"};
						initFov = 0.6;
						minFov = 0.6;
						maxFov = 0.6;
					};
				};
			};
		};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01",
			"passenger_apc_narrow_generic01",
			"Patient_Van_02_Medevac_Front",
			"Patient_Van_02_Medevac_Front"
		};
	};
	class mkk_boxer_ifv_b: mkk_boxer_ifv_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="BLU_F";
		side=1;
		scope=2;
	};
	class mkk_boxer_ifv_r: mkk_boxer_ifv_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="OPF_F";
		side=0;
		scope=2;
	};
	class mkk_boxer_ifv_g: mkk_boxer_ifv_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="IND_F";
		side=2;
		scope=2;
	};
	class mkk_boxer_m2_b: mkk_boxer_m2_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="BLU_F";
		side=1;
		scope=2;
	};
	class mkk_boxer_m2_r: mkk_boxer_m2_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="OPF_F";
		side=0;
		scope=2;
	};
	class mkk_boxer_m2_g: mkk_boxer_m2_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="IND_F";
		side=2;
		scope=2;
	};
	class mkk_boxer_gmw_b: mkk_boxer_gmw_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="BLU_F";
		side=1;
		scope=2;
	};
	class mkk_boxer_gmw_r: mkk_boxer_gmw_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="OPF_F";
		side=0;
		scope=2;
	};
	class mkk_boxer_gmw_g: mkk_boxer_gmw_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="IND_F";
		side=2;
		scope=2;
	};
	class mkk_boxer_mgs_b: mkk_boxer_mgs_base
	{
		editorSubcategory="EdSubcat_Tanks";
		faction="BLU_F";
		side=1;
		scope=2;
	};
	class mkk_boxer_mgs_r: mkk_boxer_mgs_base
	{
		editorSubcategory="EdSubcat_Tanks";
		faction="OPF_F";
		side=0;
		scope=2;
	};
	class mkk_boxer_mgs_g: mkk_boxer_mgs_base
	{
		editorSubcategory="EdSubcat_Tanks";
		faction="IND_F";
		side=2;
		scope=2;
	};
	class mkk_boxer_ranger_b: mkk_boxer_ranger_base
	{
		editorSubcategory="EdSubcat_AAs";
		faction="BLU_F";
		side=1;
		scope=2;
	};
	class mkk_boxer_ranger_r: mkk_boxer_ranger_base
	{
		editorSubcategory="EdSubcat_AAs";
		faction="OPF_F";
		side=0;
		scope=2;
	};
	class mkk_boxer_ranger_g: mkk_boxer_ranger_base
	{
		editorSubcategory="EdSubcat_AAs";
		faction="IND_F";
		side=2;
		scope=2;
	};
	class mkk_boxer_unarmed_b: mkk_boxer_unarmed_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="BLU_F";
		side=1;
		scope=2;
	};
	class mkk_boxer_unarmed_r: mkk_boxer_unarmed_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="OPF_F";
		side=0;
		scope=2;
	};
	class mkk_boxer_unarmed_g: mkk_boxer_unarmed_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="IND_F";
		side=2;
		scope=2;
	};
	class mkk_boxer_med_b: mkk_boxer_med_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="BLU_F";
		side=1;
		scope=2;
	};
	class mkk_boxer_med_r: mkk_boxer_med_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="OPF_F";
		side=0;
		scope=2;
	};
	class mkk_boxer_med_g: mkk_boxer_med_base
	{
		editorSubcategory="EdSubcat_APCs";
		faction="IND_F";
		side=2;
		scope=2;
	};
	class Boxer_spyke: mkk_boxer_ifv_base
	{
		scope=1;
	};
	class Boxer_m2: mkk_boxer_m2_base
	{
		scope=1;
	};
	class boxer_mk19: mkk_boxer_gmw_base
	{
		scope=1;
	};
	class Boxer_ranger: mkk_boxer_ranger_base
	{
		scope=1;
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class cfgWeapons
{
	class cannon_120mm
	{
		class player;
		class close;
		class short;
		class Medium;
		class far;
	};
	class mkk_weap_M68A2_105mm : cannon_120mm
	{
		modes[] = {"player"};
		canlock = 0;
		ballisticsComputer = "2 + 16";
		maxZeroing = 4000;
		displayName = "M68A2 105mm";
		magazineReloadTime = 5;
		reloadtime = 5;
		autoReload = 0;
		dispersion = 0.0002;
		magazines[] = {
			"mkk_mag_M829A3_105mm",
			"mkk_mag_M830A1_105mm",
			"mkk_mag_M1069_105mm"
		};
		class player: player
		{
			dispersion = 0.0002;
		};
		class close: close
		{
			dispersion = 0.0002;
		};
		class short: short
		{
			dispersion = 0.0002;
		};
		class Medium: Medium
		{
			dispersion = 0.0002;
		};
		class far: far
		{
			dispersion = 0.0002;
		};
	};
	class mkk_boxmgs_weap_cockerill: mkk_weap_M68A2_105mm
	{
		displayName="105mm Cockerill HP";
		displayNameShort="105mm Cockerill";
		magazines[]=
		{
			"mkk_boxmgs_mag_dm33",
			"mkk_boxmgs_mag_dm12",
			"mkk_boxmgs_mag_dm512"
		};
		ballisticsComputer="2+16";
		dispersion=0.00019999999;
		maxZeroing=4000;
		reloadSound[]=
		{
			"",
			3.1622801,
			1,
			1
		};
		reloadMagazineSound[]=
		{
			"",
			3.6227801,
			1,
			15
		};
	};
	class gatling_30mm;
	class rhs_weap_M197: gatling_30mm
	{
		class manual: Mode_FullAuto
		{
		};
	};
	class mkk_weap_ranger_oerlikon: rhs_weap_M197
	{
		displayName="30-mm Oerlikon KCA";
		displayNameMagazine="30-mm HEI-T";
		weaponLockSystem=8;
		canLock=2;
		ballisticsComputer=17;
		magazineReloadTime=5;
		magazines[] =
		{
			"mkk_mag_ranger_oerlikon_252rnd",
			"mkk_mag_ranger_oerlikon_2520rnd",
			"mkk_252rnd_oerlikon_AHEAD"
		};
		modes[] = {"manual"};
		sounds[] = {"standardsound"};
		dispersion = 0.00050000002;
		sound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\Autocannon_30mm\Autocannon_30mm_01", 5, 1, 1800};
		class manual: manual
		{
			reloadTime = 0.050000001;
			dispersion = 0.00050000002;
		};
		class GunParticles
		{
			class Shell_Smoke
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="MachineGunCloud";
			};
			class Shell_Eject
			{
				positionName="usti hlavne";
				directionName="konec hlavne";
				effectName="RHSUSF_BarrelRefractHeavy";
			};
		};
	};
	class rhs_weap_ATAS_launcher;
	class mkk_ad_stinger_launcher : rhs_weap_ATAS_launcher
	{
		displayname = "FIM-92";
		reloadTime = 4;
		magazineReloadTime = 10;
		canLock = 2;
		autoReload = 1;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 1500;
		minRange = 50;
		minRangeProbab = 0.5;
		midRange = 1450;
		midRangeProbab = 1;
		maxRange = 4050;
		maxRangeProbab = 0.6;
		weaponLockDelay = 1.5;
		weaponLockSystem = 8;
		magazines[] = {
			"mkk_rhs_fim92A_8rnd_mag",
			"mkk_rhs_fim92F_8rnd_mag",
			"mkk_rhs_fim92M_8rnd_mag"
		};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan", 4, 5};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan", 4, 5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher", 0.891251, 1, 10};
		sound[] = {"A3\Sounds_F\arsenal\weapons_launchers\Titan\Titan_shot", 3.16228, 1, 1200};
	};
	class mkk_weap_ranger_stinger: mkk_ad_stinger_launcher
	{
		reloadTime=0.5;
		magazines[]=
		{
			"mkk_mag_ranger_fim92A_2rnd",
			"mkk_mag_ranger_fim92F_2rnd",
			"mkk_mag_ranger_fim92M_2rnd",
			"rhs_fim92_mag"
		};
	};
	class RHS_M2_CROWS_M153_Abrams;
	class mkk_weap_boxer_m2: RHS_M2_CROWS_M153_Abrams
	{
		reloadTime=0.5;
	};
	class rhs_weap_902a;
	class lem_smoke_b_16rnd: rhs_weap_902a
	{
		displayName="Smoke 16rnd";
		displayNameShort="Smoke 16rnd";
		magazines[]=
		{
			"lem_smoke_b_16rnd_mag"
		};
	};
	class lem_smoke_b_6rnd: rhs_weap_902a
	{
		displayName="Smoke 6rnd";
		displayNameShort="Smoke 6rnd";
		magazines[]=
		{
			"lem_smoke_b_6rnd_mag"
		};
	};
	class lem_smoke_b_8rnd: rhs_weap_902a
	{
		displayName="Smoke 8rnd";
		displayNameShort="Smoke 8rnd";
		magazines[]=
		{
			"lem_smoke_b_8rnd_mag"
		};
	};
	class lem_smoke_b_18rnd: rhs_weap_902a
	{
		displayName="Smoke 18rnd";
		displayNameShort="Smoke 18rnd";
		magazines[]=
		{
			"lem_smoke_b_18rnd_mag"
		};
		burst=9;
	};
	class BWA3_MK30;
	class mkk_mk30: BWA3_MK30
	{
		magazines[]=
		{
			"mkk_MK30_100Rnd_APFSDS_shells",
			"mkk_MK30_100Rnd_HE_shells"
		};
	};
};
class CfgMagazines
{
	class rhs_mag_M829A3;
	class mkk_mag_M829A3_105mm : rhs_mag_M829A3
	{
		displayName = "M900 APFSDS-T";
		displayNameShort = "M900 APFSDS-T";
		count = 8;
		tracersEvery = 1;
		initSpeed = 1505;
		ammo = "mkk_ammo_M829A3_105mm";
		magazineReloadTime = 5;
		reloadtime = 5;
		muzzleImpulseFactor[] = {"50*0.1", 0.5};
	};
	class mkk_boxmgs_mag_dm33: mkk_mag_M829A3_105mm
	{
		count=22;
		initSpeed=1455;
		displayName="APFSDS-T DM33";
		displayNameShort="APFSDS-T DM33";
		muzzleImpulseFactor[]={"3",0.5};
	};
	class rhs_mag_M830A1;
	class mkk_mag_M830A1_105mm : rhs_mag_M830A1
	{
		displayName = "M456 HEAT-T";
		displayNameShort = "M456 HEAT-T";
		count = 4;
		tracersEvery = 1;
		initSpeed = 1173;
		ammo = "mkk_ammo_M830A1_105mm";
		magazineReloadTime = 5;
		reloadtime = 5;
		muzzleImpulseFactor[] = {"50*0.1", 0.5};
	};
	class mkk_boxmgs_mag_dm12: mkk_mag_M830A1_105mm
	{
		count=10;
		initSpeed=1174;
		displayName="HEAT-T DM12";
		displayNameShort="HEAT-T DM12";
		muzzleImpulseFactor[]={"3",0.5};
	};
	class rhs_mag_M1069;
	class mkk_mag_M1069 : rhs_mag_M1069
	{
		allowedSlots[] = {901};
		scope = 2;
		mass = 120;
		type = 256;
		ammo = "mkk_ammo_M1069";
		muzzleImpulseFactor[] = {0.5, 0.5};
		displayName = "XM1069 HE-FRAG";
		displayNameShort = "M1069";
	};
	class mkk_mag_M1069_105mm : mkk_mag_M1069
	{
		displayName = "M110 HE-MP-T";
		displayNameShort = "M110 HE-MP-T";
		count = 6;
		tracersEvery = 1;
		initSpeed = 950;
		ammo = "mkk_ammo_M1069_105mm";
		magazineReloadTime = 5;
		reloadtime = 5;
		muzzleImpulseFactor[] = {"200*0.1", 0.5};
	};
	class mkk_boxmgs_mag_dm512: mkk_mag_M1069_105mm
	{
		count=10;
		initSpeed=732;
		displayName="HE-T DM512";
		displayNameShort="HE-T DM512";
		muzzleImpulseFactor[]={"115",0.5};
	};
	class 300Rnd_25mm_shells;
	class mkk_mag_ranger_oerlikon_252rnd: 300Rnd_25mm_shells
	{
		scope=2;
		ammo="mkk_ammo_ranger_oerlikon";
		tracersevery=1;
		count=252;
		nvgOnly=0;
		muzzleImpulseFactor[]=
		{
			"2*1.5",
			0.5
		};
		initSpeed=1080;
	};
	class mkk_mag_ranger_oerlikon_2520rnd: mkk_mag_ranger_oerlikon_252rnd
	{
		count=2520;
	};
	class mkk_252rnd_oerlikon_AHEAD: mkk_mag_ranger_oerlikon_252rnd
	{
		count=252;
	};
	class rhs_fim92_mag;
	class mkk_rhs_fim92A_mag : rhs_fim92_mag
	{
		displayname = "FIM-92A [1Rnd]";
		displayNameShort = "FIM92A";
		ammo = "mkk_rhs_ammo_fim92A_missile";
		initSpeed = 40;
		mass = 100;
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
	};
	class mkk_rhs_fim92A_2rnd_mag : mkk_rhs_fim92A_mag
	{
		count = 2;
		scope = 2;
		displayname = "FIM-92A [2Rnd]";
		mass = 200;
	};
	class mkk_rhs_fim92A_8rnd_mag : mkk_rhs_fim92A_2rnd_mag
	{
		count = 8;
		scope = 1;
		displayname = "FIM-92A [8Rnd]";
		ammo = "mkk_rhs_ammo_fim92A_ad";
	};
	class mkk_mag_ranger_fim92A_2rnd: mkk_rhs_fim92A_8rnd_mag
	{
		count=2;
		scope=1;
	};
	class mkk_rhs_fim92F_mag : rhs_fim92_mag
	{
		displayname = "FIM-92F [1Rnd]";
		displayNameShort = "FIM92F";
		ammo = "mkk_rhs_ammo_fim92F_missile";
		initSpeed = 40;
		mass = 100;
		picture = "\A3\Weapons_F_beta\Launchers\titan\Data\UI\gear_titan_missile_atl_CA.paa";
	};
	class mkk_rhs_fim92F_8rnd_mag : mkk_rhs_fim92F_mag
	{
		count = 8;
		scope = 1;
		displayname = "FIM-92F [8Rnd]";
		ammo = "mkk_rhs_ammo_fim92F_ad";
	};
	class mkk_mag_ranger_fim92F_2rnd: mkk_rhs_fim92F_8rnd_mag
	{
		count=2;
		scope=1;
	};
	class mkk_rhs_fim92M_mag : mkk_rhs_fim92F_mag
	{
		displayname = "FIM-92M [1Rnd]";
		displayNameShort = "FIM92M";
		ammo = "mkk_ammo_fim92M";
	};
	class mkk_rhs_fim92M_8rnd_mag : mkk_rhs_fim92M_mag
	{
		count = 8;
		scope = 1;
		displayname = "FIM-92M [8Rnd]";
		ammo = "mkk_rhs_ammo_fim92M_ad";
	};
	class mkk_mag_ranger_fim92M_2rnd: mkk_rhs_fim92M_8rnd_mag
	{
		count=2;
		scope=1;
	};
	class rhs_mag_3d17_12;
	class lem_smoke_b_16rnd_mag: rhs_mag_3d17_12
	{
		count=16;
	};
	class lem_smoke_b_6rnd_mag: rhs_mag_3d17_12
	{
		count=6;
	};
	class lem_smoke_b_8rnd_mag: rhs_mag_3d17_12
	{
		count=8
	};
	class lem_smoke_b_18rnd_mag: rhs_mag_3d17_12
	{
		count=18;
	};
	class BWA3_160Rnd_HE_shells;
	class mkk_MK30_100Rnd_HE_shells: BWA3_160Rnd_HE_shells
	{
		count=100;
	};
	class BWA3_240Rnd_APFSDS_shells;
	class mkk_MK30_100Rnd_APFSDS_shells: BWA3_240Rnd_APFSDS_shells
	{
		count=100;
	};
};
class cfgAmmo
{
	class B_35mm_AA;
	class mkk_ammo_ranger_oerlikon: B_35mm_AA
	{
		airFriction=-5.0000001e-008;
		typicalSpeed=1080;
		fuseType = "proximity";
		proximityFuseDistance = 20;
		proximityExplosionDistance = 25;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		tracerScale=1;
		tracerStartTime=0.1;
		tracerEndTime=4;
	};
	class rhs_ammo_3of_base;
	class mkk_ammo_M1069 : rhs_ammo_3of_base
	{
		hit = 50;
		indirectHit = 20;
		indirectHitRange = 20;
		typicalSpeed = 915;
		airFriction = -3.96e-05;
		deflecting = 0;
		caliber = 0.1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		tracerScale = 0.8;
		tracerEndTime = 8;
	};
	class mkk_ammo_M1069_105mm : mkk_ammo_M1069
	{
		typicalSpeed = 800;
		hit = 40;
		indirectHit = 20;
		indirectHitRange = 12;
		deflecting = 0;
		caliber = 0.1;
		model="\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		tracerScale = 0.8;
		tracerEndTime = 8;
	};
	class rhs_ammo_M830A1;
	class mkk_ammo_M830A1_105mm : rhs_ammo_M830A1
	{
		hit = 650;
		typicalSpeed = 1173;
		caliber = 13.7;
	};
	class rhs_ammo_M829A3;	
	class mkk_ammo_M829A3_105mm : rhs_ammo_M829A3
	{
		caliber = 13.7;
		hit = 443;
		typicalSpeed = 1505;
	};
	class rhs_ammo_fim92_missile;
	class mkk_rhs_ammo_fim92A_missile : rhs_ammo_fim92_missile
	{
		cmImmunity = 0.72;
		caliber = 3;
		hit = 150;
		indirectHit = 100;
		indirectHitRange = 15;
		maneuvrability = 10;
		sideairfriction = 0.6;
		missileLockMaxDistance = 4200;
		missileLockMinDistance = 100;
		missileLockMaxSpeed = 300;
		simulationStep = 0.001;
		trackOversteer = 1;
		trackLead = 0.6;
		airLock = 2;
		irLock = 1;
		cost = 1000;
		timeToLive = 10;
		airFriction = 0.00016;
		maxSpeed = 400;
		initTime = 0.3;
		thrustTime = 3;
		thrust = 340;
		fuseDistance = 50;
		whistleDist = 16;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 4200;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 4200;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minSpeedThreshold = -1e10;
						maxSpeedThreshold = 1e10;
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 0;
						maxFogSeeThrough = 1;
						nightRangeCoef = 1;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableATL = 10;
						maxTrackableATL = 3800;
					};
				};
			};
		};
	};
	class mkk_rhs_ammo_fim92A_ad : mkk_rhs_ammo_fim92A_missile
	{
		cmImmunity = 0.72;
		missileLockMaxDistance = 5000;
		weaponLockSystem = 8;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minSpeedThreshold = -1e10;
						maxSpeedThreshold = 1e10;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 0;
						maxFogSeeThrough = 1;
						nightRangeCoef = 1;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableATL = 10;
						maxTrackableATL = 5000;
					};
				};
			};
		};
	};
	class mkk_rhs_ammo_fim92F_missile : rhs_ammo_fim92_missile
	{
		cmImmunity = 0.86;
		caliber = 3;
		hit = 100;
		indirectHit = 80;
		indirectHitRange = 15;
		maneuvrability = 18;
		sideairfriction = 0.8;
		missileLockMaxDistance = 4800;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 320;
		simulationStep = 0.001;
		trackOversteer = 1;
		trackLead = 0.95;
		airLock = 2;
		irLock = 1;
		cost = 1000;
		timeToLive = 29;
		airFriction = 0.00016;
		maxSpeed = 500;
		initTime = 0.3;
		thrustTime = 3;
		thrust = 400;
		fuseDistance = 50;
		whistleDist = 16;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 4800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 4800;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minSpeedThreshold = -1e10;
						maxSpeedThreshold = 1e10;
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 0;
						maxFogSeeThrough = 1;
						nightRangeCoef = 1;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableATL = 10;
						maxTrackableATL = 3800;
					};
				};
			};
		};
	};

	class mkk_rhs_ammo_fim92F_ad : mkk_rhs_ammo_fim92F_missile
	{
		cmImmunity = 0.88;
		maxSpeed = 500;
		missileLockMaxDistance = 7500;
		weaponLockSystem = 8;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 7500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 7500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minSpeedThreshold = -1e10;
						maxSpeedThreshold = 1e10;
						angleRangeHorizontal = 45;
						angleRangeVertical = 45;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 0;
						maxFogSeeThrough = 1;
						nightRangeCoef = 1;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableATL = 10;
						maxTrackableATL = 7500;
					};
				};
			};
		};
	};

	class mkk_ammo_fim92M : mkk_rhs_ammo_fim92F_missile
	{
		cmImmunity = 0.9;
		caliber = 3;
		hit = 100;
		indirectHit = 80;
		indirectHitRange = 15;
		maneuvrability = 24;
		missileLockMaxDistance = 5500;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 400;
		trackLead = 1;
		sideairfriction = 1;
		trackoversteer = 1;
		timeToLive = 29;
		maxSpeed = 540;
		thrust = 400;
		thrustTime = 4.5;
		initTime = 0.3;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 5500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 5500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minSpeedThreshold = -1e10;
						maxSpeedThreshold = 1e10;
						angleRangeHorizontal = 7;
						angleRangeVertical = 4.5;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 0;
						maxFogSeeThrough = 1;
						nightRangeCoef = 1;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableATL = 10;
						maxTrackableATL = 5500;
					};
				};
			};
		};
	};

	class mkk_rhs_ammo_fim92M_ad : mkk_ammo_fim92M
	{
		cmImmunity = 0.94;
		missileLockMaxDistance = 11000;
		weaponLockSystem = 8;
		thrustTime = 5.5;
		missileLockCone = 30;
		maneuvrability = 30;
		proximityExplosionDistance = 40;

		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent
					{
						class AirTarget
						{
							minRange = 100;
							maxRange = 11000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 100;
							maxRange = 11000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						minTrackableSpeed = -1e10;
						maxTrackableSpeed = 1e10;
						minSpeedThreshold = -1e10;
						maxSpeedThreshold = 1e10;
						angleRangeHorizontal = 90;
						angleRangeVertical = 90;
						groundNoiseDistanceCoef = 0.2;
						maxGroundNoiseDistance = 50;
						componentType = "IRSensorComponent";
						typeRecognitionDistance = 0;
						maxFogSeeThrough = 1;
						nightRangeCoef = 1;
						color[] = {1,0,0,1};
						allowsMarking = 1;
						animDirection = "";
						aimDown = 0;
						minTrackableATL = 10;
						maxTrackableATL = 11000;
					};
				};
			};
		};
	};
};
