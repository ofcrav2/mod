class CfgPatches
{
	class ofcra_omtk
	{
		name = "ofcra_omtk";
		author = "OFCRA";
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Functions_F"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
	class OFCRA_OMTK
	{
		class bootstrap
		{
			file = "\ofcra_omtk\functions";
			class preInit
			{
				preInit = 1;
			};
			class loadModules {};
			class loadBriefings {};
			class init {};
		};
	};
};
