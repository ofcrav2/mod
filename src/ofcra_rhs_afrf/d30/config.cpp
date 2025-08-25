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
		class Single2 : Single1 {}
		class Single3 : Single1 {}
		class Single4 : Single1 {}
		class Single5 : Single1 {}
		class Single6 : Single1 {}
	}

	//slower reload, louder sound, higher mass
	class OFCRA_SLOW_Howitzer_Gun: rhs_weap_d30
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA 122mm Howitzer";
		reloadTime=24;
		

		class Single1: Single1
		{
			reloadTime=24;
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
					"OFCRA_Cannon155mm_Tail_SoundSet"
				};
			};
		};
		class Single2: Single2
		{
			reloadTime=24;
		};
		class Single3: Single3
		{
			reloadTime=24;
		};
		class Single4: Single4
		{
			reloadTime=24;
		};
		class Single5: Single5
		{
			reloadTime=24;
		};
		class Single6: Single6
		{
			reloadTime=24;
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
	class OFCRA_Cannon155mm_Shot_SoundSet : Cannon155mm_Shot_SoundSet
	{
		soundShaders[]=
		{
			"OFCRA_Cannon155mm_closeShot_SoundShader",
			"OFCRA_Cannon155mm_midShot_SoundShader",
			"OFCRA_Cannon155mm_distShot_SoundShader"
		};
	};

	class Cannon155mm_Tail_SoundSet;


	class OFCRA_Cannon155mm_Tail_SoundSet : Cannon155mm_Tail_SoundSet
	{
		soundShaders[]=
		{
			"OFCRA_Cannon155mm_tailForest_SoundShader",
			"OFCRA_Cannon155mm_tailMeadows_SoundShader",
			"OFCRA_Cannon155mm_tailHouses_SoundShader"
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

};