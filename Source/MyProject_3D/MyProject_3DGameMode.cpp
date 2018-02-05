// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "MyProject_3DGameMode.h"
#include "MyProject_3DCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyProject_3DGameMode::AMyProject_3DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
