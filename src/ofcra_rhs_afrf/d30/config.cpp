class CfgPatches
{
	class ofcra_rhs_afrf_d30
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"rhs_main_loadorder",
			"ofcra_rhs_afrf"
		};
	};
};




class Mode_SemiAuto;
class CfgWeapons
{
	class mortar_155mm_AMOS; // Base class for the D30 weapon
	class rhs_weap_d30: mortar_155mm_AMOS
	{
		class Single1 : Mode_SemiAuto {}

	}

	//slower reload, louder sound, higher mass
	class OFCRA_SLOW_Howitzer_Gun: rhs_weap_d30
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA 122mm Howitzer";
		reloadTime=24;
		scopeCurator=2;
		
		magazines[]={
			"OFCRA_ARTILLERY_HE_MAG_32","OFCRA_SMOKE_MAGAZINE"
		};

		class Single1: Single1
		{
			displayName="Charge 0";
			reloadTime=24;
			//Gun itself heard from double the distance of default
			class StandardSound
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",
					2.5118864,
					1,
					3000
				};
				soundBegin[]=
				{
					"begin1",
					1
				};
				SoundSetShot[]=
				{
					"OFCRA_Cannon155mm_Shot_SoundSet",
					"OFCRA_Cannon155mm_Tail_SoundSet",
					"OFCRA_155mm_Shot_SoundSet",
					"RHS_155mm_int_Shot_SoundSet",
					"OFCRA_cannon_Tail_SoundSet"
				};
			};
		};
		class Single2: Single1
		{
			displayName="Charge 1";
			artilleryCharge=0.19;
		};
		class Single3: Single1
		{
			displayName="Charge 2";
			artilleryCharge=0.24;
		};
		class Single4: Single1
		{
			displayName="Charge 3";
			artilleryCharge=0.30;
		};
		class Single5: Single1
		{
			displayName="Charge 4";
			artilleryCharge=0.38;
		};
		class Single6: Single1
		{
			displayName="Charge 5";
			artilleryCharge=0.48;
		};

	};
};


class CfgVehicles
{	
	class StaticWeapon;
	class StaticCannon;
	class rhs_D30_base: StaticCannon
	{
		class Turrets;
	}
	class rhs_D30_vmf : rhs_D30_base
	{
		class Turrets : Turrets {
			class MainTurret;
		}
	};

	class OFCRA_SLOW_Howitzer_Unit: rhs_D30_vmf
	{
		displayName = "OFCRA 122mm Howitzer"; 

		class EventHandlers
		{
			class OFCRA {
				init = "_this select 0 setMass 20000";
			}
			
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"OFCRA_SLOW_Howitzer_Gun"
				};
				magazines[]= {
					"OFCRA_ARTILLERY_HE_MAG_32",
					"OFCRA_ARTILLERY_HE_MAG_32",
					"OFCRA_ARTILLERY_HE_MAG_32",

					"OFCRA_SMOKE_MAGAZINE"
				};
			};
		};
	};
};

class cfgSoundSets
{
	class Cannon155mm_Shot_SoundSet;
	class Cannon155mm_Tail_SoundSet;
	class OFCRA_Cannon155mm_Shot_SoundSet : Cannon155mm_Shot_SoundSet
	{
		soundShaders[]=
		{
			"OFCRA_Cannon155mm_closeShot_SoundShader",
			"OFCRA_Cannon155mm_midShot_SoundShader",
			"OFCRA_Cannon155mm_distShot_SoundShader"
		};
	};
	class OFCRA_Cannon155mm_Tail_SoundSet : Cannon155mm_Tail_SoundSet
	{
		soundShaders[]=
		{
			"OFCRA_Cannon155mm_tailForest_SoundShader",
			"OFCRA_Cannon155mm_tailMeadows_SoundShader",
			"OFCRA_Cannon155mm_tailHouses_SoundShader"
		};
	};


