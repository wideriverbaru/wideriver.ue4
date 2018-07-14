// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "MMORPGGameMode.h"
#include "MMORPGCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMMORPGGameMode::AMMORPGGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
