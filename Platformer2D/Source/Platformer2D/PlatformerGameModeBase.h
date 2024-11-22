// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlatformerGameModeBase.generated.h"

enum class EMarioForm : uint8;
enum class EMarioDirection : uint8;

UENUM(BlueprintType)
enum class EGameState : uint8
{
	Unknown 	UMETA(DisplayName = "Unknown"),
	Gameplay 	UMETA(DisplayName = "Gameplay"),
	FadeIn 		UMETA(DisplayName = "FadeIn"),
	FadeHold 	UMETA(DisplayName = "FadeHold"),
	FadeOut 	UMETA(DisplayName = "FadeOut")
};

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API APlatformerGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	APlatformerGameModeBase();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameMode Templates")
	TSubclassOf<class AMarioTransform> MarioTransformTemplate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameMode Templates")
	TSubclassOf<class ADeadActor> DeadMarioTemplate;
			
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameMode Templates")
	TSubclassOf<class ACoinPickup> CoinPickupTemplate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameMode Templates")
	TSubclassOf<class ABreakableBlock> BreakableBlockTemplate;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void SetState(EGameState state);

	void ApplyCameraShake();

	void SpawnMarioTransform(FVector location, EMarioForm oldForm, EMarioForm newForm, EMarioDirection direction);
	void OnMarioTransformEnded();

	void MarioHasDied(bool spawnDeadMario);

	void OnCoinSwitch();

	void NextRoom(class ADoor* door);

private:
	void SpawnDeadMario(FVector location);

	void BeginToggleCoinsAndBlocks();
	void EndToggleCoinsAndBlocks();

	void PauseActors();
	void UnpauseActors();

	UPROPERTY() class AMarioCamera* Camera;
	UPROPERTY() class AMarioTransform* MarioTransform;
	UPROPERTY() class ADeadActor* DeadMario;

	EGameState State;
	FVector MarioPlayerStartLocation;
	FVector MarioSpawnLocation;
	float FadeInOutTimer;
	float FadeHoldTimer;
	float CoinSwitchDuration;
};
