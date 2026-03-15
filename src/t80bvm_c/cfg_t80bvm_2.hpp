class T80BVM_OLD : T80BVM_base
{
	model = "\t80bvm\T80BVM_2";
	hiddenSelections[]=
	{
		"camo1",//hull
		"camo2",//turret
		"camo3",//era
		"camo4",//nvst
		"camo5",//wheels
		"camo6",//slat
		"camo7" //Soft_ERA
	};
	hiddenSelectionsTextures[]=
	{
		"\t80bvm\tex\t80bvm_hull_co.paa",
		"\t80bvm\tex\t80bvm_turret_co.paa",
		"\t80bvm\tex\t80bvm_era_co.paa",
		"\t80bvm\tex\t80bvm_nvst_co.paa",
		"\t80bvm\tex\t80bvm_wheels_co.paa",
		"\t80bvm\tex\t80bvm_slat_co.paa",
		"\t80bvm\tex\ERA_soft_co.paa"
	};
	class textureSources
	{
		class standard
		{
			displayName="Standard";
			author="Lurker1011";
			factions[]={};
			textures[]=
			{
				"\t80bvm\tex\t80bvm_hull_co.paa",
				"\t80bvm\tex\t80bvm_turret_co.paa",
				"\t80bvm\tex\t80bvm_era_co.paa",
				"\t80bvm\tex\t80bvm_nvst_co.paa",
				"\t80bvm\tex\t80bvm_wheels_co.paa",
				"\t80bvm\tex\t80bvm_slat_co.paa",
				"\t80bvm\tex\ERA_soft_co.paa"
			};
		};
		class standard_2
		{
			displayName="Standard(black rubber)";
			author="Lurker1011";
			factions[]={};
			textures[]=
			{
				"\t80bvm_camo\tex\t80bvm_hull_2_co.paa",
				"\t80bvm\tex\t80bvm_turret_co.paa",
				"\t80bvm_camo\tex\t80bvm_era_2_co.paa",
				"\t80bvm\tex\t80bvm_nvst_co.paa",
				"\t80bvm\tex\t80bvm_wheels_co.paa",
				"\t80bvm\tex\t80bvm_slat_co.paa",
				"\t80bvm_camo\tex\ERA_soft_2_co.paa"
			};
		};
		class sand
		{
			displayName="Sand";
			author="Lurker1011";
			factions[]={};
			textures[]=
			{
				"\t80bvm_camo\tex\t80bvm_hull_D_co.paa",
				"\t80bvm_camo\tex\t80bvm_turret_D_co.paa",
				"\t80bvm_camo\tex\t80bvm_era_D_co.paa",
				"\t80bvm_camo\tex\t80bvm_nvst_D_co.paa",
				"\t80bvm_camo\tex\t80bvm_wheels_D_co.paa",
				"\t80bvm_camo\tex\t80bvm_slat_D_co.paa",
				"\t80bvm_camo\tex\ERA_soft_D_co.paa"
			};
		};
		class sand_2
			{
			displayName="Sand(black rubber)";
			author="Lurker1011";
			factions[]={};
			textures[]=
			{
				"\t80bvm_camo\tex\t80bvm_hull_D2_co.paa",
				"\t80bvm_camo\tex\t80bvm_turret_D_co.paa",
				"\t80bvm_camo\tex\t80bvm_era_D2_co.paa",
				"\t80bvm_camo\tex\t80bvm_nvst_D_co.paa",
				"\t80bvm_camo\tex\t80bvm_wheels_D_co.paa",
				"\t80bvm_camo\tex\t80bvm_slat_D_co.paa",
				"\t80bvm_camo\tex\ERA_soft_D2_co.paa"
			};
		};
	};
	class Damage 
	{
		tex[] = {};
		mat[] = {
			"t80bvm\tex\t80bvm_hull.rvmat",
			"t80bvm\tex\t80bvm_hull_damage.rvmat",
			"t80bvm\tex\t80bvm_destruction.rvmat",
			
			"t80bvm\tex\t80bvm_turret.rvmat",
			"t80bvm\tex\t80bvm_turret_damage.rvmat",
			"t80bvm\tex\t80bvm_destruction.rvmat",
			
			"t80bvm\tex\t80bvm_era.rvmat",
			"t80bvm\tex\t80bvm_era_damage.rvmat",
			"t80bvm\tex\t80bvm_destruction.rvmat",
			
			"t80bvm\tex\t80bvm_nvst.rvmat",
			"t80bvm\tex\t80bvm_nvst_damage.rvmat",
			"t80bvm\tex\t80bvm_destruction.rvmat",
			
			"t80bvm\tex\t80bvm_wheels.rvmat",
			"t80bvm\tex\t80bvm_wheels_damage.rvmat",
			"t80bvm\tex\t80bvm_destruction.rvmat",
			
			"t80bvm\tex\t80bvm_slat.rvmat",
			"t80bvm\tex\t80bvm_slat_damage.rvmat",
			"t80bvm\tex\t80bvm_destruction.rvmat",
			
			"t80bvm\tex\ERA_soft.rvmat",
			"t80bvm\tex\ERA_soft_damage.rvmat",
			"t80bvm\tex\t80bvm_destruction.rvmat"
		};
	};
	class HitPoints: HitPoints 
	{
		class SLAT_7_hitpoint
		{
			simulation="RHS_SLAT";
			armor=-60;
			material=-1;
			name="slat7";
			armorComponent="slat7";
			passThrough=0;
			minimalHit=-0.5;
			explosionShielding=0.07;
			radius=0.1;
			visual="-";
		};
		class SLAT_8_hitpoint : SLAT_7_hitpoint
		{
			name="slat8";
			armorComponent="slat8";
		};
		class SLAT_9_hitpoint : SLAT_7_hitpoint
		{
			name="slat9";
			armorComponent="slat9";
		};
		class SLAT_10_hitpoint : SLAT_7_hitpoint
		{
			name="slat10";
			armorComponent="slat10";
		};
	};
	class AnimationSources : AnimationSources
	{
		class slat_7_source
		{
			source="Hit";
			hitpoint="SLAT_7_hitpoint";
		};
		class slat_8_source
		{
			source="Hit";
			hitpoint="SLAT_8_hitpoint";
		};
		class slat_9_source
		{
			source="Hit";
			hitpoint="SLAT_9_hitpoint";
		};
		class slat_10_source
		{
			source="Hit";
			hitpoint="SLAT_10_hitpoint";
		};
	};
};
class O_T80BVM_OLD: T80BVM_OLD
{
	scope = 2;
	scopeCurator = 2;
	side = 0;
	faction = "OPF_F";
	crew = "O_T_Crew_F";
	typicalCargo[] = {"O_T_Crew_F"};
	accuracy = 1000;
	displayName = "T80BVM(obr.2017g)";	
	author="[CN]Lurker1011";
	editorPreview="t80bvm_c\ui\t80bvm_2_pre.jpg";
};
class rhs_tv_t80bvm_old: O_T80BVM_OLD
{
	vehicleClass = "rhs_vehclass_tank";
	editorSubcategory="rhs_EdSubcat_tank";
	faction = "rhs_faction_tv";
	crew = "rhs_msv_crew";
	typicalCargo[] = {"rhs_msv_crew"};
};