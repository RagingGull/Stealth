// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Stealth.h"
#include "TP_ThirdPersonGameMode.h"
#include "TP_ThirdPersonCharacter.h"

ATP_ThirdPersonGameMode::ATP_ThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
