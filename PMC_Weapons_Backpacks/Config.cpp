class CfgPatches
{
    class PMC_Weapons_Backpacks
    {
        units[]=
        {       
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
             "OPTRE_Weapons_Backpacks"
        };
    };
};

class cfgVehicles
{
    class OPTRE_ILCS_Rucksack_Black;
    class OPTRE_UNSC_Rucksack_Heavy;
	class OPTRE_ILCS_Rucksack_Heavy;
	class OPTRE_UNSC_Rucksack;
    class OPTRE_ANPRC_521_Green;

	class PMC_ILCS_Rucksack_Black: OPTRE_ILCS_Rucksack_Black
	{
		displayName="PMC ILCS Rucksack";
		hiddenSelectionsTextures[]=
		{
			"PMC_Weapons_Backpacks\addon\Backpacks\ILCS\PMC_ruck_blk_co.paa"
		};
	}

	class PMC_ILCS_Medic: PMC_ILCS_Rucksack_Black
	{
		displayName="PMC ILCS Rucksack [Medic]";
		hiddenSelections[]=
		{
			"camo1",
			"AP_Heavy"
		};
	};

	class PMC_ILCS_Heavy: PMC_ILCS_Rucksack_Black
		{
		maximumLoad=400;
		mass=50;
		displayName="PMC ILCS Rucksack [Heavy]";
		hiddenSelections[]=
		{
			"camo1",
			"biofoam"
		};
	};

	class PMC_ILCS_LR: PMC_ILCS_Heavy
	{
		scope=2;
		scopeArsenal=2;
		displayName = "ILCS Rucksack (LR)";
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 50000;
        tf_subtype = "airborne";
	};
	
	class PMC_Rucksack_Black: OPTRE_UNSC_Rucksack
	{
		displayName="PMC Rucksack (Basic)";
		maximumLoad=350;
		mass=40;
		hiddenSelectionsTextures[]=
		{
			"PMC_Weapons_Backpacks\addon\Backpacks\Rucksack\PMC_soft_backpack_blk_co.paa"
		};
	};

	class PMC_Rucksack_Heavy: PMC_Rucksack_Black
	{
		displayName="PMC Rucksack (Heavy)";
		maximumLoad=400;
		mass=50;
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_medic",
			"B_Radio"
		};
	};

	class PMC_Rucksack_Gunbag: PMC_Rucksack_Black
	{	
		displayName="PMC Rucksack (Gunbag)";
		ace_gunbag = 1;
		maximumLoad=400;
		mass=50;
	};

	class PMC_ILCS_Rucksack_Gunbag: PMC_ILCS_Rucksack_Black
	{
		displayName="PMC ILCS Rucksack [Gunbag]";
		ace_gunbag = 1;
		maximumLoad=400;
		mass=50;
	};

	class PMC_Rucksack_Medic: PMC_Rucksack_Black
	{
		displayName="PMC Rucksack (Medic)";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"B_Addons",
			"B_Radio"
		};
	};

    class PMC_ANPRC_521:OPTRE_ANPRC_521_Green
	{
		scope=2;
		scopeCurator=2;
		displayName="PMC AN/PRC 521";
		maximumLoad=350;
		mass=40;
		hiddenSelectionsTextures[]=
		{
			"PMC_Weapons_Backpacks\addon\Backpacks\Rucksack\PMC_soft_backpack_blk_co.paa",
			"PMC_Weapons_Backpacks\addon\Backpacks\ANPRC521\PMC_CommoPack_blk_CO.paa"
		};
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		tf_range=50000;
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
	};
	
	class PMC_AI_Radio: OPTRE_ANPRC_521_Green
    {
        author="Echo Company";
        scope=2;
        scopeCurator=2;
        displayName="AI Radio Integration";
        model="PMC_Weapons_Backpacks\addon\Backpacks\Echo_Invis_Tas.p3d";
        maximumLoad=250;
        tf_encryptionCode="tf_west_radio_code";
        tf_dialog="rt1523g_radio_dialog";
        tf_subtype="digital_lr";
        tf_range=50000;
        tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio=1;
    };
	

};