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
	/*Uniforms*/
	class OPTRE_UNSC_Army_Uniform_WDL;
	class ItemInfo;

	class STS_BLK_SaberTooth_Uniform: OPTRE_UNSC_Army_Uniform_WDL
	{
		displayName="Cross-Branch BDU [SaberTooth]";
		class ItemInfo: ItemInfo
		{
			uniformClass="STS_BLK_SaberTooth_soldier";
		};
	};
	class STS_BLK_SaberTooth_SlimLeg_Uniform: STS_BLK_SaberTooth_Uniform
	{
		displayName="Cross-Branch BDU (Slim Legs) [SaberTooth]";
		class ItemInfo: ItemInfo
		{
			uniformClass="STS_BLK_SaberTooth_SlimLeg";
		};
	};
    /** Helmet Section */

    class OPTRE_UNSC_CH252D_Helmet;
    class OPTRE_UNSC_CH252D_Helmet_dp;
	class HeadgearItem;
	class OPTRE_UNSC_CH252_Helmet_Vacuum_MAR;
	class OPTRE_UNSC_CH252_Helmet_MAR;
	class OPTRE_UNSC_Recon_Helmet;
	class OPTRE_UNSC_Recon_Helmet_dp;

	/** ODST Helmet Section */

     class STS_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		author="Jay + Krevan";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.6;
		displayName="[sabertooth] CH252D";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\ODST\STS_CH252D_BLK_CO",
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

    class STS_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		author="Jay + Krevan";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.6;
		displayName="[sabertooth] CH252D";
		hiddenSelections[]=
		{
			"camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\ODST\STS_CH252D_BLK_CO"
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

	/** Marine Helmet Section */

	class VES_CH252_MAR_Vacuum;
	class STS_ECH252_Base: VES_CH252_MAR_Vacuum
    {
        class ItemInfo;
    };
	class STS_R_ECH252: STS_ECH252_Base
	{
		model="\OPTRE_UNSC_Units\Army\helmet";
        displayName = "[SaberTooth] CH252 BLK Vac";
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
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
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
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"

			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				"OPTRE_UNSC_Units\Army\data\helmet_visor.rvmat"
			};
		};
	};
	class VES_CH252_MAR_Vacuum_dp;
	class STS_R_ECH252_Base_dp: VES_CH252_MAR_Vacuum_dp
    {
        class ItemInfo;
    };
	class STS_R_ECH252_dp: STS_R_ECH252_Base_dp
	{
		model="\OPTRE_UNSC_Units\Army\helmet";
        displayName = "[SaberTooth] CH252 BLK Vac";
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
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
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
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				""
			};
		};
	};
	class STS_R_ECH252OPN: STS_ECH252_Base
	{

		displayName="[SaberTooth] CH252 BLK Vac (Open)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
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
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				""
			};
		};

	};
	class STS_R_ECH252OPN_dp: STS_R_ECH252_dp
	{
		displayName="[SaberTooth] CH252 BLK Vac (Open)";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
			};
		};
	};
	class STS_R_ECH252GL: STS_R_ECH252
	{
		displayName="[SaberTooth] CH252 BLK Vac (Gold)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_GLD_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_GLD_CA.paa"
			};
		};
	};
	class STS_R_ECH252GL_dp: STS_R_ECH252_dp
	{
		displayName="[SaberTooth] CH252 BLK Vac (Gold)";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
			};
		};
	};
	class STS_R_CH252AA: STS_R_ECH252
	{
		displayName="[SaberTooth] CH252 BLK AA";
		model="\OPTRE_UNSC_Units\Army\aa_helmet.p3d";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\AA\STS_CH252A_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\AA\Visors\STS_CH252A_DEF_V_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet.p3d";
			hiddenSelectionsTextures[]=
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\AA\STS_CH252A_BLK_CO.paa",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\AA\Visors\STS_CH252A_DEF_V_CO.paa"
			};
		};
	};
	class STS_R_CH252AA_dp: STS_R_ECH252_dp
	{
		displayName="[SaberTooth] CH252 BLK AA";
		model="\OPTRE_UNSC_Units\Army\aa_helmet_dp.p3d";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\AA\STS_CH252A_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\AA\Visors\STS_CH252A_CLR_V_CA.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat",
			"V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"
		};

		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet_dp.p3d";
			hiddenSelectionsTextures[]=
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\AA\STS_CH252A_BLK_CO.paa",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\AA\Visors\STS_CH252A_CLR_V_CA.paa"
			};
		};
	};
	class STS_R_ECH252B: STS_R_ECH252
	{
		displayName="[SaberTooth] CH252 BLK Vac (Red)";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_RED_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_RED_CA.paa"
			};
		};
	};
	class STS_R_ECH252B_dp: STS_R_ECH252_dp
	{
		displayName="[SaberTooth] CH252 BLK Vac (Blue)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_ca.paa"
			};
		};
	};
	class OPTRE_UNSC_CH252_Helmet2_WDL;
	class STS_R_CH252: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		author = "Jay";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.6;
        scope = 2;
		scopeArsenal =2;
	    displayName = "[SaberTooth] CH252 BLK Collar";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_R_BLK_CO.paa"
		};
	};
	class STS_CORP_ECH252: STS_R_ECH252
	{
   	   	displayName = "[SaberTooth] CH252 BLK Corpsman Vac";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
			};
		};
	};
	class STS_CORP_ECH252OPN: STS_ECH252_Base
	{

		displayName="[SaberTooth] CH252 WLD Corpsman Vac (Open)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
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
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
			};
			hiddenSelectionsMaterials[]=
			{
				"OPTRE_UNSC_Units\Army\data\helmet.rvmat",
				""
			};
		};

	};
	class STS_CORP_ECH252OPN_dp: STS_R_ECH252_dp
	{
		displayName="[SaberTooth] CH252 WLD Corpsman Vac (Open)";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
			};
		};
	};
	class STS_CORP_ECH252GL: STS_CORP_ECH252
	{
		displayName="[SaberTooth] CH252 WLD Corpsman Vac (Gold)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_GLD_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_GLD_CA.paa"
			};
		};
	};
	class STS_CORP_ECH252SL: STS_CORP_ECH252
	{
		displayName="[SaberTooth] CH252 WLD Corpsman Vac (Blue)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_BLU_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_BLU_CA.paa"
			};
		};
	};
	class STS_CORP_ECH252_dp: STS_R_ECH252_Base_dp
	{
   	   	displayName = "[SaberTooth] CH252 WLD Corpsman Vac";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_ca.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] =
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_ca.paa"
			};
		};
	};
	class STS_CORP_ECH252GL_dp: STS_R_ECH252_Base_dp
	{
		displayName="[SaberTooth] CH252 WLD Corpsman Vac (Gold)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_ca.paa"
			};
		};
	};
	class STS_CORP_ECH252SL_dp: STS_R_ECH252_Base_dp
	{
		displayName="[SaberTooth] CH252 WLD Corpsman Vac (Blue)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_CA.paa"
		};

		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa",
				"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\Visors\CHVISR_ca.paa"
			};
		};
	};
	class STS_CORP_CH252: STS_R_CH252
	{
	    displayName = "[SaberTooth] CH252 WLD Corpsman Collar";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Marine\STS_CH252_M_BLK_CO.paa"
		};
	};

	/** RECON Helmet **/
