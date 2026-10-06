// CC4: VBIED Stomper. Unarmed UGV-01 (blue + red) carrying a satchel-charge-size bomb.
// The drone operator detonates it from the action menu ("Detonate charge") while connected to it.
// The charge is SatchelCharge_Remote_Ammo_Scripted, the same ammo as OFCRA_SatchelCharge.
// Blue spawns in the CC4 dark-brown skin, red in the CC4 olive skin. Both are in the CC4 factions (ofcra_cc4\faction).
// Like every CC4 vehicle: no TFAR vehicle radio and no thermal (init event handler).
class CfgPatches
{
	class ofcra_cc4_vbied
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {"OFCRA_B_UGV_01_VBIED_F", "OFCRA_O_UGV_01_VBIED_F"};
		weapons[] = {};
		requiredAddons[] =
		{
			"A3_Drones_F_Soft_F_Gamma_UGV_01",
			"ofcra_cc4_ugv01_stomper",
			"ofcra_cc4_faction"
		};
	};
};

class CfgVehicles
{
	class UGV_01_base_F;
	class B_UGV_01_F: UGV_01_base_F
	{
		class EventHandlers;
	};
	class O_UGV_01_F: UGV_01_base_F
	{
		class EventHandlers;
	};

	class OFCRA_B_UGV_01_VBIED_F: B_UGV_01_F
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA Stomper VBIED";
		scope = 2;
		scopeCurator = 2;
		faction = "OFCRA_CC4_B";
		crew = "B_UAV_AI";
		hiddenSelectionsTextures[] =
		{
			"ofcra_cc4\ugv01_stomper\ugv01_stomper_0_db.paa",
			"ofcra_cc4\ugv01_stomper\ugv01_stomper_1_db.paa",
			"ofcra_cc4\ugv01_stomper\ugv01_stomper_2_db.paa"
		};
		textureList[] = {"OFCRA_CC4_db", 1};
		class EventHandlers: EventHandlers
		{
			class ofcra_cc4
			{
				init = "params ['_v']; _v setVariable ['tf_hasRadio', false, false]; _v disableTIEquipment true;";
			};
		};
		class UserActions
		{
			class OFCRA_VBIED_Detonate
			{
				displayName = "<t color='#FF4040'>Detonate charge</t>";
				displayNameDefault = "";
				position = "";
				radius = 5;
				priority = 10;
				onlyForPlayer = 0;
				showWindow = 0;
				hideOnUse = 1;
				condition = "alive this && {((UAVControl this) select 0) isEqualTo player}";
				statement = "private _v = this; private _b = createVehicle ['SatchelCharge_Remote_Ammo_Scripted', getPosATL _v, [], 0, 'CAN_COLLIDE']; _b setDamage 1; _v setDamage 1;";
			};
		};
	};

	class OFCRA_O_UGV_01_VBIED_F: O_UGV_01_F
	{
		author = "OFCRA Wombat";
		displayName = "OFCRA Stomper VBIED";
		scope = 2;
		scopeCurator = 2;
		faction = "OFCRA_CC4_O";
		crew = "O_UAV_AI";
		hiddenSelectionsTextures[] =
		{
			"ofcra_cc4\ugv01_stomper\ugv01_stomper_0_olive.paa",
			"ofcra_cc4\ugv01_stomper\ugv01_stomper_1_olive.paa",
			"ofcra_cc4\ugv01_stomper\ugv01_stomper_2_olive.paa"
		};
		textureList[] = {"OFCRA_CC4_olive", 1};
		class EventHandlers: EventHandlers
		{
			class ofcra_cc4
			{
				init = "params ['_v']; _v setVariable ['tf_hasRadio', false, false]; _v disableTIEquipment true;";
			};
		};
		class UserActions
		{
			class OFCRA_VBIED_Detonate
			{
				displayName = "<t color='#FF4040'>Detonate charge</t>";
				displayNameDefault = "";
				position = "";
				radius = 5;
				priority = 10;
				onlyForPlayer = 0;
				showWindow = 0;
				hideOnUse = 1;
				condition = "alive this && {((UAVControl this) select 0) isEqualTo player}";
				statement = "private _v = this; private _b = createVehicle ['SatchelCharge_Remote_Ammo_Scripted', getPosATL _v, [], 0, 'CAN_COLLIDE']; _b setDamage 1; _v setDamage 1;";
			};
		};
	};
};
