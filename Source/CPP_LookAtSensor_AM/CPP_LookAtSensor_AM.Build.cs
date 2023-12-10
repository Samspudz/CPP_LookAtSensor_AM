// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_LookAtSensor_AM : ModuleRules
{
	public CPP_LookAtSensor_AM(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
