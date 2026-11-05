// TEMPORARY test addon - delete this folder (and its PBO) when the Baba Yaga armour is decided.
// Round 3: armorStructural 5 with explosionShielding 1.5 .. 2.5 (over 1 = more blast damage; bullets unaffected).
// S4 E150 = the current default (round 2's best), for reference. E in the name as %: E150 = 1.5, E250 = 2.5.
// Copies of the CC4 Opfor Baba Yaga (HE), in CC4 Opfor; everything else as OFCRA_O_BabaYaga_HE.
class CfgPatches
{
	class ofcra_test_babayaga
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] =
		{
			"OFCRA_TEST_BabaYaga_S4_E150",
			"OFCRA_TEST_BabaYaga_S5_E150",
			"OFCRA_TEST_BabaYaga_S5_E175",
			"OFCRA_TEST_BabaYaga_S5_E200",
			"OFCRA_TEST_BabaYaga_S5_E225",
			"OFCRA_TEST_BabaYaga_S5_E250"
		};
		weapons[] = {};
		requiredAddons[] = {"ofcra_cc4_vampire_payload_faction"};
	};
};

class CfgVehicles
{
	class OFCRA_O_BabaYaga_HE;
	class OFCRA_TEST_BabaYaga_S4_E150: OFCRA_O_BabaYaga_HE
	{
		displayName = "TEST Baba Yaga S4 E1.5";
		armorStructural = 4;
		explosionShielding = 1.5;
	};
	class OFCRA_TEST_BabaYaga_S5_E150: OFCRA_O_BabaYaga_HE
	{
		displayName = "TEST Baba Yaga S5 E1.5";
		armorStructural = 5;
		explosionShielding = 1.5;
	};
	class OFCRA_TEST_BabaYaga_S5_E175: OFCRA_O_BabaYaga_HE
	{
		displayName = "TEST Baba Yaga S5 E1.75";
		armorStructural = 5;
		explosionShielding = 1.75;
	};
	class OFCRA_TEST_BabaYaga_S5_E200: OFCRA_O_BabaYaga_HE
	{
		displayName = "TEST Baba Yaga S5 E2";
		armorStructural = 5;
		explosionShielding = 2;
	};
	class OFCRA_TEST_BabaYaga_S5_E225: OFCRA_O_BabaYaga_HE
	{
		displayName = "TEST Baba Yaga S5 E2.25";
		armorStructural = 5;
		explosionShielding = 2.25;
	};
	class OFCRA_TEST_BabaYaga_S5_E250: OFCRA_O_BabaYaga_HE
	{
		displayName = "TEST Baba Yaga S5 E2.5";
		armorStructural = 5;
		explosionShielding = 2.5;
	};
};
