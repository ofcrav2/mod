class CfgPatches
{
	class ofcra_rhs_afrf_sprut {
		name = "ofcra_rhs_afrf_sprut";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ace_frag",
			"rhs_main_loadorder",
			"ofcra_rhs_afrf",
			"ofcra_ammo_base"
		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};





class CfgVehicles
{
	class Tank_F;
	class rhs_a3spruttank_base: Tank_F
	{
		class TextureSources
		{
			class OFCRA_SNOW_WHITE
			{
				displayName = "OFCRA Snow white";
				textures[] = {
					"\ofcra_rhs_afrf_sprut\white_hull.paa",
					"\ofcra_rhs_afrf_sprut\white_turret.paa",
					"\ofcra_rhs_afrf_sprut\white_wheels.paa"
				};
			};

			class OFCRA_SNOW_CAMMO	
			{	
				displayName = "OFCRA Snow Cammo";
				textures[] = {
					"\ofcra_rhs_afrf_sprut\snow_camo_hull.paa",
					"\ofcra_rhs_afrf_sprut\snow_camo_turret.paa",
					"\ofcra_rhs_afrf_sprut\snow_camo_wheels.paa"

				};
				factions[] = {};
			};

		}
	};
	
	class OFCRA_SPRUT_SNOW : rhs_a3spruttank_base
	{
		author = "wombat";

		displayName = "OFCRA 2S25 White Snow";
	
		hiddenSelectionsTextures[] = {
			"\ofcra_rhs_afrf_sprut\white_hull.paa",
			"\ofcra_rhs_afrf_sprut\white_turret.paa",
			"\ofcra_rhs_afrf_sprut\white_wheels.paa"
		};
	};

	class OFCRA_O_SPRUT_SNOW : OFCRA_SPRUT_SNOW
	{
		side = 0;
		crew = "O_soldier_F";
		faction = "OPF_F";
		scope = 2;
	};

};
