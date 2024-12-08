// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Trapdoor.generated.h"

UENUM(BlueprintType)
enum class ETrapDoorState : uint8
{
    Unknown			UMETA(DisplayName = "Unknown"),
    Open			UMETA(DisplayName = "Open"),
    Falling			UMETA(DisplayName = "Falling"),
    Closed	    	UMETA(DisplayName = "Closed")
};

UCLASS()
class PLATFORMER2D_API ATrapDoor : public AActor
{
    GENERATED_BODY()

public:
    // Sets default values for this actor's properties
    ATrapDoor();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess), Category = "Components")
    class UBoxComponent* BoxComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess), Category = "Components")
    class APaperTileMapActor* Tilemap;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
    virtual void Tick(float DeltaTime) override;

private:
    void SetState(ETrapDoorState state);
    void ApplyVelocity();

    ETrapDoorState State;
    FVector OpenLocation;
    FVector Velocity;
};
