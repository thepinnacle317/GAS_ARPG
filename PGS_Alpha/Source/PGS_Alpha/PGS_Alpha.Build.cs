// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PGS_Alpha : ModuleRules
{
	public PGS_Alpha(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"PGS_Alpha",
			"PGS_Alpha/Variant_Platforming",
			"PGS_Alpha/Variant_Combat",
			"PGS_Alpha/Variant_Combat/AI",
			"PGS_Alpha/Variant_SideScrolling",
			"PGS_Alpha/Variant_SideScrolling/Gameplay",
			"PGS_Alpha/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
