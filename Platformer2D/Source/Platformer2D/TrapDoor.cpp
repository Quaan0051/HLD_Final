// Fill out your copyright notice in the Description page of Project Settings.


#include "Trapdoor.h"
#include "GameConstants.h"
#include "Components/BoxComponent.h"
#include "PaperTileMapActor.h"
#include "Math/UnrealMathUtility.h" 

// Sets default values
ATrapDoor::ATrapDoor() :
    State(ETrapDoorState::Unknown),
    Tilemap(nullptr),
    OpenLocation()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
    BoxComponent->SetCollisionProfileName("OverlapAll");
    BoxComponent->SetGenerateOverlapEvents(true);
    BoxComponent->SetSimulatePhysics(false);
    BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ATrapDoor::OnOverlap);
    RootComponent = BoxComponent;
}

// Called when the game starts or when spawned
void ATrapDoor::BeginPlay()
{
    Super::BeginPlay();

    SetState(ETrapDoorState::Open);

    OpenLocation = Tilemap->GetActorLocation();
}

void ATrapDoor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (State == ETrapDoorState::Falling)
    {
        FVector location = Tilemap->GetActorLocation();
        location += Velocity * DeltaTime;
        Tilemap->SetActorLocation(location);

        if (location.Z <= OpenLocation.Z - 128)
        {
            SetState(ETrapDoorState::Closed);
        }
    }
}

void ATrapDoor::OnOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (State == ETrapDoorState::Open && OtherActor->ActorHasTag("MarioCharacter")) // if mario crosses bounndary, set state to falling
    {
        SetState(ETrapDoorState::Falling);
    }
}

void ATrapDoor::SetState(ETrapDoorState state)
{
    if (State != state)
    {
        State = state;

        if (State == ETrapDoorState::Open)
        {
            BoxComponent->SetCollisionProfileName("OverlapAll");
        }
        else if (State == ETrapDoorState::Falling)
        {
            ApplyVelocity();
        }
        else if (State == ETrapDoorState::Closed)
        {
            BoxComponent->SetCollisionProfileName("OverlapAll");
        }
    }
}

void ATrapDoor::ApplyVelocity()
{
    if (State == ETrapDoorState::Falling)
    {
        Velocity.Z = -GameConstants::TrapDoorFallSpeed;
    }
}