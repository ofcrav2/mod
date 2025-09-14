#include "BIS_AddonInfo.hpp"
class CfgFunctions {
    class ABM {
        class ABM_Weapons{
            file = "\m1296_c\functions";
            class firedABM {headerType = -1;};
        };
    };
	class mshorad 
	{
     	class acePylon
		{
     		class mshorad_actions 
			{
				file = "\m1296_c\functions\fn_mshorad_actions.sqf";
				preInit = 0;
				preStart = 0;
				postInit = 1;
				recompile = 1;
			};
		};
    };
};
class CfgPatches
{
	class m1296_c_lk
	{
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"M1296_lk",
			"rhsusf_stryker",
			"rhsusf_c_stryker",
			"rhsusf_c_heavyweapons",
			"m1126_MShorad_lk",
			"ampv_c_lk"
		};
		requiredVersion=0.1;
		units[]=
		{
			"rhsusf_stryker_m1296_wd",
			"rhsusf_stryker_m1296_d",
			"rhsusf_stryker_m1126ms_wd",
			"rhsusf_stryker_m1126ms_d"
		};
		weapons[]=
		{
			"LK_weap_XM813",
			"LK_weap_m240_m1296_coax",
			"missiles_stinger_AA_LK",
			"lk_missiles_TOW",
			"lk_missiles_hellfire",
			"k_rockets_hydra"
		};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class IRSensorComponent;
class LaserSensorComponent;
class VisualSensorComponent;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class Components;
class DefaultEventhandlers;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class AnimationSources;
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
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
			};
		};
		class EventHandlers;
		class Components;
	};
	class rhsusf_stryker_m1296_base: Wheeled_APC_F
	{
		displayName="M1296";
		model="\m1296\m1296_autocannon.p3d";
		picture="\m1296_c\ui\m1296_ca.paa";
		Icon="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
		dlc="RHS_USAF";
		accuracy=0.25;
		category="rhs_vehclass_apc";
		editorSubcategory="EdSubcat_APCs";
		driverAction="RHS_Stryker_M1126_Driver_out";
		driverInAction="RHS_Stryker_M1126_Driver_in";
		driverDoor="Hatch_Driver";
		cargoIsCoDriver[]={0};
		forceHideDriver=0;
		hideProxyInCombat=1;
		viewDriverInExternal=1;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverForceOptics=0;
		LODDriverTurnedOut=1;
		LODDriverTurnedin=1100;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverLeftLegAnimName="pedal_brake";
		driveOnComponent[]=
		{
			"Hull"
		};
		unitInfoType="RHS_RscUnitInfoStryker";
		selectionBackLights="Light_Back";
		selectionBrakeLights="Light_Brake";
		class TransportBackpacks
		{
			class _xx_rhsusf_falconii
			{
				backpack="rhsusf_falconii";
				count=8;
			};
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		memoryPointSupply="SupplyPos";
		supplyRadius=4.6999998;
		transportMaxMagazines=160;
		transportMaxWeapons=10;
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
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
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.40000001;
			minFov=0.23;
			maxFov=0.40000001;
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos="view_driver";
				opticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
				visionMode[]=
				{
					"Normal"
				};
				hitpoint="Hit_Optic_Driver2";
			};
			class DVE_Wide: Wide
			{
				camPos="view_DVE";
				opticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
				visionMode[]=
				{
					"TI"
				};
				thermalMode[]={0,1};
				initFov=1.07692;
				minFov=1.07692;
				maxFov=1.07692;
				hitpoint="Hit_Optic_DVEA";
			};
			class DVS_Rear: DVE_Wide
			{
				camPos="view_rear";
				camDir="view_rear_dir";
				hitpoint="Hit_Optic_Driver_Rear";
			};
		};
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,1};
			plateFont="rhsusf_font_stencil";
			plateFormat="#/# SCR";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
		class Exhausts
		{
		};
		class Reflectors
		{
			class Left
			{
				color[]={1,0.69999999,0.60000002};
				ambient[]={1,0.89999998,0.69999999};
				selection="Light_L";
				position="Light_L";
				direction="Light_L_end";
				hitpointClass="Hit_Light_L";
				size=1;
				innerAngle=60;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=100;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=0.1;
					constant=0;
					linear=0;
					quadratic=0.050000001;
					hardLimitStart=80;
					hardLimitEnd=120;
				};
			};
			class Right: Left
			{
				selection="Light_R";
				position="Light_R";
				direction="Light_R_end";
				hitpointClass="Hit_Light_R";
			};
			class Left_Flare: Left
			{
				position="Light_L_Flare";
				useFlare=1;
			};
			class Right_Flare: Right
			{
				position="Light_R_Flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left_Flare",
				"Right_Flare"
			}
		};
		armorLights=0.1;
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					point="light_1";
					color[]={20,30,30};
					ambient[]={0,0,0};
					intensity=1.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					drawLight=0;
					activeLight=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
				};
				class Light2: Light1
				{
					point="light_2";
					color[]={20,30,30};
					ambient[]={0,0,0};
					intensity=5.5;
				};
				class Light3: Light2
				{
					point="light_3";
				};
				class Light4: Light2
				{
					point="light_4";
				};
			};
		};
		fuelExplosionPower=0.1;
		secondaryExplosion=-1;
		armor=220;
		armorStructural=200;
		explosionShielding=2;
		crewExplosionProtection=0.99999952;
		class HitPoints
		{
			class HitHull
			{
				armor=-400;
				minimalHit=-0.40000001;
				explosionShielding=0.050000001;
				armorComponent="hit_hull";
				name="hit_hull";
				visual="zbytek";
				passThrough=0.1;
				radius=0.2;
			};
			class HitEngine
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.5;
				armorComponent="hit_engine";
				name="hit_engine";
				visual="-";
				passThrough=0.1;
				radius=0.2;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke1";
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
						position="engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position="engine_smoke3";
					};
				};
			};
			class HitFuel_L
			{
				armor=-70;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				armorComponent="hit_fuel_l";
				name="hit_fuel_l";
				visual="-";
				passThrough=0.15000001;
				radius=0.2;
			};
			class HitFuel_R
			{
				armor=-70;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				armorComponent="hit_fuel_r";
				name="hit_fuel_r";
				visual="-";
				passThrough=0.15000001;
				radius=0.2;
			};
			class HitFuel
			{
				armor=999;
				depends="(HitFuel_L+HitFuel_R)*0.5";
				name="hit_fuel";
				visual="-";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Light_L
			{
				armor=-10;
				explosionShielding=1;
				name="Hit_Light_L";
				visual="Light_L";
				armorComponent="Hit_Light_L";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Light_R
			{
				armor=-10;
				explosionShielding=1;
				name="Hit_Light_R";
				visual="Light_R";
				armorComponent="Hit_Light_R";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Optic_Driver1
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_driver1";
				armorComponent="Hit_Optic_Driver1";
				passThrough=0;
			};
			class Hit_Optic_Driver2
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_driver2";
				armorComponent="Hit_Optic_Driver2";
				passThrough=0;
			};
			class Hit_Optic_Driver3
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_driver3";
				armorComponent="Hit_Optic_Driver3";
				passThrough=0;
			};
			class Hit_Optic_DVEA
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_DVEA";
				armorComponent="Hit_Optic_DVEA";
				passThrough=0;
			};
			class Hit_Optic_Driver_Rear
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_driver_rear";
				armorComponent="Hit_Optic_Driver";
				passThrough=0;
			};
			class HitLFWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_1_hit";
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
			};
			class HitLF2Wheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_2_hit";
				visual="wheel_1_2_damage";
				armorComponent="wheel_1_2_hide";
			};
			class HitLMWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_3_hit";
				visual="wheel_1_3_damage";
				armorComponent="wheel_1_3_hide";
			};
			class HitLBWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_4_hit";
				visual="wheel_1_4_damage";
				armorComponent="wheel_1_4_hide";
			};
			class HitRFWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_1_hit";
				visual="wheel_2_1_damage";
				armorComponent="wheel_2_1_hide";
			};
			class HitRF2Wheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_2_hit";
				visual="wheel_2_2_damage";
				armorComponent="wheel_2_2_hide";
			};
			class HitRMWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_3_hit";
				visual="wheel_2_3_damage";
				armorComponent="wheel_2_3_hide";
			};
			class HitRBWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_4_hit";
				visual="wheel_2_4_damage";
				armorComponent="wheel_2_4_hide";
			};
			class Hit_Optic_ComPeriscope1
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope1";
				armorComponent="Hit_Optic_ComPeriscope1";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope2
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope2";
				armorComponent="Hit_Optic_ComPeriscope2";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope3
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope3";
				armorComponent="Hit_Optic_ComPeriscope3";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope4
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope4";
				armorComponent="Hit_Optic_ComPeriscope4";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope5
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope5";
				armorComponent="Hit_Optic_ComPeriscope5";
				passThrough=0;
			};
			class HitSLAT_Left_1
			{
				simulation="Armor_SLAT";
				armorComponent="cage_left_1_geo";
				name="cage_left_1_point";
				armor=-200;
				minimalHit=0.30000001;
				passThrough=0;
				visual="-";
				explosionShielding=2;
				radius=0.25;
			};
			class HitSLAT_Left_2: HitSLAT_Left_1
			{
				armorComponent="cage_left_2_geo";
				name="cage_left_2_point";
			};
			class HitSLAT_Left_3: HitSLAT_Left_1
			{
				armorComponent="cage_left_3_geo";
				name="cage_left_3_point";
			};
			class HitSLAT_Right_1: HitSLAT_Left_1
			{
				armorComponent="cage_right_1_geo";
				name="cage_right_1_point";
			};
			class HitSLAT_Right_2: HitSLAT_Left_1
			{
				armorComponent="cage_right_2_geo";
				name="cage_right_2_point";
			};
			class HitSLAT_Right_3: HitSLAT_Left_1
			{
				armorComponent="cage_right_3_geo";
				name="cage_right_3_point";
			};
			class HitSLAT_top_back: HitSLAT_Left_1
			{
				armorComponent="cage_top_back_geo";
				name="cage_top_back_point";
			};
			class HitSLAT_top_left: HitSLAT_Left_1
			{
				armorComponent="cage_top_left_geo";
				name="cage_top_left_point";
			};
			class HitSLAT_top_right: HitSLAT_Left_1
			{
				armorComponent="cage_top_right_geo";
				name="cage_top_right_point";
			};
			class HitSLAT_back: HitSLAT_Left_1
			{
				armorComponent="cage_back_geo";
				name="cage_back_point";
			};
			class HitSLAT_front: HitSLAT_Left_1
			{
				armorComponent="cage_front_geo";
				name="cage_front_point";
			};
			class HitSLAT_ramp: HitSLAT_Left_1
			{
				armorComponent="cage_ramp_geo";
				name="cage_ramp_point";
			};
		};
		ace_vehicle_damage_slatHitpoints[]=
		{
			"HitSLAT_Left_1",
			"HitSLAT_Left_2",
			"HitSLAT_Left_3",
			"HitSLAT_Right_1",
			"HitSLAT_Right_2",
			"HitSLAT_Right_3",
			"HitSLAT_top_back",
			"HitSLAT_top_left",
			"HitSLAT_top_right",
			"HitSLAT_back",
			"HitSLAT_front",
			"HitSLAT_ramp"
		};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight
			{
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class CrewDisplay
					{
						componentType="CrewDisplayComponent";
						resource="RscCustomInfoCrew";
					};
				};
			};
		};
		defaultUserMFDvalues[]={1000};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP_1_Pos";
					pointDirection="PIP_1_Dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP_2_Pos";
					pointDirection="PIP_2_Dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
			class DVE_Front
			{
				renderTarget="rendertarget_dve";
				class CameraView1
				{
					pointPosition="View_DVE_pip";
					pointDirection="View_DVE_pip_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"DVE_Front_TL",
					"DVE_Front_TR",
					"DVE_Front_BL",
					"DVE_Front_BR"
				};
			};
			class Gunner_display
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="View_CROWS_TI";
					pointDirection="View_CROWS_TI_dir";
					renderVisionMode=2;
					renderQuality=2;
					fov=0.69999999;
					turret[]={0};
				};
				BBoxes[]=
				{
					"PIP_3_TL",
					"PIP_3_TR",
					"PIP_3_BL",
					"PIP_3_BR"
				};
			};
		};
		transportSoldier=6;
		cargoProxyIndexes[]={2,3,4,5,6,7};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9};
		cargoAction[]=
		{
			"rhs_passenger_apc_narrow_generic02",
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic01"
		};
		cargoDoors[]=
		{
			"Ramp"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 1",
			"pos cargo 2",
			"pos cargo 3"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 1 dir",
			"pos cargo dir",
			"pos cargo 2 dir",
			"pos cargo 3 dir"
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open ramp";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close ramp";
				condition="this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide',[1]] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
			class AdjustMap
			{
				displayName="Adjust BFT Map Scale";
				position="pos driver";
				radius=20;
				condition="player == gunner this";
				statement="createDialog 'RHS_BFT_Map_Scale_UI';sliderSetRange [1900,0.01,1];sliderSetPosition [1900,cameraon animationSourcePhase 'BFT_Map_Scale']";
				onlyforplayer=1;
			};
			class SwhitchToADAMode
			{
				displayName="Switch to Anti-Air Airburst mode";
				position="pos driver";
				radius=20;
				condition="player == gunner this &&  this getVariable ['AAmode',false] == false";
				statement="gunner this setWeaponZeroing ['LK_weap_XM813', 'HE', 194];this setVariable ['AAmode',true,false];";
				onlyforplayer=1;
			};
			class SwhitchToNormalMode
			{
				displayName="Switch to Distance Airburst mode";
				position="pos driver";
				radius=20;
				condition="player == gunner this &&  this getVariable ['AAmode',false] == true";
				statement="gunner this setWeaponZeroing ['LK_weap_XM813', 'HE', 94];this setVariable ['AAmode',false,false];";
				onlyforplayer=1;
			};
		};
		class EventHandlers: EventHandlers
		{
			class BIS_Randomisation
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
			};
			class RHSUSF_EventHandlers
			{
				init="_this call rhs_fnc_stryker_m1126_init";
				postInit="_this call rhs_fnc_reapplyTextures";
				getIn="_this call rhs_fnc_m2_doors;";
				getOut="_this call rhs_fnc_m2_doors;";
				seatSwitched="_this call rhs_fnc_stryker_seatSwitched";
				engine="_this call rhs_fnc_engineCheckDamage";
			};
			class RHSUSF_TurnInActions
			{
				turnIn="(_this + [false])  spawn rhs_fnc_stryker_turnActions;";
				turnOut="(_this + [true]) spawn rhs_fnc_stryker_turnActions;";
			};
		};
		simulation="CarX";
		thrustDelay=0.34999999;
		brakeIdleSpeed=1.78;
		maxSpeed=100;
		fuelCapacity=25;
		wheelCircumference=3.8050001;
		waterLeakiness=2.5;
		dampersBumpCoef=4.5;
		terrainCoef=1.5;
		turnCoef=3;
		wheelDestroyRadiusCoef=0.60000002;
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.30000001;
		accelAidForceYOffset=-1.5;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		enginePower=325;
		peakTorque=1457.5;
		idleRpm=650;
		redRpm=2600;
		maxOmega=272.271;
		minOmega=52.359901;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			{0,0},
			{0.163077,0.277015},
			{0.23115399,0.61406499},
			{0.30615401,0.93224698},
			{0.35884601,1},
			{0.61500001,1},
			{0.97384602,0.795026},
			{1.28192,0.227273}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.0300002,
				"N",
				0,
				"D1",
				3.49,
				"D2",
				1.86,
				"D3",
				1.41,
				"D4",
				1,
				"D5",
				0.75,
				"D6",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		switchTime=0.1;
		latency=1.4;
		clutchStrength=35;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		class Wheels
		{
			class L1
			{
				steering=1;
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				center="wheel_1_1_center";
				boundary="wheel_1_1_bound";
				suspForceAppPointOffset="wheel_1_1_center";
				tireForceAppPointOffset="wheel_1_1_center";
				width=0.27500001;
				mass=187.5;
				MOI=60;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=45000;
				maxHandBrakeTorque=0;
				maxCompression=0.1125;
				maxDroop=0.15000001;
				sprungMass=-1;
				springStrength=160000;
				springDamperRate=8790;
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
				steering=1;
				boneName="wheel_1_2_damper";
				center="wheel_1_2_center";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_center";
				tireForceAppPointOffset="wheel_1_2_center";
			};
			class L3: L1
			{
				steering=0;
				boneName="wheel_1_3_damper";
				center="wheel_1_3_center";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_center";
				tireForceAppPointOffset="wheel_1_3_center";
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				steering=0;
				boneName="wheel_1_4_damper";
				center="wheel_1_4_center";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_center";
				tireForceAppPointOffset="wheel_1_4_center";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_center";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_center";
				tireForceAppPointOffset="wheel_2_1_center";
			};
			class R2: R1
			{
				steering=1;
				boneName="wheel_2_2_damper";
				center="wheel_2_2_center";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_center";
				tireForceAppPointOffset="wheel_2_2_center";
			};
			class R3: R1
			{
				steering=0;
				boneName="wheel_2_3_damper";
				center="wheel_2_3_center";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_center";
				tireForceAppPointOffset="wheel_2_3_center";
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				steering=0;
				boneName="wheel_2_4_damper";
				center="wheel_2_4_center";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_center";
				tireForceAppPointOffset="wheel_2_4_center";
				maxHandBrakeTorque=300000;
			};
		};
		attenuationEffectType="TankAttenuation";
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
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Start",
			0.79432821,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Stop",
			0.79432821,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Start",
			1,
			1,
			100
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Stop",
			1,
			1,
			100
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095737,
			1,
			100
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095737,
			1,
			100
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095737,
			1,
			100
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		woodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		woodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		woodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		woodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		woodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
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
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		ArmorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		ArmorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		class Sounds
		{
			soundSetsExt[]=
			{
				"APC_Wheeled_01_Engine_RPM0_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM1_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM2_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM3_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM4_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM5_EXT_SoundSet",
				"APC_Wheeled_01_Rattling_EXT_SoundSet",
				"APC_Wheeled_01_Stress_EXT_SoundSet",
				"APC_Wheeled_01_Rain_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"
			};
			soundSetsInt[]=
			{
				"APC_Wheeled_01_Engine_RPM0_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM1_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM2_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM3_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM4_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM5_INT_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet",
				"APC_Wheeled_01_Rattling_INT_SoundSet",
				"APC_Wheeled_01_Stress_INT_SoundSet",
				"APC_Wheeled_01_Rain_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"
			};
		};
		class MFD
		{
			class MFD_CROWS
			{
				topLeft="PIP_3_TL";
				topRight="PIP_3_TR";
				bottomLeft="PIP_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Static_Offset
					{
						type="fixed";
						pos[]={0.079999998,0.89999998};
					};
					class Cross
					{
						type="fixed";
						pos[]={0,-0.145};
					};
					class TurretRotation
					{
						type="rotational";
						source="weaponHeading";
						sourceIndex=0;
						center[]={0,0};
						min=-180;
						max=180;
						minAngle=-180;
						maxAngle=180;
						sourceOffset=-180;
						aspectRatio=1.29101;
					};
				};
				class Draw
				{
					color[]={1,0,0,1};
					alpha=1;
					class StaticDraw
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Cross",
								{0.43000001,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.56999999,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.55513197},
								1
							},
							
							{
								"Cross",
								{0.5,0.73587298},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{0.010416,-0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0.02052,-0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{0.029999999,-0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{0.038568001,-0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{0.045960002,-0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{0.051959999,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.056382,-0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{0.059087999,-0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{0.059999999,0},
								1
							},
							
							{
								"Static_Offset",
								{0.059087999,0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{0.056382,0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{0.051959999,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.045960002,0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{0.038568001,0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{0.029999999,0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{0.02052,0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{0.010416,0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0,0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{-0.010416,0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{-0.02052,0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{-0.029999999,0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{-0.038568001,0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{-0.045960002,0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{-0.051959999,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.056382,0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{-0.059087999,0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{-0.059999999,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.059087999,-0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{-0.056382,-0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{-0.051959999,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.045960002,-0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{-0.038568001,-0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{-0.029999999,-0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{-0.02052,-0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{-0.010416,-0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.064550303},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.029999999,-0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{0.025,-0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.0519615,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.043301299,-0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.059999999,3.3859e-009},
								1
							},
							
							{
								"Static_Offset",
								{0.050000001,2.8215801e-009},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.0519615,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.043301299,0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.029999999,0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{0.025,0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-5.2453699e-009,0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{-4.3711399e-009,0.064550303},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.029999999,0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{-0.025,0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.0519615,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.043301299,0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.059999999,-9.23705e-010},
								1
							},
							
							{
								"Static_Offset",
								{-0.050000001,-7.6975398e-010},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.0519615,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.043301299,-0.0322752},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.029999999,-0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{-0.025,-0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"TurretRotation",
									0,
									-0.058095202
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"TurretRotation",
									0,
									0
								},
								1
							},
							{}
						};
					};
					class StaticDrawBold
					{
						type="line";
						width=8;
						points[]=
						{
							
							{
								"Cross",
								{0.30000001,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.43000001,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.56999999,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.69999999,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.38730201},
								1
							},
							
							{
								"Cross",
								{0.5,0.55513197},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.73587298},
								1
							},
							
							{
								"Cross",
								{0.5,0.90370399},
								1
							},
							{}
						};
					};
					class Range_Text
					{
						type="text";
						source="static";
						text="LRF:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.50999999},
							1
						};
						right[]=
						{
							{0.059999999,0.50999999},
							1
						};
						down[]=
						{
							{0.0099999998,0.56},
							1
						};
					};
					class Range_Value
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.50999999
							},
							1
						};
						right[]=
						{
							{0.16,0.50999999},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.56
							},
							1
						};
					};
					class Ballistic_Text
					{
						type="text";
						source="static";
						text="Ballistic:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.67000002},
							1
						};
						right[]=
						{
							{0.059999999,0.67000002},
							1
						};
						down[]=
						{
							{0.0099999998,0.72000003},
							1
						};
					};
					class Ballistic_Value
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.13",
								0.67000002
							},
							1
						};
						right[]=
						{
							{0.19,0.67000002},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.13",
								0.72000003
							},
							1
						};
					};
					class Mode_Text
					{
						type="text";
						source="static";
						text="FOV:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.70999998},
							1
						};
						right[]=
						{
							{0.059999999,0.70999998},
							1
						};
						down[]=
						{
							{0.0099999998,0.75999999},
							1
						};
					};
					class Mode_Value
					{
						type="text";
						source="userText";
						text="1.0x";
						sourceIndex=1;
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.70999998
							},
							1
						};
						right[]=
						{
							{0.16,0.70999998},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.75999999
							},
							1
						};
					};
					class Elev_Text
					{
						type="text";
						source="static";
						text="Elev:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.75},
							1
						};
						right[]=
						{
							{0.059999999,0.75},
							1
						};
						down[]=
						{
							{0.0099999998,0.80000001},
							1
						};
					};
					class Elev_Value
					{
						type="text";
						source="[y]turretworld";
						sourceScale=1;
						sourcePrecision=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.75
							},
							1
						};
						right[]=
						{
							{0.16,0.75},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.80000001
							},
							1
						};
					};
				};
			};
			class MFD_BFT
			{
				topLeft="BFT_Map_TL";
				topRight="BFT_Map_TR";
				bottomLeft="BFT_Map_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						type="fixed";
						pos[]={0.5,0.47999999};
					};
					class Static_Offset
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.22,0.059999999,0.77999997,0.059999999};
					};
					class Sensor_Rotation
					{
						center[]={0,0};
						type="rotational";
						source="heading";
						sourceScale=1;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-180;
						aspectRatio=1.25714;
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.70999998,0.764};
					};
					class Direction_Center
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0,0};
						type="rotational";
						source="user";
						sourceIndex=10;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1;
					};
					class Rotation_WP_Center
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0.5,0.55500001};
						type="rotational";
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=1.25714;
					};
					class MovementY
					{
						type="linear";
						source="user";
						sourceIndex=5;
						refreshRate=0.1;
						min=0;
						max=2;
						sourceScale=1;
						maxPos[]={0,1};
						minPos[]={0,-1};
					};
					class MovementX: MovementY
					{
						sourceIndex=4;
						maxPos[]={-1,0};
						minPos[]={1,0};
					};
					class WP1_PosX: MovementX
					{
						sourceIndex=26;
					};
					class WP1_PosY: MovementY
					{
						sourceIndex=27;
					};
					class WP2_PosX: MovementX
					{
						sourceIndex=28;
					};
					class WP2_PosY: MovementY
					{
						sourceIndex=29;
					};
					class WP3_PosX: MovementX
					{
						sourceIndex=30;
					};
					class WP3_PosY: MovementY
					{
						sourceIndex=31;
					};
					class WP4_PosX: MovementX
					{
						sourceIndex=32;
					};
					class WP4_PosY: MovementY
					{
						sourceIndex=33;
					};
					class WP5_PosX: MovementX
					{
						sourceIndex=34;
					};
					class WP5_PosY: MovementY
					{
						sourceIndex=35;
					};
					class WP6_PosX: MovementX
					{
						sourceIndex=36;
					};
					class WP6_PosY: MovementY
					{
						sourceIndex=37;
					};
					class WP7_PosX: MovementX
					{
						sourceIndex=38;
					};
					class WP7_PosY: MovementY
					{
						sourceIndex=39;
					};
					class WP8_PosX: MovementX
					{
						sourceIndex=40;
					};
					class WP8_PosY: MovementY
					{
						sourceIndex=41;
					};
					class WP9_PosX: MovementX
					{
						sourceIndex=42;
					};
					class WP9_PosY: MovementY
					{
						sourceIndex=43;
					};
					class WP10_PosX: MovementX
					{
						sourceIndex=44;
					};
					class WP10_PosY: MovementY
					{
						sourceIndex=45;
					};
					class WP11_PosX: MovementX
					{
						sourceIndex=46;
					};
					class WP11_PosY: MovementY
					{
						sourceIndex=47;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0,0.12};
					class StaticClip
					{
						class WaypointGroup
						{
							color[]={0,0,0.12};
							alpha=0.60000002;
							class WP
							{
								condition="wpvalid";
								class Draw
								{
									type="line";
									points[]={};
								};
								class WP1
								{
									condition="user26>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="1-WPIndex";
										class WaypointShape
										{
											width=16;
											type="line";
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.025142901},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="01";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP2
								{
									condition="user28>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=1)*(WPIndex<=1)";
										class WaypointShape
										{
											width=16;
											type="line";
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP1_PosX",
												1,
												"WP1_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="02";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP3
								{
									condition="user30>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=2)*(WPIndex<=2)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="03";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP4
								{
									condition="user32>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=3)*(WPIndex<=3)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="04";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP5
								{
									condition="user34>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=4)*(WPIndex<=4)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="05";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP6
								{
									condition="user36>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=5)*(WPIndex<=5)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="06";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP7
								{
									condition="user38>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=6)*(WPIndex<=6)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="07";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP8
								{
									condition="user40>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=7)*(WPIndex<=7)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="08";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP9
								{
									condition="user42>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=8)*(WPIndex<=8)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="09";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP10
								{
									condition="user44>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=9)*(WPIndex<=9)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP10_PosX",
												1,
												"WP10_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="10";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class CustomWP
								{
									condition="user46>=0";
									color[]={1,0.5,0};
									alpha=0.5;
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.025142901},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="CWP";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
							};
						};
					};
					class LightBlue
					{
						color[]={0.43000001,0.80000001,0.93000001};
						alpha=0.15000001;
						class StaticDrawPolygon
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729601,-0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{0.0068403999,-0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,-0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,-0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{0.0128558,-0.0192605},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,-0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,-0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{0.017320501,-0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,-0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,-0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{0.0196962,-0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{0.02,1.09903e-009},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.02,1.09903e-009},
										1
									},
									
									{
										"Static_Offset",
										{0.0196962,0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{0.017320501,0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{0.0128557,0.0192606},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{0.0068403999,0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{-1.74846e-009,0.025142901},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729701,0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729701,0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{-0.0068403999,0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,0.021774299},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,0.021774299},
										1
									},
									
									{
										"Static_Offset",
										{-0.0128558,0.0192605},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{-0.017320501,0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{-0.0196962,0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{-0.02,-2.99826e-010},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.02,-2.99826e-010},
										1
									},
									
									{
										"Static_Offset",
										{-0.0196962,-0.0043660202},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,-0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,-0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{-0.017320501,-0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,-0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,-0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{-0.0128557,-0.0192606},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,-0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,-0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{-0.0068404102,-0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729601,-0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729601,-0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{3.4969101e-009,-0.025142901},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,-0.0247609},
										1
									}
								}
							};
						};
					};
					class StaticDraw
					{
						type="line";
						width=6;
						points[]=
						{
							
							{
								"Static_Offset",
								{0,-0.0264},
								1
							},
							
							{
								"Static_Offset",
								{0.0036456001,-0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0.0071820002,-0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{0.0105,-0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{0.0134988,-0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{0.016085999,-0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{0.018185999,-0.0132},
								1
							},
							
							{
								"Static_Offset",
								{0.019733701,-0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{0.0206808,-0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{0.021,0},
								1
							},
							
							{
								"Static_Offset",
								{0.0206808,0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{0.019733701,0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{0.018185999,0.0132},
								1
							},
							
							{
								"Static_Offset",
								{0.016085999,0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{0.0134988,0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{0.0105,0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{0.0071820002,0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{0.0036456001,0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0,0.0264},
								1
							},
							
							{
								"Static_Offset",
								{-0.0036456001,0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{-0.0071820002,0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{-0.0105,0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{-0.0134988,0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{-0.016085999,0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{-0.018185999,0.0132},
								1
							},
							
							{
								"Static_Offset",
								{-0.019733701,0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{-0.0206808,0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{-0.021,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.0206808,-0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{-0.019733701,-0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{-0.018185999,-0.0132},
								1
							},
							
							{
								"Static_Offset",
								{-0.016085999,-0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{-0.0134988,-0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{-0.0105,-0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{-0.0071820002,-0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{-0.0036456001,-0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.0264},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								{-0.012,-0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{-0.012,0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{0.012,0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{0.012,-0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{-0.012,-0.0099999998},
								1
							},
							{}
						};
					};
					class SensorGroup
					{
						class Sensor
						{
							type="sensor";
							pos[]=
							{
								"Sensor_Offset",
								1,
								
								{
									"-0+-1",
									"-0+-1"
								},
								1
							};
							down[]=
							{
								"Sensor_Offset",
								1,
								
								{
									"0--1",
									"0--1"
								},
								1
							};
							showTargetTypes="2+4+8+16+32+64+128+256+512+1024";
							width=4;
							sensorLineType=0;
							sensorLineWidth=3;
							targetLineWidth=-0.00192;
							targetLineLength=0.02;
							range="user0";
							class MissileThreat
							{
								color[]={1,0,0};
								class TargetLines
								{
									type="line";
									width=2;
									points[]=
									{
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{0.0034719999,-0.024760701},
											1
										},
										
										{
											{0.0068399999,-0.0236267},
											1
										},
										
										{
											{0.0099999998,-0.0217737},
											1
										},
										
										{
											{0.012856,-0.019259401},
											1
										},
										
										{
											{0.01532,-0.016161799},
											1
										},
										
										{
											{0.01732,-0.0125714},
											1
										},
										
										{
											{0.018794,-0.0085988604},
											1
										},
										
										{
											{0.019695999,-0.0043648002},
											1
										},
										
										{
											{0.02,0},
											1
										},
										
										{
											{0.019695999,0.0043648002},
											1
										},
										
										{
											{0.018794,0.0085988604},
											1
										},
										
										{
											{0.01732,0.0125714},
											1
										},
										
										{
											{0.01532,0.016161799},
											1
										},
										
										{
											{0.012856,0.019259401},
											1
										},
										
										{
											{0.0099999998,0.0217737},
											1
										},
										
										{
											{0.0068399999,0.0236267},
											1
										},
										
										{
											{0.0034719999,0.024760701},
											1
										},
										
										{
											{0,0.025142901},
											1
										},
										
										{
											{-0.0034719999,0.024760701},
											1
										},
										
										{
											{-0.0068399999,0.0236267},
											1
										},
										
										{
											{-0.0099999998,0.0217737},
											1
										},
										
										{
											{-0.012856,0.019259401},
											1
										},
										
										{
											{-0.01532,0.016161799},
											1
										},
										
										{
											{-0.01732,0.0125714},
											1
										},
										
										{
											{-0.018794,0.0085988604},
											1
										},
										
										{
											{-0.019695999,0.0043648002},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{-0.019695999,-0.0043648002},
											1
										},
										
										{
											{-0.018794,-0.0085988604},
											1
										},
										
										{
											{-0.01732,-0.0125714},
											1
										},
										
										{
											{-0.01532,-0.016161799},
											1
										},
										
										{
											{-0.012856,-0.019259401},
											1
										},
										
										{
											{-0.0099999998,-0.0217737},
											1
										},
										
										{
											{-0.0068399999,-0.0236267},
											1
										},
										
										{
											{-0.0034719999,-0.024760701},
											1
										},
										
										{
											{0,-0.025142901},
											1
										}
									};
								};
								class TextM
								{
									type="text";
									source="static";
									text="M";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0099999998},
										1
									};
									right[]=
									{
										{0.02,-0.0099999998},
										1
									};
									down[]=
									{
										{0,0.0099999998},
										1
									};
								};
							};
							class lockingThreat
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="line";
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.025142901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
							};
							class markingThreat: lockingThreat
							{
								class TargetLines: TargetLines
								{
								};
							};
							class rwr
							{
								class TargetLines
								{
									type="line";
									width=2;
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.025142901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
							};
							class rwrFriendly: rwr
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrEnemy: rwr
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrGroup: rwr
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrDestroyed
							{
							};
							class markedTarget
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.017000001,-0.0213714},
											1
										},
										
										{
											{-0.0099999998,-0.0213714},
											1
										},
										{},
										
										{
											{0.017000001,-0.0213714},
											1
										},
										
										{
											{0.0099999998,-0.0213714},
											1
										},
										{},
										
										{
											{-0.017000001,-0.0213714},
											1
										},
										
										{
											{-0.017000001,-0.0125714},
											1
										},
										{},
										
										{
											{0.017000001,-0.0213714},
											1
										},
										
										{
											{0.017000001,-0.0125714},
											1
										},
										{},
										
										{
											{-0.017000001,0.0213714},
											1
										},
										
										{
											{-0.0099999998,0.0213714},
											1
										},
										{},
										
										{
											{0.017000001,0.0213714},
											1
										},
										
										{
											{0.0099999998,0.0213714},
											1
										},
										{},
										
										{
											{-0.017000001,0.0213714},
											1
										},
										
										{
											{-0.017000001,0.0125714},
											1
										},
										{},
										
										{
											{0.017000001,0.0213714},
											1
										},
										
										{
											{0.017000001,0.0125714},
											1
										},
										{}
									};
								};
							};
							class assignedTarget: markedTarget
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class target
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{-0.0099999998,-0.0099999998},
												1
											},
											
											{
												{0,-0.0099999998},
												1
											},
											
											{
												{0,0},
												1
											},
											
											{
												{-0.0099999998,0},
												1
											}
										}
									};
								};
							};
							class targetFriendly: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetEnemy: target
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroup: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetDestroyed
							{
							};
							class targetGround: target
							{
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.026000001,0},
											1
										},
										
										{
											{0,0.026000001},
											1
										},
										
										{
											{0.026000001,0},
											1
										},
										
										{
											{0,-0.026000001},
											1
										},
										
										{
											{-0.026000001,0},
											1
										},
										{}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundFriendly: targetGround
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0,-0.0264},
											1
										},
										
										{
											{0.0036456001,-0.0259987},
											1
										},
										
										{
											{0.0071820002,-0.024808099},
											1
										},
										
										{
											{0.0105,-0.022862401},
											1
										},
										
										{
											{0.0134988,-0.020222399},
											1
										},
										
										{
											{0.016085999,-0.016969901},
											1
										},
										
										{
											{0.018185999,-0.0132},
											1
										},
										
										{
											{0.019733701,-0.0090287998},
											1
										},
										
										{
											{0.0206808,-0.0045830398},
											1
										},
										
										{
											{0.021,0},
											1
										},
										
										{
											{0.0206808,0.0045830398},
											1
										},
										
										{
											{0.019733701,0.0090287998},
											1
										},
										
										{
											{0.018185999,0.0132},
											1
										},
										
										{
											{0.016085999,0.016969901},
											1
										},
										
										{
											{0.0134988,0.020222399},
											1
										},
										
										{
											{0.0105,0.022862401},
											1
										},
										
										{
											{0.0071820002,0.024808099},
											1
										},
										
										{
											{0.0036456001,0.0259987},
											1
										},
										
										{
											{0,0.0264},
											1
										},
										
										{
											{-0.0036456001,0.0259987},
											1
										},
										
										{
											{-0.0071820002,0.024808099},
											1
										},
										
										{
											{-0.0105,0.022862401},
											1
										},
										
										{
											{-0.0134988,0.020222399},
											1
										},
										
										{
											{-0.016085999,0.016969901},
											1
										},
										
										{
											{-0.018185999,0.0132},
											1
										},
										
										{
											{-0.019733701,0.0090287998},
											1
										},
										
										{
											{-0.0206808,0.0045830398},
											1
										},
										
										{
											{-0.021,0},
											1
										},
										
										{
											{-0.0206808,-0.0045830398},
											1
										},
										
										{
											{-0.019733701,-0.0090287998},
											1
										},
										
										{
											{-0.018185999,-0.0132},
											1
										},
										
										{
											{-0.016085999,-0.016969901},
											1
										},
										
										{
											{-0.0134988,-0.020222399},
											1
										},
										
										{
											{-0.0105,-0.022862401},
											1
										},
										
										{
											{-0.0071820002,-0.024808099},
											1
										},
										
										{
											{-0.0036456001,-0.0259987},
											1
										},
										
										{
											{0,-0.0264},
											1
										}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundEnemy: targetGround
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.026000001,0},
											1
										},
										
										{
											{0,0.026000001},
											1
										},
										
										{
											{0.026000001,0},
											1
										},
										
										{
											{0,-0.026000001},
											1
										},
										
										{
											{-0.026000001,0},
											1
										},
										{}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundGroup: targetGroundFriendly
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
								class StaticDraw: StaticDraw
								{
								};
							};
							class targetGroundDestroyed
							{
							};
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteGroup: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteDestroyed
							{
							};
							class targetLaser: target
							{
								class TargetLines: TargetLines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{-1.74846e-009,0.025142901},
											1
										},
										{},
										
										{
											{0.02,1.09903e-009},
											1
										},
										
										{
											{-0.02,-2.99826e-010},
											1
										},
										{},
										
										{
											{0.0106066,-0.013334},
											1
										},
										
										{
											{-0.0106066,0.013334},
											1
										},
										{},
										
										{
											{0.0106066,0.013334},
											1
										},
										
										{
											{-0.0106066,-0.013334},
											1
										},
										{}
									};
								};
							};
							class targetLaserFriendly: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserGroup: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVG: targetLaser
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetMan: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManFriendly: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManEnemy: targetMan
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManGroup: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteFriendly: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteEnemy: targetManRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteGroup: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0,0},
												1
											},
											
											{
												{0.012,0.0099999998},
												1
											},
											
											{
												{0.012,-0.0099999998},
												1
											}
										},
										
										{
											
											{
												{0,0},
												1
											},
											
											{
												{-0.012,0.0099999998},
												1
											},
											
											{
												{-0.012,-0.0099999998},
												1
											}
										}
									};
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.025},
											1
										},
										
										{
											{0.02,-0.025},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirFriendly: targetAir
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirEnemy: targetAir
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirGroup: targetAir
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirDestroyed
							{
							};
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.025},
											1
										},
										
										{
											{0.02,-0.025},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteFriendly: targetAirRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteEnemy: targetAirRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.0074999998},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.02,-0.0074999998},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteGroup: targetAirRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirRemoteDestroyed
							{
							};
						};
					};
				};
			};
		};
		class UVAnimations
		{
			class BFT_Map_Scale
			{
				type="scale";
				section="BFT_screen";
				source="BFT_Map_Scale";
				minValue=0;
				maxValue=1;
				center[]={1,1};
				scale0[]={0,0};
				scale1[]={1,1};
			};
			class BFT_Map_Move_X
			{
				section="BFT_screen";
				type="translation";
				source="BFT_Map_Move_X";
				maxValue=100000;
				center[]={1,0};
				offset0[]={0,0};
				offset1[]={100,0};
			};
			class BFT_Map_Move_Y: BFT_Map_Move_X
			{
				source="BFT_Map_Move_Y";
				maxValue=100000;
				offset0[]={0,0};
				offset1[]={0,-100};
			};
			class BFT_Map_Rotate: BFT_Map_Scale
			{
				type="rotate";
				source="direction";
				minValue="rad -180";
				maxValue="rad 180";
				angle0="rad -180";
				angle1="rad 180";
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="LK_weap_XM813";
			};
			class M2_CROWS_AmmoRandom
			{
				weapon="LK_weap_XM813";
				source="ammorandom";
			};
			class m240c_AmmoRandom
			{
				weapon="LK_weap_m240_m1296_coax";
				source="ammorandom";
			};
			class M2_CROWS_Reload
			{
				weapon="LK_weap_XM813";
				source="reload";
			};
			class M2_CROWS_ReloadMagazine
			{
				weapon="LK_weap_XM813";
				source="reloadmagazine";
			};
			class M2_CROWS_Revolving
			{
				weapon="LK_weap_XM813";
				source="revolving";
			};
			class Extend_Mirrors
			{
				displayName="Fold mirrors";
				useSource=1;
				source="user";
				animPeriod=1;
			};
			class Hatch_Driver
			{
				displayName="Open driver hatch";
				source="door";
				animPeriod=2.0999999;
				sound="RHS_HMMWV_Door";
				soundPosition="hatch_driver_axis";
			};
			class Unhide_vis_optic_d_driver1
			{
				source="hit";
				hitpoint="Hit_Optic_Driver1";
			};
			class Unhide_vis_optic_d_driver2
			{
				source="hit";
				hitpoint="Hit_Optic_Driver2";
			};
			class Unhide_vis_optic_d_driver3
			{
				source="hit";
				hitpoint="Hit_Optic_Driver3";
			};
			class Unhide_vis_optic_d_DVEA
			{
				source="hit";
				hitpoint="Hit_Optic_DVEA";
			};
			class Unhide_vis_optic_d_driver_rear
			{
				source="hit";
				hitpoint="Hit_Optic_Driver_Rear";
			};
			class Hatch_Commander: Hatch_Driver
			{
				displayName="Open commander hatch";
				animPeriod=1.1;
				soundPosition="hatch_commander_axis";
			};
			class Hatch_Front: Hatch_Driver
			{
				displayName="Open front hatch";
				animPeriod=1.1;
				soundPosition="hatch_front_axis";
			};
			class Hatch_Left: Hatch_Driver
			{
				displayName="Open left hatch";
				animPeriod=1.1;
				soundPosition="hatch_left_axis";
			};
			class Hatch_Right: Hatch_Driver
			{
				displayName="Open right hatch";
				animPeriod=1.1;
				soundPosition="hatch_right_axis";
			};
			class Ramp: Hatch_Driver
			{
				displayName="Open ramp";
				animPeriod=3.2850001;
				soundPosition="ramp_axis";
				sound="rhs_ramp";
			};
			class Smoke_Revolving_Source
			{
				weapon="rhsusf_weap_M6";
				source="revolving";
			};
			class Hide_Antenna_1
			{
				displayName="Hide antenna #1";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_Antenna_2
			{
				displayName="Hide antenna #2";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_Antenna_3
			{
				displayName="Hide antenna #3";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_CIP
			{
				displayName="Hide Combat Identification Panel";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_DEK
			{
				displayName="Hide Driver's Enhancement Kit";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_DUKE
			{
				displayName="Hide Duke antenna";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_ExDiff
			{
				displayName="Hide exhaust diffuser";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_FCans
			{
				displayName="Hide rear fuel cans";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_WCans
			{
				displayName="Hide rear water cans";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_GPS
			{
				displayName="Hide GPS antenna";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_PioKit
			{
				displayName="Hide pioneer tools";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_StgBar
			{
				displayName="Hide storage bars";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_STORM
			{
				displayName="Hide STORM laser range-finder";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_SuspCov
			{
				displayName="Hide suspension coverings";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_Towbar
			{
				displayName="Hide tow bar";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_Spareheel
			{
				displayName="Hide spare wheel";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class cargolights_hide
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class BFT_Map_Scale
			{
				source="user";
				animPeriod=0;
				initPhase=0.1;
			};
			class BFT_Map_Move_X
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class BFT_Map_Move_Y
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Unhide_vis_optic_d_CROWS_Day
			{
				source="hit";
				hitpoint="Hit_Optic_CROWS_Day";
			};
			class Unhide_vis_optic_d_CROWS_TI
			{
				source="hit";
				hitpoint="Hit_Optic_CROWS_TI";
			};
			class Unhide_vis_optic_d_CROWS_LRF
			{
				source="hit";
				hitpoint="Hit_Optic_CROWS_LRF";
			};
			class Unhide_vis_optic_d_ComPeriscope1
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope1";
			};
			class Unhide_vis_optic_d_ComPeriscope2
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope2";
			};
			class Unhide_vis_optic_d_ComPeriscope3
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope3";
			};
			class Unhide_vis_optic_d_ComPeriscope4
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope4";
			};
			class Unhide_vis_optic_d_ComPeriscope5
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope5";
			};
			class Unhide_vis_optic_d_ComPeriscope6
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope6";
			};
			class Unhide_vis_optic_d_ComPeriscope7
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope7";
			};
			class showslathull
			{
				displayName="install hull slat";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showslatramp: showslathull
			{
				displayName="install ramp slat";
			};
			class showslatturret: showslathull
			{
				displayName="install turret slat";
			};
			class HitSLAT_Left_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_1";
				raw=1;
			};
			class HitSLAT_Left_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_2";
				raw=1;
			};
			class HitSLAT_Left_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_3";
				raw=1;
			};
			class HitSLAT_Right_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_1";
				raw=1;
			};
			class HitSLAT_Right_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_2";
				raw=1;
			};
			class HitSLAT_Right_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_3";
				raw=1;
			};
			class HitSLAT_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_back";
				raw=1;
			};
			class HitSLAT_front_src
			{
				source="Hit";
				hitpoint="HitSLAT_front";
				raw=1;
			};
			class HitSLAT_ramp_src
			{
				source="Hit";
				hitpoint="HitSLAT_ramp";
				raw=1;
			};
			class HitSLAT_top_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_back";
				raw=1;
			};
			class HitSLAT_top_right_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_right";
				raw=1;
			};
			class HitSLAT_top_left_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_left";
				raw=1;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"LK_weap_m240_m1296_coax",
					"LK_weap_XM813",
					"rhsusf_weap_M6"
				};
				magazines[]=
				{
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"156Rnd_MK238_HEI",
					"156Rnd_MK258_APFSDST",
					"156Rnd_MK310_AB",
					"rhsusf_mag_L8A3_16"
				};
				class Turrets
				{
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.39810717,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
				gunnerName="Vehicle Commander";
				discreteDistance[]={30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,105,110,115,120,125,130,135,140,145,150,155,160,165,170,175,180,185,190,195,200,205,210,215,220,225,230,235,240,245,250,255,260,265,270,275,280,285,290,295,300,305,310,315,320,325,330,335,340,345,350,355,360,365,370,375,380,385,390,395,400,405,410,415,420,425,430,435,440,445,450,455,460,465,470,475,480,485,490,495,500,505,510,515,520,525,530,535,540,545,550,555,560,565,570,575,580,585,590,595,600,605,610,615,620,625,630,635,640,645,650,655,660,665,670,675,680,685,690,695,700,705,710,715,720,725,730,735,740,745,750,755,760,765,770,775,780,785,790,795,800,805,810,815,820,825,830,835,840,845,850,855,860,865,870,875,880,885,890,895,900,905,910,915,920,925,930,935,940,945,950,955,960,965,970,975,980,985,990,995,1000,1005,1010,1015,1020,1025,1030,1035,1040,1045,1050,1055,1060,1065,1070,1075,1080,1085,1090,1095,1100,1105,1110,1115,1120,1125,1130,1135,1140,1145,1150,1155,1160,1165,1170,1175,1180,1185,1190,1195,1200,1205,1210,1215,1220,1225,1230,1235,1240,1245,1250,1255,1260,1265,1270,1275,1280,1285,1290,1295,1300,1305,1310,1315,1320,1325,1330,1335,1340,1345,1350,1355,1360,1365,1370,1375,1380,1385,1390,1395,1400,1405,1410,1415,1420,1425,1430,1435,1440,1445,1450,1455,1460,1465,1470,1475,1480,1485,1490,1495,1500,1505,1510,1515,1520,1525,1530,1535,1540,1545,1550,1555,1560,1565,1570,1575,1580,1585,1590,1595,1600,1605,1610,1615,1620,1625,1630,1635,1640,1645,1650,1655,1660,1665,1670,1675,1680,1685,1690,1695,1700,1705,1710,1715,1720,1725,1730,1735,1740,1745,1750,1755,1760,1765,1770,1775,1780,1785,1790,1795,1800,1805,1810,1815,1820,1825,1830,1835,1840,1845,1850,1855,1860,1865,1870,1875,1880,1885,1890,1895,1900,1905,1910,1915,1920,1925,1930,1935,1940,1945,1950,1955,1960,1965,1970,1975,1980,1985,1990,1995,2000,2005,2010,2015,2020,2025,2030,2035,2040,2045,2050,2055,2060,2065,2070,2075,2080,2085,2090,2095,2100,2105,2110,2115,2120,2125,2130,2135,2140,2145,2150,2155,2160,2165,2170,2175,2180,2185,2190,2195,2200,2205,2210,2215,2220,2225,2230,2235,2240,2245,2250,2255,2260,2265,2270,2275,2280,2285,2290,2295,2300,2305,2310,2315,2320,2325,2330,2335,2340,2345,2350,2355,2360,2365,2370,2375,2380,2385,2390,2395,2400,2405,2410,2415,2420,2425,2430,2435,2440,2445,2450,2455,2460,2465,2470,2475,2480,2485,2490,2495,2500,2505,2510,2515,2520,2525,2530,2535,2540,2545,2550,2555,2560,2565,2570,2575,2580,2585,2590,2595,2600,2605,2610,2615,2620,2625,2630,2635,2640,2645,2650,2655,2660,2665,2670,2675,2680,2685,2690,2695,2700,2705,2710,2715,2720,2725,2730,2735,2740,2745,2750,2755,2760,2765,2770,2775,2780,2785,2790,2795,2800,2805,2810,2815,2820,2825,2830,2835,2840,2845,2850,2855,2860,2865,2870,2875,2880,2885,2890,2895,2900,2905,2910,2915,2920,2925,2930,2935,2940,2945,2950,2955,2960,2965,2970,2975,2980,2985,2990,2995,3000};
				discreteDistanceInitIndex=194;
				minElev=-10;
				maxElev=40;
				gunnerAction="RHS_Stryker_M1126_Gunner_out";
				gunnerInAction="RHS_Stryker_M1126_Gunner_in";
				personturretAction=" ";
				isPersonTurret=0;
				gunnerGetInAction="GetInMRAP_01_cargo";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerCompartments="Compartment1";
				gunnerDoor="Hatch_Commander";
				animationSourceHatch="Hatch_Commander_A";
				forceHideGunner=1;
				gunnerForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				viewGunnerInExternal=1;
				LODTurnedOut=1;
				LODTurnedin=1000;
				LODOpticsIn=0;
				LODOpticsOut=0;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				startEngine=0;
				usePip=1;
				selectionFireAnim="zasleh2";
				memoryPointGun="usti hlavne3";
				memoryPointGunnerOptics="View_CROWS";
				animationSourceStickX="gunner_stick_trav";
				animationSourceStickY="gunner_stick_elev";
				gunnerRightHandAnimName="gunner_stick";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-25;
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
				turretInfoType="RHS_RscStryker_M151_CROWS";
				class OpticsIn
				{
					class DaysightWFOV: ViewOptics
					{
						camPos="View_CROWS";
						opticsDisplayName="1.0x";
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_CROWS_Day";
					};
					class ThermalWFOV: DaysightWFOV
					{
						camPos="View_CROWS_TI";
						opticsDisplayName="4.3x";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						initFov=0.162791;
						minFov=0.162791;
						maxFov=0.162791;
						hitpoint="Hit_Optic_CROWS_TI";
					};
					class ThermalNFOV: ThermalWFOV
					{
						opticsDisplayName="12.5x";
						initFov=0.056000002;
						minFov=0.056000002;
						maxFov=0.056000002;
					};
					class DaysightNFOV: DaysightWFOV
					{
						opticsDisplayName="15.0x";
						initFov=0.0466667;
						minFov=0.0466667;
						maxFov=0.0466667;
					};
					class DaysightVNFOV: DaysightWFOV
					{
						opticsDisplayName="30.0x";
						initFov=0.0233333;
						minFov=0.0233333;
						maxFov=0.0233333;
					};
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_Turret";
						visual="";
						armorComponent="Hit_Turret";
						passThrough=0;
						radius=0.2;
					};
					class HitGun
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_Gun";
						visual="";
						armorComponent="Hit_Gun";
						passThrough=0;
						radius=0.2;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,16000,25000,4000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={8000,4000,2000,1000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerName="Troop Commander";
				gunnerCompartments="Compartment1";
				gunnerInAction="RHS_Stryker_M1126_TC_in";
				gunnerAction="Commander_MBT_01_cannon_F_out";
				showAsCargo=1;
				personturretAction="";
				gunnerDoor="Ramp";
				proxyIndex=1;
				viewGunnerInExternal=1;
				isPersonTurret=0;
				commanding=4;
				maxOutTurn=110;
				minOutTurn=-110;
				maxOutElev=75;
				minOutElev=-15;
				LODTurnedOut=1;
				LODTurnedin=1200;
				animationSourceHatch="";
				rhs_hatch="Hatch_Front";
				rhs_hatch_control=1;
				enabledByAnimationSource="Hatch_Front";
				gunnerForceOptics=0;
				class ViewGunner
				{
					initAngleX=0;
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
				class OpticsIn
				{
					class DVE_Wide: ViewOptics
					{
						camPos="view_DVE";
						camDir="view_DVE_dir";
						gunnerOpticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						initFov=1.07692;
						minFov=1.07692;
						maxFov=1.07692;
						hitpoint="Hit_Optic_DVEA";
					};
					class DVS_Rear: DVE_Wide
					{
						camPos="view_rear";
						camDir="view_rear_dir";
						hitpoint="Hit_Optic_Driver_Rear";
					};
					class DaysightWFOV: ViewOptics
					{
						camPos="View_CROWS";
						camDir="View_CROWS_dir";
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_CROWS_Day";
						opticsDisplayName="1.0x";
					};
					class ThermalWFOV: DaysightWFOV
					{
						camPos="View_CROWS_TI";
						camDir="View_CROWS_TI_dir";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						initFov=0.162791;
						minFov=0.162791;
						maxFov=0.162791;
						hitpoint="Hit_Optic_CROWS_TI";
						opticsDisplayName="4.3x";
					};
					class ThermalNFOV: ThermalWFOV
					{
						initFov=0.056000002;
						minFov=0.056000002;
						maxFov=0.056000002;
						opticsDisplayName="12.5x";
					};
					class DaysightNFOV: DaysightWFOV
					{
						initFov=0.0466667;
						minFov=0.0466667;
						maxFov=0.0466667;
						opticsDisplayName="15.0x";
					};
					class DaysightVNFOV: DaysightWFOV
					{
						initFov=0.0233333;
						minFov=0.0233333;
						maxFov=0.0233333;
						opticsDisplayName="30.0x";
					};
				};
				class Reflectors
				{
					class cargo_light_1
					{
						color[]={800,900,650};
						ambient[]={5,5,5};
						position="cargo_light_1";
						direction="cargo_light_1_dir";
						hitpoint="cargo_light_1";
						selection="cargo_light_1";
						size=1;
						intensity=4;
						coneFadeCoef=0.1;
						innerAngle=140;
						outerAngle=175;
						useFlare=0;
						flareSize=1;
						flareMaxDistance=5;
						dayLight=1;
						blinking=0;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=70;
							hardLimitStart=0.40000001;
							hardLimitEnd=1.5;
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				isPersonTurret=2;
				commanding=-9;
				gunnerName="Passenger (Air Guard Left)";
				proxyIndex=8;
				animationSourceHatch="";
				rhs_hatch="Hatch_Left";
				rhs_hatch_control=1;
				enabledByAnimationSource="Hatch_Left";
				gunnerInAction="RHS_Stryker_M1126_AG_in";
				gunnerAction="RHS_Stryker_M1126_AG_out";
				class Reflectors
				{
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				commanding=-9;
				gunnerName="Passenger (Air Guard Right)";
				proxyIndex=9;
				rhs_hatch="Hatch_Right";
				enabledByAnimationSource="Hatch_Right";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsusf\addons\rhsusf_stryker\data\periscope.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_round.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
				"m1296\tex\m1296_hull.rvmat",
				"m1296\tex\m1296_hull_damage.rvmat",
				"m1296\tex\m1296_destruction.rvmat",
				"m1296\tex\m1296_turret.rvmat",
				"m1296\tex\m1296_turret_damage.rvmat",
				"m1296\tex\m1296_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"m1296\tex\m1296_parts.rvmat",
				"m1296\tex\m1296_parts_damage.rvmat",
				"m1296\tex\m1296_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_d.rvmat",
				"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_d_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4",
			"Camo_5",
			"camo_6",
			"Camo_Acc",
			"Camo_AccA",
			"Camo_DUKE",
			"Camo_fc01",
			"Camo_fc02",
			"Camo_wc01",
			"Camo_wc02",
			"camoslat",
			"callsign1",
			"callsign2",
			"callsign3",
			"callsign4",
			"dec_hull",
			"BFT_screen"
		};
		hiddenSelectionsTextures[]=
		{
			"m1296\tex\m1296_hull_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
			"m1296\tex\m1296_turret_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
			"m1296\tex\m1296_parts_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
			"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
			"a3\armor_f\data\cage_olive_co.paa"
		};
		class TextureSources
		{
			class Olive
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="Olive";
				textures[]=
				{
					"m1296\tex\m1296_hull_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
					"m1296\tex\m1296_turret_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
					"m1296\tex\m1296_parts_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"a3\armor_f\data\cage_olive_co.paa"
				};
			};
			class OliveDirty
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="Olive (Dirty)";
				textures[]=
				{
					"m1296\tex\m1296_hull_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_od_co.paa",
					"m1296\tex\m1296_turret_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_od_co.paa",
					"m1296\tex\m1296_parts_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_od_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
			};
			class Tan
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="Tan";
				textures[]=
				{
					"m1296\tex\m1296_hull_D_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
					"m1296\tex\m1296_turret_D_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
					"m1296\tex\m1296_parts_D_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
			};
		};
	};
	class rhsusf_stryker_m1296_wd: rhsusf_stryker_m1296_base
	{
		author="[CN]Lurker1011,真红战队,RHS";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_combatcrewman";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="\m1296_c\ui\m1296_wd_pre.jpg";
	};
	class rhsusf_stryker_m1296_d: rhsusf_stryker_m1296_base
	{
		author="[CN]Lurker1011,真红战队,RHS";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_combatcrewman";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="\m1296_c\ui\m1296_d_pre.jpg";
		hiddenSelectionsTextures[]=
		{
			"m1296\tex\m1296_hull_D_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
			"m1296\tex\m1296_turret_D_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
			"m1296\tex\m1296_parts_D_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
			"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};
	};
	class rhsusf_stryker_m1126ms_base: Wheeled_APC_F
	{
		displayName="M-SHORAD";
		model="\m1126_MShorad\m1126_MShorad.p3d";
		picture="\m1296_c\ui\m1126ms_ca.paa";
		Icon="\A3\armor_f_gamma\APC_Wheeled_03\Data\UI\map_APC_Wheeled_03_CA.paa";
		dlc="RHS_USAF";
		accuracy=0.25;
		category="rhs_vehclass_apc";
		editorSubcategory="EdSubcat_APCs";
		driverAction="RHS_Stryker_M1126_Driver_out";
		driverInAction="RHS_Stryker_M1126_Driver_in";
		driverDoor="Hatch_Driver";
		cargoIsCoDriver[]={0};
		forceHideDriver=0;
		hideProxyInCombat=1;
		viewDriverInExternal=1;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		driverForceOptics=0;
		LODDriverTurnedOut=1;
		LODDriverTurnedin=1100;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverLeftLegAnimName="pedal_brake";
		driveOnComponent[]=
		{
			"Hull"
		};
		unitInfoType="RHS_RscUnitInfoStryker";
		selectionBackLights="Light_Back";
		selectionBrakeLights="Light_Brake";
		class TransportBackpacks
		{
			class _xx_rhsusf_falconii
			{
				backpack="rhsusf_falconii";
				count=8;
			};
		};
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_M855A1_Stanag";
				count=75;
			};
			class _xx_rhsusf_100Rnd_556x45_soft_pouch
			{
				magazine="rhsusf_100Rnd_556x45_soft_pouch";
				count=11;
			};
			class _xx_rhsusf_100Rnd_762x51
			{
				magazine="rhsusf_100Rnd_762x51";
				count=11;
			};
			class _xx_rhs_fgm148_magazine_AT
			{
				magazine="rhs_fgm148_magazine_AT";
				count=2;
			};
			class _xx_rhs_m136_mag
			{
				magazine="rhs_m136_mag";
				count=2;
			};
			class _xx_rhs_mag_M433_HEDP
			{
				magazine="rhs_mag_M433_HEDP";
				count=20;
			};
			class _xx_rhs_mag_M714_white
			{
				magazine="rhs_mag_M714_white";
				count=8;
			};
			class _xx_rhs_mag_M662_red
			{
				magazine="rhs_mag_M662_red";
				count=4;
			};
			class _xx_rhs_mag_m67
			{
				magazine="rhs_mag_m67";
				count=10;
			};
			class _xx_rhs_mag_m18_green
			{
				magazine="rhs_mag_m18_green";
				count=4;
			};
			class _xx_rhs_mag_m18_red
			{
				magazine="rhs_mag_m18_red";
				count=4;
			};
			class _xx_rhs_mag_an_m8hc
			{
				magazine="rhs_mag_an_m8hc";
				count=10;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
			class _xx_Medikit
			{
				name="Medikit";
				count=2;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class TransportWeapons
		{
			class _xx_rhs_weap_m4
			{
				weapon="rhs_weap_m4";
				count=2;
			};
			class _xx_rhs_weap_fgm148
			{
				weapon="rhs_weap_fgm148";
				count=2;
			};
			class _xx_rhs_weap_M136
			{
				weapon="rhs_weap_M136";
				count=2;
			};
		};
		memoryPointSupply="SupplyPos";
		supplyRadius=4.6999998;
		transportMaxMagazines=160;
		transportMaxWeapons=10;
		class ViewPilot: ViewPilot
		{
			initAngleX=0;
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
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.40000001;
			minFov=0.23;
			maxFov=0.40000001;
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos="view_driver";
				opticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_vision_block";
				visionMode[]=
				{
					"Normal"
				};
				hitpoint="Hit_Optic_Driver2";
			};
			class DVE_Wide: Wide
			{
				camPos="view_DVE";
				opticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
				visionMode[]=
				{
					"TI"
				};
				thermalMode[]={0,1};
				initFov=1.07692;
				minFov=1.07692;
				maxFov=1.07692;
				hitpoint="Hit_Optic_DVEA";
			};
			class DVS_Rear: DVE_Wide
			{
				camPos="view_rear";
				camDir="view_rear_dir";
				hitpoint="Hit_Optic_Driver_Rear";
			};
		};
		class PlateInfos
		{
			name="spz";
			color[]={0,0,0,1};
			plateFont="rhsusf_font_stencil";
			plateFormat="#/# SCR";
			plateLetters="ABCDEFHIKLMOPRSTVXYZ";
		};
		class Exhausts
		{
		};
		class Reflectors
		{
			class Left
			{
				color[]={1,0.69999999,0.60000002};
				ambient[]={1,0.89999998,0.69999999};
				selection="Light_L";
				position="Light_L";
				direction="Light_L_end";
				hitpointClass="Hit_Light_L";
				size=1;
				innerAngle=60;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=100;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=0.1;
					constant=0;
					linear=0;
					quadratic=0.050000001;
					hardLimitStart=80;
					hardLimitEnd=120;
				};
			};
			class Right: Left
			{
				selection="Light_R";
				position="Light_R";
				direction="Light_R_end";
				hitpointClass="Hit_Light_R";
			};
			class Left_Flare: Left
			{
				position="Light_L_Flare";
				useFlare=1;
			};
			class Right_Flare: Right
			{
				position="Light_R_Flare";
				useFlare=1;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right",
				"Left_Flare",
				"Right_Flare"
			}
		};
		armorLights=0.1;
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					point="light_1";
					color[]={20,30,30};
					ambient[]={0,0,0};
					intensity=1.5;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					drawLight=0;
					activeLight=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=70;
						hardLimitStart=0.15000001;
						hardLimitEnd=1.15;
					};
				};
				class Light2: Light1
				{
					point="light_2";
					color[]={20,30,30};
					ambient[]={0,0,0};
					intensity=5.5;
				};
				class Light3: Light2
				{
					point="light_3";
				};
				class Light4: Light2
				{
					point="light_4";
				};
			};
		};
		fuelExplosionPower=0.1;
		secondaryExplosion=-1;
		armor=220;
		armorStructural=200;
		explosionShielding=2;
		crewExplosionProtection=0.99999952;
		class HitPoints
		{
			class HitHull
			{
				armor=-400;
				minimalHit=-0.40000001;
				explosionShielding=0.050000001;
				armorComponent="hit_hull";
				name="hit_hull";
				visual="zbytek";
				passThrough=0.1;
				radius=0.2;
			};
			class HitEngine
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.5;
				armorComponent="hit_engine";
				name="hit_engine";
				visual="-";
				passThrough=0.1;
				radius=0.2;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="engine_smoke1";
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
						position="engine_smoke2";
					};
					class RHS_Engine_Smoke_small2: RHS_Engine_Smoke_small1
					{
						position="engine_smoke3";
					};
				};
			};
			class HitFuel_L
			{
				armor=-70;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				armorComponent="hit_fuel_l";
				name="hit_fuel_l";
				visual="-";
				passThrough=0.15000001;
				radius=0.2;
			};
			class HitFuel_R
			{
				armor=-70;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				armorComponent="hit_fuel_r";
				name="hit_fuel_r";
				visual="-";
				passThrough=0.15000001;
				radius=0.2;
			};
			class HitFuel
			{
				armor=999;
				depends="(HitFuel_L+HitFuel_R)*0.5";
				name="hit_fuel";
				visual="-";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Light_L
			{
				armor=-10;
				explosionShielding=1;
				name="Hit_Light_L";
				visual="Light_L";
				armorComponent="Hit_Light_L";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Light_R
			{
				armor=-10;
				explosionShielding=1;
				name="Hit_Light_R";
				visual="Light_R";
				armorComponent="Hit_Light_R";
				passThrough=0;
				radius=0.2;
			};
			class Hit_Optic_Driver1
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_driver1";
				armorComponent="Hit_Optic_Driver1";
				passThrough=0;
			};
			class Hit_Optic_Driver2
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_driver2";
				armorComponent="Hit_Optic_Driver2";
				passThrough=0;
			};
			class Hit_Optic_Driver3
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_driver3";
				armorComponent="Hit_Optic_Driver3";
				passThrough=0;
			};
			class Hit_Optic_DVEA
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_DVEA";
				armorComponent="Hit_Optic_DVEA";
				passThrough=0;
			};
			class Hit_Optic_Driver_Rear
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_driver_rear";
				armorComponent="Hit_Optic_Driver";
				passThrough=0;
			};
			class HitLFWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_1_hit";
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
			};
			class HitLF2Wheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_2_hit";
				visual="wheel_1_2_damage";
				armorComponent="wheel_1_2_hide";
			};
			class HitLMWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_3_hit";
				visual="wheel_1_3_damage";
				armorComponent="wheel_1_3_hide";
			};
			class HitLBWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_1_4_hit";
				visual="wheel_1_4_damage";
				armorComponent="wheel_1_4_hide";
			};
			class HitRFWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_1_hit";
				visual="wheel_2_1_damage";
				armorComponent="wheel_2_1_hide";
			};
			class HitRF2Wheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_2_hit";
				visual="wheel_2_2_damage";
				armorComponent="wheel_2_2_hide";
			};
			class HitRMWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_3_hit";
				visual="wheel_2_3_damage";
				armorComponent="wheel_2_3_hide";
			};
			class HitRBWheel
			{
				armor=-180;
				minimalHit=-0.1;
				explosionShielding=0.2;
				passThrough=0;
				radius=0.2;
				name="wheel_2_4_hit";
				visual="wheel_2_4_damage";
				armorComponent="wheel_2_4_hide";
			};
			class Hit_Optic_ComPeriscope1
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope1";
				armorComponent="Hit_Optic_ComPeriscope1";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope2
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope2";
				armorComponent="Hit_Optic_ComPeriscope2";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope3
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope3";
				armorComponent="Hit_Optic_ComPeriscope3";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope4
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope4";
				armorComponent="Hit_Optic_ComPeriscope4";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope5
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope5";
				armorComponent="Hit_Optic_ComPeriscope5";
				passThrough=0;
			};
			class HitSLAT_Left_1
			{
				simulation="Armor_SLAT";
				armorComponent="cage_left_1_geo";
				name="cage_left_1_point";
				armor=-200;
				minimalHit=0.30000001;
				passThrough=0;
				visual="-";
				explosionShielding=2;
				radius=0.25;
			};
			class HitSLAT_Left_2: HitSLAT_Left_1
			{
				armorComponent="cage_left_2_geo";
				name="cage_left_2_point";
			};
			class HitSLAT_Left_3: HitSLAT_Left_1
			{
				armorComponent="cage_left_3_geo";
				name="cage_left_3_point";
			};
			class HitSLAT_Right_1: HitSLAT_Left_1
			{
				armorComponent="cage_right_1_geo";
				name="cage_right_1_point";
			};
			class HitSLAT_Right_2: HitSLAT_Left_1
			{
				armorComponent="cage_right_2_geo";
				name="cage_right_2_point";
			};
			class HitSLAT_Right_3: HitSLAT_Left_1
			{
				armorComponent="cage_right_3_geo";
				name="cage_right_3_point";
			};
			class HitSLAT_top_back: HitSLAT_Left_1
			{
				armorComponent="cage_top_back_geo";
				name="cage_top_back_point";
			};
			class HitSLAT_top_left: HitSLAT_Left_1
			{
				armorComponent="cage_top_left_geo";
				name="cage_top_left_point";
			};
			class HitSLAT_top_right: HitSLAT_Left_1
			{
				armorComponent="cage_top_right_geo";
				name="cage_top_right_point";
			};
			class HitSLAT_back: HitSLAT_Left_1
			{
				armorComponent="cage_back_geo";
				name="cage_back_point";
			};
			class HitSLAT_front: HitSLAT_Left_1
			{
				armorComponent="cage_front_geo";
				name="cage_front_point";
			};
			class HitSLAT_ramp: HitSLAT_Left_1
			{
				armorComponent="cage_ramp_geo";
				name="cage_ramp_point";
			};
		};
		ace_vehicle_damage_slatHitpoints[]=
		{
			"HitSLAT_Left_1",
			"HitSLAT_Left_2",
			"HitSLAT_Left_3",
			"HitSLAT_Right_1",
			"HitSLAT_Right_2",
			"HitSLAT_Right_3",
			"HitSLAT_top_back",
			"HitSLAT_top_left",
			"HitSLAT_top_right",
			"HitSLAT_back",
			"HitSLAT_front",
			"HitSLAT_ramp"
		};
		receiveRemoteTargets=1;
		reportRemoteTargets=1;
		reportOwnPosition=1;
		defaultUserMFDvalues[]={1000};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP_1_Pos";
					pointDirection="PIP_1_Dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class RightMirror
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP_2_Pos";
					pointDirection="PIP_2_Dir";
					renderQuality=2;
					renderVisionMode=4;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
			class DVE_Front
			{
				renderTarget="rendertarget_dve";
				class CameraView1
				{
					pointPosition="View_DVE_pip";
					pointDirection="View_DVE_pip_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.69999999;
				};
				BBoxes[]=
				{
					"DVE_Front_TL",
					"DVE_Front_TR",
					"DVE_Front_BL",
					"DVE_Front_BR"
				};
			};
			class Gunner_display
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="View_CROWS_TI";
					pointDirection="View_CROWS_TI_dir";
					renderVisionMode=2;
					renderQuality=2;
					fov=0.69999999;
					turret[]={0};
				};
				BBoxes[]=
				{
					"PIP_3_TL",
					"PIP_3_TR",
					"PIP_3_BL",
					"PIP_3_BR"
				};
			};
		};
		transportSoldier=6;
		cargoProxyIndexes[]={2,3,4,5,6,7};
		getInProxyOrder[]={1,2,3,4,5,6,7,8,9};
		cargoAction[]=
		{
			"rhs_passenger_apc_narrow_generic02",
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic01",
			"rhs_passenger_apc_narrow_generic01"
		};
		cargoDoors[]=
		{
			"Ramp"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 1",
			"pos cargo 2",
			"pos cargo 3"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 1 dir",
			"pos cargo dir",
			"pos cargo 2 dir",
			"pos cargo 3 dir"
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class pylons
				{
					class pylons1
					{
						turret[]={0};
						hardpoints[]=
						{
							"CUAS_pylon_left"
						};
						attachment="2Rnd_Hellfire_AGM";
						priority=13;
						bay=-1;
						maxweight=500;
						UIposition[]={0.60000002,0.25};
					};
					class pylons2: pylons1
					{
						hardpoints[]=
						{
							"CUAS_pylon_right"
						};
						attachment="4Rnd_Stinger_AAM_rightside";
						priority=12;
						UIposition[]={0.15000001,0.25};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"4Rnd_Stinger_AAM",
							"4Rnd_Stinger_AAM_rightside"
						};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown = -30;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 27.7778;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 225;
						minSpeedThreshold = 20.8333;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 3000;
					};
					class IRSensorComponent: IRSensorComponent
					{
						class AirTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						animDirection = "mainGun";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 70;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 2000;
					};
					class LaserSensorComponent: LaserSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 0;
					};
					class VisualSensorComponent: VisualSensorComponent
					{
						class AirTarget
						{
							maxRange = 3000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 2300;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						animDirection = "mainGun";
						color[] = {1,1,0.5,0.8};
						componentType = "VisualSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.94;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 70;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						nightRangeCoef = 0;
						typeRecognitionDistance = 2000;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
		class UserActions
		{
			class OpenCargoDoor
			{
				displayName="Open ramp";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'ramp' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 1];this setVariable ['ramp_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor: OpenCargoDoor
			{
				displayName="Close ramp";
				condition="this doorPhase 'ramp' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['ramp', 0];this setVariable ['ramp_handler',0,true]";
			};
			class ToggleLight
			{
				displayName="Toggle interior light";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="player in this;";
				statement="[this,'cargolights_hide',[1]] call rhs_fnc_toggleIntLight";
				onlyforplayer=1;
			};
			class AdjustMap
			{
				displayName="Adjust BFT Map Scale";
				position="pos driver";
				radius=20;
				condition="player == gunner this";
				statement="createDialog 'RHS_BFT_Map_Scale_UI';sliderSetRange [1900,0.01,1];sliderSetPosition [1900,cameraon animationSourcePhase 'BFT_Map_Scale']";
				onlyforplayer=1;
			};
			class SwhitchToADAMode
			{
				displayName="Turn ON Airburst mode";
				position="pos driver";
				radius=20;
				condition="player == gunner this &&  this getVariable ['AAmode',false] == false";
				statement="this setVariable ['AAmode',true,false];";
				onlyforplayer=1;
			};
			class SwhitchToNormalMode
			{
				displayName="Turn OFF Airburst mode";
				position="pos driver";
				radius=20;
				condition="player == gunner this &&  this getVariable ['AAmode',false] == true";
				statement="this setVariable ['AAmode',false,false];";
				onlyforplayer=1;
			};
		};
		class EventHandlers: EventHandlers
		{
			class BIS_Randomisation
			{
				init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
			};
			class RHSUSF_EventHandlers
			{
				init="_this call rhs_fnc_stryker_m1126_init";
				postInit="_this call rhs_fnc_reapplyTextures";
				getIn="_this call rhs_fnc_m2_doors;";
				getOut="_this call rhs_fnc_m2_doors;";
				seatSwitched="_this call rhs_fnc_stryker_seatSwitched";
				engine="_this call rhs_fnc_engineCheckDamage";
			};
			class RHSUSF_TurnInActions
			{
				turnIn="(_this + [false])  spawn rhs_fnc_stryker_turnActions;";
				turnOut="(_this + [true]) spawn rhs_fnc_stryker_turnActions;";
			};
		};
		simulation="CarX";
		thrustDelay=0.34999999;
		brakeIdleSpeed=1.78;
		maxSpeed=100;
		fuelCapacity=25;
		wheelCircumference=3.8050001;
		waterLeakiness=2.5;
		dampersBumpCoef=4.5;
		terrainCoef=1.5;
		turnCoef=3;
		wheelDestroyRadiusCoef=0.60000002;
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.30000001;
		accelAidForceYOffset=-1.5;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		enginePower=325;
		peakTorque=1457.5;
		idleRpm=650;
		redRpm=2600;
		maxOmega=272.271;
		minOmega=52.359901;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			{0,0},
			{0.163077,0.277015},
			{0.23115399,0.61406499},
			{0.30615401,0.93224698},
			{0.35884601,1},
			{0.61500001,1},
			{0.97384602,0.795026},
			{1.28192,0.227273}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.0300002,
				"N",
				0,
				"D1",
				3.49,
				"D2",
				1.86,
				"D3",
				1.41,
				"D4",
				1,
				"D5",
				0.75,
				"D6",
				0.64999998
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		switchTime=0.1;
		latency=1.4;
		clutchStrength=35;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		class Wheels
		{
			class L1
			{
				steering=1;
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				center="wheel_1_1_center";
				boundary="wheel_1_1_bound";
				suspForceAppPointOffset="wheel_1_1_center";
				tireForceAppPointOffset="wheel_1_1_center";
				width=0.27500001;
				mass=187.5;
				MOI=60;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=45000;
				maxHandBrakeTorque=0;
				maxCompression=0.1125;
				maxDroop=0.15000001;
				sprungMass=-1;
				springStrength=160000;
				springDamperRate=8790;
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
				steering=1;
				boneName="wheel_1_2_damper";
				center="wheel_1_2_center";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_center";
				tireForceAppPointOffset="wheel_1_2_center";
			};
			class L3: L1
			{
				steering=0;
				boneName="wheel_1_3_damper";
				center="wheel_1_3_center";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_center";
				tireForceAppPointOffset="wheel_1_3_center";
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				steering=0;
				boneName="wheel_1_4_damper";
				center="wheel_1_4_center";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_center";
				tireForceAppPointOffset="wheel_1_4_center";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_center";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_center";
				tireForceAppPointOffset="wheel_2_1_center";
			};
			class R2: R1
			{
				steering=1;
				boneName="wheel_2_2_damper";
				center="wheel_2_2_center";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_center";
				tireForceAppPointOffset="wheel_2_2_center";
			};
			class R3: R1
			{
				steering=0;
				boneName="wheel_2_3_damper";
				center="wheel_2_3_center";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_center";
				tireForceAppPointOffset="wheel_2_3_center";
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				steering=0;
				boneName="wheel_2_4_damper";
				center="wheel_2_4_center";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_center";
				tireForceAppPointOffset="wheel_2_4_center";
				maxHandBrakeTorque=300000;
			};
		};
		attenuationEffectType="TankAttenuation";
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
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Start",
			0.79432821,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Int_Stop",
			0.79432821,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Start",
			1,
			1,
			100
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles2\armor\APC_Wheeled_01\APC_Wheeled_01_Engine_Ext_Stop",
			1,
			1,
			100
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_01",
			0.63095737,
			1,
			100
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_02",
			0.63095737,
			1,
			100
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_Collision_Light_Bush_03",
			0.63095737,
			1,
			100
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.33000001,
			"BushCrash2",
			0.33000001,
			"BushCrash3",
			0.33000001
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.16599999,
			"buildCrash1",
			0.16599999,
			"buildCrash2",
			0.16599999,
			"buildCrash3",
			0.16599999,
			"buildCrash4",
			0.16599999,
			"buildCrash5",
			0.16599999
		};
		woodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		woodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		woodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		woodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		woodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		woodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
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
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_01",
			3.1622777,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_02",
			3.1622777,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_03",
			3.1622777,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_04",
			3.1622777,
			1,
			200
		};
		ArmorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_05",
			3.1622777,
			1,
			200
		};
		ArmorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\armor\shared\collisions\Vehicle_Armor_General_Collision_06",
			3.1622777,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.16599999,
			"ArmorCrash1",
			0.16599999,
			"ArmorCrash2",
			0.16599999,
			"ArmorCrash3",
			0.16599999,
			"ArmorCrash4",
			0.16599999,
			"ArmorCrash5",
			0.16599999
		};
		class Sounds
		{
			soundSetsExt[]=
			{
				"APC_Wheeled_01_Engine_RPM0_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM1_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM2_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM3_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM4_EXT_SoundSet",
				"APC_Wheeled_01_Engine_RPM5_EXT_SoundSet",
				"APC_Wheeled_01_Rattling_EXT_SoundSet",
				"APC_Wheeled_01_Stress_EXT_SoundSet",
				"APC_Wheeled_01_Rain_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"
			};
			soundSetsInt[]=
			{
				"APC_Wheeled_01_Engine_RPM0_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM1_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM2_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM3_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM4_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM5_INT_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet",
				"APC_Wheeled_01_Rattling_INT_SoundSet",
				"APC_Wheeled_01_Stress_INT_SoundSet",
				"APC_Wheeled_01_Rain_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"
			};
		};
		class MFD
		{
			class MFD_CROWS
			{
				topLeft="PIP_3_TL";
				topRight="PIP_3_TR";
				bottomLeft="PIP_3_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.83999997,0.86000001,0.83999997};
				alpha=1;
				enableParallax=0;
				font="RobotoCondensedLight";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={10,10,10,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Static_Offset
					{
						type="fixed";
						pos[]={0.079999998,0.89999998};
					};
					class Cross
					{
						type="fixed";
						pos[]={0,-0.145};
					};
					class TurretRotation
					{
						type="rotational";
						source="weaponHeading";
						sourceIndex=0;
						center[]={0,0};
						min=-180;
						max=180;
						minAngle=-180;
						maxAngle=180;
						sourceOffset=-180;
						aspectRatio=1.29101;
					};
				};
				class Draw
				{
					color[]={1,0,0,1};
					alpha=1;
					class StaticDraw
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Cross",
								{0.43000001,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.56999999,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.55513197},
								1
							},
							
							{
								"Cross",
								{0.5,0.73587298},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{0.010416,-0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0.02052,-0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{0.029999999,-0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{0.038568001,-0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{0.045960002,-0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{0.051959999,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.056382,-0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{0.059087999,-0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{0.059999999,0},
								1
							},
							
							{
								"Static_Offset",
								{0.059087999,0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{0.056382,0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{0.051959999,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.045960002,0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{0.038568001,0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{0.029999999,0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{0.02052,0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{0.010416,0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0,0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{-0.010416,0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{-0.02052,0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{-0.029999999,0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{-0.038568001,0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{-0.045960002,0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{-0.051959999,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.056382,0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{-0.059087999,0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{-0.059999999,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.059087999,-0.0134471},
								1
							},
							
							{
								"Static_Offset",
								{-0.056382,-0.0264914},
								1
							},
							
							{
								"Static_Offset",
								{-0.051959999,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.045960002,-0.0497915},
								1
							},
							
							{
								"Static_Offset",
								{-0.038568001,-0.059334598},
								1
							},
							
							{
								"Static_Offset",
								{-0.029999999,-0.067080602},
								1
							},
							
							{
								"Static_Offset",
								{-0.02052,-0.072789498},
								1
							},
							
							{
								"Static_Offset",
								{-0.010416,-0.076282904},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0,-0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.064550303},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.029999999,-0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{0.025,-0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.0519615,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.043301299,-0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.059999999,3.3859e-009},
								1
							},
							
							{
								"Static_Offset",
								{0.050000001,2.8215801e-009},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.0519615,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{0.043301299,0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{0.029999999,0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{0.025,0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-5.2453699e-009,0.077460296},
								1
							},
							
							{
								"Static_Offset",
								{-4.3711399e-009,0.064550303},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.029999999,0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{-0.025,0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.0519615,0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.043301299,0.032275099},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.059999999,-9.23705e-010},
								1
							},
							
							{
								"Static_Offset",
								{-0.050000001,-7.6975398e-010},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.0519615,-0.0387302},
								1
							},
							
							{
								"Static_Offset",
								{-0.043301299,-0.0322752},
								1
							},
							{},
							
							{
								"Static_Offset",
								{-0.029999999,-0.067082599},
								1
							},
							
							{
								"Static_Offset",
								{-0.025,-0.055902202},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								
								{
									"TurretRotation",
									0,
									-0.058095202
								},
								1
							},
							
							{
								"Static_Offset",
								1,
								
								{
									"TurretRotation",
									0,
									0
								},
								1
							},
							{}
						};
					};
					class StaticDrawBold
					{
						type="line";
						width=8;
						points[]=
						{
							
							{
								"Cross",
								{0.30000001,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.43000001,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.56999999,0.64550298},
								1
							},
							
							{
								"Cross",
								{0.69999999,0.64550298},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.38730201},
								1
							},
							
							{
								"Cross",
								{0.5,0.55513197},
								1
							},
							{},
							
							{
								"Cross",
								{0.5,0.73587298},
								1
							},
							
							{
								"Cross",
								{0.5,0.90370399},
								1
							},
							{}
						};
					};
					class Range_Text
					{
						type="text";
						source="static";
						text="LRF:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.50999999},
							1
						};
						right[]=
						{
							{0.059999999,0.50999999},
							1
						};
						down[]=
						{
							{0.0099999998,0.56},
							1
						};
					};
					class Range_Value
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.50999999
							},
							1
						};
						right[]=
						{
							{0.16,0.50999999},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.56
							},
							1
						};
					};
					class Ballistic_Text
					{
						type="text";
						source="static";
						text="Ballistic:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.67000002},
							1
						};
						right[]=
						{
							{0.059999999,0.67000002},
							1
						};
						down[]=
						{
							{0.0099999998,0.72000003},
							1
						};
					};
					class Ballistic_Value
					{
						type="text";
						source="laserDist";
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.13",
								0.67000002
							},
							1
						};
						right[]=
						{
							{0.19,0.67000002},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.13",
								0.72000003
							},
							1
						};
					};
					class Mode_Text
					{
						type="text";
						source="static";
						text="FOV:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.70999998},
							1
						};
						right[]=
						{
							{0.059999999,0.70999998},
							1
						};
						down[]=
						{
							{0.0099999998,0.75999999},
							1
						};
					};
					class Mode_Value
					{
						type="text";
						source="userText";
						text="1.0x";
						sourceIndex=1;
						sourceScale=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.70999998
							},
							1
						};
						right[]=
						{
							{0.16,0.70999998},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.75999999
							},
							1
						};
					};
					class Elev_Text
					{
						type="text";
						source="static";
						text="Elev:";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]=
						{
							{0.0099999998,0.75},
							1
						};
						right[]=
						{
							{0.059999999,0.75},
							1
						};
						down[]=
						{
							{0.0099999998,0.80000001},
							1
						};
					};
					class Elev_Value
					{
						type="text";
						source="[y]turretworld";
						sourceScale=1;
						sourcePrecision=1;
						sourceLength=3;
						scale=1;
						align="right";
						refreshRate=0.079999998;
						pos[]=
						{
							
							{
								"0.01+0.1",
								0.75
							},
							1
						};
						right[]=
						{
							{0.16,0.75},
							1
						};
						down[]=
						{
							
							{
								"0.01+0.1",
								0.80000001
							},
							1
						};
					};
				};
			};
			class MFD_BFT
			{
				topLeft="BFT_Map_TL";
				topRight="BFT_Map_TR";
				bottomLeft="BFT_Map_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={1,1,1,1};
				helmetMountedDisplay=0;
				helmetPosition[]={-0.037500001,0.037500001,0.1};
				helmetRight[]={0.075000003,0,0};
				helmetDown[]={0,-0.075000003,0};
				font="rhsusf_txled";
				class material
				{
					ambient[]={3,3,3,1};
					diffuse[]={1,1,1,1};
					emissive[]={400,200,200,1};
				};
				class Bones
				{
					class Sensor_Offset
					{
						type="fixed";
						pos[]={0.5,0.47999999};
					};
					class Static_Offset
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.22,0.059999999,0.77999997,0.059999999};
					};
					class Sensor_Rotation
					{
						center[]={0,0};
						type="rotational";
						source="heading";
						sourceScale=1;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-180;
						aspectRatio=1.25714;
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.70999998,0.764};
					};
					class Direction_Center
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class Rotation_WP_Dir
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0,0};
						type="rotational";
						source="user";
						sourceIndex=10;
						min=0;
						max=360;
						minAngle=0;
						maxAngle=-360;
						aspectRatio=1;
					};
					class Rotation_WP_Center
					{
						pos0[]={0,0};
						pos10[]={0,0};
						center[]={0.5,0.55500001};
						type="rotational";
						source="heading";
						min=0;
						max=360;
						minAngle=-180;
						maxAngle="-360-180";
						aspectRatio=1.25714;
					};
					class MovementY
					{
						type="linear";
						source="user";
						sourceIndex=5;
						refreshRate=0.1;
						min=0;
						max=2;
						sourceScale=1;
						maxPos[]={0,1};
						minPos[]={0,-1};
					};
					class MovementX: MovementY
					{
						sourceIndex=4;
						maxPos[]={-1,0};
						minPos[]={1,0};
					};
					class WP1_PosX: MovementX
					{
						sourceIndex=26;
					};
					class WP1_PosY: MovementY
					{
						sourceIndex=27;
					};
					class WP2_PosX: MovementX
					{
						sourceIndex=28;
					};
					class WP2_PosY: MovementY
					{
						sourceIndex=29;
					};
					class WP3_PosX: MovementX
					{
						sourceIndex=30;
					};
					class WP3_PosY: MovementY
					{
						sourceIndex=31;
					};
					class WP4_PosX: MovementX
					{
						sourceIndex=32;
					};
					class WP4_PosY: MovementY
					{
						sourceIndex=33;
					};
					class WP5_PosX: MovementX
					{
						sourceIndex=34;
					};
					class WP5_PosY: MovementY
					{
						sourceIndex=35;
					};
					class WP6_PosX: MovementX
					{
						sourceIndex=36;
					};
					class WP6_PosY: MovementY
					{
						sourceIndex=37;
					};
					class WP7_PosX: MovementX
					{
						sourceIndex=38;
					};
					class WP7_PosY: MovementY
					{
						sourceIndex=39;
					};
					class WP8_PosX: MovementX
					{
						sourceIndex=40;
					};
					class WP8_PosY: MovementY
					{
						sourceIndex=41;
					};
					class WP9_PosX: MovementX
					{
						sourceIndex=42;
					};
					class WP9_PosY: MovementY
					{
						sourceIndex=43;
					};
					class WP10_PosX: MovementX
					{
						sourceIndex=44;
					};
					class WP10_PosY: MovementY
					{
						sourceIndex=45;
					};
					class WP11_PosX: MovementX
					{
						sourceIndex=46;
					};
					class WP11_PosY: MovementY
					{
						sourceIndex=47;
					};
				};
				class Draw
				{
					alpha=1;
					color[]={0,0,0.12};
					class StaticClip
					{
						class WaypointGroup
						{
							color[]={0,0,0.12};
							alpha=0.60000002;
							class WP
							{
								condition="wpvalid";
								class Draw
								{
									type="line";
									points[]={};
								};
								class WP1
								{
									condition="user26>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="1-WPIndex";
										class WaypointShape
										{
											width=16;
											type="line";
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP1_PosY",
												1,
												"Direction_Center",
												1,
												"WP1_PosX",
												{0,-0.025142901},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="01";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP1_PosX",
											1,
											"WP1_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP2
								{
									condition="user28>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=1)*(WPIndex<=1)";
										class WaypointShape
										{
											width=16;
											type="line";
											points[]=
											{
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP2_PosY",
													1,
													"Direction_Center",
													1,
													"WP2_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP2_PosY",
												1,
												"Direction_Center",
												1,
												"WP2_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP1_PosX",
												1,
												"WP1_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="02";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP2_PosX",
											1,
											"WP2_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP3
								{
									condition="user30>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=2)*(WPIndex<=2)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP3_PosY",
													1,
													"Direction_Center",
													1,
													"WP3_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP3_PosY",
												1,
												"Direction_Center",
												1,
												"WP3_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP2_PosX",
												1,
												"WP2_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="03";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP3_PosX",
											1,
											"WP3_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP4
								{
									condition="user32>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=3)*(WPIndex<=3)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP4_PosY",
													1,
													"Direction_Center",
													1,
													"WP4_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP4_PosY",
												1,
												"Direction_Center",
												1,
												"WP4_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP3_PosX",
												1,
												"WP3_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="04";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP4_PosX",
											1,
											"WP4_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP5
								{
									condition="user34>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=4)*(WPIndex<=4)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP5_PosY",
													1,
													"Direction_Center",
													1,
													"WP5_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP5_PosY",
												1,
												"Direction_Center",
												1,
												"WP5_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP4_PosX",
												1,
												"WP4_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="05";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP5_PosX",
											1,
											"WP5_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP6
								{
									condition="user36>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=5)*(WPIndex<=5)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP6_PosY",
													1,
													"Direction_Center",
													1,
													"WP6_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP6_PosY",
												1,
												"Direction_Center",
												1,
												"WP6_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP5_PosX",
												1,
												"WP5_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="06";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP6_PosX",
											1,
											"WP6_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP7
								{
									condition="user38>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=6)*(WPIndex<=6)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP7_PosY",
													1,
													"Direction_Center",
													1,
													"WP7_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP7_PosY",
												1,
												"Direction_Center",
												1,
												"WP7_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP6_PosX",
												1,
												"WP6_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="07";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP7_PosX",
											1,
											"WP7_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP8
								{
									condition="user40>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=7)*(WPIndex<=7)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP8_PosY",
													1,
													"Direction_Center",
													1,
													"WP8_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP8_PosY",
												1,
												"Direction_Center",
												1,
												"WP8_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP7_PosX",
												1,
												"WP7_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="08";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP8_PosX",
											1,
											"WP8_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP9
								{
									condition="user42>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=8)*(WPIndex<=8)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP9_PosY",
													1,
													"Direction_Center",
													1,
													"WP9_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP9_PosY",
												1,
												"Direction_Center",
												1,
												"WP9_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP8_PosX",
												1,
												"WP8_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="09";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP9_PosX",
											1,
											"WP9_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class WP10
								{
									condition="user44>=0";
									class CurrentWaypoint
									{
										color[]={0.89999998,0,0};
										alpha=1;
										condition="(WPIndex>=9)*(WPIndex<=9)";
										class WaypointShape
										{
											width=22;
											type="line";
											points[]=
											{
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.0125714},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,-0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0076600001,0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0049999999,0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.00342,0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0.0017359999,0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,0.0125714},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0099999998,0},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0098479996,-0.0021824001},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0093970001,-0.0042994302},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0086599998,-0.0062857098},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0076600001,-0.00808091},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0064280001,-0.0096297096},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0049999999,-0.0108869},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.00342,-0.0118134},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{-0.0017359999,-0.0123803},
													1
												},
												
												{
													"WP10_PosY",
													1,
													"Direction_Center",
													1,
													"WP10_PosX",
													{0,-0.0125714},
													1
												},
												{}
											};
										};
									};
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP10_PosY",
												1,
												"Direction_Center",
												1,
												"WP10_PosX",
												{0,-0.025142901},
												1
											},
											{},
											
											{
												"Direction_Center",
												1,
												"WP9_PosX",
												1,
												"WP9_PosY",
												1,
												{0,0},
												1
											},
											
											{
												"Direction_Center",
												1,
												"WP10_PosX",
												1,
												"WP10_PosY",
												1,
												{0,0},
												1
											}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="10";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP10_PosX",
											1,
											"WP10_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
								class CustomWP
								{
									condition="user46>=0";
									color[]={1,0.5,0};
									alpha=0.5;
									class WaypointShape
									{
										width=6;
										type="line";
										points[]=
										{
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.025142901},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,-0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,-0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,-0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,-0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.019695999,0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.018794,0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01732,0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.01532,0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.012856,0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0099999998,0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0068399999,0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0.0034719999,0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,0.025142901},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.02,0},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.019695999,-0.0043648002},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.018794,-0.0085988604},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01732,-0.0125714},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.01532,-0.016161799},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.012856,-0.019259401},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0099999998,-0.0217737},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0068399999,-0.0236267},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{-0.0034719999,-0.024760701},
												1
											},
											
											{
												"WP11_PosY",
												1,
												"Direction_Center",
												1,
												"WP11_PosX",
												{0,-0.025142901},
												1
											},
											{}
										};
									};
									class TexWPNumber
									{
										type="text";
										source="static";
										text="CWP";
										scale=1;
										sourceScale=1;
										align="center";
										pos[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,-0.0080000004},
											1
										};
										right[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.071999997,-0.0080000004},
											1
										};
										down[]=
										{
											"Direction_Center",
											1,
											"WP11_PosX",
											1,
											"WP11_PosY",
											1,
											{0.050000001,0.011},
											1
										};
									};
								};
							};
						};
					};
					class LightBlue
					{
						color[]={0.43000001,0.80000001,0.93000001};
						alpha=0.15000001;
						class StaticDrawPolygon
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729601,-0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{0.0068403999,-0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,-0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,-0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{0.0128558,-0.0192605},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,-0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,-0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{0.017320501,-0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,-0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,-0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{0.0196962,-0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{0.02,1.09903e-009},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.02,1.09903e-009},
										1
									},
									
									{
										"Static_Offset",
										{0.0196962,0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0187939,0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{0.017320501,0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0153209,0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{0.0128557,0.0192606},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0099999998,0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{0.0068403999,0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{-1.74846e-009,0.025142901},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729701,0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729701,0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{-0.0068403999,0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,0.021774299},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,0.021774299},
										1
									},
									
									{
										"Static_Offset",
										{-0.0128558,0.0192605},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{-0.017320501,0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{-0.0196962,0.00436601},
										1
									},
									
									{
										"Static_Offset",
										{-0.02,-2.99826e-010},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.02,-2.99826e-010},
										1
									},
									
									{
										"Static_Offset",
										{-0.0196962,-0.0043660202},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,-0.0085993595},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0187939,-0.0085993595},
										1
									},
									
									{
										"Static_Offset",
										{-0.017320501,-0.0125714},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,-0.0161615},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0153209,-0.0161615},
										1
									},
									
									{
										"Static_Offset",
										{-0.0128557,-0.0192606},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,-0.0217744},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0099999998,-0.0217744},
										1
									},
									
									{
										"Static_Offset",
										{-0.0068404102,-0.023626599},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729601,-0.0247609},
										1
									}
								},
								
								{
									
									{
										"Static_Offset",
										1,
										{0,0},
										1
									},
									
									{
										"Static_Offset",
										{-0.0034729601,-0.0247609},
										1
									},
									
									{
										"Static_Offset",
										{3.4969101e-009,-0.025142901},
										1
									},
									
									{
										"Static_Offset",
										{0.0034729701,-0.0247609},
										1
									}
								}
							};
						};
					};
					class StaticDraw
					{
						type="line";
						width=6;
						points[]=
						{
							
							{
								"Static_Offset",
								{0,-0.0264},
								1
							},
							
							{
								"Static_Offset",
								{0.0036456001,-0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0.0071820002,-0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{0.0105,-0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{0.0134988,-0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{0.016085999,-0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{0.018185999,-0.0132},
								1
							},
							
							{
								"Static_Offset",
								{0.019733701,-0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{0.0206808,-0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{0.021,0},
								1
							},
							
							{
								"Static_Offset",
								{0.0206808,0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{0.019733701,0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{0.018185999,0.0132},
								1
							},
							
							{
								"Static_Offset",
								{0.016085999,0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{0.0134988,0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{0.0105,0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{0.0071820002,0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{0.0036456001,0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0,0.0264},
								1
							},
							
							{
								"Static_Offset",
								{-0.0036456001,0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{-0.0071820002,0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{-0.0105,0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{-0.0134988,0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{-0.016085999,0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{-0.018185999,0.0132},
								1
							},
							
							{
								"Static_Offset",
								{-0.019733701,0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{-0.0206808,0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{-0.021,0},
								1
							},
							
							{
								"Static_Offset",
								{-0.0206808,-0.0045830398},
								1
							},
							
							{
								"Static_Offset",
								{-0.019733701,-0.0090287998},
								1
							},
							
							{
								"Static_Offset",
								{-0.018185999,-0.0132},
								1
							},
							
							{
								"Static_Offset",
								{-0.016085999,-0.016969901},
								1
							},
							
							{
								"Static_Offset",
								{-0.0134988,-0.020222399},
								1
							},
							
							{
								"Static_Offset",
								{-0.0105,-0.022862401},
								1
							},
							
							{
								"Static_Offset",
								{-0.0071820002,-0.024808099},
								1
							},
							
							{
								"Static_Offset",
								{-0.0036456001,-0.0259987},
								1
							},
							
							{
								"Static_Offset",
								{0,-0.0264},
								1
							},
							{},
							
							{
								"Static_Offset",
								1,
								{-0.012,-0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{-0.012,0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{0.012,0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{0.012,-0.0099999998},
								1
							},
							
							{
								"Static_Offset",
								1,
								{-0.012,-0.0099999998},
								1
							},
							{}
						};
					};
					class SensorGroup
					{
						class Sensor
						{
							type="sensor";
							pos[]=
							{
								"Sensor_Offset",
								1,
								
								{
									"-0+-1",
									"-0+-1"
								},
								1
							};
							down[]=
							{
								"Sensor_Offset",
								1,
								
								{
									"0--1",
									"0--1"
								},
								1
							};
							showTargetTypes="2+4+8+16+32+64+128+256+512+1024";
							width=4;
							sensorLineType=0;
							sensorLineWidth=3;
							targetLineWidth=-0.00192;
							targetLineLength=0.02;
							range="user0";
							class MissileThreat
							{
								color[]={1,0,0};
								class TargetLines
								{
									type="line";
									width=2;
									points[]=
									{
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{0.0034719999,-0.024760701},
											1
										},
										
										{
											{0.0068399999,-0.0236267},
											1
										},
										
										{
											{0.0099999998,-0.0217737},
											1
										},
										
										{
											{0.012856,-0.019259401},
											1
										},
										
										{
											{0.01532,-0.016161799},
											1
										},
										
										{
											{0.01732,-0.0125714},
											1
										},
										
										{
											{0.018794,-0.0085988604},
											1
										},
										
										{
											{0.019695999,-0.0043648002},
											1
										},
										
										{
											{0.02,0},
											1
										},
										
										{
											{0.019695999,0.0043648002},
											1
										},
										
										{
											{0.018794,0.0085988604},
											1
										},
										
										{
											{0.01732,0.0125714},
											1
										},
										
										{
											{0.01532,0.016161799},
											1
										},
										
										{
											{0.012856,0.019259401},
											1
										},
										
										{
											{0.0099999998,0.0217737},
											1
										},
										
										{
											{0.0068399999,0.0236267},
											1
										},
										
										{
											{0.0034719999,0.024760701},
											1
										},
										
										{
											{0,0.025142901},
											1
										},
										
										{
											{-0.0034719999,0.024760701},
											1
										},
										
										{
											{-0.0068399999,0.0236267},
											1
										},
										
										{
											{-0.0099999998,0.0217737},
											1
										},
										
										{
											{-0.012856,0.019259401},
											1
										},
										
										{
											{-0.01532,0.016161799},
											1
										},
										
										{
											{-0.01732,0.0125714},
											1
										},
										
										{
											{-0.018794,0.0085988604},
											1
										},
										
										{
											{-0.019695999,0.0043648002},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{-0.019695999,-0.0043648002},
											1
										},
										
										{
											{-0.018794,-0.0085988604},
											1
										},
										
										{
											{-0.01732,-0.0125714},
											1
										},
										
										{
											{-0.01532,-0.016161799},
											1
										},
										
										{
											{-0.012856,-0.019259401},
											1
										},
										
										{
											{-0.0099999998,-0.0217737},
											1
										},
										
										{
											{-0.0068399999,-0.0236267},
											1
										},
										
										{
											{-0.0034719999,-0.024760701},
											1
										},
										
										{
											{0,-0.025142901},
											1
										}
									};
								};
								class TextM
								{
									type="text";
									source="static";
									text="M";
									align="center";
									scale=1;
									pos[]=
									{
										{0,-0.0099999998},
										1
									};
									right[]=
									{
										{0.02,-0.0099999998},
										1
									};
									down[]=
									{
										{0,0.0099999998},
										1
									};
								};
							};
							class lockingThreat
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="line";
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.025142901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
							};
							class markingThreat: lockingThreat
							{
								class TargetLines: TargetLines
								{
								};
							};
							class rwr
							{
								class TargetLines
								{
									type="line";
									width=2;
									points[]=
									{
										
										{
											{0.02,0},
											1
										},
										
										{
											{0,0.025142901},
											1
										},
										
										{
											{-0.02,0},
											1
										},
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{0.02,0},
											1
										}
									};
								};
							};
							class rwrFriendly: rwr
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrEnemy: rwr
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrGroup: rwr
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class rwrDestroyed
							{
							};
							class markedTarget
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.017000001,-0.0213714},
											1
										},
										
										{
											{-0.0099999998,-0.0213714},
											1
										},
										{},
										
										{
											{0.017000001,-0.0213714},
											1
										},
										
										{
											{0.0099999998,-0.0213714},
											1
										},
										{},
										
										{
											{-0.017000001,-0.0213714},
											1
										},
										
										{
											{-0.017000001,-0.0125714},
											1
										},
										{},
										
										{
											{0.017000001,-0.0213714},
											1
										},
										
										{
											{0.017000001,-0.0125714},
											1
										},
										{},
										
										{
											{-0.017000001,0.0213714},
											1
										},
										
										{
											{-0.0099999998,0.0213714},
											1
										},
										{},
										
										{
											{0.017000001,0.0213714},
											1
										},
										
										{
											{0.0099999998,0.0213714},
											1
										},
										{},
										
										{
											{-0.017000001,0.0213714},
											1
										},
										
										{
											{-0.017000001,0.0125714},
											1
										},
										{},
										
										{
											{0.017000001,0.0213714},
											1
										},
										
										{
											{0.017000001,0.0125714},
											1
										},
										{}
									};
								};
							};
							class assignedTarget: markedTarget
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class target
							{
								color[]={1,0.30000001,0};
								class TargetLines
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{-0.0099999998,-0.0099999998},
												1
											},
											
											{
												{0,-0.0099999998},
												1
											},
											
											{
												{0,0},
												1
											},
											
											{
												{-0.0099999998,0},
												1
											}
										}
									};
								};
							};
							class targetFriendly: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetEnemy: target
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroup: target
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetDestroyed
							{
							};
							class targetGround: target
							{
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.026000001,0},
											1
										},
										
										{
											{0,0.026000001},
											1
										},
										
										{
											{0.026000001,0},
											1
										},
										
										{
											{0,-0.026000001},
											1
										},
										
										{
											{-0.026000001,0},
											1
										},
										{}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundFriendly: targetGround
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{0,-0.0264},
											1
										},
										
										{
											{0.0036456001,-0.0259987},
											1
										},
										
										{
											{0.0071820002,-0.024808099},
											1
										},
										
										{
											{0.0105,-0.022862401},
											1
										},
										
										{
											{0.0134988,-0.020222399},
											1
										},
										
										{
											{0.016085999,-0.016969901},
											1
										},
										
										{
											{0.018185999,-0.0132},
											1
										},
										
										{
											{0.019733701,-0.0090287998},
											1
										},
										
										{
											{0.0206808,-0.0045830398},
											1
										},
										
										{
											{0.021,0},
											1
										},
										
										{
											{0.0206808,0.0045830398},
											1
										},
										
										{
											{0.019733701,0.0090287998},
											1
										},
										
										{
											{0.018185999,0.0132},
											1
										},
										
										{
											{0.016085999,0.016969901},
											1
										},
										
										{
											{0.0134988,0.020222399},
											1
										},
										
										{
											{0.0105,0.022862401},
											1
										},
										
										{
											{0.0071820002,0.024808099},
											1
										},
										
										{
											{0.0036456001,0.0259987},
											1
										},
										
										{
											{0,0.0264},
											1
										},
										
										{
											{-0.0036456001,0.0259987},
											1
										},
										
										{
											{-0.0071820002,0.024808099},
											1
										},
										
										{
											{-0.0105,0.022862401},
											1
										},
										
										{
											{-0.0134988,0.020222399},
											1
										},
										
										{
											{-0.016085999,0.016969901},
											1
										},
										
										{
											{-0.018185999,0.0132},
											1
										},
										
										{
											{-0.019733701,0.0090287998},
											1
										},
										
										{
											{-0.0206808,0.0045830398},
											1
										},
										
										{
											{-0.021,0},
											1
										},
										
										{
											{-0.0206808,-0.0045830398},
											1
										},
										
										{
											{-0.019733701,-0.0090287998},
											1
										},
										
										{
											{-0.018185999,-0.0132},
											1
										},
										
										{
											{-0.016085999,-0.016969901},
											1
										},
										
										{
											{-0.0134988,-0.020222399},
											1
										},
										
										{
											{-0.0105,-0.022862401},
											1
										},
										
										{
											{-0.0071820002,-0.024808099},
											1
										},
										
										{
											{-0.0036456001,-0.0259987},
											1
										},
										
										{
											{0,-0.0264},
											1
										}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundEnemy: targetGround
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
									type="line";
									width=3;
									points[]=
									{
										
										{
											{-0.026000001,0},
											1
										},
										
										{
											{0,0.026000001},
											1
										},
										
										{
											{0.026000001,0},
											1
										},
										
										{
											{0,-0.026000001},
											1
										},
										
										{
											{-0.026000001,0},
											1
										},
										{}
									};
								};
								class StaticDraw
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,0.0099999998},
											1
										},
										
										{
											{0.012,0.0099999998},
											1
										},
										
										{
											{0.012,-0.0099999998},
											1
										},
										
										{
											{-0.012,-0.0099999998},
											1
										},
										{}
									};
								};
							};
							class targetGroundGroup: targetGroundFriendly
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
								class StaticDraw: StaticDraw
								{
								};
							};
							class targetGroundDestroyed
							{
							};
							class targetGroundRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteFriendly: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteEnemy: targetGroundRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteGroup: targetGroundRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetGroundRemoteDestroyed
							{
							};
							class targetLaser: target
							{
								class TargetLines: TargetLines
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{0,-0.025142901},
											1
										},
										
										{
											{-1.74846e-009,0.025142901},
											1
										},
										{},
										
										{
											{0.02,1.09903e-009},
											1
										},
										
										{
											{-0.02,-2.99826e-010},
											1
										},
										{},
										
										{
											{0.0106066,-0.013334},
											1
										},
										
										{
											{-0.0106066,0.013334},
											1
										},
										{},
										
										{
											{0.0106066,0.013334},
											1
										},
										
										{
											{-0.0106066,-0.013334},
											1
										},
										{}
									};
								};
							};
							class targetLaserFriendly: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserEnemy: targetLaser
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetLaserGroup: targetLaser
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVG: targetLaser
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGFriendly: targetNVG
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGEnemy: targetNVG
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetNVGGroup: targetNVG
							{
								color[]={1,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetMan: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManFriendly: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManEnemy: targetMan
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManGroup: targetMan
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemote: target
							{
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteFriendly: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteEnemy: targetManRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
							};
							class targetManRemoteGroup: targetManRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAir
							{
								color[]={1,1,1};
								class TargetLines
								{
									type="polygon";
									points[]=
									{
										
										{
											
											{
												{0,0},
												1
											},
											
											{
												{0.012,0.0099999998},
												1
											},
											
											{
												{0.012,-0.0099999998},
												1
											}
										},
										
										{
											
											{
												{0,0},
												1
											},
											
											{
												{-0.012,0.0099999998},
												1
											},
											
											{
												{-0.012,-0.0099999998},
												1
											}
										}
									};
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.025},
											1
										},
										
										{
											{0.02,-0.025},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirFriendly: targetAir
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirEnemy: targetAir
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirGroup: targetAir
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirDestroyed
							{
							};
							class targetAirRemote: targetAir
							{
								color[]={1,1,1};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.025},
											1
										},
										
										{
											{0.02,-0.025},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteFriendly: targetAirRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.016000001,0.000400007},
											1
										},
										
										{
											{-0.012,-0.0129},
											1
										},
										
										{
											{-0.0080000004,-0.022399999},
											1
										},
										
										{
											{-0.0040000002,-0.028100001},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.0040000002,-0.028100001},
											1
										},
										
										{
											{0.0080000004,-0.022399999},
											1
										},
										
										{
											{0.012,-0.0129},
											1
										},
										
										{
											{0.016000001,0.000400007},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteEnemy: targetAirRemote
							{
								color[]={0.12,0,0};
								class TargetLines: TargetLines
								{
								};
								class TargetArc
								{
									type="line";
									width=4;
									points[]=
									{
										
										{
											{-0.02,0.0175},
											1
										},
										
										{
											{-0.02,-0.0074999998},
											1
										},
										
										{
											{0,-0.029999999},
											1
										},
										
										{
											{0.02,-0.0074999998},
											1
										},
										
										{
											{0.02,0.0175},
											1
										}
									};
								};
							};
							class targetAirRemoteGroup: targetAirRemote
							{
								color[]={0,0,0.12};
								class TargetLines: TargetLines
								{
								};
							};
							class targetAirRemoteDestroyed
							{
							};
						};
					};
				};
			};
		};
		class UVAnimations
		{
			class BFT_Map_Scale
			{
				type="scale";
				section="BFT_screen";
				source="BFT_Map_Scale";
				minValue=0;
				maxValue=1;
				center[]={1,1};
				scale0[]={0,0};
				scale1[]={1,1};
			};
			class BFT_Map_Move_X
			{
				section="BFT_screen";
				type="translation";
				source="BFT_Map_Move_X";
				maxValue=100000;
				center[]={1,0};
				offset0[]={0,0};
				offset1[]={100,0};
			};
			class BFT_Map_Move_Y: BFT_Map_Move_X
			{
				source="BFT_Map_Move_Y";
				maxValue=100000;
				offset0[]={0,0};
				offset1[]={0,-100};
			};
			class BFT_Map_Rotate: BFT_Map_Scale
			{
				type="rotate";
				source="direction";
				minValue="rad -180";
				maxValue="rad 180";
				angle0="rad -180";
				angle1="rad 180";
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source="reload";
				weapon="lk_weap_XM914";
			};
			class M2_CROWS_AmmoRandom
			{
				weapon="lk_weap_XM914";
				source="ammorandom";
			};
			class m240c_AmmoRandom
			{
				weapon="LK_weap_m240_m1283_coax";
				source="ammorandom";
			};
			class M2_CROWS_Reload
			{
				weapon="lk_weap_XM914";
				source="reload";
			};
			class M2_CROWS_ReloadMagazine
			{
				weapon="lk_weap_XM914";
				source="reloadmagazine";
			};
			class M2_CROWS_Revolving
			{
				weapon="lk_weap_XM914";
				source="revolving";
			};
			class Extend_Mirrors
			{
				displayName="Fold mirrors";
				useSource=1;
				source="user";
				animPeriod=1;
			};
			class Hatch_Driver
			{
				displayName="Open driver hatch";
				source="door";
				animPeriod=2.0999999;
				sound="RHS_HMMWV_Door";
				soundPosition="hatch_driver_axis";
			};
			class Unhide_vis_optic_d_driver1
			{
				source="hit";
				hitpoint="Hit_Optic_Driver1";
			};
			class Unhide_vis_optic_d_driver2
			{
				source="hit";
				hitpoint="Hit_Optic_Driver2";
			};
			class Unhide_vis_optic_d_driver3
			{
				source="hit";
				hitpoint="Hit_Optic_Driver3";
			};
			class Unhide_vis_optic_d_DVEA
			{
				source="hit";
				hitpoint="Hit_Optic_DVEA";
			};
			class Unhide_vis_optic_d_driver_rear
			{
				source="hit";
				hitpoint="Hit_Optic_Driver_Rear";
			};
			class Hatch_Commander: Hatch_Driver
			{
				displayName="Open commander hatch";
				animPeriod=1.1;
				soundPosition="hatch_commander_axis";
			};
			class Hatch_Front: Hatch_Driver
			{
				displayName="Open front hatch";
				animPeriod=1.1;
				soundPosition="hatch_front_axis";
			};
			class Hatch_Left: Hatch_Driver
			{
				displayName="Open left hatch";
				animPeriod=1.1;
				soundPosition="hatch_left_axis";
			};
			class Hatch_Right: Hatch_Driver
			{
				displayName="Open right hatch";
				animPeriod=1.1;
				soundPosition="hatch_right_axis";
			};
			class Ramp: Hatch_Driver
			{
				displayName="Open ramp";
				animPeriod=3.2850001;
				soundPosition="ramp_axis";
				sound="rhs_ramp";
			};
			class Smoke_Revolving_Source
			{
				weapon="rhsusf_weap_M6";
				source="revolving";
			};
			class Hide_Antenna_1
			{
				displayName="Hide antenna #1";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_Antenna_2
			{
				displayName="Hide antenna #2";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_Antenna_3
			{
				displayName="Hide antenna #3";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_CIP
			{
				displayName="Hide Combat Identification Panel";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_DEK
			{
				displayName="Hide Driver's Enhancement Kit";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_DUKE
			{
				displayName="Hide Duke antenna";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_ExDiff
			{
				displayName="Hide exhaust diffuser";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_FCans
			{
				displayName="Hide rear fuel cans";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_WCans
			{
				displayName="Hide rear water cans";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_GPS
			{
				displayName="Hide GPS antenna";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_PioKit
			{
				displayName="Hide pioneer tools";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_StgBar
			{
				displayName="Hide storage bars";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_STORM
			{
				displayName="Hide STORM laser range-finder";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_SuspCov
			{
				displayName="Hide suspension coverings";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Hide_Towbar
			{
				displayName="Hide tow bar";
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class cargolights_hide
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class BFT_Map_Scale
			{
				source="user";
				animPeriod=0;
				initPhase=0.1;
			};
			class BFT_Map_Move_X
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class BFT_Map_Move_Y
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class Unhide_vis_optic_d_CROWS_Day
			{
				source="hit";
				hitpoint="Hit_Optic_CROWS_Day";
			};
			class Unhide_vis_optic_d_CROWS_TI
			{
				source="hit";
				hitpoint="Hit_Optic_CROWS_TI";
			};
			class Unhide_vis_optic_d_CROWS_LRF
			{
				source="hit";
				hitpoint="Hit_Optic_CROWS_LRF";
			};
			class Unhide_vis_optic_d_ComPeriscope1
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope1";
			};
			class Unhide_vis_optic_d_ComPeriscope2
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope2";
			};
			class Unhide_vis_optic_d_ComPeriscope3
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope3";
			};
			class Unhide_vis_optic_d_ComPeriscope4
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope4";
			};
			class Unhide_vis_optic_d_ComPeriscope5
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope5";
			};
			class Unhide_vis_optic_d_ComPeriscope6
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope6";
			};
			class Unhide_vis_optic_d_ComPeriscope7
			{
				source="hit";
				hitpoint="Hit_Optic_ComPeriscope7";
			};
			class showslathull
			{
				displayName="install hull slat";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showslatramp: showslathull
			{
				displayName="install ramp slat";
			};
			class HitSLAT_Left_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_1";
				raw=1;
			};
			class HitSLAT_Left_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_2";
				raw=1;
			};
			class HitSLAT_Left_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_3";
				raw=1;
			};
			class HitSLAT_Right_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_1";
				raw=1;
			};
			class HitSLAT_Right_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_2";
				raw=1;
			};
			class HitSLAT_Right_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_3";
				raw=1;
			};
			class HitSLAT_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_back";
				raw=1;
			};
			class HitSLAT_front_src
			{
				source="Hit";
				hitpoint="HitSLAT_front";
				raw=1;
			};
			class HitSLAT_ramp_src
			{
				source="Hit";
				hitpoint="HitSLAT_ramp";
				raw=1;
			};
			class HitSLAT_top_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_back";
				raw=1;
			};
			class HitSLAT_top_right_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_right";
				raw=1;
			};
			class HitSLAT_top_left_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_left";
				raw=1;
			};
			class hideMHR
			{
				displayName="Hide MHR";
				source="user";
				initPhase=0;
				animPeriod=0;
				onPhaseChanged="[(_this # 0),['ActiveRadarSensorComponent',(_this # 1) isEqualTo 0]] remoteExecCall ['enableVehicleSensor',0] ;";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhsusf\addons\rhsusf_stryker\data\periscope.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_round.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\periscope_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"ampv_cuas\tex\riwp.rvmat",
				"ampv_cuas\tex\riwp_damage.rvmat",
				"ampv_cuas\tex\riwp_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"m1296\tex\m1296_parts.rvmat",
				"m1296\tex\m1296_parts_damage.rvmat",
				"m1296\tex\m1296_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_M1126_acc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_d.rvmat",
				"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_d_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc.rvmat",
				"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat"
			};
		};
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4",
			"Camo_5",
			"camo_6",
			"Camo_Acc",
			"Camo_AccA",
			"Camo_DUKE",
			"Camo_fc01",
			"Camo_fc02",
			"Camo_wc01",
			"Camo_wc02",
			"camoslat",
			"callsign1",
			"callsign2",
			"callsign3",
			"callsign4",
			"dec_hull",
			"BFT_screen"
		};
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
			"ampv_cuas\tex\riwp_O_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
			"m1126_MShorad\tex\MShorad_parts_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
			"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
			"a3\armor_f\data\cage_olive_co.paa"
		};
		class TextureSources
		{
			class Olive
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="Olive";
				textures[]=
				{
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_co.paa",
					"ampv_cuas\tex\riwp_O_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
					"m1126_MShorad\tex\MShorad_parts_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"a3\armor_f\data\cage_olive_co.paa"
				};
			};
			class OliveDirty
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="Olive (Dirty)";
				textures[]=
				{
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_od_co.paa",
					"m1126_MShorad\tex\riwp_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_od_co.paa",
					"m1126_MShorad\tex\MShorad_parts_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_od_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
			};
			class Tan
			{
				author="$STR_RHSUSF_AUTHOR_FULL";
				displayName="Tan";
				textures[]=
				{
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
					"ampv_cuas\tex\riwp_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
					"m1126_MShorad\tex\MShorad_parts_D_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"a3\armor_f\data\cage_sand_CO.paa"
				};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"LK_weap_m240_m1283_coax",
					"lk_weap_XM914"
				};
				magazines[]=
				{
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"rhs_mag_762x51_M240_200",
					"300Rnd_30x113mm_M789_HEDT",
					"300Rnd_30x113mm_M789_HEDT"
				};
				class Turrets
				{
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.39810717,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
				gunnerName="Vehicle Commander";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000,3100,3200,3300,3400,3500};
				discreteDistanceInitIndex=2;
				minElev=-10;
				maxElev=40;
				gunnerAction="RHS_Stryker_M1126_Gunner_out";
				gunnerInAction="RHS_Stryker_M1126_Gunner_in";
				personturretAction="vehicle_turnout_2";
				isPersonTurret=0;
				gunnerGetInAction="GetInMRAP_01_cargo";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerCompartments="Compartment1";
				gunnerDoor="Hatch_Commander";
				animationSourceHatch="Hatch_Commander_A";
				forceHideGunner=0;
				gunnerForceOptics=0;
				gunnerOutOpticsShowCursor=0;
				viewGunnerInExternal=1;
				LODTurnedOut=1;
				LODTurnedin=1000;
				LODOpticsIn=0;
				LODOpticsOut=0;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				startEngine=0;
				usePip=1;
				maxhorizontalrotspeed=1.27;
				maxverticalrotspeed=1.27;
				selectionFireAnim="zasleh2";
				memoryPointGun="usti hlavne3";
				memoryPointGunnerOptics="View_CROWS";
				animationSourceStickX="gunner_stick_trav";
				animationSourceStickY="gunner_stick_elev";
				gunnerRightHandAnimName="gunner_stick";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				class ViewOptics: ViewOptics
				{
					visionMode[]=
					{
						"Normal"
					};
					thermalMode[]={0,1};
				};
				class ViewGunner: ViewGunner
				{
					initAngleX=-25;
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
				turretInfoType="RscOptics_APC_Tracked_01_gunner";
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						opticsDisplayName="60HZ";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.5;
						minFov=0.5;
						maxFov=0.5;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_4x";
						gunnerOpticsEffect[]={};
						hitPoint="Hit_Optic_CROWS_Day";
					};
					class Narrow: Wide
					{
						opticsDisplayName="60HZ";
						gunnerOpticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_IBAS_12x";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow2: Narrow
					{
						opticsDisplayName="60HZ 2X";
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Narrow3: Narrow
					{
						opticsDisplayName="60HZ 4X";
						initFov=0.0145833;
						minFov=0.0145833;
						maxFov=0.0145833;
					};
				};
				class Hitpoints
				{
					class HitTurret
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_Turret";
						visual="";
						armorComponent="Hit_Turret";
						passThrough=0;
						radius=0.2;
					};
					class HitGun
					{
						armor=-120;
						minimalHit=-0.13;
						explosionShielding=0.5;
						name="Hit_Gun";
						visual="";
						armorComponent="Hit_Gun";
						passThrough=0;
						radius=0.2;
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components: components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={6000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class CrewDisplay
							{
								componentType="CrewDisplayComponent";
								resource="RscCustomInfoCrew";
							};
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={6000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerName="Troop Commander";
				gunnerCompartments="Compartment1";
				gunnerInAction="RHS_Stryker_M1126_TC_in";
				gunnerAction="RHS_Stryker_M1126_TC_out";
				showAsCargo=1;
				personturretAction="";
				gunnerDoor="Ramp";
				proxyIndex=1;
				viewGunnerInExternal=1;
				isPersonTurret=2;
				commanding=4;
				maxOutTurn=110;
				minOutTurn=-110;
				maxOutElev=75;
				minOutElev=-15;
				LODTurnedOut=1;
				LODTurnedin=1200;
				animationSourceHatch="";
				rhs_hatch="Hatch_Front";
				rhs_hatch_control=1;
				enabledByAnimationSource="Hatch_Front";
				gunnerForceOptics=0;
				class ViewGunner
				{
					initAngleX=0;
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
				class OpticsIn
				{
					class DVE_Wide: ViewOptics
					{
						camPos="view_DVE";
						camDir="view_DVE_dir";
						gunnerOpticsModel="rhsusf\addons\rhsusf_optics\data\rhsusf_DVE_4x3";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						initFov=1.07692;
						minFov=1.07692;
						maxFov=1.07692;
						hitpoint="Hit_Optic_DVEA";
					};
					class DVS_Rear: DVE_Wide
					{
						camPos="view_rear";
						camDir="view_rear_dir";
						hitpoint="Hit_Optic_Driver_Rear";
					};
					class DaysightWFOV: ViewOptics
					{
						camPos="View_CROWS";
						camDir="View_CROWS_dir";
						gunnerOpticsModel="\rhsusf\addons\rhsusf_optics\data\rhsusf_CROWS_monitor";
						initFov=0.69999999;
						minFov=0.69999999;
						maxFov=0.69999999;
						visionMode[]=
						{
							"Normal"
						};
						hitpoint="Hit_Optic_CROWS_Day";
						opticsDisplayName="1.0x";
					};
					class ThermalWFOV: DaysightWFOV
					{
						camPos="View_CROWS_TI";
						camDir="View_CROWS_TI_dir";
						visionMode[]=
						{
							"TI"
						};
						thermalMode[]={0,1};
						initFov=0.162791;
						minFov=0.162791;
						maxFov=0.162791;
						hitpoint="Hit_Optic_CROWS_TI";
						opticsDisplayName="4.3x";
					};
					class ThermalNFOV: ThermalWFOV
					{
						initFov=0.056000002;
						minFov=0.056000002;
						maxFov=0.056000002;
						opticsDisplayName="12.5x";
					};
					class DaysightNFOV: DaysightWFOV
					{
						initFov=0.0466667;
						minFov=0.0466667;
						maxFov=0.0466667;
						opticsDisplayName="15.0x";
					};
					class DaysightVNFOV: DaysightWFOV
					{
						initFov=0.0233333;
						minFov=0.0233333;
						maxFov=0.0233333;
						opticsDisplayName="30.0x";
					};
				};
				class Reflectors
				{
					class cargo_light_1
					{
						color[]={800,900,650};
						ambient[]={5,5,5};
						position="cargo_light_1";
						direction="cargo_light_1_dir";
						hitpoint="cargo_light_1";
						selection="cargo_light_1";
						size=1;
						intensity=4;
						coneFadeCoef=0.1;
						innerAngle=140;
						outerAngle=175;
						useFlare=0;
						flareSize=1;
						flareMaxDistance=5;
						dayLight=1;
						blinking=0;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=1;
							quadratic=70;
							hardLimitStart=0.40000001;
							hardLimitEnd=1.5;
						};
					};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				isPersonTurret=2;
				commanding=-9;
				gunnerName="Passenger (Air Guard Left)";
				proxyIndex=8;
				animationSourceHatch="";
				rhs_hatch="Hatch_Left";
				rhs_hatch_control=1;
				enabledByAnimationSource="Hatch_Left";
				gunnerInAction="RHS_Stryker_M1126_AG_in";
				gunnerAction="RHS_Stryker_M1126_AG_out";
				class Reflectors
				{
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				commanding=-9;
				gunnerName="Passenger (Air Guard Right)";
				proxyIndex=9;
				rhs_hatch="Hatch_Right";
				enabledByAnimationSource="Hatch_Right";
			};
		};
	};
	class rhsusf_stryker_m1126ms_wd: rhsusf_stryker_m1126ms_base
	{
		author="[CN]lurker1011,真红战队,RHS";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_combatcrewman";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="\m1296_c\ui\m1126ms_wd_pre.jpg";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_02\Data\UI\Fighter_02_3DEN_ca.paa";
				class pylons
				{
					class pylons1
					{
						turret[]={0};
						hardpoints[]=
						{
							"CUAS_pylon_left"
						};
						attachment="2Rnd_Hellfire_AGM_O";
						priority=13;
						bay=-1;
						maxweight=500;
						UIposition[]={0.60000002,0.25};
					};
					class pylons2: pylons1
					{
						hardpoints[]=
						{
							"CUAS_pylon_right"
						};
						attachment="4Rnd_Stinger_AAM_rightside_O";
						priority=12;
						UIposition[]={0.15000001,0.25};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"4Rnd_Stinger_AAM_O",
							"4Rnd_Stinger_AAM_rightside_O"
						};
					};
				};
			};
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							maxRange = 5000;
							minRange = 5000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange=5000;
							maxRange=5000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						aimDown = -30;
						allowsMarking = 1;
						angleRangeHorizontal = 360;
						angleRangeVertical = 100;
						animDirection = "";
						color[] = {0,1,1,1};
						componentType = "ActiveRadarSensorComponent";
						groundNoiseDistanceCoef = 0.5;
						maxGroundNoiseDistance = 200;
						maxSpeedThreshold = 27.7778;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 225;
						minSpeedThreshold = 20.8333;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 3000;
					};
					class IRSensorComponent: IRSensorComponent
					{
						class AirTarget
						{
							maxRange = 4000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 3000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						animDirection = "mainGun";
						color[] = {1,0,0,1};
						componentType = "IRSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.995;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 70;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 2000;
					};
					class LaserSensorComponent: LaserSensorComponent
					{
						class AirTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							maxRange = 6000;
							minRange = 6000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 180;
						angleRangeVertical = 180;
						animDirection = "";
						color[] = {1,1,1,0};
						componentType = "LaserSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 1e+10;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						typeRecognitionDistance = 0;
					};
					class VisualSensorComponent: VisualSensorComponent
					{
						class AirTarget
						{
							maxRange = 3000;
							minRange = 500;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							maxRange = 2300;
							minRange = 500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						aimDown = 0;
						allowsMarking = 1;
						angleRangeHorizontal = 46;
						angleRangeVertical = 34;
						animDirection = "mainGun";
						color[] = {1,1,0.5,0.8};
						componentType = "VisualSensorComponent";
						groundNoiseDistanceCoef = -1;
						maxFogSeeThrough = 0.94;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+10;
						maxTrackableSpeed = 70;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+10;
						minTrackableSpeed = -1e+10;
						nightRangeCoef = 0;
						typeRecognitionDistance = 2000;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
	};
	class rhsusf_stryker_m1126ms_d: rhsusf_stryker_m1126ms_base
	{
		author="[CN]lurker1011,真红战队,RHS";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_combatcrewman";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="\m1296_c\ui\m1126ms_d_pre.jpg";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
			"ampv_cuas\tex\riwp_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
			"m1126_MShorad\tex\MShorad_parts_D_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
			"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
			"a3\armor_f\data\cage_sand_CO.paa"
		};
	};
};
class B_30mm_HE;
class B_30mm_MP;
class B_30mm_APFSDS;
class CfgAmmo
{
	class lk_Mk238_HET: B_30mm_HE
	{
		typicalSpeed=960;
		hit=30;
		indirectHit=1.911;
		indirectHitRange=3.301;   
		explosive=0.80000001;
		caliber=1.4;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class lk_Mk310_AB: B_30mm_HE
	{
		typicalSpeed=960;
		hit=30;
		indirectHit=1.911;
		indirectHitRange=3.301;   
		explosive=0.80000001;
		caliber=1.4;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		submunitionAmmo = "lk_Mk310_Prox";
        class EventHandlers {
            fired = "_this call ABM_fnc_firedABM;";
        };
	};
	class lk_Mk310_Prox : B_30mm_HE
	{
		typicalSpeed=960;
		hit=18;
		indirectHit = 18;
		indirectHitRange = 3.5;
		explosive=0.80000001;
		caliber=1.4;
		simulation = "shotRocket";
		timeToLive = 0;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class lk_MK258_APFSDST: B_30mm_APFSDS
	{
		typicalSpeed=1320;
		hit=120;
		indirectHit=8;
		indirectHitRange=0.2;
		caliber=6;
		deflecting=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};
class VehicleMagazine;
class CfgMagazines
{
	class 156Rnd_MK238_HEI: VehicleMagazine
	{
		author="[CN]Lurker1011,真红战队";
		displayName="OFCRA MK238 30mm HE-T";
		displayNameShort="OFCRA 30mm HE-T";
		ammo="lk_Mk238_HET";
		initSpeed=960;
		count=156;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,4};
	};
	class 156Rnd_MK310_AB: VehicleMagazine
	{
		author="[CN]Lurker1011,真红战队";
		displayName="OFCRA MK310 30mm AB";
		displayNameShort="OFCRA 30mm Airburst";
		ammo="lk_Mk310_AB";
		initSpeed=960;
		count=156;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={1,4};
	};
	class 156Rnd_MK258_APFSDST: VehicleMagazine
	{
		author="[CN]Lurker1011,真红战队";
		displayName="MK258 30mm APFSDST";
		displayNameShort="30mm APFSDS";
		ammo="lk_MK258_APFSDST";
		initSpeed=1400;
		count=156;
		maxLeadSpeed=25;
		tracersEvery=1;
		nameSound="cannon";
		muzzleImpulseFactor[]={0.5,2};
	};
};
class CfgMagazineWells
{
};
class RHS_weap_M242BC
{
	class HE;
	class AP;
};
class rhs_weap_m240veh;
class CfgWeapons
{
	class LK_weap_XM813: RHS_weap_M242BC
	{
		ballisticsComputer = "2 + 4 + 16";
		displayName="30mm XM813";
		class GunParticles
		{
			class Effect
			{
				effectName="AutoCannonFired";
				positionName="Usti hlavne";
				directionName="Konec hlavne";
			};
		};
		class HE: HE
		{
			ballisticsComputer = "2 + 4 + 16";
			displayName="30mm XM813";
			magazines[]=
			{
				"156Rnd_MK238_HEI",
				"156Rnd_MK258_APFSDST",
				"156Rnd_MK310_AB"
			};
			magazineWell[]={};
		};
		class AP: AP
		{
			ballisticsComputer = "2 + 4 + 16";
			displayName="30mm XM813 APFSDS";
			magazines[]=
			{
				"156Rnd_MK258_APFSDST"
			};
			magazineWell[]={};
		};
	};
	class LK_weap_m240_m1296_coax: rhs_weap_m240veh
	{
		displayName="M240C";
		displaynameshort="M240C";
		cursorAim="mg";
		showAimCursorInternal=0;
		ballisticsComputer="2 + 16";
		minZeroing=200;
		class GunParticles
		{
			class M240_AmmoBeltLinkEject
			{
				positionName="ammobeltlinks_start";
				directionName="ammobeltlinks_end";
				effectName="MachineGunEject2";
			};
			class M240_AmmoBeltCaseEject
			{
				positionName="shelleject_start";
				directionName="shelleject_end";
				effectName="RHSUSF_762Cartridge";
			};
			class M240_WhiteGas
			{
				positionName="usti hlavne 3";
				directionName="konec hlavne 3";
				effectName="RifleAssaultCloud";
			};
			class M240_RHSUSF_BarrelRefract
			{
				positionName="usti hlavne 3";
				directionName="konec hlavne 3";
				effectName="RHSUSF_BarrelRefractHeavy";
			};
		};
	};
};
class cfgMods
{
	author="[CN]Lurker1011,真红战队";
	timepacked="1724523788";
};
