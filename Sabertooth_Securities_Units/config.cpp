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
			"V_SO_Core",
			"A3_Weapons_F",
			"A3_Sounds_F",
			"A3_Sounds_F_Arsenal",
			"A3_Weapons_F_EPA",
			"A3Data",
			"A3_Data_F",
			"A3_Data_F_Mark",
			"OPAEX_Core",
			"Echo_Company_Armory"
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
		linkedItems[]=
		{
			"STS_R_CH252",
      "STS_BLK_Heavy_1",
			"OPTRE_HUD_w_Glasses",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
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
			"ItemRadio",
			"ItemGPS",
			"OPTRE_NVG",
			"FirstAidKit"
		};
  };
};
