// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DonutLift.generated.h"

UENUM(BlueprintType)
enum class EDonutLiftState : uint8
{
	Unknown		UMETA(DisplayName = "Unknown"),
	Inactive	UMETA(DisplayName = "Inactive"),
	Active		UMETA(DisplayName = "Active"),
	Falling		UMETA(DisplayName = "Falling")
};

UCLASS()
class PLATFORMER2D_API ADonutLift : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADonutLift();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UBoxComponent* TopOverlap;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UPaperSpriteComponent* SpriteComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
	class UPaperSprite* InactiveSprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sprites")
	class UPaperSprite* ActiveSprite;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetState(EDonutLiftState state);

protected:
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	EDonutLiftState State;
	float StateTimer;

};
