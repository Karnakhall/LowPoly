// Copyright Epic Games, Inc. All Rights Reserved.

#include "LowPolyGameMode.h"
#include "LowPolyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALowPolyGameMode::ALowPolyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
