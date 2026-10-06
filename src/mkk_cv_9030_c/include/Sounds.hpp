soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.56234133,1};
soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.56234133,1,20};
soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
soundDammage[] = {"",0.56234133,1};
soundEngineOnInt[] = {"Redd_Marder_1A5\sounds\Int_Marder_Engine_On.wss","",0.63095737,1};
soundEngineOnExt[] = {"Redd_Marder_1A5\sounds\Ext_Marder_Engine_On.wss",0.7943282,1,200};
soundEngineOffInt[] = {"Redd_Marder_1A5\sounds\Int_Marder_Engine_Off.wss",0.63095737,1};
soundEngineOffExt[] = {"Redd_Marder_1A5\sounds\Ext_Marder_Engine_Off.wss",0.7943282,1,200};
soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1,1,100};
soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1,1,100};
soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1,1,100};
soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1,1,100};
soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",1,1,200};
buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",1,1,200};
buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",1,1,200};
buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",1,1,200};
soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1,1,200};
WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1,1,200};
WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1,1,200};
WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1,1,200};
soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",1,1,200};
ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",1,1,200};
ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",1,1,200};
ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",1,1,200};
soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
class Sounds
{
    class Engine
    {
        sound[] = {"Redd_Marder_1A5\sounds\Ext_Marder_Engine_Fahren_1.wss",0.8912509,1,300};
        frequency = "0.6  + (rpm factor[0, 2500]) * 0.6";
        volume = "engineOn * camPos *     (0.5 + (rpm factor[0, 2500]) * 4.5)";
    };
    class EngineThrust
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_2",1.4125376,1,450};
        frequency = "0.6  + (rpm factor[0, 2500]) * 0.6";
        volume = "engineOn * camPos *     (thrust factor[0.1,1]) * (rpm factor[0, 2500])";
    };
    class Engine_int
    {
        sound[] = {"Redd_Marder_1A5\sounds\Int_Marder_Engine_Fahren_1.wss",0.8548134,1};
        frequency = "0.6  + (rpm factor[0, 2500]) * 0.6";
        volume = "engineOn * (1-camPos) * (0.5 + (rpm factor[0, 2500]) * 3.5)";
    };
    class EngineThrust_int
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2",0.04810717,1};
        frequency = "0.6  + (rpm factor[0, 2500]) * 0.6";
        volume = "engineOn * (1-camPos) * (thrust factor[0.1,1]) * (rpm factor[0, 2500])";
    };
    class NoiseInt
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1",0.8011872,1};
        frequency = "1";
        volume = "(1-camPos)*(speed factor[4, 15])";
    };
    class NoiseExt
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1",1.1912509,1,50};
        frequency = "1";
        volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
    };
    class ThreadsOutH0
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",0.34810716,1,140};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
    };
    class ThreadsOutH1
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",0.3966836,1,160};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
    };
    class ThreadsOutH2
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",0.4511872,1,180};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
    };
    class ThreadsOutH3
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",0.5123413,1,200};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
    };
    class ThreadsOutH4
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",0.5123413,1,220};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
    };
    class ThreadsOutS0
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",0.26622775,1,120};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
    };
    class ThreadsOutS1
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",0.308134,1,140};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
    };
    class ThreadsOutS2
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",0.34810716,1,160};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
    };
    class ThreadsOutS3
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",0.3966836,1,180};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
    };
    class ThreadsOutS4
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",0.4511872,1,200};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
    };
    class ThreadsInH0
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",0.22118863,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
    };
    class ThreadsInH1
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",0.2518383,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
    };
    class ThreadsInH2
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",0.28622776,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
    };
    class ThreadsInH3
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",0.3248134,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
    };
    class ThreadsInH4
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",0.36810717,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
    };
    class ThreadsInS0
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",0.28622776,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
    };
    class ThreadsInS1
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",0.28622776,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
    };
    class ThreadsInS2
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",0.3248134,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
    };
    class ThreadsInS3
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",0.3248134,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
    };
    class ThreadsInS4
    {
        sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",0.36810717,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
    };
    class RainExt
    {
        sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
        frequency = 1;
        volume = "camPos * (rain - rotorSpeed/2) * 2";
    };
    class RainInt
    {
        sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
        frequency = 1;
        volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
    };
};
