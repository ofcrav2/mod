// OFCRA Woodland for the Boxer (boxer mod): its woodland pattern in the BWMod PzH 2000 colours, made with
// arma3-textures\New-CamoXcf.ps1 (camo\woodland.txt). Every Boxer base class with its own TextureSources gets
// the entry, with that type's parts: M2 / GMW remote weapon station, MGS turret + gun, Skyranger gun.
// In a mission:  [_veh, ["OFCRA_Woodland", 1]] call BIS_fnc_initVehicle;
class CfgPatches
{
	class ofcra_bw_mod_boxer_woodland
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies = 1;
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"boxer_c"};
	};
};

class CfgVehicles
{
	class Wheeled_APC_F;
	class mkk_boxer_base: Wheeled_APC_F
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_2.paa"
				};
				factions[] = {};
			};
		};
	};
	class mkk_boxer_m2_base: mkk_boxer_base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_2.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_rws_3.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_rws_4.paa"
				};
				factions[] = {};
			};
		};
	};
	class mkk_boxer_gmw_base: mkk_boxer_base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_2.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_rws_3.paa"
				};
				factions[] = {};
			};
		};
	};
	class mkk_boxer_ranger_base: mkk_boxer_base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_1.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_ranger_2.paa"
				};
				factions[] = {};
			};
		};
	};
	class mkk_boxer_mgs_base: mkk_boxer_base
	{
		class TextureSources
		{
			class OFCRA_Woodland
			{
				displayName = "OFCRA Woodland";
				author = "OFCRA Wombat";
				textures[] =
				{
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_0.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_mgs_1.paa",
					"ofcra_bw_mod\boxer_woodland\boxer_woodland_mgs_2.paa"
				};
				factions[] = {};
			};
		};
	};
};
