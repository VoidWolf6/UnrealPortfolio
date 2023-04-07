// Copyright Epic Games, Inc. All Rights Reserved.

#include "PartialGameMode.h"
#include "PartialCharacter.h"
#include "UObject/ConstructorHelpers.h"

APartialGameMode::APartialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
