class CfgPatches
{
	class ofcra_3cb_m939
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{

		};

		requiredAddons[]=
		{
			"rhs_main_loadorder",
			"UK3CB_Factions_Vehicles_Tseries"
		};
	};
};

class HitPoints;


class CfgVehicles
{
	class UK3CB_B_M939_Guntruck_G;
	class UK3CB_CW_US_B_EARLY_M939_Guntruck : UK3CB_B_M939_Guntruck_G {
		class HitPoints : HitPoints{
			class HitEngine;
			class HitBody;
			class HitFuel;
			class HitHull;
		}
	};
	class UK3CB_B_M939_Recovery_G;
	class UK3CB_CW_US_B_EARLY_M939_Recovery : UK3CB_B_M939_Recovery_G{
		class HitPoints : HitPoints{
			class HitEngine;
			class HitBody;
			class HitFuel;
			class HitHull;
		}
	};

	class OFCRA_HARDENED_M939_EARLY: UK3CB_CW_US_B_EARLY_M939_Guntruck
	{
		armor=15; //from armor = 32;  
		armorStructural=9.499; //from armorStructural = 4; higher = less damage.  How much of the damage from parts goes through to object
		class HitPoints : HitPoints 
		{
			class HitEngine : HitEngine 
			{
				radius = 1; // from radius = 0.45; Make easier to KO engine
				armor = 66; // from armor = 3; //multiplier from object armor??, this is HP
				passThrough = 1; // Damage to engine does not damage the vehicle
			};
			class HitBody : HitBody {
				passThrough = 1;	
				armor = 0.35;
				radius = 0.1; //make smaller 
				depends="HitFuel";
			};
			class HitFuel : HitFuel {
				armor = 0.1;
				radius = 0.5;
				passThrough = 1;
			}
			class HitHull : HitHull {
				armor = 100;
				depends="HitFuel";
			}
		};
	};	

	class OFCRA_HARDENED_M939_RECOVERY_EARLY: UK3CB_CW_US_B_EARLY_M939_Recovery
	{
		armor=15; //from armor = 32;  
		armorStructural=9.499; //from armorStructural = 4; higher = less damage.  How much of the damage from parts goes through to object
		class HitPoints : HitPoints 
		{
			class HitEngine : HitEngine 
			{
				radius = 1; // from radius = 0.45; Make easier to KO engine
				armor = 66; // from armor = 3; //multiplier from object armor??, this is HP
				passThrough = 1; // Damage to engine does not damage the vehicle
			};
			class HitBody : HitBody {
				passThrough = 1;	
				armor = 0.35;
				radius = 0.1; //make smaller 
				depends="HitFuel";
			};
			class HitFuel : HitFuel {
				armor = 0.1;
				radius = 0.5;
				passThrough = 1;

			}
			class HitHull : HitHull {
				armor = 100;
				depends="HitFuel";
			}
		};
	};		

			
};