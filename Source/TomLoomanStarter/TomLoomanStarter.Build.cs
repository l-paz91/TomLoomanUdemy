// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

// -----------------------------------------------------------------------------

public class TomLoomanStarter : ModuleRules
{
	public TomLoomanStarter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore"
        });
    }
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------