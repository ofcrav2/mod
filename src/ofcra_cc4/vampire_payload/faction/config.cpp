// CC4: the three Baba Yaga presets (HE, AT, Heavy AT) for CC4 Blufor (original MMM camo) and CC4 Opfor (CC4 skin).
// Like every CC4 vehicle: no TFAR vehicle radio and no thermal (init event handler).
// Battery: HE and AT last 4x as long as the Vampire, Heavy AT 2x (lower fuelConsumptionRate).
// Kept separate from ..\config.cpp so the payload nerf still loads if the CC4 factions are missing.
class CfgPatches
{
	class ofcra_cc4_vampire_payload_faction
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] =
		{
			"OFCRA_B_BabaYaga_HE",
			"OFCRA_B_BabaYaga_AT",
			"OFCRA_B_BabaYaga_AT_Heavy",
			"OFCRA_O_BabaYaga_HE",
			"OFCRA_O_BabaYaga_AT",
			"OFCRA_O_BabaYaga_AT_Heavy"
		};
		weapons[] = {};
		requiredAddons[] =
		{
			"ofcra_cc4_vampire_payload",
			"ofcra_cc4_babayaga",
			"ofcra_cc4_faction"
		};
	};
};

class CfgVehicles
{
	class UAV_06_base_F;
	class MMM_UAV_Vampire: UAV_06_base_F
	{
		class Components;
		class EventHandlers;
	};

	class OFCRA_BabaYaga_base: MMM_UAV_Vampire
	{
		author = "OFCRA Wombat";
		scope = 0;
		scopeCurator = 0;
		displayName = "Baba Yaga";
		textureList[] = {};
		class EventHandlers: EventHandlers
		{
			class ofcra_cc4
			{
				init = "params ['_v']; _v setVariable ['tf_hasRadio', false, false]; _v disableTIEquipment true; if (!is3DEN) then { _v spawn { sleep 1; _this disableTIEquipment true; sleep 5; _this disableTIEquipment true; }; };";
			};
		};
	};

	class OFCRA_BabaYaga_HE_base: OFCRA_BabaYaga_base
	{
		fuelConsumptionRate = 0.025;   // battery x4 (Vampire: 0.1 with fuelCapacity 200)
		displayName = "Baba Yaga (HE)";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\MMM_UA_BabaYaga\ico\MMM_Pylon_Vampire_ca.paa";
				class pylons
				{
					class MMM_Vampire_Pylon
					{
						maxweight = 175;
						hardpoints[] = {"MMM_HP_Vampire"};
						attachment = "MMM_Pylon_Vampire_82mm_4x";
						bay = -1;
						priority = 1;
						UIposition[] = {0.31, 0.37};
						turret[] = {};
						mirroredMissilePos = 0;
					};
				};
			};
		};
	};
	class OFCRA_B_BabaYaga_HE: OFCRA_BabaYaga_HE_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "OFCRA_CC4_B";
		crew = "B_UAV_AI_F";
		typicalCargo[] = {"B_UAV_AI_F"};
	};
	class OFCRA_O_BabaYaga_HE: OFCRA_BabaYaga_HE_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OFCRA_CC4_O";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		hiddenSelectionsTextures[] = {"ofcra_cc4\babayaga\babayaga_0.paa", "ofcra_cc4\babayaga\babayaga_1.paa"};
		textureList[] = {"OFCRA_CC4", 1};
	};

	class OFCRA_BabaYaga_AT_base: OFCRA_BabaYaga_base
	{
		fuelConsumptionRate = 0.025;   // battery x4 (Vampire: 0.1 with fuelCapacity 200)
		displayName = "Baba Yaga (AT)";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\MMM_UA_BabaYaga\ico\MMM_Pylon_Vampire_ca.paa";
				class pylons
				{
					class MMM_Vampire_Pylon
					{
						maxweight = 175;
						hardpoints[] = {"MMM_HP_Vampire"};
						attachment = "OFCRA_Pylon_BabaYaga_AT_4x";
						bay = -1;
						priority = 1;
						UIposition[] = {0.31, 0.37};
						turret[] = {};
						mirroredMissilePos = 0;
					};
				};
			};
		};
	};
	class OFCRA_B_BabaYaga_AT: OFCRA_BabaYaga_AT_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "OFCRA_CC4_B";
		crew = "B_UAV_AI_F";
		typicalCargo[] = {"B_UAV_AI_F"};
	};
	class OFCRA_O_BabaYaga_AT: OFCRA_BabaYaga_AT_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OFCRA_CC4_O";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		hiddenSelectionsTextures[] = {"ofcra_cc4\babayaga\babayaga_0.paa", "ofcra_cc4\babayaga\babayaga_1.paa"};
		textureList[] = {"OFCRA_CC4", 1};
	};

	class OFCRA_BabaYaga_AT_Heavy_base: OFCRA_BabaYaga_base
	{
		fuelConsumptionRate = 0.05;   // battery x2 (Vampire: 0.1 with fuelCapacity 200)
		displayName = "Baba Yaga (Heavy AT)";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture = "\MMM_UA_BabaYaga\ico\MMM_Pylon_Vampire_ca.paa";
				class pylons
				{
					class MMM_Vampire_Pylon
					{
						maxweight = 175;
						hardpoints[] = {"MMM_HP_Vampire"};
						attachment = "OFCRA_Pylon_BabaYaga_AT_Heavy_4x";
						bay = -1;
						priority = 1;
						UIposition[] = {0.31, 0.37};
						turret[] = {};
						mirroredMissilePos = 0;
					};
				};
			};
		};
	};
	class OFCRA_B_BabaYaga_AT_Heavy: OFCRA_BabaYaga_AT_Heavy_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "OFCRA_CC4_B";
		crew = "B_UAV_AI_F";
		typicalCargo[] = {"B_UAV_AI_F"};
	};
	class OFCRA_O_BabaYaga_AT_Heavy: OFCRA_BabaYaga_AT_Heavy_base
	{
		scope = 2;
		scopeCurator = 2;
		side = 0;
		faction = "OFCRA_CC4_O";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		hiddenSelectionsTextures[] = {"ofcra_cc4\babayaga\babayaga_0.paa", "ofcra_cc4\babayaga\babayaga_1.paa"};
		textureList[] = {"OFCRA_CC4", 1};
	};
};
