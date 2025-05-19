// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Megaman_X4 : ModuleRules
{
	public Megaman_X4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
