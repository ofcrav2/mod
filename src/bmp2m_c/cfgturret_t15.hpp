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
						memoryPointGun="usti hlavne2";
						gunBeg="Usti hlavne2";
						gunEnd="Konec hlavne2";
						minElev=-15;
						maxElev=50;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.9;
						maxVerticalRotSpeed=1.9;
						weapons[]=
						{
							"rhs_weap_afganit_1",
							"rhs_weap_afganit_2",
							"rhs_weap_afganit_3",
							"rhs_weap_afganit_4",
							"rhs_weap_afganit_5",
							"rhs_weap_afganit_6",
							"rhs_weap_afganit_7",
							"rhs_weap_afganit_8",
							"rhs_weap_afganit_9",
							"rhs_weap_afganit_10"
						};
						magazines[]=
						{
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit",
							"rhs_mag_aps_afganit"
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
						gunnerAction="Commander_MBT_04_out";
						gunnerInAction="Commander_MBT_04_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						isPersonTurret=0;
						personTurretAction="vehicle_turnout_2";
						minOutElev=-10;
						maxOutElev=25;
						initOutElev=0;
						minOutTurn=-90;
						maxOutTurn=40;
						initOutTurn=0;
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
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				missileBeg="usti hlavne";
				missileEnd="konec hlavne";
				memoryPointGun="usti hlavne3";
				selectionFireAnim="zasleh_1";
				gunnerAction="Gunner_MBT_04_in";
				gunnerInAction="Gunner_MBT_04_in";
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					0.0099999998,
					1,
					50
				};
				weapons[]=
				{
					"rhs_weap_2a42",
					"rhs_weap_pkt",
					"rhs_weap_fcs"
				};
				magazines[]=
				{
					"rhs_mag_3uof8_340",
					"rhs_mag_3ubr11_160",
					"rhs_mag_762x54mm_2000",
					"rhs_laserfcsmag",
					"rhs_laserfcsmag"
				};
				forceHideGunner=1;
				discreteDistance[]={};
				discreteDistanceInitIndex=0;
				memoryPointGunnerOptics="gunnerview";
				minElev=-8;
				maxElev=74;
				initElev=10;
				maxHorizontalRotSpeed=1.9;
				maxVerticalRotSpeed=1.9;
				gunnerOutOpticsModel="";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				viewGunnerInExternal=1;
				lockWhenDriverOut=1;
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
				turretInfoType="RHS_RscWeaponESSA_FCS";
				class HitPoints
				{
					class HitTurret
					{
						armor=-200;
						material=-1;
						name="hit_main_turret_point";
						armorComponent="hit_turret";
						visual="main_turret_hit";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.30000001;
					};
					class HitGun
					{
						armor=-200;
						material=-1;
						name="hit_main_gun_point";
						armorComponent="hit_gun";
						visual="main_gun_hit";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.15000001;
					};
				};
			};
		};
		