	class RHS_155mm_Shot_SoundSet;
	class RHS_cannon_Tail_SoundSet;

	class OFCRA_155mm_Shot_SoundSet : RHS_155mm_Shot_SoundSet
	{
		soundShaders[]=
		{
			"OFCRA_155mm_0m_SoundShader",
			"OFCRA_155mm_50m_SoundShader",
			"OFCRA_155mm_150m_SoundShader",
			"OFCRA_155mm_550m_SoundShader",
			"OFCRA_155mm_1000m_SoundShader",
			"OFCRA_155mm_1800m_SoundShader"
		};
	};

	class OFCRA_cannon_Tail_SoundSet : RHS_cannon_Tail_SoundSet
	{
		soundShaders[]=
		{
			"OFCRA_cannon_Meadows_close_SoundShader",
			"OFCRA_cannon_Meadows_far_SoundShader",
			"OFCRA_cannon_Houses_close_SoundShader",
			"OFCRA_cannon_Houses_far_SoundShader",
			"OFCRA_cannon_Forest_close_SoundShader",
			"OFCRA_cannon_Forest_far_SoundShader",
			"OFCRA_cannon_Interior_close_SoundShader",
			"OFCRA_cannon_noise_meadows_SoundShader",
			"OFCRA_cannon_noise_forest_SoundShader",
			"OFCRA_cannon_noise_houses_SoundShader"
		};
	};
};

class cfgSoundShaders
{
	class Cannon155mm_closeShot_SoundShader;
	class Cannon155mm_midShot_SoundShader;
	class Cannon155mm_distShot_SoundShader;

	class Cannon155mm_tailForest_SoundShader;
	class Cannon155mm_tailMeadows_SoundShader;
	class Cannon155mm_tailHouses_SoundShader;


	class OFCRA_Cannon155mm_closeShot_SoundShader : Cannon155mm_closeShot_SoundShader
	{
		range=220; //from range=110;
	};
	class OFCRA_Cannon155mm_midShot_SoundShader : Cannon155mm_midShot_SoundShader
	{
		range=800; // from range=400;
	};
	class OFCRA_Cannon155mm_distShot_SoundShader : Cannon155mm_distShot_SoundShader
	{
		range=6000;
		rangeCurve[]=
		{
			{0,0},
			{200,0},
			{600,1},
			{6000,1}
		};
	};
	class OFCRA_Cannon155mm_tailForest_SoundShader : Cannon155mm_tailForest_SoundShader
	{
		range=4500;
		rangeCurve[]=
		{
			{0,1},
			{500,1},
			{6000,0}
		};
	};
	class OFCRA_Cannon155mm_tailMeadows_SoundShader : Cannon155mm_tailMeadows_SoundShader
	{
		range=4500;
		rangeCurve[]=
		{
			{0,1},
			{500,1},
			{6000,0}
		};
	};
	class OFCRA_Cannon155mm_tailHouses_SoundShader : Cannon155mm_tailHouses_SoundShader
	{
		range=4500;
		rangeCurve[]=
		{
			{0,1},
			{500,1},
			{6000,0}
		};
	};




	class RHS_155mm_0m_SoundShader;
	class RHS_155mm_50m_SoundShader;
	class RHS_155mm_150m_SoundShader;
	class RHS_155mm_550m_SoundShader;
	class RHS_155mm_1000m_SoundShader;
	class RHS_155mm_1800m_SoundShader;

	class RHS_cannon_Meadows_close_SoundShader;
	class RHS_cannon_Meadows_far_SoundShader;
	class RHS_cannon_Houses_close_SoundShader;
	class RHS_cannon_Houses_far_SoundShader;
	class RHS_cannon_Forest_close_SoundShader;
	class RHS_cannon_Forest_far_SoundShader;
	class RHS_cannon_Interior_close_SoundShader;
	class RHS_cannon_noise_meadows_SoundShader;
	class RHS_cannon_noise_forest_SoundShader;
	class RHS_cannon_noise_houses_SoundShader;


