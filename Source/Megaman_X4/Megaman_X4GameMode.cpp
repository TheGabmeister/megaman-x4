// Copyright Epic Games, Inc. All Rights Reserved.

#include "Megaman_X4GameMode.h"
#include "Megaman_X4Character.h"
#include "UObject/ConstructorHelpers.h"

AMegaman_X4GameMode::AMegaman_X4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
