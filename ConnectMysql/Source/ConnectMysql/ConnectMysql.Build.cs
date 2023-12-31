// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class ConnectMysql : ModuleRules
{
    string ThirdPartyPath
    {
        get
        {
            return Path.GetFullPath(Path.Combine(ModuleDirectory, "../ThirdParty"));
        }
    }

    private string LibrariesPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Libraries/")); }
    }

    //public string BinariesPath
    //{
    //    get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/Win64/")); }
    //}

    public ConnectMysql(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
		);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"Projects"
			}
		);

		PublicAdditionalLibraries.Add(Path.Combine(ThirdPartyPath,"lib", "MySqlConnection.lib"));

	}
} 
