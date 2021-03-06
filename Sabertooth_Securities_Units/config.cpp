class cfgPatches
{
	class Sabertooth_Securities_Units
	{
		author="Thomas & Krevan";
		name="STS Mod";
		fileName="Sabertooth_Securities_Units.pbo";
		units[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Armor",
			"OPTRE_FC_Core",
			"OPTRE_Core",
			"OPTRE_Weapons",
			"A3_Weapons_F",
			"A3_Sounds_F",
			"A3_Sounds_F_Arsenal",
			"A3_Weapons_F_EPA",
			"A3Data",
			"A3_Data_F",
			"A3_Data_F_Mark",
			"OPAEX_Core",
			"STSArmors"
		};
		weapons[]={};
	};
};
class CfgEditorCategories
{
	class Sabertooth
	{
		displayName="Sabertooth Security";
	};
};
class CfgEditorSubcategories
{
	class Sabertooth_Units
	{
		displayName="Men";
	};
};
class CfgWeapons
{
	class OPTRE_MA5C;
	class OPTRE_MA5CGL;
	class OPTRE_M392_DMR;
	class OPTRE_M6G;

	class STS_M6G: OPTRE_M6G
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="OPTRE_M6G_Scope";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="OPTRE_M6_silencer";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="OPTRE_M6G_Flashlight";
			};
		};
	};

	class STS_M392: OPTRE_M392_DMR
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="OPTRE_BMR_Scope_v2";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="OPTRE_MA5Suppressor";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="bipod_01_F_blk";
			};
		};
	};

	class STS_MA5CGL: OPTRE_MA5CGL
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="OPTRE_MA5Suppressor";
			};
		};
	};

	class STS_MA5C: OPTRE_MA5C
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="OPTRE_MA5Suppressor";
			};
		};
	};
};
class CfgVehicles
{
  class B_Soldier_base_F;

