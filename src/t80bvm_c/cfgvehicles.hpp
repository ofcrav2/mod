/*	Vehicle classes	*/
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
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
			class HitFuel;
		};
		class Sounds: Sounds 
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};

	class T80BVM_base: Tank_F 
	{
        vehicleClass = "Armored";
		displayName = "T80BVM";
		accuracy = 0.3;
        author="[CN]Lurker1011";
		unitInfoType="RHS_RscInfoT80";
		model = "\t80bvm\T80BVM";
		picture="\rhsafrf\addons\rhs_t80\data\icon\rhs_t80_pic_ca.paa";
		Icon="\rhsafrf\addons\rhs_t72\data\icomap_t72_CA.paa";
		destrType="DestructDefault";
	    #include "sounds.hpp"
		#include "physx.hpp"
        #include "CfgComponents.hpp"
		// AI references
		cost = 1500000;
		damageResistance = 0.02;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		maxFordingDepth = -0.75;
		extCameraPosition[] = {0,2.5,-8};
		crewVulnerable = false;
		driverInfoPanelCameraPos = "driverview_panel";
		LODDriverOpticsIn=1201;////-1=Default LOD; 1=first resolution LOD; 1000=Gunnerview; 1100=Pilotview; 1200=Cargoview. 
		LODDriverTurnedin = 1100;
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";//\A3\weapons_f\reticle\Optics_Driver_01_F.p3d
		viewDriverInExternal=1;
		LODDriverTurnedOut=0;
		driverAction = "driver_apcwheeled2_out";
		driverInAction = "Driver_MBT_02_F_in";
		driverLeftHandAnimName = "drivingstick_left";
		driverRightHandAnimName = "drivingstick_right";
		driverLeftLegAnimName = "pedal_brake";
		driverRightLegAnimName = "pedal_thrust";
		viewDriverShadowAmb = 0.5;
		viewDriverShadowDiff = 0.05;
		driverForceOptics = 0;
		weapons[]=
		{
			"rhs_weap_smokegen"
		};
		magazines[]=
		{
			"rhs_mag_smokegen"
		};
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initFov = 0.25;
			minFov = 0.13;
			maxFov = 0.25;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = -5;
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
				camPos="driverview";
				opticsModel="\A3\weapons_f\reticle\optics_empty";
				visionMode[]=
				{
					"Normal"
				};
				//hitpoint="Hit_Optic_Driver";
			};
			class Narrow : Wide
			{
				camPos="driverview_old";
				opticsModel="\A3\weapons_f\reticle\Optics_Driver_01_F";
				initFov = 0.75;
				minFov = 0.75;
				maxFov = 0.75;
			};
		};

		// Damage setup
		armor = 700;
		armorStructural = 6;	// Two hulls of same type should take same amount of damage. Use armorStructural to counter the effect of vehicle size on its armor.


		class HitPoints: HitPoints 
		{
			class HitHull: HitHull 
			{	
				armor=0.75;
				material=-1;
				armorComponent="hit_hull";
				name="hit_hull_points";
				visual="zbytek";
				passThrough=0.5;
				minimalHit = 0.14;
				explosionShielding = 2.0;
				radius = 0.2;
			};
			class HitEngine: HitEngine
			{
				armor=-150;
				material=-1;
				name="motor";
				visual="zbytek";
				passThrough=0;
				minimalHit=0.14;
				explosionShielding=0.0099999998;
				radius=0.23;
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
			class HitLTrack: HitLTrack {
				armor=0.5;
				material=-1;
				armorComponent="hit_LTrack";
				name="pas_L";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.1;
			};
			class HitRTrack: HitRTrack {
				armor=0.5;
				material=-1;
				armorComponent="hit_RTrack";
				name="pas_P";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.1;
			};
			class HitFuelTank_Left
			{
				armor=-80;
				material=-1;
				name="Hit_FuelTank_Left";
				armorComponent="Hit_FuelTank_Left";
				visual="-";
				passThrough=0;
				minimalHit=0.30000001;
				explosionShielding=0;
				radius=0.1;
			};
			class HitFuelTank_Right: HitFuelTank_Left
			{
				name="Hit_FuelTank_Right";
				armorComponent="Hit_FuelTank_Right";
			};
			class HitFuel
			{
				armor=999;
				name="Hit_Fuel";
				armorComponent="Hit_Fuel";
				visual="-";
				passThrough=0;
				minimalHit=1;
				explosionShielding=0;
				radius=0.0099999998;
				depends="(HitFuelTank_Left+HitFuelTank_Right)*0.5";
			};
			class HitArmor
			{
				armor = 1;
				material = -1;
				armorComponent="hit_Armor";
				name = "hit_Armor_points";
				visual="Armor";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 2.0;
				radius = 0.1;
				isTurret=0;
			};
			#include "HitPoints_ERAs.hpp"					
        };//ERA END
        #include "CfgTurret.hpp"

		hiddenSelections[]=
		{
			"camo1",//hull
			"camo2",//turret
			"camo3",//era
			"camo4",//nvst
			"camo5",//wheels
			"camo6"//slat
		};
		hiddenSelectionsTextures[]=
		{
			"\t80bvm\tex\t80bvm_hull_co.paa",
			"\t80bvm\tex\t80bvm_turret_co.paa",
			"\t80bvm\tex\t80bvm_era_co.paa",
			"\t80bvm\tex\t80bvm_nvst_co.paa",
			"\t80bvm\tex\t80bvm_wheels_co.paa",
			"\t80bvm\tex\t80bvm_slat_co.paa"
		};
		class textureSources
		{
			class standard
			{
				displayName="Standard";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm\tex\t80bvm_hull_co.paa",
					"\t80bvm\tex\t80bvm_turret_co.paa",
					"\t80bvm\tex\t80bvm_era_co.paa",
					"\t80bvm\tex\t80bvm_nvst_co.paa",
					"\t80bvm\tex\t80bvm_wheels_co.paa",
					"\t80bvm\tex\t80bvm_slat_co.paa"
				};
			};
			class standard_2
			{
				displayName="Standard(black rubber)";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_2_co.paa",
					"\t80bvm\tex\t80bvm_turret_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_2_co.paa",
					"\t80bvm\tex\t80bvm_nvst_co.paa",
					"\t80bvm\tex\t80bvm_wheels_co.paa",
					"\t80bvm\tex\t80bvm_slat_co.paa"
				};
			};
			class sand
			{
				displayName="Sand";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_turret_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_nvst_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_wheels_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_slat_D_co.paa"
				};
			};
			class sand_2
			{
				displayName="Sand(black rubber)";
				author="Lurker1011";
				factions[]={};
				textures[]=
				{
					"\t80bvm_camo\tex\t80bvm_hull_D2_co.paa",
					"\t80bvm_camo\tex\t80bvm_turret_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_era_D2_co.paa",
					"\t80bvm_camo\tex\t80bvm_nvst_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_wheels_D_co.paa",
					"\t80bvm_camo\tex\t80bvm_slat_D_co.paa"
				};
			};
		};
		class AnimationSources : AnimationSources
		{
			class muzzle_hide_cannon{source="reload";weapon="rhs_weap_2a46m_2"};
			class muzzle_rot_cannon {source = "ammorandom"; weapon = "rhs_weap_2a46m_2";};
			class muzzle_rot_coax {source = "ammorandom"; weapon = "rhs_weap_pkt_bvm";};
			class ReloadAnim
			{
				source="reload";
				weapon="rhs_weap_nsvt_bvm";
			};
			class ReloadMagazine : ReloadAnim
			{
				source="reloadmagazine";
			};
			class Revolving : ReloadAnim
			{
				source="revolving";
			};
			class muzzle_rot_MG : ReloadAnim
			{
				source="ammorandom";
			};
			class muzzle_hide_MG : ReloadAnim
			{
				source="reload";
			};
			class recoil_source 
			{
				/* source = "reload";
				weapon = "rhs_weap_2a46m_2"; */
				
				source="door";
				animPeriod=6;
				initPhase=0;
			};
			class TCOverrideTurret
			{
				source="user";
				animPeriod=4;
				initPhase=0;
			};
			class reload_source
			{
				weapon="rhs_weap_2a46m_2";
				source="reload";
			};
			class autoloader
			{
				source="user";
				animPeriod=3.25;
				initPhase=0;
			};
			class turretHide: autoloader
			{
				animPeriod=1e-010;
			};
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
			class reload_magazine_source: reload_source
			{
				source="reloadMagazine";
			};
			class HidePlate
			{
				displayName="Hide Plate";
				author="Lurker1011";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-0;
			};

			class showFeulTank
			{
				displayName="Additional fuel tanks(uselessness)";
				author="Lurker1011";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};


			#include "CfgAnimationsources.hpp"
	    };

		// Damage textures - for sections: zbytek, vez, zbran, vezVelitele, zbranVelitele,
		class Damage 
		{
			tex[] = {};
			mat[] = {
				"t80bvm\tex\t80bvm_hull.rvmat",
				"t80bvm\tex\t80bvm_hull_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				
				"t80bvm\tex\t80bvm_turret.rvmat",
				"t80bvm\tex\t80bvm_turret_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				
				"t80bvm\tex\t80bvm_era.rvmat",
				"t80bvm\tex\t80bvm_era_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				
				"t80bvm\tex\t80bvm_nvst.rvmat",
				"t80bvm\tex\t80bvm_nvst_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				
				"t80bvm\tex\t80bvm_wheels.rvmat",
				"t80bvm\tex\t80bvm_wheels_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat",
				
				"t80bvm\tex\t80bvm_slat.rvmat",
				"t80bvm\tex\t80bvm_slat_damage.rvmat",
				"t80bvm\tex\t80bvm_destruction.rvmat"
			};
		};

