// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "DryBones.generated.h"

UENUM(BlueprintType)
enum class EDryBonesState : uint8
{
	Unknown			UMETA(DisplayName = "Unknown"),
	Walking			UMETA(DisplayName = "Walking"),
	GoingDown		UMETA(DisplayName = "GoingDown"),
	Downed			UMETA(DisplayName = "Downed"),
	Stirring		UMETA(DisplayName = "Stirring")
};

UENUM(BlueprintType)
enum class EDryBonesDirection : uint8
{
	Left		UMETA(DisplayName = "Left"),
	Right		UMETA(DisplayName = "Right")
};

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API ADryBones : public AEnemy
{
	GENERATED_BODY()
	
public:
	ADryBones();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Direction")
	EDryBonesDirection DryBonesDirection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* FrontOverlap;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* BackOverlap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DryBones flipbooks")
	class UPaperFlipbook* WalkingFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DryBones flipbooks")
	class UPaperFlipbook* GoingDownFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DryBones flipbooks")
	class UPaperFlipbook* DownedFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DryBones flipbooks")
	class UPaperFlipbook* StirringFlipbook;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void SetState(EDryBonesState state);
	void SetDirection(EDryBonesDirection direction);

protected:
	UFUNCTION()
	void OnFrontOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBackOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	void ApplyVelocity();
	void UpdateFlipbook();

	float GoingDownDuration;
	float StirringDuration;
	float DownedDuration;
	float Timer;
	FVector Velocity;
	EDryBonesState State;
};
