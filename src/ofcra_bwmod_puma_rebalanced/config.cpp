class CfgPatches
{
    class ofcra_bwmod_puma_rebalance
    {
		name = "ofcra_bwmod_puma_rebalance";
		author = "JustKremit.";
		skipWhenMissingDependencies=1;
		requiredAddons[]=
        {
            "bwa3_puma"
        };
		units[]=
		{
			"BWA3_Puma_Fleck_OFCRA",
			"BWA3_Puma_Tropen_OFCRA"
		};
    };
};
class HitPoints;
class HitHull;
class HitEngine;
class HitFuel;
class HitLTrack;
class HitRTrack;
class Turrets;
class MainTurret;
class CommanderOptics;
class HitComTurret;
class HitComGun;
class HitTurret;
class HitGun;
class CfgVehicles
{
	class BWA3_Puma_Fleck;
	class BWA3_Puma_Fleck_OFCRA: BWA3_Puma_Fleck
	{
		armor = 100;
        class HitPoints: HitPoints {
			class HitHull: HitHull
			{
				armor=1.6;
				material=-1;
				name="hull";
				visual="mat_wanne";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.2;
			};
			class HitEngine: HitEngine
			{
				armor=0.75;
				material=-1;
				name="engine";
				visual="engine";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.75;
				material=-1;
				name="HitFuel";
				visual="HitFuel";
				passThrough=0.30000001;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=-650;
				material=-1;
				name="ltrack";
				visual="ltrack";
				radius=0.2;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitRTrack: HitRTrack
			{
				armor=-650;
				material=-1;
				name="rtrack";
				visual="rtrack";
				radius=0.2;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
        };
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class HitPoints: HitPoints
						{
							class HitComTurret: HitComTurret
							{
								armor=0.5;
								material=-1;
								passThrough=0;
								minimalHit=0.050000001;
								explosionShielding=1;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun: HitComGun
							{
								armor=0.60000002;
								material=-1;
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=0.40000001;
								radius=0.2;
								isGun=1;
							};
						};
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor=0.80000001;
						material=-1;
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun: HitGun
					{
						armor=0.60000002;
						material=-1;
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
	};
	class BWA3_Puma_Tropen;
	class BWA3_Puma_Tropen_OFCRA: BWA3_Puma_Tropen
	{
		armor = 100;
        class HitPoints: HitPoints {
			class HitHull: HitHull
			{
				armor=1.6;
				material=-1;
				name="hull";
				visual="mat_wanne";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.2;
			};
			class HitEngine: HitEngine
			{
				armor=0.75;
				material=-1;
				name="engine";
				visual="engine";
				passThrough=0.1;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.75;
				material=-1;
				name="HitFuel";
				visual="HitFuel";
				passThrough=0.30000001;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor=-650;
				material=-1;
				name="ltrack";
				visual="ltrack";
				radius=0.2;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
			class HitRTrack: HitRTrack
			{
				armor=-650;
				material=-1;
				name="rtrack";
				visual="rtrack";
				radius=0.2;
				minimalHit=0.073846199;
				explosionShielding=0.80000001;
				passThrough=0;
			};
        };
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class HitPoints: HitPoints
						{
							class HitComTurret: HitComTurret
							{
								armor=0.5;
								material=-1;
								passThrough=0;
								minimalHit=0.050000001;
								explosionShielding=1;
								radius=0.15000001;
								isTurret=1;
							};
							class HitComGun: HitComGun
							{
								armor=0.60000002;
								material=-1;
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=0.40000001;
								radius=0.2;
								isGun=1;
							};
						};
					};
				};
				class HitPoints: HitPoints
				{
					class HitTurret: HitTurret
					{
						armor=0.80000001;
						material=-1;
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun: HitGun
					{
						armor=0.60000002;
						material=-1;
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
						isGun=1;
					};
				};
			};
		};
	};
};