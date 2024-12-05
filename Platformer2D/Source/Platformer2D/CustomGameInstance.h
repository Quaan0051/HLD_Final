// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CustomGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API UCustomGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Data")
	bool LoadGlobalData = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Data")
	FVector MarioSpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Data")
	float TimeRemaining;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Data")
	int Lives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Data")
	int Coins;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global Data")
	int ActiveRoom;

};
