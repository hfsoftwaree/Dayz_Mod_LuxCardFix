class CfgPatches
{
    class LuxCardFix
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"DZ_Data"};
    };
};

class CfgMods
{
	class LuxCardFix
	{
		dir = "LuxCardFix";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "LuxCardFix";
		credits = "Cristofer";
		author = "Cristofer";
		authorID = "HF";
		version = "1.0";
		type = "mod";

		dependencies[] = {"World"};

		class defs
		{
			class worldScriptModule
			{
				files[] = {"zhfbrpacklite/luxcardfix/Addons/LuxCardFix/scripts/4_World"};
			};
		};
	};
};