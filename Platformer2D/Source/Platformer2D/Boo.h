// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "Boo.generated.h"

UENUM(BlueprintType)
enum class EBooState : uint8
{
	Unknown		UMETA(DisplayName = "Unknown"),
	Active		UMETA(DisplayName = "Active"),
	Hiding		UMETA(DisplayName = "Hiding")
};

UENUM(BlueprintType)
enum class EBooDirection : uint8
{
	Left		UMETA(DisplayName = "Left"),
	Right		UMETA(DisplayName = "Right")
};

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ABoo : public AEnemy
{
	GENERATED_BODY()
	
public:
	ABoo();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Direction")
	EBooDirection BooDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boo flipbooks")
	class UPaperFlipbook* ActiveFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boo flipbooks")
	class UPaperFlipbook* HidingFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Boo Room")
	int RoomID;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	void SetState(EBooState state);

protected:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	void ApplyInitialVelocity();
	void UpdateFlipbook();

	FVector Velocity;
	EBooState State;
};
