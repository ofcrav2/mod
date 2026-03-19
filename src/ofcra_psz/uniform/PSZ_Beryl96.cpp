ambient[]={1,1,1,1};
diffuse[]={1,1,1,1};
forcedDiffuse[]={0,0,0,0};
emmisive[]={0,0,0,1};
specular[]={0.25,0.25,0.25,1};
specularPower=50;
PixelShaderID="Super";
VertexShaderID="Super";
class Stage1
{
	texture="psz\weapons\beryl\data\PSZ_Beryl96_nohq.paa";
	filter="anizotropic";
};
class Stage2
{
	texture="psz\common\data\dt\detaliczna_dt.paa";
	filter="anizotropic";
	class uvTransform
	{
		aside[]={4,0,0};
		up[]={0,4,0};
		dir[]={0,0,0};
		pos[]={0,0,0};
	};
};
class Stage3
{
	texture="#(argb,8,8,3)color(0,0,0,0,MC)";
};
class Stage4
{
	texture="psz\weapons\beryl\data\PSZ_Beryl96_as.paa";
	filter="anizotropic";
};
class Stage5
{
	texture="psz\weapons\beryl\data\PSZ_Beryl96_smdi.paa";
	filter="anizotropic";
};
class Stage6
{
	texture="#(ai,64,64,1)fresnel(5.7,1.8)";
};
class Stage7
{
	texture="psz\common\data\env_land_co.paa";
	filter="anizotropic";
	useWorldEnvMap="true";
};
class StageTI
{
	texture="psz\weapons\beryl\data\PSZ_Beryl96_ti_ca.paa";
	filter="anizotropic";
};
