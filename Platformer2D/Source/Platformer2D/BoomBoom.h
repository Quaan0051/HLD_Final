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
	Damaged		UMETA(DisplayName = "Damaged"),
	Dead		UMETA(DisplayName = "Dead")
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

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* LeftOverlap;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* RightOverlap;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* BottomOverlap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoomBoom flipbooks")
	class UPaperFlipbook* IdleFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoomBoom flipbooks")
	class UPaperFlipbook* ActiveFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoomBoom flipbooks")
	class UPaperFlipbook* DamagedFlipbook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BoomBoom flipbooks")
	class UPaperFlipbook* DeadFlipbook;

	UPROPERTY(EditAnyWhere, Category = "BoomBoom Templates")
	TSubclassOf<class AStarEffect> StarEffectTemplate;

	UPROPERTY(EditAnyWhere, Category = "BoomBoom Templates")
	TSubclassOf<class APoofEffect> PoofEffectTemplate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void SetState(EBoomBoomState state);

protected:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
	void OnSideOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnBottomOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	void UpdateFlipbook();
	
	FVector Velocity;
	EBoomBoomState State;
	float StateTimer;
	float DirectionTimer;
	int Lives;
};