/*		smokeLauncherGrenadeCount = 8; //Number of smoke shells launched at once
		smokeLauncherVelocity = 14; //Velocity which smoke shells are launched at
		smokeLauncherOnTurret = 1; //0 if smoke launchers are on hull, 1 if on turret
		smokeLauncherAngle = 120; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)
*/
		class ViewOptics: ViewOptics {
			visionMode[] = {"Normal","NVG"};
		};

		class Exhausts {
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
		class compartmentsLights
		{
			class Comp1
			{
				class Light1
				{
					color[] = {15,20,20};
					ambient[] = {0,0,0};
					intensity = 1;
					size = 0;
					useFlare = 0;
					flareSize = 0;
					flareMaxDistance = 0;
					dayLight = 0;
					blinking = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 70;
						hardLimitStart = 0.15;
						hardLimitEnd = 1.15;
					};
					point = "light_interior1";
				};
				/*class Light2: Light1
				{
					point = "light_interior2";
					color[] = {15,20,20};
					ambient[] = {0,0,0};
					intensity = 0.8;
				};
				class Light3: Light1
				{
					point = "light_interior3";
					color[] = {15,20,20};
					ambient[] = {0,0,0};
					intensity = 0.7;
				};*/
			};
		};
		class Reflectors 
		{
			class Left 
			{
				color[] 	= {1900, 1300, 950};
				ambient[]	= {5,5,5};
				position 	= "Light_r";
				direction 	= "Light_r_end";
				hitpoint 	= "Light_r";
				selection	= "light_l";
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
				position 	= "light_R_flare";
				useFlare 	= 1;
			};

		};
		class RenderTargets
		{
			/*class commander_display
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "commanderview";
					pointDirection = "PIP1_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.305731;
					turret[] = {0,0};
				};
				BBoxes[] = {"PIP_COM_TL","PIP_COM_TR","PIP_COM_BL","PIP_COM_BR"};
			};*/
			class driver_display
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.8;
					turret[] = {-1};
				};
				BBoxes[] = {"PIP_DRV_TL","PIP_DRV_TR","PIP_DRV_BL","PIP_DRV_BR"};
			};
		};
		aggregateReflectors[] = {{"Left","Left2"}};
		#include "CfgUserActions.hpp"
		#include "CfgMFD.hpp"
	};
	
	/*	Public class	*/
	class O_T80BVM: T80BVM_base 
	{
		
		scope = 2;
		scopeCurator = 2;
		side = 0;
        faction = "OPF_F";
		crew = "O_T_Crew_F";
		typicalCargo[] = {"O_T_Crew_F"};
		accuracy = 1000;
		displayName = "T80BVM(obr.2024g)";
		author="[CN]Lurker1011";
		editorPreview="t80bvm_c\ui\t80bvm_pre.jpg";
	};
	class rhs_tv_t80bvm: O_T80BVM
	{
		vehicleClass = "rhs_vehclass_tank";
		editorSubcategory="rhs_EdSubcat_tank";
		faction = "rhs_faction_tv";
		crew = "rhs_msv_crew";
		typicalCargo[] = {"rhs_msv_crew"};
	};
	#include "Cfg_t80bvm_2.hpp"
};
class CfgNonAIVehicles
{
	class ProxyRetex;
};