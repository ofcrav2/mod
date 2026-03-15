
        attenuationEffectType = "TankAttenuation";
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
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_start",
			0.70794576,
			1
		};
		soundEngineOnExt[]=
		{
			"\rhsafrf\addons\rhs_bmp\sounds\utd20_start",
			0.63095737,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_stop",
			0.70794576,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_stop",
			0.63095737,
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
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_ext_idle",
					0.70794576,
					1,
					200
				};
				frequency="0.95	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.79432821,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.79432821,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					0.89125091,
					1,
					250
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1,
					1,
					300
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1.1220185,
					1,
					340
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\rhsafrf\addons\rhs_bmp\sounds\UTD20.ogg",
					1.4125376,
					1,
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_idle",
					0.89125091,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm2",
					1.2589254,
					1,
					200
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm3",
					1.4125376,
					1,
					250
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm4",
					1.5848932,
					1,
					350
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm5",
					1.7782794,
					1,
					400
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_ext_rpm6",
					1.9952624,
					1,
					450
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_idle",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm1",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm4",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm5",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_engine_int_rpm6",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_idle",
					0.35481337,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(400/	5200),(900/	5200)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(100/	5200),(200/	5200)])	*	((rpm/	5200) factor[(900/	5200),(700/	5200)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm1",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(700/	5200),(1100/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(705/	5200),(850/	5200)])	*	((rpm/	5200) factor[(1100 /	5200),(950/	5200)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm2",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(950/	5200),(1400/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(900/	5200),(1050/	5200)])	*	((rpm/	5200) factor[(1400/	5200),(1200/	5200)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1200/	5200),(1700/	5200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1170/	5200),(1380/	5200)])	*	((rpm/	5200) factor[(1700/	5200),(1500/	5200)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm4",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1500/	5200),(2100/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1500/	5200),(1670/	5200)])	*	((rpm/	5200) factor[(2100/	5200),(1800/	5200)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm5",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(1800/	5200),(2300/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	5200) factor[(1780/	5200),(2060/	5200)])	*	((rpm/	5200) factor[(2450/	5200),(2200/	5200)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\MBT_03\MBT_exhaust_int_rpm6",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	5200) factor[(2100/	5200),(2640/	5200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	5200) factor[(2150/	5200),(2500/	5200)])";
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
					0.39810717,
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
					0.44668359,
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
					0.50118721,
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
					0.56234133,
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
					0.56234133,
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
					0.31622776,
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
					0.35481337,
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
					0.39810717,
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
					0.44668359,
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
					0.50118721,
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
		