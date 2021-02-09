class CfgPatches
{
    class STSArmors
    {
         units[]=
        {       
        };
        weapons[]=
        {   
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
			"A3_Weapons_F_Acc",
		    "OPTRE_Core",
			"A3_Characters_F",
			"OPTRE_Vehicles",
			"OPTRE_UNSC_Units",
			"OPTRE_Weapons_Backpacks",
			"V_FZ_Armor",
			"ace_common",
			"ace_goggles"
        };
    };
};

class cfgWeapons
{
    /** Helmet Section */
	
    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_dp;
	class HeadgearItem;
	class OPTRE_UNSC_CH252_Helmet_Vacuum_MAR;
	class OPTRE_UNSC_CH252_Helmet_MAR;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;

	/** ODST Helmet Section */

    class Spectre_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		author="Jay + Krevan";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.6;
		displayName="[spectre Co.] CH252D";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252D\BLK\Spectre_CH252D_BLK_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_co.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=45;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=45;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=30;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
		allowedFacewear[]={};
	};

    class Spectre_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Jay + Krevan";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.6;
		displayName="[spectre Co.] CH252D";
		scope=1;
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252D\BLK\Spectre_CH252D_BLK_CO.paa"
		};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]=
			{
				"camo",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Face
				{
					armor=45;
					hitpointName="HitFace";
					passThrough=0.1;
				};
				class Head
				{
					armor=45;
					hitPointName="HitHead";
					passThrough=0.1;
				};
				class Neck
				{
					armor=30;
					hitpointName="HitNeck";
					passThrough=0.1;
				};
			};
		};
		allowedFacewear[]={};
	};
	class Spectre_CH252DR: Spectre_CH252D
	{
		displayName="[Spectre Co.] CH252D (Red)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252D\RED\Spectre_CH252D_RED_CO.paa",
			"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_RED_Visor.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252D\RED\Spectre_CH252D_RED_CO.paa",
				"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_RED_Visor.paa"
			};
		};
	};
	class Spectre_CH252DR_dp: Spectre_CH252D_dp
	{
		displayName="[Spectre Co.] CH252D (Red)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252D\RED\Spectre_CH252D_RED_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252D\RED\Spectre_CH252D_RED_CO.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
			};
		};
	};
	class Spectre_CH252DP: Spectre_CH252D
	{
		displayName="[Spectre Co.] CH252D (Pink)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252D\PNK\Spectre_CH252D_PNK_CO.paa",
			"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_PNK_Visor.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252D\PNK\Spectre_CH252D_PNK_CO.paa",
				"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_PNK_Visor.paa"
			};
		};
	};
	class Spectre_CH252DP_dp: Spectre_CH252D_dp
	{
		displayName="[Spectre Co.] CH252D (Pink)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252D\PNK\Spectre_CH252D_PNK_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252D\PNK\Spectre_CH252D_PNK_CO.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
			};
		};
	};
	class Spectre_CH252DM: Spectre_CH252D
	{
		displayName="[Spectre Co.] CH252D (Med)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252D\MED\Spectre_CH252D_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_RED_Visor.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252D\MED\Spectre_CH252D_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_RED_Visor.paa"
			};
		};
	};
	class Spectre_CH252DM_dp: Spectre_CH252D_dp
	{
		displayName="[Spectre Co.] CH252D (Med)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252D\MED\Spectre_CH252D_MED_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252D\MED\Spectre_CH252D_MED_CO.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
			};
		};
	};
	class Spectre_CH252DB: Spectre_CH252D
	{
		displayName="[Spectre Co.] CH252D (Blue)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252D\BLU\Spectre_CH252D_BLU_CO.paa",
			"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_BLU_Visor.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252D\BLU\Spectre_CH252D_BLU_CO.paa",
				"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_BLU_Visor.paa"
			};
		};
	};
	class Spectre_CH252DB_dp: Spectre_CH252D_dp
	{
		displayName="[Spectre Co.] CH252D (Blue)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252D\BLU\Spectre_CH252D_BLU_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252D\BLU\Spectre_CH252D_BLU_CO.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
			};
		};
	};
	class Spectre_CH252DY: Spectre_CH252D
	{
		displayName="[Spectre Co.] CH252D (Yellow)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252D\YLW\Spectre_CH252D_YLW_CO.paa",
			"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_YLW_Visor.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252D\YLW\Spectre_CH252D_YLW_CO.paa",
				"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_YLW_Visor.paa"
			};
		};
	};
	class Spectre_CH252DY_dp: Spectre_CH252D_dp
	{
		displayName="[Spectre Co.] CH252D (Yellow)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252D\YLW\Spectre_CH252D_YLW_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252D\YLW\Spectre_CH252D_YLW_CO.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
			};
		};
	};
	class Spectre_CH252DG: Spectre_CH252D
	{
		displayName="[Spectre Co.] CH252D (Green)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252D\GRN\Spectre_CH252D_GRN_CO.paa",
			"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_GRN_Visor.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252D\GRN\Spectre_CH252D_GRN_CO.paa",
				"SpectreArmors\data\Helmets\CH252D\Visors\CH252D_GRN_Visor.paa"
			};
		};
	};
	class Spectre_CH252DG_dp: Spectre_CH252D_dp
	{
		displayName="[Spectre Co.] CH252D (Green)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252D\GRN\Spectre_CH252D_GRN_CO.paa",
			"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252D\GRN\Spectre_CH252D_GRN_CO.paa",
				"optre_unsc_units\army\data\odst_helmet_visor_ca.paa"
			};
		};
	};

	/** Marine Helmet Section */

	class VES_CH252_MAR_Vacuum;
	class Spectre_ECH252_Base: VES_CH252_MAR_Vacuum
    {
        class ItemInfo;
    };
	class Spectre_R_ECH252: Spectre_ECH252_Base
	{
		model="\OPTRE_UNSC_Units\Army\helmet";
        displayName = "[Spectre Co.] CH252 BLK Vac";
		scope=2;
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				"H_UNSCVacLower",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\BLK\Spectre_CH252_R_BLK_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
			"OPTRE_UNSC_Units\Army\data\helmet_visor.rvmat"
		};
		
		class ItemInfo: ItemInfo
		{
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\BLK\Spectre_CH252_R_BLK_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"

			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				"OPTRE_UNSC_Units\Army\data\helmet_visor.rvmat"
			};
		};
	};
	class VES_CH252_MAR_Vacuum_dp;
	class Spectre_R_ECH252_Base_dp: VES_CH252_MAR_Vacuum_dp
    {
        class ItemInfo;
    };
	class Spectre_R_ECH252_dp: Spectre_R_ECH252_Base_dp
	{
		model="\OPTRE_UNSC_Units\Army\helmet";
        displayName = "[Spectre Co.] CH252 BLK Vac";
		scope=1;
		hiddenSelections[]=
		{
				"camo",
				"camo2",
				"camo3",
				"H_Collar",
				"H_Neck",
				"H_UNSCVacLower",
				"H_UNSCVacVisor",
				"H_VacCollar",
				"H_Ghillie"
		};
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\BLK\Spectre_CH252_R_BLK_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
			""
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\BLK\Spectre_CH252_R_BLK_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				""
			};
		};
	};
	class Spectre_R_ECH252R: Spectre_R_ECH252
	{
		displayName="[Spectre Co.] CH252 BLK Vac (Red)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\RED\Spectre_CH252_R_RED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_RED_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\RED\Spectre_CH252_R_RED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_RED_CA.paa"
			};
		};
	};
	class Spectre_R_ECH252R_dp: Spectre_R_ECH252_dp
	{
		displayName="[Spectre Co.] CH252 BLK Vac (Red)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\RED\Spectre_CH252_R_RED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\RED\Spectre_CH252_R_RED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
			};
		};
	};
	class Spectre_R_ECH252P: Spectre_R_ECH252
	{
		displayName="[Spectre Co.] CH252 BLK Vac (Pink)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\PNK\Spectre_CH252_R_PNK_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_PNK_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\PNK\Spectre_CH252_R_PNK_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_PNK_CA.paa"
			};
		};
	};
	class Spectre_R_ECH252P_dp: Spectre_R_ECH252_dp
	{
		displayName="[Spectre Co.] CH252 BLK Vac (Pink)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\PNK\Spectre_CH252_R_PNK_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\PNK\Spectre_CH252_R_PNK_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
			};
		};
	};
	class Spectre_R_ECH252B: Spectre_R_ECH252
	{
		displayName="[Spectre Co.] CH252 BLK Vac (Blue)";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\BLU\Spectre_CH252_R_BLU_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_BLU_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\BLU\Spectre_CH252_R_BLU_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_BLU_CA.paa"
			};
		};	
	};
	class Spectre_R_ECH252B_dp: Spectre_R_ECH252_dp
	{
		displayName="[Spectre Co.] CH252 BLK Vac (Blue)";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\BLU\Spectre_CH252_R_BLU_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\BLU\Spectre_CH252_R_BLU_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_ca.paa"
			};
		};
	};
	class Spectre_R_ECH252Y: Spectre_R_ECH252
	{
		displayName="[Spectre Co.] CH252 BLK Vac (Yellow)";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\YLW\Spectre_CH252_R_YLW_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_YLW_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\YLW\Spectre_CH252_R_YLW_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_YLW_CA.paa"
			};
		};	
	};
	class Spectre_R_ECH252Y_dp: Spectre_R_ECH252_dp
	{
		displayName="[Spectre Co.] CH252 BLK Vac (yellow)";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\YLW\Spectre_CH252_R_YLW_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\YLW\Spectre_CH252_R_YLW_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_ca.paa"
			};
		};
	};
	class OPTRE_UNSC_CH252_Helmet2_WDL;
	class Spectre_R_CH252: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		author = "Jay";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.6;
        scope = 2;
		scopeArsenal =2;
	    displayName = "[Spectre Co.] CH252 BLK Collar";
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\BLK\Spectre_CH252_R_BLK_CO.paa"
		};
	};
	class Spectre_CORP_ECH252: Spectre_R_ECH252
	{
   	   	displayName = "[Spectre Co.] CH252 BLK Corpsman Vac";
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
		};
		
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
			};
		};
	};
	class Spectre_CORP_ECH252OPN: Spectre_ECH252_Base
	{
		
		displayName="[Spectre Co.] CH252 WLD Corpsman Vac (Red)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_RED_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
			""
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_RED_CA.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				""
			};
		};
		
	};
	class Spectre_CORP_ECH252OPN_dp: Spectre_R_ECH252_dp
	{
		displayName="[Spectre Co.] CH252 WLD Corpsman Vac (Red)";
		scope=1;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
			};
		};
	};
	class Spectre_CORP_ECH252GL: Spectre_CORP_ECH252
	{
		displayName="[Spectre Co.] CH252 WLD Corpsman Vac (Yellow)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_YLW_CA.paa"
		};
		
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_YLW_CA.paa"
			};
		};
	};
	class Spectre_CORP_ECH252SL: Spectre_CORP_ECH252
	{
		displayName="[Spectre Co.] CH252 WLD Corpsman Vac (Blue)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_BLU_CA.paa"
		};
		
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_BLU_CA.paa"
			};
		};
	};
	class Spectre_CORP_ECH252_dp: Spectre_R_ECH252_Base_dp
	{
   	   	displayName = "[Spectre Co.] CH252 WLD Corpsman Vac";
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_ca.paa"
		};
		
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = 
			{
				"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_ca.paa"
			};
		};
	};
	class Spectre_CORP_ECH252GL_dp: Spectre_R_ECH252_Base_dp
	{
		displayName="[Spectre Co.] CH252 WLD Corpsman Vac (Yellow)";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
		};
		
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_ca.paa"
			};
		};
	};
	class Spectre_CORP_ECH252SL_dp: Spectre_R_ECH252_Base_dp
	{
		displayName="[Spectre Co.] CH252 WLD Corpsman Vac (Blue)";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
			"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_CA.paa"
		};
		
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"SpectreArmors\data\Helmets\CH252\MED\Spectre_CH252_M_MED_CO.paa",
				"SpectreArmors\data\Helmets\CH252\Visors\CHVISR_ca.paa"
			};
		};
	};
	class Spectre_CH252R: Spectre_R_CH252
	{
	    displayName = "[Spectre Co.] CH252 Collar (Red)";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\RED\Spectre_CH252_R_RED_CO.paa"
		};
	};
	class Spectre_CH252B: Spectre_R_CH252
	{
	    displayName = "[Spectre Co.] CH252 Collar (Blue)";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\BLU\Spectre_CH252_R_BLU_CO.paa"
		};
	};
	class Spectre_CH252G: Spectre_R_CH252
	{
	    displayName = "[Spectre Co.] CH252 Collar (Green)";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\GRN\Spectre_CH252_R_GRN_CO.paa"
		};
	};
	class Spectre_CH252Y: Spectre_R_CH252
	{
	    displayName = "[Spectre Co.] CH252 Collar (Yellow)";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\YLW\Spectre_CH252_R_YLW_CO.paa"
		};
	};
	class Spectre_CH252P: Spectre_R_CH252
	{
	    displayName = "[Spectre Co.] CH252 Collar (Pink)";
		scope=2;
		hiddenSelectionsTextures[] = 
		{
			"SpectreArmors\data\Helmets\CH252\PNK\Spectre_CH252_R_PNK_CO.paa"
		};
	};

	/** RECON Helmet **/

	class Spectre_Recon: OPTRE_UNSC_Recon_Helmet
	{
		displayname="[Spectre Co.] R/B5 Helmet (Black)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\BLK\Spectre_S1ONIR_BLK_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_GRN_visor_co.paa"
		};
	};
	class Spectre_Recon_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		displayname="[Spectre Co.] R/B5 Helmet (Black) [Depolariazed]";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\BLK\Spectre_S1ONIR_BLK_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_GRN_visor_ca.paa"
		};
	};
	class Spectre_Recon_MED: OPTRE_UNSC_Recon_Helmet
	{
		displayname="[Spectre Co.] R/B5 Helmet (MED)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\MED\Spectre_S1ONIR_MED_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_RED_visor_co.paa"
		};
	};
	class Spectre_Recon_MED_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		displayname="[Spectre Co.] R/B5 Helmet (MED) [Depolariazed]";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\MED\Spectre_S1ONIR_MED_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_RED_visor_ca.paa"
		};
	};

	class Spectre_Recon_RED: OPTRE_UNSC_Recon_Helmet
	{
		displayname="[Spectre Co.] R/B5 Helmet (RED)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\RED\Spectre_S1ONIR_RED_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_RED_visor_co.paa"
		};
	};
	class Spectre_Recon_RED_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		displayname="[Spectre Co.] R/B5 Helmet (RED) [Depolariazed]";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\RED\Spectre_S1ONIR_RED_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_RED_visor_ca.paa"
		};
	};

	class Spectre_Recon_BLU: OPTRE_UNSC_Recon_Helmet
	{
		displayname="[Spectre Co.] R/B5 Helmet (Blue)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\BLU\Spectre_S1ONIR_BLU_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_BLU_visor_co.paa"
		};
	};
	class Spectre_Recon_BLU_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		displayname="[Spectre Co.] R/B5 Helmet (Blue) [Depolariazed]";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\BLU\Spectre_S1ONIR_BLU_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_BLU_visor_ca.paa"
		};
	};

	class Spectre_Recon_GRN: OPTRE_UNSC_Recon_Helmet
	{
		displayname="[Spectre Co.] R/B5 Helmet (Green)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\GRN\Spectre_S1ONIR_GRN_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_GRN_visor_co.paa"
		};
	};
	class Spectre_Recon_GRN_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		displayname="[Spectre Co.] R/B5 Helmet (GRN) [Depolariazed]";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\GRN\Spectre_S1ONIR_GRN_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_GRN_visor_ca.paa"
		};
	};

	class Spectre_Recon_PNK: OPTRE_UNSC_Recon_Helmet
	{
		displayname="[Spectre Co.] R/B5 Helmet (Pink)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\PNK\Spectre_S1ONIR_PNK_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_PNK_visor_co.paa"
		};
	};
	class Spectre_Recon_PNK_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		displayname="[Spectre Co.] R/B5 Helmet (Pink) [Depolariazed]";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\PNK\Spectre_S1ONIR_PNK_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_PNK_visor_ca.paa"
		};
	};

	class Spectre_Recon_YLW: OPTRE_UNSC_Recon_Helmet
	{
		displayname="[Spectre Co.] R/B5 Helmet (Yellow)";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\YLW\Spectre_S1ONIR_YLW_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_YLW_visor_co.paa"
		};
	};
	class Spectre_Recon_YLW_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		displayname="[Spectre Co.] R/B5 Helmet (Yellow) [Depolariazed]";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Helmets\Recon\YLW\Spectre_S1ONIR_YLW_CO.paa",
			"SpectreArmors\data\Helmets\Recon\Visors\recon_YLW_visor_ca.paa"
		};
	};



	/** Vest Section */
	/** ODST Armor Section */
	class OPTRE_UNSC_M52D_Armor;
	class ItemInfo;

	class Spectre_M52D_Armor_1: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\BLK\Spectre_M52_V_BLK_CO.paa",
			"SpectreArmors\data\Armor\ODST\BLK\Spectre_M52_R_BLK_CO.paa",
			"SpectreArmors\data\Armor\ODST\BLK\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\BLK\Spectre_M52D_BLK_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_2: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_3: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_4: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_5: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_6: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_7: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_8: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_9: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_10: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_11: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_12: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_13: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_14: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_15: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_16: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_17: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(Sniper)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_18: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(Sniper,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_19: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(Sniper,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_20: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_21: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(Sniper,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_22: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(Sniper,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_23: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_24: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_25: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_26: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_27: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_28: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_29: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_30: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_31: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_33: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_32: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_34: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_35: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_36: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_37: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_38: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_Armor_39: Spectre_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor(CQB,AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_Armor_41: Spectre_M52D_Armor_1
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] M52D Body Armor (Ammo Bearer)";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\BLK\Spectre_M52_V_BLK_CO.paa",
			"SpectreArmors\data\Armor\ODST\BLK\Spectre_M52_R_BLK_CO.paa",
			"SpectreArmors\data\Armor\ODST\BLK\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\BLK\Spectre_M52D_BLK_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_RED_Armor_1: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\RED\Spectre_M52_V_RED_CO.paa",
			"SpectreArmors\data\Armor\ODST\RED\Spectre_M52_R_RED_CO.paa",
			"SpectreArmors\data\Armor\ODST\RED\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\RED\Spectre_M52D_RED_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_2: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_3: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_4: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_5: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_6: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_7: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_8: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_9: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_10: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_11: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_12: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_13: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_14: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_15: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_16: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_17: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(Sniper)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_18: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(Sniper,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_19: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(Sniper,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_20: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_21: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(Sniper,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_22: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(Sniper,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_23: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_24: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_25: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_26: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_27: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_28: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_29: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_30: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_31: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_33: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_32: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_34: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_35: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_36: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_37: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_38: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_RED_Armor_39: Spectre_M52D_RED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor(CQB,AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_RED_Armor_41: Spectre_M52D_RED_Armor_1
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] RED M52D Body Armor (Ammo Bearer)";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\RED\Spectre_M52_V_RED_CO.paa",
			"SpectreArmors\data\Armor\ODST\RED\Spectre_M52_R_RED_CO.paa",
			"SpectreArmors\data\Armor\ODST\RED\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\RED\Spectre_M52D_RED_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_MED_Armor_1: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\MED\Spectre_M52_V_MED_CO.paa",
			"SpectreArmors\data\Armor\ODST\MED\Spectre_M52_M_MED_CO.paa",
			"SpectreArmors\data\Armor\ODST\MED\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\MED\Spectre_M52D_MED_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_2: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_3: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_4: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_5: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_6: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_7: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_8: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_9: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_10: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_11: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_12: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_13: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_14: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_15: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_16: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_17: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(Sniper)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_18: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(Sniper,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_19: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(Sniper,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_20: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_21: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(Sniper,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_22: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(Sniper,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_23: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_24: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_25: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_26: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_27: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_28: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_29: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_30: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_31: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_33: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_32: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_34: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_35: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_36: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_37: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_38: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_MED_Armor_39: Spectre_M52D_MED_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor(CQB,AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_MED_Armor_41: Spectre_M52D_MED_Armor_1
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] MED M52D Body Armor (Ammo Bearer)";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\MED\Spectre_M52_V_MED_CO.paa",
			"SpectreArmors\data\Armor\ODST\MED\Spectre_M52_M_MED_CO.paa",
			"SpectreArmors\data\Armor\ODST\MED\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\MED\Spectre_M52D_MED_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_PNK_Armor_1: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\PNK\Spectre_M52_V_PNK_CO.paa",
			"SpectreArmors\data\Armor\ODST\PNK\Spectre_M52_R_PNK_CO.paa",
			"SpectreArmors\data\Armor\ODST\PNK\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\PNK\Spectre_M52D_PNK_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_2: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_3: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_4: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_5: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_6: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_7: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_8: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_9: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_10: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_11: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_12: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_13: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_14: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_15: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_16: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_17: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(Sniper)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_18: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(Sniper,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_19: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(Sniper,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_20: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_21: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(Sniper,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_22: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(Sniper,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_23: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_24: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_25: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_26: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_27: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_28: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_29: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_30: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_31: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_33: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_32: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_34: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_35: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_36: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_37: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_38: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_PNK_Armor_39: Spectre_M52D_PNK_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor(CQB,AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_PNK_Armor_41: Spectre_M52D_PNK_Armor_1
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] PNK M52D Body Armor (Ammo Bearer)";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\PNK\Spectre_M52_V_PNK_CO.paa",
			"SpectreArmors\data\Armor\ODST\PNK\Spectre_M52_R_PNK_CO.paa",
			"SpectreArmors\data\Armor\ODST\PNK\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\PNK\Spectre_M52D_PNK_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_GRN_Armor_1: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\GRN\Spectre_M52_V_GRN_CO.paa",
			"SpectreArmors\data\Armor\ODST\GRN\Spectre_M52_R_GRN_CO.paa",
			"SpectreArmors\data\Armor\ODST\GRN\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\GRN\Spectre_M52D_GRN_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_2: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_3: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_4: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_5: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_6: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_7: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_8: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_9: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_10: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_11: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_12: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_13: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_14: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_15: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_16: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_17: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(Sniper)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_18: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(Sniper,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_19: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(Sniper,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_20: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_21: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(Sniper,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_22: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(Sniper,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_23: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_24: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_25: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_26: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_27: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_28: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_29: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_30: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_31: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_33: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_32: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_34: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_35: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_36: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_37: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_38: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_GRN_Armor_39: Spectre_M52D_GRN_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor(CQB,AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_GRN_Armor_41: Spectre_M52D_GRN_Armor_1
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] GRN M52D Body Armor (Ammo Bearer)";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\GRN\Spectre_M52_V_GRN_CO.paa",
			"SpectreArmors\data\Armor\ODST\GRN\Spectre_M52_R_GRN_CO.paa",
			"SpectreArmors\data\Armor\ODST\GRN\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\GRN\Spectre_M52D_GRN_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_YLW_Armor_1: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\YLW\Spectre_M52_V_YLW_CO.paa",
			"SpectreArmors\data\Armor\ODST\YLW\Spectre_M52_R_YLW_CO.paa",
			"SpectreArmors\data\Armor\ODST\YLW\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\YLW\Spectre_M52D_YLW_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_2: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_3: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_4: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_5: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_6: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_7: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_8: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_9: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_10: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_11: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_12: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_13: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_14: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_15: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_16: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_17: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(Sniper)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_18: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(Sniper,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_19: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(Sniper,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_20: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_21: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(Sniper,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_22: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(Sniper,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_23: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_24: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_25: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_26: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_27: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_28: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_29: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_30: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_31: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_33: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_32: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_34: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_35: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_36: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_37: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_38: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_YLW_Armor_39: Spectre_M52D_YLW_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor(CQB,AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_YLW_Armor_41: Spectre_M52D_YLW_Armor_1
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] YLW M52D Body Armor (Ammo Bearer)";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\YLW\Spectre_M52_V_YLW_CO.paa",
			"SpectreArmors\data\Armor\ODST\YLW\Spectre_M52_R_YLW_CO.paa",
			"SpectreArmors\data\Armor\ODST\YLW\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\YLW\Spectre_M52D_YLW_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_BLU_Armor_1: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\BLU\Spectre_M52_V_BLU_CO.paa",
			"SpectreArmors\data\Armor\ODST\BLU\Spectre_M52_R_BLU_CO.paa",
			"SpectreArmors\data\Armor\ODST\BLU\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\BLU\Spectre_M52D_BLU_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_2: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_3: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_4: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_5: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_6: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_7: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_8: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_9: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_10: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_11: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_12: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_13: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_14: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_15: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_16: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_17: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(Sniper)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_18: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(Sniper,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_19: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(Sniper,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_20: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_21: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(Sniper,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_22: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(Sniper,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
//				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
//				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_23: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_24: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_25: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_26: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_27: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_28: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_29: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_30: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_31: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_33: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_32: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_34: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_35: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_36: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_37: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
//				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_38: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
//				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class Spectre_M52D_BLU_Armor_39: Spectre_M52D_BLU_Armor_1
	{
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor(CQB,AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
//				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
	class Spectre_M52D_BLU_Armor_41: Spectre_M52D_BLU_Armor_1
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[Spectre Co.] BLU M52D Body Armor (Ammo Bearer)";

		hiddenSelectionsTextures[]=
		{
			"SpectreArmors\data\Armor\ODST\BLU\Spectre_M52_V_BLU_CO.paa",
			"SpectreArmors\data\Armor\ODST\BLU\Spectre_M52_R_BLU_CO.paa",
			"SpectreArmors\data\Armor\ODST\BLU\Spectre_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"SpectreArmors\data\Armor\ODST\BLU\Spectre_M52D_BLU_CO.paa"
		};

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
//				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
//				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
//				"AS_ODSTLeft",
//				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};

			containerClass="Supply160";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};
};