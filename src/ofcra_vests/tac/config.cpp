// TAC Vests (workshop 779568775, addon TAC_VESTS in zabb.pbo): three V-1 plate vests -> OFCRA standard level 3
// plate, changed IN PLACE. Each defines its own ItemInfo: VestItem with chest 10 / diaphragm 15 / abdomen 15,
// pass-through 0.1, mass 30 ("Armor Level II"); nothing in TAC inherits from them.
// Same values as OFCRA_level3_plate_HitpointsProtectionInfo / ofcra_vests\vanilla (mass 80 = OFCRA level 3 vests).
class CfgPatches
{
	class ofcra_vests_tac {
		name = "ofcra_vests_tac";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		requiredAddons[] = {
			"ofcra_vests",
			"TAC_VESTS"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};

#define OFCRA_LEVEL3_PLATE \
	mass = 80; \
	class HitpointsProtectionInfo \
	{ \
		class Chest     { hitpointName = "HitChest";     armor = 16; passThrough = 0.3; }; \
		class Diaphragm { hitpointName = "HitDiaphragm"; armor = 16; passThrough = 0.3; }; \
		class Abdomen   { hitpointName = "HitAbdomen";   armor = 16; passThrough = 0.3; }; \
		class Body      { hitpointName = "HitBody";      passThrough = 0.3; }; \
	}

#define OFCRA_TAC_LEVEL3(CLS) \
	class CLS: Vest_Camo_Base \
	{ \
		descriptionShort = "Armor Level III"; \
		class ItemInfo: VestItem \
		{ \
			OFCRA_LEVEL3_PLATE; \
		}; \
	}

class cfgWeapons
{
	class Vest_Camo_Base;
	class VestItem;

	OFCRA_TAC_LEVEL3(TAC_V_tacv1_FBI);     // TAC V-1 FBI(BK)
	OFCRA_TAC_LEVEL3(TAC_V_tacv1_P);       // TAC V-1 Polic
	OFCRA_TAC_LEVEL3(TAC_V_tacv1_MSL2);    // TAC V-1 MARSHAL 2
};
