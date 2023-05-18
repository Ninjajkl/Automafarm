// Copyright Epic Games, Inc. All Rights Reserved.

#include "AutomafarmGameMode.h"
#include "AutomafarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAutomafarmGameMode::AAutomafarmGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_MyAutomafarmCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
