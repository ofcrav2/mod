class VehicleMagazine;

class CfgMagazines
{
	class RHS_mag_VOG30_300: VehicleMagazine
	{
		displayName="$STR_RHS_MAG_VOG30";
		displayNameShort="$STR_RHS_MAG_SH_VOG30";
		count=300;
		ammo="rhs_ammo_VOG30";
		initSpeed=185;
		nameSound="handgrenade";
	};
	class RHS_mag_GPD30_300 : RHS_mag_VOG30_300
	{
		displayName="$STR_RHS_MAG_GPD30";
		displayNameShort="$STR_RHS_MAG_SH_GPD30";
		ammo="rhs_ammo_GPD30";
	};
	class RHS_mag_VOG17m_300: RHS_mag_VOG30_300
	{
		displayName="$STR_RHS_MAG_VOG17m";
		displayNameShort="$STR_RHS_MAG_SH_VOG17m";
		ammo="rhs_ammo_VOG17m";
	};
	
};
class CfgMagazineWells
{

};