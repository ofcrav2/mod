class CfgPatches
{
	class ofcra_textures_flags
	{
		name = "ofcra_textures_flags";
		author = "wombat";
		url = "http://example.com";
        requiredVersion=0.1;

		units[] = {};
		weapons[] = {};
		ammo[]={};
	};
};



class CfgVehicles
{
	class FlagCarrier;
	class OFCRA_Scotland_Flag_F: FlagCarrier
	{
		author="wombat";
		scope=2;
		displayName="Flag (Scotland)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\ofcra_textures\flags\scotland.paa'";
		};
		scopeCurator=2;
	};

	class OFCRA_China_Flag_F: OFCRA_Scotland_Flag_F
	{
		displayName="Flag (China)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\ofcra_textures\flags\china.paa'";
		};
	};
	class OFCRA_Iran_Flag_F: OFCRA_Scotland_Flag_F
	{
		displayName="Flag (Iran)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\ofcra_textures\flags\iran.paa'";
		};
	};
	class OFCRA_NorthKorea_Flag_F: OFCRA_Scotland_Flag_F
	{
		displayName="Flag (North Korea)";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture '\ofcra_textures\flags\north_korea.paa'";
		};
	};

};


class CfgMarkers
{
	class Flag;
	class OFCRA_Scotland_Flag: Flag
	{
		markerClass="Flags";
		name="Scotland Flag";
		icon="\ofcra_textures\flags\scotland_marker.paa";
		texture="\ofcra_textures\flags\scotland_marker.paa";
		color[]={1,1,1,1};
		size=32;
		shadow=0;
		scope=1;
	};

	class OFCRA_China_Flag : OFCRA_Scotland_Flag
	{
		name="China Flag";
		icon="\ofcra_textures\flags\china_marker.paa";
		texture="\ofcra_textures\flags\china_marker.paa";
	}

	class OFCRA_Iran_Flag : OFCRA_Scotland_Flag
	{
		name="Iran Flag";
		icon="\ofcra_textures\flags\iran_marker.paa";
		texture="\ofcra_textures\flags\iran_marker.paa";
	}

	class OFCRA_NorthKorea_Flag : OFCRA_Scotland_Flag
	{
		name="North Korea Flag";
		icon="\ofcra_textures\flags\north_korea_marker.paa";
		texture="\ofcra_textures\flags\north_korea_marker.paa";
	}

};