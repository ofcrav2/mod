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
		armor=26; //from armor = 32;  
		armorStructural=8; //from armorStructural = 4; higher = less damage.  How much of the damage from parts goes through to object
		class HitPoints : HitPoints // inherit ALL from UK3CB_CW_US_B_EARLY_M939_Guntruck
		{
			class HitEngine : HitEngine // inherit HitEngine from UK3CB_CW_US_B_EARLY_M939_Guntruck
			{
				radius = 1; // from radius = 0.45; Make easier to KO engine
				armor = 23; // from armor = 3; //multiplier from object armor??, this is HP
				passThrough = 0.5; // Damage to engine does not damage the vehicle
			};
			class HitBody : HitBody {
				passThrough = 1;	
				armor = 0.35;
				radius = 0.1; //make smaller 
			};
			class HitFuel : HitFuel {
				passThrough = 0.1;
			}
			class HitHull : HitHull {
				armor = 100;
			}
		};
	};	

	class OFCRA_HARDENED_M939_RECOVERY_EARLY: UK3CB_CW_US_B_EARLY_M939_Recovery
	{
		armor=26; //from armor = 32;  
		armorStructural=8; //from armorStructural = 4; higher = less damage.  How much of the damage from parts goes through to object
		class HitPoints : HitPoints // inherit ALL from UK3CB_CW_US_B_EARLY_M939_Guntruck
		{
			class HitEngine : HitEngine // inherit HitEngine from UK3CB_CW_US_B_EARLY_M939_Guntruck
			{
				radius = 1; // from radius = 0.45; Make easier to KO engine
				armor = 23; // from armor = 3; //multiplier from object armor??, this is HP
				passThrough = 0.5; // Damage to engine does not damage the vehicle
			};
			class HitBody : HitBody {
				passThrough = 1;	
				armor = 0.35;
				radius = 0.1; //make smaller 
			};
			class HitFuel : HitFuel {
				passThrough = 0.1;
			}
			class HitHull : HitHull {
				armor = 100;
			}
		};
	};		

			
};