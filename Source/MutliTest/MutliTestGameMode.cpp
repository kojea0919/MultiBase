// Copyright Epic Games, Inc. All Rights Reserved.

#include "MutliTestGameMode.h"
#include "MutliTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMutliTestGameMode::AMutliTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
