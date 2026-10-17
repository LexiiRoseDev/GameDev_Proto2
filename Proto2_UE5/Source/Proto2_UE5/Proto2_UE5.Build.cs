// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Proto2_UE5 : ModuleRules
{
	public Proto2_UE5(ReadOnlyTargetRules target) : base(target)
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
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"Proto2_UE5",
			"Proto2_UE5/Variant_Platforming",
			"Proto2_UE5/Variant_Platforming/Animation",
			"Proto2_UE5/Variant_Combat",
			"Proto2_UE5/Variant_Combat/AI",
			"Proto2_UE5/Variant_Combat/Animation",
			"Proto2_UE5/Variant_Combat/Gameplay",
			"Proto2_UE5/Variant_Combat/Interfaces",
			"Proto2_UE5/Variant_Combat/UI",
			"Proto2_UE5/Variant_SideScrolling",
			"Proto2_UE5/Variant_SideScrolling/AI",
			"Proto2_UE5/Variant_SideScrolling/Gameplay",
			"Proto2_UE5/Variant_SideScrolling/Interfaces",
			"Proto2_UE5/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
