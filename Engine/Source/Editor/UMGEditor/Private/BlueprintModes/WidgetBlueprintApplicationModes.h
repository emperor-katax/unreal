// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

/////////////////////////////////////////////////////
// FWidgetBlueprintApplicationModes

// This is the list of IDs for widget blueprint editor modes
struct FWidgetBlueprintApplicationModes
{
	// Mode constants
	static const FName DesignerMode;
	static const FName GraphMode;

	static FText GetLocalizedMode(const FName InMode);

private:
	FWidgetBlueprintApplicationModes() {}
};