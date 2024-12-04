// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotoDisc.generated.h"

UENUM(BlueprintType)
enum class ERotoDiscDirection : uint8
{
	Clockwise			UMETA(DisplayName = "Clockwise"),
	CounterClockwise	UMETA(DisplayName = "CounterClockwise")
};

UCLASS()
class PLATFORMER2D_API ARotoDisc : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotoDisc();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UBoxComponent* DiscBoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UBoxComponent* DiscPivotBoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UPaperFlipbookComponent* FlipbookComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
	class UPaperSpriteComponent* SpriteComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Roto Disc State")
	ERotoDiscDirection Direction;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	FRotator Rotation;
};
