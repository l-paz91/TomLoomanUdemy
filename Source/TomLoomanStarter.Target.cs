// Copyright Epic Games, Inc. All Rights Reserved.

// -----------------------------------------------------------------------------

using UnrealBuildTool;
using System.Collections.Generic;

// -----------------------------------------------------------------------------

public class TomLoomanStarterTarget : TargetRules
{
	public TomLoomanStarterTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.Add("TomLoomanStarter");
		ExtraModuleNames.Add("ObjectiveActor");
		ExtraModuleNames.Add("Challenges");
		ExtraModuleNames.Add("StealthGame");
	}
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------