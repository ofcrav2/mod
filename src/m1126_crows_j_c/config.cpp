#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class m1126_crowsj_c_lk
	{
		skipWhenMissingDependencies=1;
		requiredAddons[]=
		{
			"M1296_lk",
			"rhsusf_stryker",
			"rhsusf_c_stryker",
			"rhsusf_c_heavyweapons"
		};
		requiredVersion=0.1;
		units[]=
		{
			"rhsusf_stryker_m1126_CJ_wd",
			"rhsusf_stryker_m1126_CJ_d",
			"rhsusf_stryker_m1126_CJMK19_wd",
			"rhsusf_stryker_m1126_CJMK19_d"
		};
		weapons[]=
		{
			"FGM148_veh_AT"
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
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
	class rhsusf_stryker_m1126_CJ: Wheeled_APC_F
	{
		displayName="M1126 (M2/Javelin)";
		model="m1126_crows_j\rhsusf_m1126_crowsj.p3d";
		picture="\rhsusf\addons\rhsusf_stryker\data\ui\rhsusf_stryker_m1126_m2_ca.paa";
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

		};
		class TransportMagazines
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
			class Hit_Optic_ComPeriscope6
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope6";
				armorComponent="Hit_Optic_ComPeriscope6";
				passThrough=0;
			};
			class Hit_Optic_ComPeriscope7
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_ComPeriscope7";
				armorComponent="Hit_Optic_ComPeriscope7";
				passThrough=0;
			};
			class Hit_Optic_CROWS_Day
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_CROWS_Day";
				armorComponent="Hit_Optic_CROWS_Day";
				passThrough=0;
			};
			class Hit_Optic_CROWS_TI
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_CROWS_TI";
				armorComponent="Hit_Optic_CROWS_TI";
				passThrough=0;
			};
			class Hit_Optic_CROWS_LRF
			{
				armor=-40;
				explosionShielding=0;
				name="";
				visual="vis_optic_CROWS_LRF";
				armorComponent="Hit_Optic_CROWS_LRF";
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
			class reloadJavelin
			{
				displayName="Reload FGM-148 Javelin";
				position="pos driver";
				radius=20;
				condition="player == gunner this &&  this  ammo 'FGM148_veh_AT' == 0";
				statement="[this,gunner this] execVM 'm1126_crows_j_c\scripts\reloadJavelin.sqf'";
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
				weapon="RHS_M2_CROWS_M151";
			};
			class M2_CROWS_AmmoRandom
			{
				weapon="RHS_M2_CROWS_M151";
				source="ammorandom";
			};
			class m240c_AmmoRandom
			{
				weapon="LK_weap_m240_m1296_coax";
				source="ammorandom";
			};
			class M2_CROWS_Reload
			{
				weapon="RHS_M2_CROWS_M151";
				source="reload";
			};
			class M2_CROWS_ReloadMagazine
			{
				weapon="RHS_M2_CROWS_M151";
				source="reloadmagazine";
			};
			class M2_CROWS_Revolving
			{
				weapon="RHS_M2_CROWS_M151";
				source="revolving";
			};
			class Missiles_revolving
			{
				source="revolving";
				weapon="FGM148_veh_AT";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source="reloadMagazine";
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
			class hide_weapons
			{
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
				initPhase=1;
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
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_M2_CROWS_M151",
					"FGM148_veh_AT",
					"rhsusf_weap_M6"
				};
				magazines[]=
				{
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"rhs_mag_200rnd_127x99_mag_Tracer_Red",
					"1Rnd_FGM148_AT",
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
				discreteDistance[]={100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex=2;
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
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_damage.rvmat",
				"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_destruction.rvmat",
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
			"Camo_Acc",
			"Camo_AccA",
			"Camo_DUKE",
			"Camo_fc01",
			"Camo_fc02",
			"Camo_wc01",
			"Camo_wc02",
			"camoslat",
			"camo_crowsj",
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
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
			"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
			"a3\armor_f\data\cage_olive_co.paa",
			"m1126_crows_j\tex\m1126_crows_j_co.paa"
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
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_wd_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"a3\armor_f\data\cage_olive_co.paa",
					"m1126_crows_j\tex\m1126_crows_j_co.paa"
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
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_od_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_od_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_od_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_od_co.paa",
					"a3\armor_f\data\cage_sand_CO.paa",
					"m1126_crows_j\tex\m1126_crows_j_co.paa"
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
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
					"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
					"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
					"a3\armor_f\data\cage_sand_CO.paa",
					"m1126_crows_j\tex\m1126_crows_j_D_co"
				};
			};
		};
	};
	class rhsusf_stryker_m1126_CJ_wd: rhsusf_stryker_m1126_CJ
	{
		author="[CN]Lurker1011,RHS,真红战队";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_combatcrewman";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="\m1126_crows_j_c\ui\m1126_crowsJ_wd_pre.jpg";
	};
	class rhsusf_stryker_m1126_CJ_d: rhsusf_stryker_m1126_CJ
	{
		author="[CN]Lurker1011,RHS,真红战队";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_combatcrewman";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="\m1126_crows_j_c\ui\m1126_crowsJ_d_pre.jpg";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
			"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
			"a3\armor_f\data\cage_sand_CO.paa",
			"m1126_crows_j\tex\m1126_crows_j_D_co"
		};
	};
	class rhsusf_stryker_m1126_CJMK19: rhsusf_stryker_m1126_CJ
	{
		displayName="M1126 (Mk19/Javelin)";
		class CargoTurret;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"RHS_MK19_CROWS_M153",
					"FGM148_veh_AT",
					"rhsusf_weap_M6"
				};
				magazines[]=
				{
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"RHS_96Rnd_40mm_MK19_M430A1",
					"1Rnd_FGM148_AT",
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
				discreteDistance[]={100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex=2;
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
		class AnimationSources: AnimationSources
		{
			class hide_weapons
			{
				source="user";
				animPeriod=0.001;
				initPhase=1;
			};
		};
	};
	class rhsusf_stryker_m1126_CJMK19_wd: rhsusf_stryker_m1126_CJMK19
	{
		author="[CN]Lurker1011,RHS,真红战队";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="rhs_faction_usarmy_wd";
		crew="rhsusf_army_ucp_combatcrewman";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="\m1126_crows_j_c\ui\m1126_crowsJ_wd_pre.jpg";
	};
	class rhsusf_stryker_m1126_CJMK19_d: rhsusf_stryker_m1126_CJMK19
	{
		author="[CN]Lurker1011,RHS,真红战队";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="rhs_faction_usarmy_d";
		crew="rhsusf_army_ocp_combatcrewman";
		rhs_decalParameters[]=
		{
			"['Label', 'dec_hull', 'HullDecals_Stryker_WD']"
		};
		editorPreview="\m1126_crows_j_c\ui\m1126_crowsJ_d_pre.jpg";
		hiddenSelectionsTextures[]=
		{
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_hull_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_parts_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_slat_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_crows_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_wheels_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_co.paa",
			"rhsusf\addons\rhsusf_stryker\data\rhsusf_m1126_acc_d_ca.paa",
			"rhsusf\addons\rhsusf_m1a1\DUKE\data\duke_antennae_c_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMFC\data\rhsusf_mfc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
			"rhsusf\addons\rhsusf_props\jerrycans\scepterMWC\data\rhsusf_mwc_d_co.paa",
			"a3\armor_f\data\cage_sand_CO.paa",
			"m1126_crows_j\tex\m1126_crows_j_D_co"
		};
	};
};
class B_30mm_HE;
class B_30mm_MP;
class B_30mm_APFSDS;
class MissileBase;
class M_Titan_AT;
class CfgAmmo
{
	class lk_ammo_M_fgm148_AT: M_Titan_AT
	{
		model="\rhsusf\addons\rhsusf_weapons\FGM148\fgm148_missile";
		submunitionAmmo="rhs_ammo_M_fgm148_AT_penetrator";
		effectsMissileInit="RocketBackEffectsStaticRPG";
		initTime=0.1;
		manualControl = 0;
	};
};
class VehicleMagazine;
class CfgMagazines
{
	class 1Rnd_FGM148_AT: VehicleMagazine
	{
		author="[CN]Lurker1011";
		displayName="FGM-148 Missile";
		displayNameShort="FGM-148";
		ammo="lk_ammo_M_fgm148_AT";
		count=1;
		initSpeed=25;
		maxLeadSpeed=350;
		tracersEvery=0;
		nameSound="missiles";
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
class missiles_titan;
class rhs_weap_m240veh;
class CfgWeapons
{
	class FGM148_veh_AT: missiles_titan
	{
		displayName="FGM-148 Javelin Missile";
		showAimCursorInternal=0;
		magazineReloadTime=25;
		magazines[]=
		{
			"1Rnd_FGM148_AT",
			"2Rnd_GAT_missiles",
			"2Rnd_GAT_missiles_O",
			"5Rnd_GAT_missiles",
			"4Rnd_GAA_missiles",
			"4Rnd_Titan_long_missiles",
			"4Rnd_Titan_long_missiles_O"
		};
		weaponLockDelay=3;
		weaponLockSystem=2;
		cmImmunity=0.5;
	};
};
class cfgMods
{
	author="[CN]Lurker1011";
	timepacked="1725836471";
};
