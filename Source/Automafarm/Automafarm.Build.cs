// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Automafarm : ModuleRules
{
	public Automafarm(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "ProceduralMeshComponent", "Paper2D", "PaperZD" });
	}
}
