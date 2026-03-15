//sounds
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
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7879457,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			2.7309573,
			1,
			300
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",
			0.78794575,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
			0.73095739,
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
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_alap",
					8.9125099,
					1,
					400
				};
				frequency="0.95	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="(thrust factor [0.1,0])*engineOn*camPos*(rpm interpolate [700,900,1,0])";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.2,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(600/	2850),(1000/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine1_ext_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.9943281,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine1_ext_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					2.3943281,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*camPos*(rpm factor [800,750])";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.1912509,
					1,
					850
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.2,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.4220185,
					1,
					840
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*camPos*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					1.6125376,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*camPos*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.5912509,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					1.4220185,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					1.5589254,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					1.7125376,
					1,
					850
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					1.8848932,
					1,
					950
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					1.9782794,
					1,
					1000
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					3.1952624,
					1,
					1050
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.81622773,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.55481339,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_int_thrust_extra
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.9943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int_thrust_extra2
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_h",
					1.3943282,
					1,
					800
				};
				frequency="0.8	+	((rpm/	2850) factor[(650/	2850),(750/	2850)])*0.2";
				volume="(thrust factor[0.1,0.4])*engineOn*(1-camPos)*(rpm factor [800,750])";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.59810716,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.64668357,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.70118719,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.76234132,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20_l",
					0.83095735,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\utd20_in_alap",
					0.65481335,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(400/	2850),(900/	2850)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(100/	2850),(200/	2850)])	*	((rpm/	2850) factor[(900/	2850),(700/	2850)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm1",
					0.69810718,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(700/	2850),(1100/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(705/	2850),(850/	2850)])	*	((rpm/	2850) factor[(1100 /	2850),(950/	2850)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm2",
					0.7466836,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(950/	2850),(1400/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(900/	2850),(1050/	2850)])	*	((rpm/	2850) factor[(1400/	2850),(1200/	2850)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.7466836,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1200/	2850),(1700/	2850)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1170/	2850),(1380/	2850)])	*	((rpm/	2850) factor[(1700/	2850),(1500/	2850)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm4",
					0.80118722,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1500/	2850),(2100/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1500/	2850),(1670/	2850)])	*	((rpm/	2850) factor[(2100/	2850),(1800/	2850)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					0.86234134,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(1800/	2850),(2300/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2850) factor[(1780/	2850),(2060/	2850)])	*	((rpm/	2850) factor[(2450/	2850),(2200/	2850)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\bmp_exhaust_ext_rpm5",
					1.1,
					1
				};
				frequency="0.8	+	((rpm/	2850) factor[(2100/	2850),(2640/	2850)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2850) factor[(2150/	2850),(2500/	2850)])";
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
					0.19810717,
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
					0.1466836,
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
					0.1011872,
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
					0.16234133,
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
					0.26234132,
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
					0.11622776,
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
					0.15481336,
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
					0.19810717,
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
					0.1466836,
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
					0.20118719,
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
//End of sounds