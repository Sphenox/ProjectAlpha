// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectAlphaGameMode.h"
#include "ProjectAlphaPlayerController.h"
#include "ProjectAlphaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectAlphaGameMode::AProjectAlphaGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectAlphaPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}