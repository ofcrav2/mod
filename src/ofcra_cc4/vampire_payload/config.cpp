// CC4: Vampire (MMM_UA_BabaYaga) -> "Baba Yaga"
//  - payload hits like the OFCRA grenade drones (ofcra_ammo_base\grenade_drone):
//      HE        = OFCRA_DroneGrenade            (was MMM 82mm: hit 145, indirectHit 42, range 18)
//      AT        = OFCRA_DroneGrenade_AT         (as OFCRA_B_UAV_06_AT)
//      Heavy AT  = OFCRA_DroneGrenade_AT_Heavy   (as OFCRA_B_UAV_06_AT_Heavy)
//    4 rounds each, on the Vampire's own pylon pod, with the Vampire's falling-shell model
//  - one round every 5 s, like the OFCRA grenade drone (BombDemine_01_F reloadTime = 5)
//  - the 1x 120mm and 1x TM-62M pylon options are hidden from the pylon menu
//  - thermal removed from the camera (Normal + NV only)
//  - small arms: the engine's own bullet damage is blocked (handleDamage) and every bullet instead adds
//    its CfgAmmo hit / 54 (hitPart): 6 hits from a 5.56 (hit 9), about 4-5 from a 7.62, 2 from a .50.
//    Explosions, crashes and fire still do the normal damage. Armour is MMM's own (1.5 / 5).
//  - the original MMM_UAV_Vampire is hidden from the editor; place the three Baba Yaga presets instead
//    (vampire_payload\faction, in the CC4 factions)
class CfgPatches
{
	class ofcra_cc4_vampire_payload
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {"OFCRA_BabaYaga_Drop"};
		magazines[] = {"OFCRA_Pylon_BabaYaga_AT_4x", "OFCRA_Pylon_BabaYaga_AT_Heavy_4x"};
		ammo[] = {"OFCRA_BabaYaga_HE", "OFCRA_BabaYaga_AT", "OFCRA_BabaYaga_AT_Heavy"};
		requiredAddons[] =
		{
			"MMM_UA_BabaYaga",
			"ofcra_grenade_drone"
		};
	};
};

class CfgAmmo
{
	class OFCRA_DroneGrenade;
	class OFCRA_BabaYaga_HE: OFCRA_DroneGrenade
	{
		displayName = "OFCRA Baba Yaga HE drone grenade";
		model = "\MMM_UA_BabaYaga\MMM_82mm_Fly";
	};

	class OFCRA_DroneGrenade_AT;
	class OFCRA_BabaYaga_AT: OFCRA_DroneGrenade_AT
	{
		displayName = "OFCRA Baba Yaga AT drone grenade";
		model = "\MMM_UA_BabaYaga\MMM_82mm_Fly";
	};

	class OFCRA_DroneGrenade_AT_Heavy;
	class OFCRA_BabaYaga_AT_Heavy: OFCRA_DroneGrenade_AT_Heavy
	{
		displayName = "OFCRA Baba Yaga Heavy AT drone grenade";
		model = "\MMM_UA_BabaYaga\MMM_82mm_Fly";
	};
};

class CfgMagazines
{
	class PylonMissile_1Rnd_Mk82_F;
	class MMM_Pylon_Vampire_82mm_4x: PylonMissile_1Rnd_Mk82_F
	{
		displayName = "OFCRA 4x HE drone grenade";
		displayNameShort = "OFCRA HE";
		descriptionShort = "OFCRA HE drone grenade";
		ammo = "OFCRA_BabaYaga_HE";
		pylonWeapon = "OFCRA_BabaYaga_Drop";
		count = 4;
	};

	class OFCRA_Pylon_BabaYaga_AT_4x: MMM_Pylon_Vampire_82mm_4x
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA 4x AT drone grenade";
		displayNameShort = "OFCRA AT";
		descriptionShort = "OFCRA AT drone grenade";
		ammo = "OFCRA_BabaYaga_AT";
	};

	class OFCRA_Pylon_BabaYaga_AT_Heavy_4x: MMM_Pylon_Vampire_82mm_4x
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA 4x Heavy AT drone grenade";
		displayNameShort = "OFCRA Heavy AT";
		descriptionShort = "OFCRA Heavy AT drone grenade";
		ammo = "OFCRA_BabaYaga_AT_Heavy";
	};

	class MMM_Pylon_Vampire_120mm_1x: MMM_Pylon_Vampire_82mm_4x
	{
		hardpoints[] = {};
	};
	class MMM_Pylon_Vampire_TM62M_1x: MMM_Pylon_Vampire_82mm_4x
	{
		hardpoints[] = {};
	};
};

class CfgWeapons
{
	class Mk82BombLauncher;
	class MMM_weap_DroneDrop_82mm: Mk82BombLauncher {};
	class OFCRA_BabaYaga_Drop: MMM_weap_DroneDrop_82mm
	{
		displayName = "Drone grenade";
		displayNameShort = "Drone grenade";
		reloadTime = 5;
		magazines[] = {"MMM_Pylon_Vampire_82mm_4x", "OFCRA_Pylon_BabaYaga_AT_4x", "OFCRA_Pylon_BabaYaga_AT_Heavy_4x"};
	};
};

class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class EventHandlers;
		class ViewOptics;
		class Components;
	};
	class UAV_06_base_F: Helicopter_Base_F
	{
		class EventHandlers;
		class ViewOptics;
		class Components;
	};
	class MMM_UAV_Vampire: UAV_06_base_F
	{
		displayName = "Baba Yaga";
		scope = 1;
		scopeCurator = 0;
		class PilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					visionMode[] = {"Normal", "NVG"};
					thermalMode[] = {};
				};
			};
		};
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal", "NVG"};
			thermalMode[] = {};
		};
		class EventHandlers: EventHandlers
		{
			class OFCRA_SmallArms
			{
				// runs where the vehicle is local: bullets (non-explosive ammo) do no engine damage
				handleDamage = "params ['_v', '_sel', '_dmg', '', '_ammo', '_hi']; if (_ammo != '' && {getNumber (configFile >> 'CfgAmmo' >> _ammo >> 'explosive') < 0.5}) then { if (_sel == '') then { damage _v } else { _v getHitIndex _hi } } else { _dmg }";
				// runs on the shooter's machine, once per bullet: damage = ammo hit / 54 (setDamage is global)
				hitPart = "(_this select 0) params ['_v','','','','','','_a']; if (alive _v && {(_a param [3, 0]) < 0.5}) then { _v setDamage (((damage _v) + ((_a param [0, 0]) / 54)) min 1) };";
			};
		};
		class Components;
	};
};
