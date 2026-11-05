// CC4: Vampire (MMM_UA_BabaYaga) -> "Baba Yaga"
//  - payload hits like the OFCRA grenade drones (ofcra_ammo_base\grenade_drone):
//      HE        = OFCRA_DroneGrenade            (was MMM 82mm: hit 145, indirectHit 42, range 18)
//      AT        = OFCRA_DroneGrenade_AT         (as OFCRA_B_UAV_06_AT)
//      Heavy AT  = OFCRA_DroneGrenade_AT_Heavy   (as OFCRA_B_UAV_06_AT_Heavy)
//    4 rounds each, on the Vampire's own pylon pod, with the Vampire's falling-shell model
//  - one round every 5 s, like the OFCRA grenade drone (BombDemine_01_F reloadTime = 5)
//  - the 1x 120mm and 1x TM-62M pylon options are hidden from the pylon menu
//  - thermal removed from the camera (Normal + NV only)
//  - damage: armour 1.5 (MMM's), armorStructural 5, explosionShielding 1.6 (over 1 = MORE blast damage; bullets
//    unaffected). MMM's blast shielding was 0.04 (4% of blast damage): it shrugged off proximity missiles and demo
//    charges. Tested round by round: about 2 hits from the OFCRA anti-drone missile, several 5.56 at point blank.
//  - flight damage: each hit also damages the tail rotor hit point (hitvrotor), which makes it yaw / lose control
//    (tested: 0.3 just noticeable, 0.67 only just flyable): +0.4 per explosive hit, +0.1 per bullet, up to 0.95.
//    Rifle hits alone don't damage any of its parts (no part has a selection in the model), so this is scripted
//    (handleDamage, once per hit, where the drone is local; setHitPointDamage is global).
//  - heat signature on (irTarget = 1): MMM's drone inherits irTarget = 0, so heat-seekers (the OFCRA anti-drone
//    Igla) couldn't lock it; other small drones have 1
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
		irTarget = 1;          // heat-seekers can lock it, like other small drones (MMM inherits 0)
		explosionShielding = 1.7; // blast damage 
		armorStructural = 5;      // MMM's own
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
			class ofcra_flight_damage
			{
				// once per hit (context 0 = the total-damage call), where the drone is local: the tail rotor hit point
				// takes ++++ per explosive hit, ++ per bullet (crashes / fire, no ammo: nothing). Returns nothing,
				// so the engine's damage is unchanged.
				handleDamage = "params ['_v', '', '', '', ['_ammo', ''], '', '', '', '', ['_ctx', -1]]; if (_ctx == 0 && {_ammo != ''} && {alive _v}) then { private _add = [0.05, 0.2] select (getNumber (configFile >> 'CfgAmmo' >> _ammo >> 'explosive') >= 0.5); _v setHitPointDamage ['hitvrotor', ((_v getHitPointDamage 'hitvrotor') + _add) min 0.95, false]; }; nil";
			};
		};
	};
};
