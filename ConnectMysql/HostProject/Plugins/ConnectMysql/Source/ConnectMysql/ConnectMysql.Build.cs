// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class ConnectMysql : ModuleRules
{
	string ThirdPartyPath
	{
		get
		{
			return Path.GetFullPath(Path.Combine(ModuleDirectory, "../ThirdParty/ConnectorLibs"));
		}
	}

	public ConnectMysql(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"ConnectorLibs"
			}
		);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
			}
		);

		string includePath = Path.Combine(ThirdPartyPath, "include");
		PublicIncludePaths.Add(includePath);
		bEnableUndefinedIdentifierWarnings = false;

	}
} 
