class CfgPatches
{
    class ofcra_vorona_no_ti
    {
		name = "ofcra_vorona_no_ti";
		author = "JustKremit.";
		skipWhenMissingDependencies=1;
		requiredAddons[]=
        {
            "A3_Weapons_F_Tank_Launchers_Vorona"
        };
        weapons[]=
        {
            "KRMT_Vorona_green_nerfed",
            "KRMT_Vorona_brown_nerfed"
        };
    };
};
class OpticsModes;
class StepScope;
class CfgWeapons
{
    class launch_O_Vorona_green_F;
    class KRMT_Vorona_green_nerfed : launch_O_Vorona_green_F
    {
		displayName="Metis-M (Green) (No TI)";
		class OpticsModes:OpticsModes
		{
			class StepScope:StepScope
			{
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
			};
        };
    };
	class launch_O_Vorona_brown_F;
    class KRMT_Vorona_brown_nerfed : launch_O_Vorona_brown_F
    {
		displayName="Metis-M (Brown) (No TI)";
		class OpticsModes:OpticsModes
		{
			class StepScope:StepScope
			{
				visionMode[]=
				{
					"Normal"
				};
				thermalMode[]={};
			};
        };
    };
};