// Copyright Epic Games, Inc. All Rights Reserved.

#include "BranchPracGameMode.h"
#include "BranchPracCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABranchPracGameMode::ABranchPracGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
