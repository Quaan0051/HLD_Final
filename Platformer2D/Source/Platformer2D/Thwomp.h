// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "Thwomp.generated.h"

UENUM(BlueprintType)
enum class EThwompState : uint8
{
	Unknown			UMETA(DisplayName = "Unknown"),
	Idle			UMETA(DisplayName = "Idle"),
	Falling			UMETA(DisplayName = "Falling"),
	Waiting			UMETA(DisplayName = "Waiting"),
	Rising			UMETA(DisplayName = "Rising")
};

/**
 *
 */
UCLASS()
class PLATFORMER2D_API AThwomp : public AEnemy
{
	GENERATED_BODY()
	
public:
	AThwomp();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* BottomOverlap;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void OnBottomOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	void SetState(EThwompState state);
	void ApplyInitialVelocity();

	EThwompState State;
	FVector IdleLocation;
	FVector Velocity;
	float WaitingDuration;
	float Timer;
};