	class Sabertooth_Marksman: B_Soldier_base_F
	{
		displayName="[Sabertooth] Marksman";
		author="Thomas";
		scope=2;
		scopeCurator=2;
		editorCategory="Sabertooth";
    editorSubcategory="Sabertooth_Units";
		backpack="OPTRE_UNSC_Rucksack_Heavy";
		uniformClass="STS_BLK_SaberTooth_SlimLeg_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		weapons[]=
		{
      "STS_M392",
			"STS_M6G",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"STS_M392",
			"STS_M6G",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		respawnMagazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		Items[]=
		{
			"OPTRE_Biofoam"
		};
		RespawnItems[]=
		{
			"OPTRE_Biofoam"
		};
		linkedItems[]=
		{
			"STS_R_CH252",
      "STS_BLK_Basic_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
		respawnLinkedItems[]=
		{
			"STS_R_CH252",
			"STS_BLK_Basic_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
	};

	class Sabertooth_Grenadier: B_Soldier_base_F
  {
    displayName="[Sabertooth] Grenadier";
		author="Thomas";
		scope=2;
		scopeCurator=2;
		editorCategory="Sabertooth";
    editorSubcategory="Sabertooth_Units";
		backpack="OPTRE_UNSC_Rucksack";
		uniformClass="STS_BLK_SaberTooth_SlimLeg_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		weapons[]=
		{
      "STS_MA5CGL",
			"OPTRE_M6C_SF",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"STS_MA5CGL",
			"OPTRE_M6C_SF",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"OPAEX_3Rnd_Smoke_Grenade_shell",
			"OPAEX_3Rnd_Smoke_Grenade_shell",
			"OPAEX_3Rnd_Smoke_Grenade_shell",
			"OPAEX_3Rnd_SmokeRed_Grenade_shell",
			"OPAEX_3Rnd_SmokeRed_Grenade_shell",
			"OPAEX_3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_UGL_FlareRed_F",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"OPAEX_3Rnd_Smoke_Grenade_shell",
			"OPAEX_3Rnd_Smoke_Grenade_shell",
			"OPAEX_3Rnd_Smoke_Grenade_shell",
			"OPAEX_3Rnd_SmokeRed_Grenade_shell",
			"OPAEX_3Rnd_SmokeRed_Grenade_shell",
			"OPAEX_3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_UGL_FlareRed_F",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		Items[]=
		{
			"OPTRE_Biofoam"
		};
		RespawnItems[]=
		{
			"OPTRE_Biofoam"
		};
		linkedItems[]=
		{
			"STS_R_CH252",
      "STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
		respawnLinkedItems[]=
		{
			"STS_R_CH252",
			"STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
  };

	class Sabertooth_Engineer: B_Soldier_base_F
  {
    displayName="[Sabertooth] Engineer";
		author="Thomas";
		scope=2;
		scopeCurator=2;
		editorCategory="Sabertooth";
    editorSubcategory="Sabertooth_Units";
		backpack="OPTRE_UNSC_Rucksack_Heavy";
		uniformClass="STS_BLK_SaberTooth_SlimLeg_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		weapons[]=
		{
      "OPTRE_M7S",
			"OPTRE_M6C_SF",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M7S",
			"OPTRE_M6C_SF",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"C12_Remote_Mag",
			"C12_Remote_Mag",
			"C12_Remote_Mag",
			"C7_Remote_Mag",
			"C7_Remote_Mag",
			"C7_Remote_Mag",
			"C7_Remote_Mag"
		};
		respawnMagazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag",
			"C12_Remote_Mag",
			"C12_Remote_Mag",
			"C12_Remote_Mag",
			"C7_Remote_Mag",
			"C7_Remote_Mag",
			"C7_Remote_Mag",
			"C7_Remote_Mag"
		};
		Items[]=
		{
			"OPTRE_Biofoam"
		};
		RespawnItems[]=
		{
			"OPTRE_Biofoam"
		};
		linkedItems[]=
		{
			"STS_R_CH252",
      "STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"FirstAidKit",
			"ToolKit",
			"A3_TVG_S_F6"
		};
		respawnLinkedItems[]=
		{
			"STS_R_CH252",
			"STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"FirstAidKit",
			"ToolKit",
			"A3_TVG_S_F6"
		};
  };

	class Sabertooth_Crewman: B_Soldier_base_F
  {
    displayName="[Sabertooth] Crewman";
		author="Thomas";
		scope=2;
		scopeCurator=2;
		editorCategory="Sabertooth";
    editorSubcategory="Sabertooth_Units";
		backpack="OPTRE_UNSC_Rucksack";
		uniformClass="STS_BLK_SaberTooth_SlimLeg_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		weapons[]=
		{
      "OPTRE_M7S",
			"OPTRE_M6G_SF",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M7S",
			"OPTRE_M6G_SF",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		respawnMagazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		Items[]=
		{
			"OPTRE_Biofoam"
		};
		RespawnItems[]=
		{
			"OPTRE_Biofoam"
		};
		linkedItems[]=
		{
			"STS_R_CH252",
      "STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"FirstAidKit",
			"ToolKit",
			"A3_TVG_S_F6"
		};
		respawnLinkedItems[]=
		{
			"STS_R_CH252",
			"STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"FirstAidKit",
			"ToolKit",
			"A3_TVG_S_F6"
		};
  };

	class Sabertooth_Rifleman_AA: B_Soldier_base_F
  {
    displayName="[Sabertooth] Rifleman AA";
		author="Thomas";
		scope=2;
		scopeCurator=2;
		editorCategory="Sabertooth";
    editorSubcategory="Sabertooth_Units";
		backpack="OPTRE_UNSC_Rucksack_Heavy";
		uniformClass="STS_BLK_SaberTooth_SlimLeg_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		weapons[]=
		{
      "OPTRE_M7S",
			"OPTRE_M6C_SF",
			"MatGrp_M41_SSR_AA",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M7S",
			"OPTRE_M6C_SF",
			"MatGrp_M41_SSR_AA",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"MatGrp_M41_Twin_HEAT_AA",
			"MatGrp_M41_Twin_HEAT_AA",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		respawnMagazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"MatGrp_M41_Twin_HEAT_AA",
			"MatGrp_M41_Twin_HEAT_AA",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		Items[]=
		{
			"OPTRE_Biofoam"
		};
		RespawnItems[]=
		{
			"OPTRE_Biofoam"
		};
		linkedItems[]=
		{
			"STS_R_CH252",
      "STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
		respawnLinkedItems[]=
		{
			"STS_R_CH252",
			"STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
  };

	class Sabertooth_Rifleman_AT: B_Soldier_base_F
  {
    displayName="[Sabertooth] Rifleman AT";
		author="Thomas";
		scope=2;
		scopeCurator=2;
		editorCategory="Sabertooth";
    editorSubcategory="Sabertooth_Units";
		backpack="OPTRE_UNSC_Rucksack_Heavy";
		uniformClass="STS_BLK_SaberTooth_SlimLeg_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		weapons[]=
		{
      "OPTRE_M7S",
			"OPTRE_M6C_SF",
			"MatGrp_M41_SSR_AT",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"OPTRE_M7S",
			"OPTRE_M6C_SF",
			"OPTRE_M48_PAW",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"MatGrp_M41_Twin_HEAT_AT",
			"MatGrp_M41_Twin_HEAT_AT",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		respawnMagazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"MatGrp_M41_Twin_HEAT_AT",
			"MatGrp_M41_Twin_HEAT_AT",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		Items[]=
		{
			"OPTRE_Biofoam"
		};
		RespawnItems[]=
		{
			"OPTRE_Biofoam"
		};
		linkedItems[]=
		{
			"STS_R_CH252",
      "STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
		respawnLinkedItems[]=
		{
			"STS_R_CH252",
			"STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
  };

  class Sabertooth_Rifleman: B_Soldier_base_F
  {
    displayName="[Sabertooth] Rifleman";
		author="Thomas";
		scope=2;
		scopeCurator=2;
		editorCategory="Sabertooth";
    editorSubcategory="Sabertooth_Units";
		backpack="OPTRE_UNSC_Rucksack";
		uniformClass="STS_BLK_SaberTooth_SlimLeg_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\blufor\data\clothing1_co.paa"
		};
		weapons[]=
		{
      "STS_MA5C",
			"OPTRE_M6C_SF",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"STS_MA5C",
			"OPTRE_M6C_SF",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		respawnMagazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag",
			"SmokeShell",
			"SmokeShell",
			"OPTRE_M9_Frag",
			"OPTRE_M9_Frag"
		};
		Items[]=
		{
			"OPTRE_Biofoam"
		};
		RespawnItems[]=
		{
			"OPTRE_Biofoam"
		};
		linkedItems[]=
		{
			"STS_R_CH252",
      "STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
		respawnLinkedItems[]=
		{
			"STS_R_CH252",
			"STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"TFAR_anprc152",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
  };
};
