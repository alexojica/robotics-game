// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PlayerSaveGame.generated.h"

/**
 * 
 */
UCLASS()
class SKYSTONE_WORKING_API UPlayerSaveGame : public USaveGame
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FText PlayerName;

	UPROPERTY(EditAnywhere)
		int32 HighScore = 0;

	UPROPERTY(EditAnywhere)
		int32 Coins = 0;

	UPROPERTY(EditAnywhere)
		bool FirstTimeGameOpen = true;
};
