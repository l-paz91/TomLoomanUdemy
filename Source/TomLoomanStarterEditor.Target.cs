// Copyright Epic Games, Inc. All Rights Reserved.

// -----------------------------------------------------------------------------

using UnrealBuildTool;
using System.Collections.Generic;

// -----------------------------------------------------------------------------

public class TomLoomanStarterEditorTarget : TargetRules
{
	public TomLoomanStarterEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
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