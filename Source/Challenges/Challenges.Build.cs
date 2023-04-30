// Copyright longPointer

// -----------------------------------------------------------------------------

using UnrealBuildTool;

// -----------------------------------------------------------------------------

public class Challenges : ModuleRules
{
	public Challenges(ReadOnlyTargetRules Target) 
		: base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject", 
			"Engine",
			"TomLoomanStarter"
		});
	}
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------