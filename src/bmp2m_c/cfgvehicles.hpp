/*	Vehicle classes	*/
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
class DefaultEventHandlers;
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
class Optics_Gunner_MBT_03: Optics_Armored
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
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_MBT_01: Optics_Armored
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
		class CommanderOptics;
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
					class CommanderOptics: CommanderOptics
					{
						class ViewGunner;
					};
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
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
		class EventHandlers;
	};
	class bmp2mbzk_base: Tank_F 
	{
		vehicleClass = "Armored";
		displayName = "BMP-2M(Berezhok)";
		accuracy = 0.3;
        author="[CN]Lurker1011";
        destrType="DestructDefault";
		model = "\bmp2m\bmp2m_bzk.p3d";
		picture="\rhsafrf\addons\rhs_bmp\pictures\rhs_bmp1p_pic_ca.paa";
		Icon="\rhsafrf\addons\rhs_bmp\data\icomap_bmp2_CA.paa";
        editorSubcategory = "EdSubcat_APCs";//EdSubcat_APCs /rhs_EdSubcat_ifv
		unitInfoType="RHS_RscUnitInfoEastTank";
		weaponsGroup1=1+128;
		weaponsGroup4=64;
		driverCanSee="2+4+8";
		gunnerCanSee="2+4+8";
		commanderCanSee="2+4+8";
	    #include "CfgSounds.hpp"
		#include "physx.hpp"
		// AI references
		cost = 1500000;
		damageResistance = 0.02;
		crewVulnerable = false;
		enableGPS=1;
		armor = 600;
		armorStructural = 6;	
		class HitPoints: HitPoints 
		{
			class HitHull: HitHull
			{
				armor=0.8;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_point";
				visual="zbytek";
				passThrough=0.1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
				depends="(HitArmor)*0.1";
			};
			class HitEngine: HitEngine
			{
				armor=0.60000002;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_point";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					class RHS_Engine_Smoke
					{
						simulation="particles";
						type="SmallWreckSmoke";
						position="exhaust";
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
				};
			};
			class HitLTrack: HitLTrack
			{
				material=-1;
				armorComponent="hit_trackL";
				name="hit_trackL_point";
				visual="pas_L";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitRTrack: HitRTrack
			{
				material=-1;
				armorComponent="hit_trackR";
				name="hit_trackR_point";
				visual="pas_P";
				radius=0.2;
				armor=-650;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitFuelTank_Left
			{
				armor=-80;
				material=-1;
				name="Hit_Fuel_left_points";
				armorComponent="Hit_Fuel_L";
				visual="-";
				passThrough=0;
				minimalHit=0.30000001;
				explosionShielding=0;
				radius=0.1;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name="Hit_Fuel_right_points";
				armorComponent="Hit_Fuel_R";
			};
			class HitFuelTank_int : HitFuelTank_Left
			{
				name="hit_fuel_point";
				armorComponent="Hit_Fuel_I";
			};
			class HitFuel
			{
				armor=1;
				name="hit_fuel_point";
				armorComponent="";
				visual="-";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.01;
				depends="(HitFuelTank_Left+HitFuelTank_Right)*0.3+(HitFuelTank_int)*0.5";
			};
			class HitArmor
			{
				armor = 1;
				material = -1;
				armorComponent="hit_Armor";
				name = "hit_Armor_points";
				visual="Armor";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 2.0;
				radius = 0.1;
				isTurret=0;
			};
			#include "HitPoints_ERAs.hpp"
        };

        driverDoor="hatchdriver";
		driverOpticsModel="\A3\weapons_f\reticle\Optics_Driver_01_F.p3d";
		viewDriverInExternal=1;
		LODDriverTurnedOut = 1100;//-1=Default LOD; 1=first resolution LOD; 1000=Gunnerview; 1100=Pilotview; 1200=Cargoview. 
		LODDriverTurnedIn = 1201;
		LODDriverOpticsIn = 1100;
		driverAction="RHS_BMP3_driverout";
		driverInAction="RHS_BMP3_driver";
		driverForceOptics = 0;
		driverLeftHandAnimName="steering";
		driverRightHandAnimName="steering";
		driverLeftLegAnimName = "";
		driverRightLegAnimName = "";
		viewDriverShadowAmb = 0.5;
		viewDriverShadowDiff = 0.05;
		driverInfoPanelCameraPos = "driverview_old";
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initFov = 0.45;
			minFov = 0.23;
			maxFov = 0.45;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = 0;
			initAngleY = 0;
			initFov = 0.9;
			minFov = 0.25;
			maxFov = 1.25;
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.075;
			maxMoveX = 0.075;
			minMoveY = -0.075;
			maxMoveY = 0.075;
			minMoveZ = -0.075;
			maxMoveZ = 0.1;
		};
		class DriverOpticsIn
		{
			class Wide: ViewOptics
			{
				camPos="view_driver";
				opticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				visionMode[]=
				{
					"Normal"
				};
				//hitpoint="Hit_Optic_Driver";
			};
			class Narrow : Wide
			{
				camPos="view_driver";
				opticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tnpo170a";
				initFov = 0.75;
				minFov = 0.75;
				maxFov = 0.75;
			};
		};
		hiddenSelections[]=
		{
			"camo1",//Hull
			"camo2",//ERA
			"camo3",//turret
			"camo4",//wheels
			"camo5",//Berezhok_kit
			"n1",
			"n2",
			"n3"
		};
		// Damage textures - for sections: zbytek, vez, zbran, vezVelitele, zbranVelitele,
		class Damage {
			tex[] = {};
			mat[] = 
			{
                "bmp2m\data\bmp2m_hull.rvmat",
				"bmp2m\data\bmp2m_hull_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat",
				
				"bmp2m\data\bmp2m_armour.rvmat",
				"bmp2m\data\bmp2m_armour_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat",
				
				"bmp2m\data\bmp2m_turret.rvmat",
				"bmp2m\data\bmp2m_turret_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat",
				
				"bmp2m\data\bmp2m_wheels.rvmat",
				"bmp2m\data\bmp2m_wheels_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat",
				
				"bmp2m\data\bmp2m_Berezhok.rvmat",
				"bmp2m\data\bmp2m_Berezhok_damage.rvmat",
				"bmp2m\data\bmp2m_destruction.rvmat"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\bmp2m\data\bmp2m_hull_co.paa",
			"\bmp2m\data\bmp2m_armour_co.paa",
			"\bmp2m\data\bmp2m_turret_co.paa",
			"\bmp2m\data\bmp2m_wheels_co.paa",
			"\bmp2m\data\BMP2M_Berezhok_co.paa"

		};
		class TextureSources
		{

			class Olive
			{
				displayName="Olive";
				author="Lurker1011";
				textures[]=
				{
                    "\bmp2m\data\bmp2m_hull_co.paa",
					"\bmp2m\data\bmp2m_armour_co.paa",
					"\bmp2m\data\bmp2m_turret_co.paa",
					"\bmp2m\data\bmp2m_wheels_co.paa",
					"\bmp2m\data\BMP2M_Berezhok_co.paa"
				};
				factions[]=
				{
				};
			};
			class sand
			{
				displayName="sand";
				author="Lurker1011";
				textures[]=
				{
                    "\bmp2m\data\bmp2m_hull_d_co.paa",
					"\bmp2m\data\bmp2m_armour_d_co.paa",
					"\bmp2m\data\bmp2m_turret_d_co.paa",
					"\bmp2m\data\bmp2m_wheels_d_co.paa",
					"\bmp2m\data\BMP2M_Berezhok_d_co.paa"
				};
				factions[]=
				{
				};
			};
		};
		textureList[]=
		{
			"Olive",1.0
		};
		class AnimationSources : AnimationSources
		{
			class muzzle_hide_cannon{source="reload";weapon="lk_weap_2a42"};
			class muzzle_rot_cannon {source = "ammorandom"; weapon = "lk_weap_2a42";};
			class muzzle_rot_coax {source = "ammorandom"; weapon = "rhs_weap_pkt";};
			class recoil_source {source = "reload"; weapon = "lk_weap_2a42";};
			class smokecap_revolving_source
			{
				source="revolving";
				weapon="rhs_weap_902a";
			};

			class door_l
			{
				source="door";
				animPeriod=0.8;
				sound="RHS_HMMWV_Door";
				soundPosition="door_l_axis";
				initPhase=0;
			};
			class door_r : door_l
			{
				soundPosition="door_r_axis";
			};
			class hatch_left
			{
				displayName="hatch_left";
				source="door";
				animPeriod=0.6;
				initPhase=0;
			};
			class hatch_right : hatch_left 
			{
				displayName="hatch_right";
			};
			class hatch_front
			{
				source="door";
				animPeriod=0.6;
				initPhase=0;
			};
			class slats_hull_hide
			{
				source="user";
				displayName="show the slats of hull";
				animPeriod=0.01;
				initPhase=1;
			};
			class slats_turret_hide
			{
				source="user";
				displayName="show the slats of turret";
				animPeriod=0.01;
				initPhase=1;
			};
			class slat_door_l_hide
			{
				source="user";
				displayName="show the slats of left door";
				animPeriod=0.01;
				initPhase=1;
			};
			class slat_door_r_hide
			{
				source="user";
				displayName="show the slats of right door";
				animPeriod=0.01;
				initPhase=1;
			};
			class factory_armour_hide
			{
				source="user";
				displayName="show the factory armour";
				animPeriod=0.01;
				initPhase=0;
			};
			/* for rhs FCS system */
			class elev
			{
				source="user";
				animperiod=0.0016;
			};
			class elev_bank
			{
				source="user";
				animperiod=0.0016;
			};
			class lead
			{
				source="user";
				animperiod=0.001;
			};
			class offset
			{
				source="user";
				animperiod=0.00019999999;
			};
 			class TCOverrideTurret
			{
				source="user";
				animPeriod=4;
				initPhase=0;
			}; 
			#include "AnimationSource_ERAs.hpp"
	    };
		class UserActions
		{
			class OpenCargoDoor_left
			{
				displayName="Open left cargo door";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'door_l' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['door_l', 1];this setVariable ['door_l_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor_left: OpenCargoDoor_left
			{
				displayName="Close left cargo door";
				condition="this doorPhase 'door_l' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['door_l', 0];this setVariable ['door_l_handler',0,true]";
			};
			class OpenCargoDoor_right
			{
				displayName="Open right cargo door";
				position="pos driver";
				radius=15;
				showwindow=0;
				condition="this doorPhase 'door_r' == 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['door_r', 1];this setVariable ['door_r_handler',1,true]";
				onlyforplayer=1;
				shortcut="user12";
			};
			class CloseCargoDoor_right: OpenCargoDoor_right
			{
				displayName="Close right cargo door";
				condition="this doorPhase 'door_r' > 0 and {(call rhsusf_fnc_findPlayer) in this};";
				statement="this animateDoor ['door_r', 0];this setVariable ['door_r_handler',0,true]";
			};

		};
		class EventHandlers: EventHandlers
		{
		};

		
		class Exhausts 
		{
			class Exhaust1 {
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankSide";
			};
            class Exhaust2
			{
				position="exhaust2";
				direction="exhaust_dir2";
				effect="ExhaustEffectTankSide";
			};
		};
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="commanderview";
					pointDirection="commanderview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.305731;
					turret[] = {0,0};
				};
				BBoxes[]=
				{
					"PIP_COM_TL",
					"PIP_COM_TR",
					"PIP_COM_BL",
					"PIP_COM_BR"
				};
			};

			class gunner_display
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="gunnerview";
					pointDirection="gunnerview_dir";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.5;
					turret[] = {0};
				};
				BBoxes[]=
				{
					"PIP_GUN_TL",
					"PIP_GUN_TR",
					"PIP_GUN_BL",
					"PIP_GUN_BR"
				};
			};
			class crew_front_display_1
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP_1_POS";
					pointDirection="PIP_1_DIR";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.8;
					turret[] = {-1};
				};
				BBoxes[]=
				{
					"PIP_1_TL",
					"PIP_1_TR",
					"PIP_1_BL",
					"PIP_1_BR"
				};
			};
			class crew_front_display_2
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP_2_POS";
					pointDirection="PIP_2_DIR";
					renderVisionMode=0;
					renderQuality=2;
					fov=0.80000001;
					turret[] = {-1};
				};
				BBoxes[]=
				{
					"PIP_2_TL",
					"PIP_2_TR",
					"PIP_2_BL",
					"PIP_2_BR"
				};
			};
		};
		class Reflectors 
		{
			class Left 
			{
				color[] 	= {1900, 1300, 950};
				ambient[]	= {5,5,5};
				position 	= "Light_L";
				direction 	= "Light_L_end";
				hitpoint 	= "Light_L";
				selection	= "Light_L";
				size 		= 1;
				innerAngle 	= 60;
				outerAngle 	= 90;
				coneFadeCoef = 10;
				intensity 	= 1; //17.5
				useFlare 	= 0;
				dayLight 	= 0;
				flareSize 	= 1.0;
				class Attenuation {
					start 		= 1.0;
					constant 	= 0;
					linear 		= 0;
					quadratic 	= 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Left2: Left 
			{
				position 	= "light_L_flare";
				useFlare 	= 1;
			};
            class right: left
			{
			    position 	= "Light_R";
				direction 	= "Light_R_end";
				hitpoint 	= "Light_R";
				selection	= "Light_R";
			};
			class right2: right
			{
				position 	= "light_R_flare";
				useFlare 	= 1;
			};
			
		};
		aggregateReflectors[] = 
		{
			{
				"Left",
				"Left2"
			};
			{
				"right",
				"right2"
			};
		};
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoDoors[]=
		{
			"ramp_door"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 2"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 2 dir"
		};
		#include "CfgTurret.hpp"
		#include "CfgSimpleObject.hpp"
		
	};
	class bmp2mbzk : bmp2mbzk_base
	{
		#include "CfgComponents.hpp"
	};
	
	/*	Public class	*/
	class O_bmp2mbzk: bmp2mbzk
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
        faction = "OPF_F";
		crew = "O_crew_F";
		typicalCargo[] = {"O_Soldier_F"};
		accuracy = 1000;
		displayName = "BMP-2M(Berezhok)";	
		author="[CN]Lurker1011";
		editorPreview="rhsafrf\addons\rhs_editorPreviews\data\rhs_bmp2e_tv.paa";
		transportSoldier = 7;
		cargoAction[] = 
		{
			"RHS_BMP_Cargo"
		};
		cargoDoors[]=
		{
			"door_l",
			"door_r",
			"door_l",
			"door_r",
			"door_l",
			"door_r",
			"door_l"
		};
		memoryPointsGetInCargo[]=
		{
			"pos cargo",
			"pos cargo 2",
			"pos cargo",
			"pos cargo 2",
			"pos cargo",
			"pos cargo 2",
			"pos cargo"
		};
		memoryPointsGetInCargoDir[]=
		{
			"pos cargo dir",
			"pos cargo 2 dir",
			"pos cargo dir",
			"pos cargo 2 dir",
			"pos cargo dir",
			"pos cargo 2 dir",
			"pos cargo dir"
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
		cargoProxyIndexes[]={1,2,3,4,5,6,7};
		getInProxyOrder[]={7,1,4,2,5,3,6};
	};
	
	class MSV_bmp2mbzk: o_bmp2mbzk
	{
		editorSubcategory="rhs_EdSubcat_ifv";
		crew="rhs_msv_emr_armoredcrew";
		faction="rhs_faction_msv";
		vehicleClass="rhs_vehclass_tank";
	};
	
	class TV_bmp2mbzk: o_bmp2mbzk
	{
		editorSubcategory="rhs_EdSubcat_ifv";
		crew="rhs_msv_emr_armoredcrew";
		faction="rhs_faction_tv";
		vehicleClass="rhs_vehclass_tank";
	};


};
