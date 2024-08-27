class CfgPatches
{
	class ofcra_3cb_an2
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"UK3CB_Factions_Vehicles_Tseries",
		};
	};
};

class CfgVehicles
{
	
	class Plane_Base_F;
	class UK3CB_Antonov_An2_Base : Plane_Base_F
	{
		class TextureSources
		{
			class OFCRA_ION
			{
				displayName = "OFCRA ION";
				textures[] = {
					"\ofcra_textures\anton_an2\body_ion.paa",
					"\ofcra_textures\anton_an2\tail_ion.paa",
					"\ofcra_textures\anton_an2\wing_ion.paa",
				};
				factions[] = {};
			};
		}
	};

	class UK3CB_Antonov_An2 : UK3CB_Antonov_An2_Base
	{
		class TextureSources
		{
			class OFCRA_ION
			{
				displayName = "OFCRA ION";
				textures[] = {
					"\ofcra_textures\anton_an2\body_ion.paa",
					"\ofcra_textures\anton_an2\tail_ion.paa",
					"\ofcra_textures\anton_an2\wing_ion.paa",
				};
				factions[] = {};
			};
		}
	};

	class UK3CB_Antonov_An2_Armed_Base;
	class UK3CB_Antonov_An2_Armed : UK3CB_Antonov_An2_Armed_Base
	{
		class TextureSources
		{
			class OFCRA_ION
			{
				displayName = "OFCRA ION";
				textures[] = {
					"\ofcra_textures\anton_an2\body_ion.paa",
					"\ofcra_textures\anton_an2\tail_ion.paa",
					"\ofcra_textures\anton_an2\wing_ion.paa",
				};
				factions[] = {};
			};
		}
	};

};