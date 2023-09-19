// Copyright Epic Games, Inc. All Rights Reserved.

#include "PackGameMode.h"
#include "PackCharacter.h"
#include "UObject/ConstructorHelpers.h"

APackGameMode::APackGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
