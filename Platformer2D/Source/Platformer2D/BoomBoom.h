// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "BoomBoom.generated.h"

UENUM(BlueprintType)
enum class EBoomBoomState : uint8
{
	Unknown		UMETA(DisplayName = "Unknown"),
	Idle		UMETA(DisplayName = "Idle"),
	Active		UMETA(DisplayName = "Active"),
	Jumping		UMETA(DisplayName = "Jumping"),
	Damaged		UMETA(DisplayName = "Damaged")
};

/**
 * 
 */
UCLASS()
class ABoomBoom : public AEnemy
{
	GENERATED_BODY()
	
public:
	ABoomBoom();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoomBoom flipbooks")
	class UPaperFlipbook* IdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoomBoom flipbooks")
	class UPaperFlipbook* ActiveFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoomBoom flipbooks")
	class UPaperFlipbook* DamagedFlipbook;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void SetState(EBoomBoomState state);

protected:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	void UpdateFlipbook();
	
	FVector Velocity;
	EBoomBoomState State;
	float StateTimer;
	float DirectionTimer;
	int Lives;
};
