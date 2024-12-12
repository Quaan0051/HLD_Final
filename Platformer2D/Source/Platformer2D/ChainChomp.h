// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy.h"
#include "ChainChomp.generated.h"

UENUM(BlueprintType)
enum class EChainChompState : uint8
{
	Unknown		UMETA(DisplayName = "Unknown"),
	Idle		UMETA(DisplayName = "Idle"),
	Jumping		UMETA(DisplayName = "Active")
};

/**
 * 
 */
UCLASS()
class PLATFORMER2D_API AChainChomp : public AEnemy
{
	GENERATED_BODY()
	
public:
	AChainChomp();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UCableComponent* CableComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* AttachPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperSpriteComponent* Chain1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperSpriteComponent* Chain2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperSpriteComponent* Chain3;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UPaperSpriteComponent* Chain4;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UBoxComponent* HeadBoxComponent;*/

	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	//class UPhysicsConstraintComponent* ConstraintComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	void SetState(EChainChompState state);

protected:
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

private:
	EChainChompState State;
	float StateTimer;
	float DirectionTimer;
	FVector Velocity;
};
