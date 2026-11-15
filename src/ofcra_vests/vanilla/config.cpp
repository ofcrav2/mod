// Vanilla plate carriers -> OFCRA standard level 3 plate, changed IN PLACE (no OFCRA copies), so every vest that
// inherits from them and doesn't set its own protection gets it too (V_PlateCarrier2_* colours, mod vests built on
// them, ...). Vests that define their own HitpointsProtectionInfo keep theirs - vest_check.sqf in the balance mission
// lists every child and flags the ones that don't end up at 16 / 0.3.
//   V_PlateCarrier1_rgr  Carrier Lite  - vanilla 16 / 0.3 already (checked here so a mod can't have changed it)
//   V_PlateCarrier2_rgr  Carrier Rig   - vanilla 20 / 0.2 (level IV) -> 16 / 0.3
// Mass 80 = the OFCRA level 3 vests (Carrier Rig was 100). Same values as OFCRA_level3_plate_HitpointsProtectionInfo
// in ofcra_vests\config.cpp (copied, as inheriting from that class doesn't work).
class CfgPatches
{
	class ofcra_vests_vanilla {
		name = "ofcra_vests_vanilla";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		requiredAddons[] = {
			"ofcra_vests",
			"A3_Characters_F",
			"A3_Data_F_Decade_Loadorder"
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

class cfgWeapons
{
	class ItemCore;
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo: ItemInfo
		{
			OFCRA_LEVEL3_PLATE;
		};
	};
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		class ItemInfo: ItemInfo
		{
			OFCRA_LEVEL3_PLATE;
		};
	};
};
