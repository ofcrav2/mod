class AnimationSources
{
	class recoil
	{
		source = "reload";
		weapon = "mkk_ffp_bushmaster_mk44_CV9030";
	};
	class revolving
	{
		source = "revolving";
		weapon = "rhs_weap_902a";
	};
	class zaslehrot_coax
	{
		source = "ammorandom";
		weapon = "rhs_weap_pkt";
	};
	class ex_armor_body_l_01_hit
	{
		source = "Hit";
		hitpoint = "ex_armor_body_l_01_hit";
	};
	class ex_armor_body_l_02_hit : ex_armor_body_l_01_hit {hitpoint = "ex_armor_body_l_02_hit";};
	class ex_armor_body_l_03_hit : ex_armor_body_l_01_hit {hitpoint = "ex_armor_body_l_03_hit";};
	class ex_armor_body_l_04_hit : ex_armor_body_l_01_hit {hitpoint = "ex_armor_body_l_04_hit";};
	class ex_armor_body_r_01_hit : ex_armor_body_l_01_hit {hitpoint = "ex_armor_body_r_01_hit";};
	class ex_armor_body_r_02_hit : ex_armor_body_l_01_hit {hitpoint = "ex_armor_body_r_02_hit";};
	class ex_armor_body_r_03_hit : ex_armor_body_l_01_hit {hitpoint = "ex_armor_body_r_03_hit";};
	class ex_armor_body_r_04_hit : ex_armor_body_l_01_hit {hitpoint = "ex_armor_body_r_04_hit";};
	class hide_deployment_body_net
	{
		displayName = "$STR_leopard_2a4_body_net_summer";
		source = "user";
		animPeriod = 0.01;
		initPhase = 0;
	};
		class hide_deployment_turret_net
	{
		displayName = "$STR_leopard_2a4_turret_net_summer";
		source = "user";
		animPeriod = 0.01;
		initPhase = 0;
	};
};
