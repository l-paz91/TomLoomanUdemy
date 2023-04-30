// Copyright longPointer

// -----------------------------------------------------------------------------

using UnrealBuildTool;

// -----------------------------------------------------------------------------

public class StealthGame : ModuleRules
{
	public StealthGame(ReadOnlyTargetRules Target) 
		: base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine"
		});
	}
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------