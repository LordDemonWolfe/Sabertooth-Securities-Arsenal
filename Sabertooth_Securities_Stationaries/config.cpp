class CfgPatches
{
	class Sabertooth_Securities_Stationaries
	{
		units[]=
        {
			"STS_LAAG"
		};
	};
	author="Briggs"
};
class cfgFactionClasses
{
	class Sabertooth
	{
		displayName="Sabertooth Security";
	};
};
class cfgEditorSubcategories 
{
	class Sabertooth_Stationaries
	{
		displayName= "Stationaries";
	};
};
class CfgVehicles
{
    class OPTRE_Static_M41;
    class OPTRE_Static_Gauss;
    class OPTRE_Static_ATGM;
    class OPTRE_Static_AA;
    class OPTRE_LAU65D_pod;
    class OPTRE_Static_FG75;

    class STS_LAAG: OPTRE_Static_M41
	{
		dlc="Sabertooth Securities";
		scope=2;
		scopeCurator=2;
		vehicleClass="OPTRE_UNSC_Static_class";
        editorCategory="Sabertooth";
		editorSubcategory="Sabertooth_Stationaries";
		displayName="[Sabertooth] M41 Turret";
		crew="Sabertooth_Crewman";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Sabertooth_Securities_Stationaries\Data\STS_Statics.paa"
		};
	};
    class STS_AA: OPTRE_Static_AA
	{
		dlc="Sabertooth Securities";
		scope=2;
		scopeCurator=2;
		vehicleClass="OPTRE_UNSC_Static_class";
        editorCategory="Sabertooth";
		editorSubcategory="Sabertooth_Stationaries";
		displayName="[Sabertooth] AA Turret";
        model= "\OPTRE_Weapons\static\StaticTurret\Static_AA.p3d";
		crew="Sabertooth_Crewman";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Sabertooth_Securities_Stationaries\Data\STS_Statics2.paa"
		};
	};
    class STS_AT: OPTRE_Static_ATGM
	{
		dlc="Sabertooth Securities";
		scope=2;
		scopeCurator=2;
		vehicleClass="OPTRE_UNSC_Static_class";
        editorCategory="Sabertooth";
		editorSubcategory="Sabertooth_Stationaries";
		displayName="[Sabertooth] ATGM Turret";
        model="\OPTRE_Weapons\static\StaticTurret\Static_ATGM.p3d";
		crew="Sabertooth_Crewman";
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Sabertooth_Securities_Stationaries\Data\STS_Statics.paa"
		};
	};
    class STS_Gauss: OPTRE_Static_Gauss
	{
		dlc="Sabertooth Securities";
		scope=2;
		scopeCurator=2;
		vehicleClass="OPTRE_UNSC_Static_class";
        editorCategory="Sabertooth";
		editorSubcategory="Sabertooth_Stationaries";
		displayName="[Sabertooth] Gauss Turret";
		crew="Sabertooth_Crewman";
		hiddenSelections[]=
		{
			"camo2",
            "cylinder"
		};
		hiddenSelectionsTextures[]=
		{
			"Sabertooth_Securities_Stationaries\Data\STS_Statics.paa",
            "Sabertooth_Securities_Stationaries\Data\STS_Statics.paa"
		};
	};
};