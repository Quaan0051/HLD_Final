// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemy.generated.h"

UENUM(BlueprintType)
enum class EEnemyType : uint8
{
	Unknown			UMETA(DisplayName = "Unknown"),
	PiranhaPlant	UMETA(DisplayName = "PiranhaPlant"),
	Goomba			UMETA(DisplayName = "Goomba"),
	Boo				UMETA(DisplayName = "Boo"),
	Thwomp          UMETA(DisplayName = "Thwomp"),
	BoomBoom		UMETA(DisplayName = "BoomBoom")
};

UCLASS()
class PLATFORMER2D_API AEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperFlipbookComponent* FlipbookComponent;

	EEnemyType GetEnemyType();

protected:
	EEnemyType Type;
};
