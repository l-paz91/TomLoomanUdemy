// Copyright longPointer

// -----------------------------------------------------------------------------

using UnrealBuildTool;

// -----------------------------------------------------------------------------

public class ObjectiveActor : ModuleRules
{
	public ObjectiveActor(ReadOnlyTargetRules Target) 
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