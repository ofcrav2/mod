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
						animationSourceBody="obsTurret";
						animationSourceGun="obsGun";
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						memoryPointGun="usti hlavne3";
						gunBeg="Usti hlavne3";
						gunEnd="Konec hlavne3";
						gunnerDoor="hatchcommander";
						animationsourcehatch="hatchcommander";
						minElev=-15;
						maxElev=80;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.9;
						maxVerticalRotSpeed=1.9;
						weapons[]=
						{
							
						};
						magazines[]=
						{
							
						};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\noises\servo_best",
							0.0099999998,
							1,
							50
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						gunnerAction="rhs_bmp3_commanderOut";
						gunnerInAction="rhs_bmp3_gunner";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						animationSourceStickX="joystick_commander_x";
						animationSourceStickY="joystick_commander_y";
						gunnerLeftHandAnimName="joystick_commander_y";
						gunnerRightHandAnimName="joystick_commander_y";
						usePip=2;
						turretFollowFreeLook=2;
						headAimDown=30;
						isPersonTurret=0;
						personTurretAction="RHS_passenger_inside_6";
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=40;
						initOutTurn=0;
						gunnerForceOptics=0;
						lodturnedout=1;
						lodturnedin=1202;
						lodopticsout=1;
						lodopticsin=1;
						discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex=2;
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.155;
							minFov=0.034000002;
							maxFov=0.155;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={4,5};
						};
						class ViewGunner: ViewGunner
						{
							initAngleX = -15;
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
						class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_MBT_02_commander";
						startEngine=0;
						gunnerHasFlares=1;
						viewGunnerInExternal=1;
						class HitPoints
						{
							class HitTurretCom
							{
								isTurret=1;
								armor=0.1;
								material=-1;
								armorComponent="Hit_Commander_turret";
								name="hit_com_turret_point";
								visual="commander_turret_hit";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.2;
							};
							class HitGunCom
							{
								isGun=1;
								armor=0.1;
								material=-1;
								armorComponent="Hit_Commander_gun";
								name="hit_com_gun_point";
								visual="commander_gun_hit";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=1;
								radius=0.2;
							};
						};
						selectionFireAnim="zasleh2";
					};
				};
				gunnerDoor="hatchgunner";
				animationsourcehatch="hatchgunner";
				body="Mainturret";
				gun="Maingun";
				gunBeg="usti hlavne1";
				gunEnd="konec hlavne1";
				memoryPointGun = "usti hlavne2";
				selectionFireAnim="zasleh3";
				weapons[]=
				{
					"lk_weap_2a42",
					"RHS_weap_Ags30_new",
					"rhs_weap_pkt",
					"rhs_weap_902a",
					"rhs_weap_fcs_ammo"
				};
				magazines[]=
				{
					"rhs_mag_762x54mm_2000",
					"RHS_mag_VOG30_300",
					"rhs_mag_3uof8_340",
					"rhs_mag_3ubr11_160",
					"rhs_mag_3d17_6",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				canUseScanners=0;
				allowTabLock=0;
				soundServo[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\turret1.wss",
					4,
					1,
					10
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.39810717,
					1,
					30
				};
				soundAttenuationTurret="HeliAttenuationGunner";
				disableSoundAttenuation=0;
				isPersonTurret=0;
				usePip=2;
				minElev=-4;
				initElev=10;
				maxElev=74;
				gunnerAction="rhs_bmp3_gunnerOut";
				gunnerInAction="rhs_bmp3_gunner";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				forceHideGunner=0;
				canHideGunner=1;
				lodturnedout=1;
				lodturnedin=1202;
				lodopticsout=1;
				lodopticsin=1;
				stabilizedInAxes=3;
				gunnerForceOptics=0;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\optics_empty";
				discreteDistance[]={};
				discreteDistanceInitIndex=0;
				turretInfoType="RHS_RscWeaponESSA_FCS";//RHS_RscWeaponPlissa_T90_FCS RHS_RscWeaponESSA_FCS RHS_RscWeaponSosnaU_FCS
				memoryPointGunnerOptics="gunnerview";
				memoryPointGunnerOutOptics="gunnerview";
				gunnerCompartments="Compartment1";
				primaryGunner=1;
				primaryObserver=0;
				startEngine=0;
				maxhorizontalrotspeed=1.9;
				maxverticalrotspeed=1.9;
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				animationSourceStickX="joystick_gunner_x";
				animationSourceStickY="joystick_gunner_y";
				gunnerLeftHandAnimName="joystick_gunner_y";
				gunnerRightHandAnimName="joystick_gunner_Y";
				class ViewOptics: RCWSOptics
				{
					initFov=0.375;
					minFov=0.375;
					maxFov=0.375;
					visionMode[]=
					{
						"Normal"
					};
				};
				class ViewGunner: ViewGunner
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
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						opticsDisplayName="DAY3";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.23333301;
						minFov=0.23333301;
						maxFov=0.23333301;
						visionMode[]=
						{
							"Normal",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\rhsafrf\addons\rhs_optics\vehicles\rhs_thermalscreen_empty.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName="DAY12";
						initFov=0.0583333;
						minFov=0.0583333;
						maxFov=0.0583333;
					};
					class Narrow: Medium
					{
						opticsDisplayName="DAY24";
						initFov=0.0291667;
						minFov=0.0291667;
						maxFov=0.0291667;
					};
					class Autotrack: Narrow
					{
						opticsDisplayName="AUTOTRACK";
						directionStabilized=1;
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=0.5;
						material=-1;
						name="hit_turret";
						armorComponent="Hit_Mainturret";
						visual="vez";
						passThrough=0;
						minimalHit=0.25;
						explosionShielding=0.001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.60000002;
						material=-1;
						name="hit_gun";
						armorComponent="Hit_Maingun";
						visual="-";
						passThrough=0;
						minimalHit=0.13;
						explosionShielding=0.001;
						radius=0.25;
					};
				};
				
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: VehicleSystemsTemplateLeftGunner
					{
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: VehicleSystemsTemplateRightGunner
					{
						defaultDisplay="SensorDisplay";
						class Components: components
						{
							class SensorDisplay
							{
								componentType="SensorsDisplayComponent";
								range[]={16000,8000,4000,2000};
								resource="RscCustomInfoSensors";
							};
						};
					};
				};
				class Reflectors 
				{ 
					class Searchlight 
					{
						color[] 	= {1900, 1300, 950};
						ambient[]	= {5,5,5};
						position 	= "Light_T_pos";
						direction 	= "Light_T_end";
						hitpoint 	= "Light_T";
						selection	= "Light_T";
						size 		= 1;
						innerAngle 	= 8;
						outerAngle 	= 15;
						coneFadeCoef = 1;
						intensity 	= 45; //17.5
						useFlare 	= 0;
						dayLight 	= 1;
						flareSize 	= 1.0;
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
					class Searchlight2: Searchlight
					{
						color[]={7,6,6.5};
						ambient[]={22,22,22};
						position="Light_T_flare";
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
			};
		};
		