//Keep the ; on line 612. Apparently, the code won't work without it?
	class STS_Recon_STS: OPTRE_UNSC_Recon_Helmet
	{
		displayname="R/B5 Helmet (SaberTooth)";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Recon\STS_S1ONIR_BLK_CO.paa",
			"optre_unsc_units\army\data\recon_visor_co.paa"
		};
	};
	class STS_Recon_STS_dp: OPTRE_UNSC_Recon_Helmet_dp
	{
		displayname="R/B5 Helmet (SaberTooth) [Depolariazed]";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Helmets\Recon\STS_S1ONIR_BLK_CO.paa",
			"optre_unsc_units\army\data\recon_visor_ca.paa"
		};
	};



	/** Vest Section */
	/** ODST Armor Section */
	class OPTRE_UNSC_M52D_Armor;

	class STS_M52D_Armor_1: OPTRE_UNSC_M52D_Armor
	{
		scope=2;
		scopeArsenal=2;
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor";

		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_V_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_R_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_woodland_co.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52D_BLK_CO"
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

			containerClass="Supply240";

			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=45;
					passThrough=0.1;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=45;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=45;
					passThrough=0.1;
				};
				class Hands
				{
					hitpointName="HitHands";
					armor=45;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=45;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=45;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=45;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					armor=45;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_M52D_Armor_2: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_3: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_4: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_5: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_6: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_7: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_8: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_9: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_10: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_11: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_12: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_13: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_14: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_15: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_16: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_17: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(Sniper)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_18: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(Sniper,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_19: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(Sniper,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_20: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_21: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(Sniper,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_22: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(Sniper,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_23: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_24: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,AR)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_25: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,AR,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_26: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,AR,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_27: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,AR,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_28: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,AR,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_29: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,AR,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_30: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,AR,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_31: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,GL)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_33: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,GL,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_32: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,SMG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_34: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,SMG,MG)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_35: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,SMG,MG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_36: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,SMG,Pistol)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_37: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,SMG,Pistol,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_38: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,SMG,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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

	class STS_M52D_Armor_39: STS_M52D_Armor_1
	{
		author="Jay + Krevan";
		displayName="[SaberTooth] M52D Body Armor(CQB,AR,Tac)";

		class ItemInfo: ItemInfo
		{
			vestType="Rebreather";
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
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


	/** STS Marine */
	class OPTRE_UNSC_M52A_Armor_Base;
	class VestItem;

	class STS_BLK_Basic_1: OPTRE_UNSC_M52A_Armor_Base
	{
		author="A Taylor and Jay + Krevan";
        scope = 2;
		scopeArsenal = 2;
		displayName="[SaberTooth] M52A WDL 0 Basic";
		model="\OPTRE_UNSC_Units\Army\armor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"A_Ghillie",
//			"A_KneesLeft",
//			"A_KneesRight",
			"A_KneesMarLeft",
			"A_KneesMarRight",
			"A_ODST",
			"A_ShinArmorLeft",
			"A_ShinArmorRight",
			"A_TacPad",
//			"A_ThighArmorLeft",
//			"A_ThighArmorRight",
//			"AS_BaseLeft",
//			"AS_BaseRight",
			"AS_LargeLeft",
			"AS_LargeRight",
			"AS_MediumLeft",
			"AS_MediumRight",
			"AS_ODSTCQBLeft",
			"AS_ODSTCQBRight",
			"AS_ODSTLeft",
			"AS_ODSTRight",
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
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_V_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_R_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		picture = "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
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
			containerClass="Supply240";
			overlaySelectionsInfo[]=
			{
				"Ghillie_hide"
			};
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Basic_2: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 0 Basic(Smoke)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
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
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Basic_3: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 0 Basic(Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Basic_4: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 0 Basic(Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Basic_5: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 0 Basic(Can)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Basic_6: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 0 Basic(Smoke,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
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
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Basic_7: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 0 Basic(Smoke,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Basic_8: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 0 Basic(Can,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Basic_9: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 0 Basic(Can,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_1: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_2: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Gren)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_3: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_4: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_5: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Can)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_6: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knife)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_7: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Gren,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_8: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Gren,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_9: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Can,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_10: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Can,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_11: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Gren,Knife)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_12: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Can,Knife)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_13: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Gren,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_14: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Gren,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_15: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Can,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_16: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Can,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_17: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knife,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_18: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_19: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_20: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Can)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_21: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Gren)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_22: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Knife)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_23: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_24: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_25: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Can,Knife)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_26: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Gren,Knife)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_27: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Can,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_28: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Can,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_29: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Gren,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_30: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Gren,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_31: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Can,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_32: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Can,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_33: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Gren,Pouch)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_34: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Gren,Pouch+)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_35: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,GL)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_36: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Knife,GL)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_37: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Gren,Knife,GL)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_38: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Can,Knife,GL)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_39: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Can,GL)";
		class ItemInfo: VestItem
        {
			vestType="Rebreather";
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Light_40: STS_BLK_Light_1
	{
		displayName="[SaberTooth] M52A WDL 1 Light(Knee,Gren,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_1: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_2: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_3: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_4: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_5: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_6: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_7: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_8: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_9: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_10: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_11: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_12: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Knife,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_13: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Knife,MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_14: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Knife,MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_15: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Knife,MG,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_16: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_17: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,Knife,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_18: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,Knife,MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_19: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,Knife,MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_21: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_22: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_23: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_24: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_25: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Knife,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_26: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Knife,GL,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_27: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_28: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_29: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_30: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_31: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(GL,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
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
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_32: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Knife,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_33: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_34: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_35: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_36: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,Knife,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_37: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,Knife,GL,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_38: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Knife,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_39: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Knife,MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_40: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Knife,MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Pack",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_41: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_42: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Gren,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Medium_43: STS_BLK_Medium_1
	{
		displayName="[SaberTooth] M52A WDL 2 Medium(Can,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_1: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_2: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_3: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_4: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_5: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_6: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_7: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_8: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_9: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_10: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Knife,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_11: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Knife,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_12: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Knife,MG,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_13: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_14: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_15: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Knife,MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_16: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Knife,MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_17: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_18: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_19: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_20: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(GL,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_21: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_22: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_23: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,Knife,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_24: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,Knife,GL,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_25: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,Knife,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_26: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,Knife,MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
//				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_27: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,Knife,MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_28: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_29: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_30: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
//				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_31: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Knife,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_32: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Knife,GL,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
//				"AP_GL",
//				"AP_Knife",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_33: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Knife,MG)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_34: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Knife,MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_35: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Knife,MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Pack",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_36: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_37: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_38: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(MG,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_39: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(MG,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
//				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_40: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_41: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Gren,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Heavy_42: STS_BLK_Heavy_1
	{
		displayName="[SaberTooth] M52A WDL 3 Heavy(Can,GL)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
//				"AS_LargeLeft",
//				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

    class STS_BLK_Corpsman_Light_1: STS_BLK_Basic_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light";
		hiddenSelectionsTextures[] =
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_V_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_M_BLK_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Armors\STS\BLK\STS_M52_L_BLK_CO.paa",
			"optre_unsc_units\army\data\ghillie_desert_co.paa",
			"optre_unsc_units\army\data\odst_armor_co.paa"
		};
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_2: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_3: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_4: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Can)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_5: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_6: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Gren)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_7: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Can,Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_8: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Can,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_9: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Can,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_10: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Can,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_11: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Can,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_12: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Gren,Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_13: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Gren,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_14: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Gren,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_15: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Gren,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
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
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_16: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Gren,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_17: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Light_18: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 1 Light (Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
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
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
//				"AS_SmallLeft",
//				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_1: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_2: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Can)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_3: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Can,Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_4: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Can,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_5: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Can,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_6: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Can,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_7: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Can,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
//				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_8: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Gren)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_9: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Gren,Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_10: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Gren,Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_11: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Gren,Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_12: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Gren,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
//				"AP_Frag",
//				"AP_Smoke",
//				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_13: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Gren,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
//				"AP_Frag",
//				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_14: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Knife)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_15: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Knife,Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_16: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Knife,Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
//				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_17: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Pouch)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};

	class STS_BLK_Corpsman_Medium_18: STS_BLK_Corpsman_Light_1
	{
		displayName="[SaberTooth] M52A WDL Corpsman 2 Medium(Pouch+)";
		class ItemInfo: VestItem
        {
			uniformModel = "\OPTRE_UNSC_Units\Army\armor.p3d";
			hiddenSelections[] =
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
//				"A_KneesLeft",
//				"A_KneesRight",
//				"A_KneesMarLeft",
//				"A_KneesMarRight",
				"A_ODST",
//				"A_ShinArmorLeft",
//				"A_ShinArmorRight",
				"A_TacPad",
//				"A_ThighArmorLeft",
//				"A_ThighArmorRight",
//				"AS_BaseLeft",
//				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
//				"AS_MediumLeft",
//				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
//				"AP_AR",
				"AP_BR",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
//				"AP_AR",
//				"AP_Pack",
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
			containerClass="Supply240";
			mass=75;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.1;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
					armor=35;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=25;
					passThrough=0.1;
				};
			};
		};
	};
};
class cfgvehicles
{
	class OPTRE_UNSC_Army_Soldier_WDL;
	class STS_BLK_SaberTooth_soldier: OPTRE_UNSC_Army_Soldier_WDL
	{
		uniformClass="STS_BLK_SaberTooth_Uniform";
		hiddenSelectionsTextures[]=
		{
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Uniforms\STS_BDU_black_CO.paa",
			"Sabertooth-Securities-Arsenal\STSArmors\Data\Textures\Uniforms\STS_BDU_black_CO.paa"
		};
	};
	class STS_BLK_SaberTooth_SlimLeg: STS_BLK_SaberTooth_soldier
	{
		uniformClass="STS_BLK_SaberTooth_SlimLeg_Uniform";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"insignia",
			"clan",
			"A_BaseLeg"
		};
	};
};
