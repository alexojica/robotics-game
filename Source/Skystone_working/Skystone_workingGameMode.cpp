// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Skystone_workingGameMode.h"
#include "Skystone_workingCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/GameState.h" 

ASkystone_workingGameMode::ASkystone_workingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	static ConstructorHelpers::FClassFinder<AGameStateBase> GameStateCls(TEXT("/Game/Blueprints/Multiplayer/MyGameState"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	GameStateClass = GameStateCls.Class;
}
