		class Turrets: Turrets 
		{
			class MainTurret: MainTurret 
			{
				class Turrets: Turrets 
				{
					class CommanderOptics: CommanderOptics 
					{
						// Animation class
						body = "obsTurret";
						gun = "obsGun";

						// Animation source
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";

						// Servos
						maxHorizontalRotSpeed = 1.8;	// 1 = 45°/sec
						maxVerticalRotSpeed = 1.8;		// 1 = 45°/sec
						stabilizedInAxes = 3;
						soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};
						minElev=-20;
						maxElev=+30;
						initElev=0;
						minTurn=-360;
						maxTurn=+360;
						initTurn=0;

						// Weapon and magazines
						memoryPointGun = "usti hlavne2";
						gunBeg = "usti hlavne2";
						gunEnd = "konec hlavne2";
						weapons[] = {SmokeLauncher};	// you may need different weapon class to provide firing effects emit from proper position.
						magazines[] = {SmokeLauncherMag};
						// FCS
						turretInfoType = "rhs_gui_optic_TKN4S_rangefinder";//RHS_RscWeaponTKN3_FCS  RscOptics_APC_Wheeled_03_commander rhs_gui_optic_TKN4S_rangefinder
						discreteDistance[] = 
						{
							100,200,300,400,500,600,700,800,900,1000,
							1100,1200,1300,1400,1500,1600,1700,1800,1900,2000
						};
						discreteDistanceInitIndex = 5;

						// Optics view
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics= "commanderview";
//						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";	// leave "" to disable optics view
						gunnerOpticsEffect[] = {};	// post processing effets
						gunnerHasFlares = 1;	// flare visual effect when looking at light source

					    class OpticsIn 
				        {
							class day1
							{
								hitpoint="Hit_Optic_TKN4S";
								opticsDisplayName="DAY";
								initAngleX=0;
								minAngleX=-30;
								maxAngleX=30;
								initAngleY=0;
								minAngleY=-100;
								maxAngleY=100;
								initFov=0.69999999;
								minFov=0.69999999;
								maxFov=0.69999999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s.p3d";
							};
							class day2: day1
							{
								opticsDisplayName="DAYZOOM";
								initFov=0.087499999;
								minFov=0.087499999;
								maxFov=0.087499999;
								visionMode[]=
								{
									"Normal"
								};
								gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_tkn4s_zoom.p3d";
							};
							class night3: day1
							{
								opticsDisplayName="NIGHT";
								initFov=0.1;
								minFov=0.1;
								maxFov=0.1;
								visionMode[]=
								{
									"NVG"
								};
								gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_empty";
							};
				        };
						
						gunnerAction="Commander_MBT_01_cannon_F_out";
						gunnerInAction="Commander_MBT_01_cannon_F_in";
						personTurretAction="vehicle_turnout_2";
						isPersonTurret=1;
						gunnerGetInAction = GetInHigh;
						gunnerGetOutAction = GetOutHigh;
						startEngine = 0;	// Turning this turret should not turn engine on.
						viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
						outGunnerMayFire = 0;	// Turn off to make player able to look around freely outside optics view.
						inGunnerMayFire = 1;	// Turn off to make player able to look around freely outside optics view.
                        LODTurnedIn=1000;//Value: -1 or 0 = Default LOD; 1 = first resolution LOD; 1000 = Gunnerview; 1100 = Pilotview; 1200 = Cargoview. 
				        LODTurnedOut=1000;
						class HitPoints {
							class HitComTurret	
							{
								armor = 0.3;
								material = -1;
								armorComponent="hit_com_turret";
								name = "vezVelitele";
								visual="vezVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
								isTurret=1;
							};
							class HitComGun	{
								armor = 0.3;
								material = -1;
								armorComponent="hit_com_gun";
								name = "zbranVelitele";
								visual="zbranVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
								isGun=1;
							};
						};
						selectionFireAnim = "";
					};
					class CommanderMG: CommanderOptics
					{
						gunnername="Commander MG";
						proxyindex=2;
						dontCreateAi=1;
						cantCreateAI=1;
						isPersonTurret=0;
						outGunnerMayFire=1;
						inGunnerMayFire=1;
						memoryPointGun="usti hlavne2";
						gunBeg="usti hlavne2";
						gunEnd="konec hlavne2";
						body="mg_turret";
						gun="mg_gun";
						animationSourceBody="mg_turret";
						animationSourceGun="mg_gun";
						animationSourceStickX="CommanderTurret_Inertia";
						animationSourceStickY="CommanderGun_Inertia";
						gunnerDoor="";
						stabilizedInAxes=0;
						canHideGunner=0;
						memoryPointGunnerOutOptics="commander_out_view";
						gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
						soundAttenuationTurret="HeliAttenuationGunner";
						disableSoundAttenuation=0;
						LODOpticsIn=1000;////-1=Default LOD; 1=first resolution LOD; 1000=Gunnerview; 1100=Pilotview; 1200=Cargoview. 
						LODOpticsOut=1000;
						gunnerLeftHandAnimName="";
						gunnerRightHandAnimName="mg_handle2";
						gunnerLeftLegAnimName="leg_L";
				        gunnerRightLegAnimName="leg_R";
						minElev=-10;
						maxElev=60;
						minTurn=-180;
						maxTurn=180;
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						turretInfoType="RscOptics_Offroad_01";
						optics=0;
						usePip=0;
						gunnerOutOpticsShowCursor=1;
						gunnerAction="rhs_t80_commander_out";
						gunnerInAction="rhs_T80_Commander_in";
						weapons[]=
						{
							"rhs_weap_nsvt_bvm"
						};
						magazines[]=
						{
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150",
							"rhs_mag_127x108mm_150"
						};
						selectionFireAnim="muzzlehmg";
						
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.6;
								minFov=0.6;
								maxFov=0.6;
							};
							class Medium: Wide
							{
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
							};
							class Narrow: Wide
							{
								camPos="nsv_gunnerview";
								visionMode[]=
								{
									"Normal"
								};
								initFov=0.25;
								minFov=0.25;
								maxFov=0.25;
							};
						};
						class ViewOptics: ViewOptics
				        {
					        minFov=0.25;
					        maxFov=1.25;
					        initFov=0.75;
				        };
				        class ViewGunner: ViewGunner
				        {
				        };
						
						gunnercompartments="Compartment5";
						/*class HitPoints
						{
							class HitTurretComM2
							{
								armor=0.30000001;
								material=-1;
								name="com_m2_turret";
								visual="-";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isTurret=1;
							};
							class HitGunComM2
							{
								armor=0.30000001;
								material=-1;
								name="com_m2_gun";
								visual="-";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isGun=1;
							};
						};*/
					};
				};
                #include "CfgComponents_gunner.hpp"
				// Coaxial gun
				memoryPointGun = "usti hlavne3";
				selectionFireAnim = "zasleh1";

				// Main gun
				gunBeg = "usti hlavne";//usti hlavne1
				gunEnd = "konec hlavne";
				body="rhs_t80b_mainturret";
				gun="rhs_t80b_maingun";
				// Weapons and magazines
                weapons[]=
				{
					"rhs_weap_2a46m_2",
					"rhs_weap_pkt_bvm",
					"rhs_weap_902a",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3bm46_10",
					"rhs_mag_3bk31_8",
					"rhs_mag_3of26_6",
					"rhs_mag_9m112m_4",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_762x54mm_250",
					"rhs_mag_3d17",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				// Turret servos
				minElev=-5;
				maxElev=+15;
				initElev=10;
				initTurn=-13;
				lockWhenDriverOut=1;
				soundServo[]=
				{
					"rhsafrf\addons\rhs_t72\sounds\traverse",
					7,
					1,
					30
				};

				turretInfoType = "RHS_RscWeaponSosnaU_FCS";//RscOptics_MBT_03_gunner RHS_RscWeaponPlissa_T90_FCS RHS_RscWeaponSosnaU_FCS
				discreteDistance[]={100};
				discreteDistanceInitIndex=0;

				// Optics view
				memoryPointGunnerOptics= "gunnerview";//view_Agava
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;

				// Field of view values: 1 = 120°
				class OpticsIn 
				{
					class Wide: ViewOptics
					{
						camPos="gunnerview2";
						hitpoint="Hit_Optic_SosnaU";
						opticsDisplayName="TI1";
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="TI2";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow: Medium
					{
						opticsDisplayName="TI3";
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Narrow2: Narrow
					{
						opticsDisplayName="AUTOTRACK";
						directionStabilized=1;
					};
					/* for RHS_RscWeaponPlissa_T90_FCS
					class day1
					{
						camPos="gunnerview";
						hitpoint="Hit_Optic_1G46";
						opticsDisplayName="DAY";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.175;
						minFov=0.175;
						maxFov=0.175;
						visionMode[]=
						{
							"Normal"
						};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_1g46.p3d";
						gunnerOpticsEffect[]=
						{
							"TankCommanderOptics1",
							"OpticsBlur2",
							"OpticsCHAbera3"
						};
					};
					class day2: day1
					{
						opticsDisplayName="DAYZOOM";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
						visionMode[]=
						{
							"Normal"
						};
					};
					class thermal1: day1
					{
						camPos="view_Agava";
						hitpoint="Hit_Optic_Agava";
						opticsDisplayName="TI1";
						initFov=0.466667;
						minFov=0.466667;
						maxFov=0.466667;
						visionMode[]=
						{
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_sosnau.p3d";
						
					};
					class thermal2: thermal1
					{
						opticsDisplayName="TI2";
						initFov=0.15555599;
						minFov=0.15555599;
						maxFov=0.15555599;
						

					};
					class thermal3: thermal2
					{
						opticsDisplayName="TI3";
						initFov=0.038888901;
						minFov=0.038888901;
						maxFov=0.038888901;
						
					};
					class thermal4: thermal3
					{
						opticsDisplayName="AUTOTRACK";
						directionStabilized=1;
					}; */
				};
				class Reflectors
				{
					class Searchlight_FG125
					{
						color[]={1900,1300,950};
						ambient[]={5,5,5};
						position="Light_T_pos";
						direction="Light_T_end";
						hitpoint="Light_FG125";
						selection="Light_FG125";
						size=1;
						innerAngle=8;
						outerAngle=15;
						coneFadeCoef=1;
						intensity=45;
						useFlare=1;
						dayLight=1;
						flareSize=0.85000002;
						class Attenuation
						{
							start=1;
							constant=0;
							linear=0;
							quadratic=0.02;
							hardLimitStart=630;
							hardLimitEnd=660;
						};
					};
					class Searchlight_FG125_Flare
					{
						color[]={7,6,6.5};
						ambient[]={22,22,22};
						position="Light_T_flare";
						direction="Light_T_end";
						hitpoint="Light_FG125";
						selection="Light_FG125";
						size=1;
						innerAngle=30;
						outerAngle=175;
						coneFadeCoef=10;
						intensity=100;
						useFlare=1;
						dayLight=0;
						flareSize=1.85;
						class Attenuation
						{
							start=0;
							constant=0;
							linear=0;
							quadratic=10;
							hardLimitStart=0;
							hardLimitEnd=0.89999998;
						};
					};
				};
				// Gunner operations and animations
				gunnerAction="rhs_t80_gunner_out";
				gunnerInAction="rhs_t80_gunner_in";
				forceHideGunner = 0;
				inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
				viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
                LODTurnedIn=1;
				LODTurnedOut=1;
				startEngine = 0;
				class TurnOut
				{
					limitsArrayTop[]=
					{
						{20.1126,-107.5349},
						{19.8932,99.317703}
					};
					limitsArrayBottom[]=
					{
						{-9.1273003,-108.1836},
						{-7.1046,-44.255001},
						{-9.1674995,31.497801},
						{-9.0504999,102.8447}
					};
				};
				class TurnIn: TurnOut
				{
					limitsArrayTop[]=
					{
						{15,-180},
						{15,180}
					};
					limitsArrayBottom[]=
					{
						{-2,-180},
						{-2,-160},
						{-3,-137},
						{-5,-131},
						{-5,-35},
						{-4.5,-21},
						{-5,-20},
						{-5,20},
						{-4.5,21},
						{-5,35},
						{-5,131},
						{-3,137},
						{-2,160},
						{-2,180}
					};
				};
				class HitPoints 
				{
					class HitTurret	{
						armor = 1.2;
						material = -1;
						armorComponent="hit_main_turret";
						name = "vez";
						visual="";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.3;
						radius = 0.1;
						isTurret=1;
					};
					class HitGun	{
						armor = 0.8;
						material = -1;
						armorComponent="hit_main_gun";
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 0.4;
						radius = 0.1;
						isGun=1;
					};
				};
			};
		};	