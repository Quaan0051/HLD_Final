// Fill out your copyright notice in the Description page of Project Settings.


#include "SecretDoor.h"
#include "GameConstants.h"
#include "Components/BoxComponent.h"
#include "PaperTileMapActor.h"
#include "Math/UnrealMathUtility.h" 

// Sets default values
ASecretDoor::ASecretDoor() :
	State(ESecretDoorState::Unknown),
	Tilemap(nullptr)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
	BoxComponent->SetCollisionProfileName("OverlapAll");
	BoxComponent->SetGenerateOverlapEvents(true);
	BoxComponent->SetSimulatePhysics(false);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ASecretDoor::OnOverlap);
	BoxComponent->OnComponentEndOverlap.AddDynamic(this, &ASecretDoor::EndOverlap);
	RootComponent = BoxComponent;
}

// Called when the game starts or when spawned
void ASecretDoor::BeginPlay()
{
	Super::BeginPlay();

	SetState(ESecretDoorState::Hidden);
}

void ASecretDoor::OnOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		SetState(ESecretDoorState::Visible);

		Tilemap->SetActorHiddenInGame(true);
	}
}

void ASecretDoor::EndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		SetState(ESecretDoorState::Hidden);

		Tilemap->SetActorHiddenInGame(false);
	}
}

void ASecretDoor::SetState(ESecretDoorState state)
{
	if (State != state)
	{
		State = state;

		if (State == ESecretDoorState::Hidden)
		{

			BoxComponent->SetCollisionProfileName("OverlapAll");
		}
		else if (State == ESecretDoorState::Visible)
		{

			BoxComponent->SetCollisionProfileName("OverlapAll");
		}
	}
}