// Fill out your copyright notice in the Description page of Project Settings.


#include "DonutLift.h"
#include "Components/BoxComponent.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "PlatformConstants.h"
#include "GameConstants.h"

// Sets default values
ADonutLift::ADonutLift() :
	State(EDonutLiftState::Unknown)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>("DonutLiftBoxComponent");
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->SetSimulatePhysics(false);
	RootComponent = BoxComponent;

	TopOverlap = CreateDefaultSubobject<UBoxComponent>("DonutLiftTopOverlap");
	TopOverlap->SetCollisionProfileName("OverlapAll");
	TopOverlap->SetGenerateOverlapEvents(true);
	TopOverlap->OnComponentBeginOverlap.AddDynamic(this, &ADonutLift::OnOverlapBegin);
	TopOverlap->OnComponentEndOverlap.AddDynamic(this, &ADonutLift::OnOverlapEnd);
	TopOverlap->SetupAttachment(RootComponent);

	SpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>("DonutLiftSpriteComponent");
	SpriteComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SpriteComponent->SetCollisionProfileName("NoCollision");
	SpriteComponent->SetupAttachment(RootComponent);

	Tags.Add("DonutLift");

}

// Called when the game starts or when spawned
void ADonutLift::BeginPlay()
{
	Super::BeginPlay();
	
	SetState(EDonutLiftState::Inactive);
}

// Called every frame
void ADonutLift::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (State == EDonutLiftState::Active)
	{
		//Wiggle while active
		float randX = FMath::FRandRange(-3.0f, 3.0f);
		float randZ = FMath::FRandRange(-1.5f, 1.5f);
		SpriteComponent->SetRelativeLocation(FVector(randX, 0, randZ - 16));

		//Timer to falling state
		StateTimer += DeltaTime;
		if (StateTimer >= PlatformConstants::DonutLiftActiveDuration)
		{
			SetState(EDonutLiftState::Falling);
		}
	}
	else if (State == EDonutLiftState::Falling)
	{
		if (GetActorLocation().Z < GameConstants::DestroyActorAtZ)
		{
			Destroy();
		}
	}
}

void ADonutLift::SetState(EDonutLiftState state)
{
	if (State != state && State != EDonutLiftState::Falling)
	{
		//Reset sprite component offset and timer if it was in active state
		if (State == EDonutLiftState::Active)
		{
			SpriteComponent->SetRelativeLocation(FVector(0, 0, -16));
		}

		State = state;
		StateTimer = 0.0f;

		if (State == EDonutLiftState::Inactive)
		{
			SpriteComponent->SetSprite(InactiveSprite);
		}
		else if (State == EDonutLiftState::Active)
		{
			SpriteComponent->SetSprite(ActiveSprite);
		}
		else if (State == EDonutLiftState::Falling)
		{
			BoxComponent->SetCollisionProfileName("OverlapAll");
			BoxComponent->SetSimulatePhysics(true);
			TopOverlap->SetCollisionProfileName("NoCollision");
		}
	}
}

void ADonutLift::OnOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		SetState(EDonutLiftState::Active);
	}
}

void ADonutLift::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		SetState(EDonutLiftState::Inactive);
	}
}

