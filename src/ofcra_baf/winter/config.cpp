class CfgPatches
{
	class ofcra_baf_winter {
		name = "ofcra_baf_winter";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
            "uk3cb_baf_vehicles_warrior_a3",
            "uk3cb_baf_vehicles_coyote_jackal"

		};
		units[] = {};
		weapons[] = {}; 
		ammo[]={};
	};
};


class CfgWeapons
{

};

class CfgVehicles
{
	class UK3CB_BAF_Warrior_A3_W;
	class UK3CB_BAF_Warrior_A3_W_Cage;
	class UK3CB_BAF_Warrior_A3_W_Camo;
	class UK3CB_BAF_Warrior_A3_W_Cage_Camo;


	class OFCRA_BAF_Warrior_Winter: UK3CB_BAF_Warrior_A3_W
	{
		author = "OFCRA Wombat";
		displayName = "Warrior (Winter)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\warrior1.paa",
			"ofcra_baf\winter\warrior2.paa",
			"ofcra_baf\winter\net.paa",
			"uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_warrior_a3\data\cage_baf_co.paa"
		};
	};

	class OFCRA_BAF_Warrior_Camo_Winter: UK3CB_BAF_Warrior_A3_W_Camo
	{
		author = "OFCRA Wombat";
		displayName = "Warrior (Winter Camo)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\warrior1.paa",
			"ofcra_baf\winter\warrior2.paa",
			"ofcra_baf\winter\net.paa",
			"uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_warrior_a3\data\cage_baf_co.paa"
		};
	}

	class OFCRA_BAF_Warrior_Cage_Winter: UK3CB_BAF_Warrior_A3_W_Cage	
	{
		author = "OFCRA Wombat";
		displayName = "Warrior (Winter Cage)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\warrior1.paa",
			"ofcra_baf\winter\warrior2.paa",
			"ofcra_baf\winter\net.paa",
			"uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_warrior_a3\data\cage_baf_co.paa"
		};
	};

	class OFCRA_BAF_Warrior_Cage_Camo_Winter: UK3CB_BAF_Warrior_A3_W_Cage_Camo	
	{
		author = "OFCRA Wombat";
		displayName = "Warrior (Winter Cage Camo)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\warrior1.paa",
			"ofcra_baf\winter\warrior2.paa",
			"ofcra_baf\winter\net.paa",
			"uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_warrior_a3\data\cage_baf_co.paa"
		};
	};

	//["I_APC_tracked_03_cannon_F","I_APC_tracked_03_base_F","APC_Tracked_03_base_F","Tank_F","Tank","LandVehicle","Land","AllVehicles","All"]

	class APC_Tracked_03_base_F;
	class I_APC_tracked_03_base_F : APC_Tracked_03_base_F
	{
		class AnimationSources;
	};
	class I_APC_tracked_03_cannon_F :I_APC_tracked_03_base_F
	{
		class AnimationSources : AnimationSources
		{
			class showCamonetHull;
			class showCamonetTurret;
			class showSLATHull;
			class showSLATTurret;
		};
	}


	class OFCRA_Warrior_Winter : I_APC_tracked_03_cannon_F
	{
		author = "OFCRA Wombat";
		displayName = "Warrior (Winter)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\warrior1.paa",
			"ofcra_baf\winter\warrior2.paa",
			"ofcra_baf\winter\net.paa",
			"uk3cb_baf_vehicles\addons\uk3cb_baf_vehicles_warrior_a3\data\cage_baf_co.paa"
		};

		
		class AnimationSources : AnimationSources
		{
			class showCamonetHull : showCamonetHull
			{
				initPhase = 0;
			};
			class showCamonetTurret : showCamonetTurret
			{
				initPhase = 0;
			};
			class showSLATHull : showSLATHull
			{
				initPhase = 0;
			};
			class showSLATTurret : showSLATTurret
			{
				initPhase = 0;
			};
		};
	};

	class OFCRA_Warrior_Winter_Cage : OFCRA_Warrior_Winter
	{
		class AnimationSources : AnimationSources
		{
			class showSLATHull : showSLATHull
			{
				initPhase = 1;
			};
			class showSLATTurret : showSLATTurret
			{
				initPhase = 1;
			};
		};
	};

	class OFCRA_Warrior_Winter_Camo : OFCRA_Warrior_Winter
	{
		class AnimationSources : AnimationSources
		{
			class showCamonetHull : showCamonetHull
			{
				initPhase = 1;
			};
			class showCamonetTurret : showCamonetTurret
			{
				initPhase = 1;
			};
		};
	};

	class OFCRA_Warrior_Winter_Cage_Camo : OFCRA_Warrior_Winter_Camo
	{
		class AnimationSources : AnimationSources
		{
			class showSLATHull : showSLATHull
			{
				initPhase = 1;
			};
			class showSLATTurret : showSLATTurret
			{
				initPhase = 1;
			};
		};
	};



	class UK3CB_BAF_Jackal2_L2A1_W_Arctic;
	class UK3CB_BAF_Jackal2_GMG_W_Arctic;
	class UK3CB_BAF_Coyote_Passenger_L134A1_W_Arctic;
	class UK3CB_BAF_Coyote_Passenger_L111A1_W_Arctic;


	class OFCRA_BAF_Jackal_L2A1_Winter: UK3CB_BAF_Jackal2_L2A1_W_Arctic
	{
		author = "OFCRA Wombat";
		displayName = "Jackal HMG (Winter)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\jackal_body.paa",
			"ofcra_baf\winter\jackal_mount.paa",
			"ofcra_baf\winter\jackal_adds.paa",
			"ofcra_baf\winter\green.paa"
		};

	};

	class OFCRA_BAF_Jackal_GMG_Winter: UK3CB_BAF_Jackal2_GMG_W_Arctic
	{
		author = "OFCRA Wombat";
		displayName = "Jackal GMG (Winter)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\jackal_body.paa",
			"ofcra_baf\winter\jackal_mount.paa",
			"ofcra_baf\winter\jackal_adds.paa",
			"ofcra_baf\winter\green.paa"
		};
	};

	class OFCRA_BAF_Coyote_L134A1_Winter: UK3CB_BAF_Coyote_Passenger_L134A1_W_Arctic
	{
		author = "OFCRA Wombat";
		displayName = "Coyote HMG (Winter)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\jackal_body.paa",
			"ofcra_baf\winter\jackal_mount.paa",
			"ofcra_baf\winter\jackal_adds.paa",
			"ofcra_baf\winter\green.paa"
		};
	};

	class OFCRA_BAF_Coyote_L111A1_Winter: UK3CB_BAF_Coyote_Passenger_L111A1_W_Arctic
	{
		author = "OFCRA Wombat";
		displayName = "Coyote GMG (Winter)";
		scope = 2;
		scopeArsenal = 2;

		hiddenSelectionsTextures[] = {
			"ofcra_baf\winter\jackal_body.paa",
			"ofcra_baf\winter\jackal_mount.paa",
			"ofcra_baf\winter\jackal_adds.paa",
			"ofcra_baf\winter\green.paa"
		};
	}

};