	class OFCRA_155mm_0m_SoundShader : RHS_155mm_0m_SoundShader
	{
		range=100; //from range=25;
		rangeCurve[]=
		{
			{0,1},
			{50,0}
		};
	};
	class OFCRA_155mm_50m_SoundShader : RHS_155mm_50m_SoundShader
	{
		range=300; //from range=150;
		rangeCurve[]=
		{
			{0,0},
			{100,1},
			{300,0}
		};
	};
	class OFCRA_155mm_150m_SoundShader : RHS_155mm_150m_SoundShader
	{
		range = 1100; //from range=550;
		rangeCurve[]=
		{
			{0,0},
			{100,0},
			{300,1},
			{1100,0}
		};
	};
	class OFCRA_155mm_550m_SoundShader : RHS_155mm_550m_SoundShader
	{
		range=2000; //from range=1000
		rangeCurve[]=
		{
			{0,0},
			{300,0},
			{1100,1},
			{2000,0}
		};
	};

	class OFCRA_155mm_1000m_SoundShader : RHS_155mm_1000m_SoundShader
	{
		range=3600; //from range=1800
		rangeCurve[]=
		{
			{0,0},
			{1100,0},
			{2000,1},
			{3600,0}
		};
	};
	class OFCRA_155mm_1800m_SoundShader : RHS_155mm_1800m_SoundShader
	{
		range=11000;
		rangeCurve[]=
		{
			{0,0},
			{2000,0},
			{3600,1},
			{11000,0}
		};
	};


	//Closure
	class OFCRA_cannon_Meadows_close_SoundShader : RHS_cannon_Meadows_close_SoundShader
	{
		range=300;
		rangeCurve[]=
		{
			{0,1},
			{300,0}
		};
	};
	class OFCRA_cannon_Meadows_far_SoundShader : RHS_cannon_Meadows_far_SoundShader
	{
		range=9000;
		rangeCurve[]=
		{
			{0,0},
			{300,1},
			{9000,1}
		};
	};
	class OFCRA_cannon_Houses_close_SoundShader : RHS_cannon_Houses_close_SoundShader
	{
		range=300;
		rangeCurve[]=
		{
			{0,1},
			{300,0}
		};
	};
	class OFCRA_cannon_Houses_far_SoundShader : RHS_cannon_Houses_far_SoundShader
	{
		range=9000;
		rangeCurve[]=
		{
			{0,0},
			{300,1},
			{9000,1}
		};
	};
	class OFCRA_cannon_Forest_close_SoundShader : RHS_cannon_Forest_close_SoundShader
	{
		range=300;
		rangeCurve[]=
		{
			{0,1},
			{300,0}
		};
	};
	class OFCRA_cannon_Forest_far_SoundShader : RHS_cannon_Forest_far_SoundShader
	{
		range=9000;
		rangeCurve[]=
		{
			{0,0},
			{300,1},
			{9000,1}
		};
	};
	class OFCRA_cannon_Interior_close_SoundShader : RHS_cannon_Interior_close_SoundShader
	{
		range=14;
		rangeCurve[]=
		{
			{0,1},
			{6,1},
			{14,0}
		};
	};
	class OFCRA_cannon_noise_meadows_SoundShader : RHS_cannon_noise_meadows_SoundShader
	{
		range=600;
		rangeCurve[]=
		{
			{0,1},
			{600,0}
		};
	};
	class OFCRA_cannon_noise_forest_SoundShader : RHS_cannon_noise_forest_SoundShader
	{
		range=600;
		rangeCurve[]=
		{
			{0,1},
			{600,0}
		};
	};
	class OFCRA_cannon_noise_houses_SoundShader : RHS_cannon_noise_houses_SoundShader
	{
		range=600;
		rangeCurve[]=
		{
			{0,1},
			{600,0}
		};
	};

	


};