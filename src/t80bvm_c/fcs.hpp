class RscInGameUI
{
	class RscUnitInfo;
	class RscUnitInfoSoldier;
	class RscUnitInfoTank;
	class RHS_RscWeaponPlissa_FCS;
	class RHS_RscWeaponPlissa_bvm_FCS: RHS_RscWeaponPlissa_FCS
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');";
	};
};