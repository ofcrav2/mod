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


			class BlackNorway
			{
				displayName="Black Norway";
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
					"\A3\ui_f\data\map\markers\flags\Norway_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class GreyNorway
			{
				displayName="Grey/Navy Norway";
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
					"\A3\ui_f\data\map\markers\flags\Norway_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};



			class BlackBelgium
			{
				displayName="Black Belgium";
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
					"\A3\ui_f\data\map\markers\flags\Belgium_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class GreyBelgium
			{
				displayName="Grey/Navy Belgium";
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
					"\A3\ui_f\data\map\markers\flags\Belgium_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};




			class BlackItaly
			{
				displayName="Black Italy";
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
					"\A3\ui_f\data\map\markers\flags\Italy_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class GreyItaly
			{
				displayName="Grey/Navy Italy";
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
					"\A3\ui_f\data\map\markers\flags\Italy_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};



			class BlackGreece
			{
				displayName="Black Greece";
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
					"\A3\ui_f\data\map\markers\flags\Greece_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class GreyGreece
			{
				displayName="Grey/Navy Greece";
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
					"\A3\ui_f\data\map\markers\flags\Greece_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};





			

			class BlackNetherlands
			{
				displayName="Black Netherlands";
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
					"\A3\ui_f\data\map\markers\flags\Netherlands_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class GreyNetherlands
			{
				displayName="Grey/Navy Netherlands";
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
					"\A3\ui_f\data\map\markers\flags\Netherlands_ca.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};



			
			class BlackFinland
			{
				displayName="Black Finland";
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
					"\ofcra_textures\flags\finland_marker.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};
			class GreyFinland
			{
				displayName="Grey/Navy Finland";
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
					"\ofcra_textures\flags\finland_marker.paa",
					"ofcra_bw_mod\nh90\black_rotor.paa"
				};
				factions[]=
				{
				};
			};

		};

	}

}


