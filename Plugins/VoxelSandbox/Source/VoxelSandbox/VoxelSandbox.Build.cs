// Copyright 2019 Tefel. All Rights Reserved

using UnrealBuildTool;

public class VoxelSandbox : ModuleRules
{
	public VoxelSandbox(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "SlateCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { "MoviePlayer", "ProceduralMeshComponent", "Slate" });
    }
}