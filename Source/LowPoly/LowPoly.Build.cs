// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LowPoly : ModuleRules
{
	public LowPoly(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
