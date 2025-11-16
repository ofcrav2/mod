class CfgPatches
{
	class ofcra_bw_mod_nh90
	{
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		units[]=
		{
			"OFCRA_Panzerhaubitze2000_Fleck",
			"OFCRA_Panzerhaubitze2000_Tropen"

		};

		requiredAddons[]=
		{
			"bwa3_nh90",
			"ofcra_ammo_base"
		};
	};
};





class CfgVehicles
{
	class Helicopter_Base_F;
	class BWA3_NH90_base: Helicopter_Base_F
	{

		class TextureSources
		{
			class Black
			{
				displayName="Black";
				author="OFCRA wombat";
				textures[]=
				{
					"ofcra_bw_mod\nh90\black_tail.paa",
					"ofcra_bw_mod\nh90\black_body.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class Grey
			{
				displayName="Grey/Navy";
				author="OFCRA wombat";
				textures[]=
				{
					"ofcra_bw_mod\nh90\grey_tail.paa",
					"ofcra_bw_mod\nh90\grey_body.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};


			class BlackFrench
			{
				displayName="Black French";
				author="OFCRA wombat";
				textures[]=
				{
					"ofcra_bw_mod\nh90\black_tail.paa",
					"ofcra_bw_mod\nh90\black_body.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"\A3\ui_f\data\map\markers\flags\France_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class GreyFrench
			{
				displayName="Grey/Navy French";
				author="OFCRA wombat";
				textures[]=
				{
					"ofcra_bw_mod\nh90\grey_tail.paa",
					"ofcra_bw_mod\nh90\grey_body.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"\A3\ui_f\data\map\markers\flags\France_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};

			class BlackSpain
			{
				displayName="Black Spain";
				author="OFCRA wombat";
				textures[]=
				{
					"ofcra_bw_mod\nh90\black_tail.paa",
					"ofcra_bw_mod\nh90\black_body.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"\A3\ui_f\data\map\markers\flags\Spain_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class GreySpain
			{
				displayName="Grey/Navy Spain";
				author="OFCRA wombat";
				textures[]=
				{
					"ofcra_bw_mod\nh90\grey_tail.paa",
					"ofcra_bw_mod\nh90\grey_body.paa",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"#(argb,8,8,3)color(0,0,0,0,co)",
					"\A3\ui_f\data\map\markers\flags\Spain_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};

		};

	}

}


