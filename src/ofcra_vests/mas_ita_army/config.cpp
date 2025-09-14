class CfgPatches
{
	class ofcra_vests_mas_ita_army {
		name = "ofcra_vests_mas_ita_army";
		requiredVersion = 1.98;
		author = "OFCRA Wombat";
		skipWhenMissingDependencies=1;
		requiredAddons[] = {
			"ofcra_vests",
			"mas_ita_army_items",
			"mas_ita_army_weapons"

		};
		units[] = {};
		weapons[] = {};
		ammo[]={};

	};
};


class OFCRA_level3_plate_HitpointsProtectionInfo;

class cfgWeapons
{
	class V_PlateCarrier1_rgr;
	class V_mas_itr_PlateCarrier1_rgr : V_PlateCarrier1_rgr{
		class ItemInfo;
	}
	class V_mas_itr_PlateCarrier1_tan : V_mas_itr_PlateCarrier1_rgr{
		class ItemInfo : ItemInfo{};
	}
	class V_mas_itr_PlateCarrier1_win : V_mas_itr_PlateCarrier1_rgr{
		class ItemInfo : ItemInfo{};
	}

	class V_mas_itr_PlateCarrierGL_rgr : V_mas_itr_PlateCarrier1_rgr{
		class ItemInfo : ItemInfo{};
	}
	class V_mas_itr_PlateCarrierAR_rgr : V_mas_itr_PlateCarrier1_rgr{
		class ItemInfo : ItemInfo{};
	}
	
	class V_mas_itr_PlateCarrierGL_tan : V_mas_itr_PlateCarrierGL_rgr{
		class ItemInfo : ItemInfo{};
	}
	class V_mas_itr_PlateCarrierAR_tan : V_mas_itr_PlateCarrierAR_rgr{
		class ItemInfo : ItemInfo{};
	}

	class V_mas_itr_PlateCarrierGL_win : V_mas_itr_PlateCarrierGL_rgr{
		class ItemInfo : ItemInfo{};
	}
	class V_mas_itr_PlateCarrierAR_win : V_mas_itr_PlateCarrierAR_rgr{
		class ItemInfo: ItemInfo{};
	}

	class OFCRA_V_mas_itr_PlateCarrier1_rgr: V_mas_itr_PlateCarrier1_rgr
	{
		author="wombat";
		displayName="OFCRA Italian RGR level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
	class OFCRA_V_mas_itr_PlateCarrierGL_rgr: V_mas_itr_PlateCarrierGL_rgr
	{
		author="wombat";
		displayName="OFCRA Italian RGR GL level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
	class OFCRA_V_mas_itr_PlateCarrierAR_rgr: V_mas_itr_PlateCarrierAR_rgr
	{
		author="wombat";
		displayName="OFCRA Italian RGR AR level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
	class OFCRA_V_mas_itr_PlateCarrier1_tan: V_mas_itr_PlateCarrier1_tan
	{
		author="wombat";
		displayName="OFCRA Italian TAN level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
	class OFCRA_V_mas_itr_PlateCarrierGL_tan: V_mas_itr_PlateCarrierGL_tan
	{
		author="wombat";
		displayName="OFCRA Italian TAN GL level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
	class OFCRA_V_mas_itr_PlateCarrierAR_tan: V_mas_itr_PlateCarrierAR_tan
	{
		author="wombat";
		displayName="OFCRA Italian TAN AR level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
	class OFCRA_V_mas_itr_PlateCarrier1_win: V_mas_itr_PlateCarrier1_win
	{
		author="wombat";
		displayName="OFCRA Italian WIN level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
	class OFCRA_V_mas_itr_PlateCarrierGL_win: V_mas_itr_PlateCarrierGL_win
	{
		author="wombat";
		displayName="OFCRA Italian WIN GL level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
	class OFCRA_V_mas_itr_PlateCarrierAR_win: V_mas_itr_PlateCarrierAR_win
	{
		author="wombat";
		displayName="OFCRA Italian WIN AR level 3 plate";
		nameSound = "";
		class ItemInfo : ItemInfo {
			mass= 80;
			class HitpointsProtectionInfo : OFCRA_level3_plate_HitpointsProtectionInfo{};
		}
	};
}

