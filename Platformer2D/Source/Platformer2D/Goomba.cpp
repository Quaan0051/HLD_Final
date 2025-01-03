// Fill out your copyright notice in the Description page of Project Settings.


#include "Goomba.h"
#include "EnemyConstants.h"
#include "MarioCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "Math/UnrealMathUtility.h"


AGoomba::AGoomba() :
	InitialDirection(EGoombaInitialDirection::Random),
	FrontOverlap(nullptr),
	BackOverlap(nullptr),
	WalkingFlipbook(nullptr),
	SquishedFlipbook(nullptr),
	Velocity(),
	SquishedDuration(0.0f),
	State(EGoombaState::Unknown)
{
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(true);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &AGoomba::OnHit);

	FrontOverlap = CreateDefaultSubobject<UBoxComponent>("GoombaFrontOverlap");
	FrontOverlap->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	FrontOverlap->SetCollisionProfileName("OverlapAll");
	FrontOverlap->SetGenerateOverlapEvents(true);
	FrontOverlap->OnComponentBeginOverlap.AddDynamic(this, &AGoomba::OnForwardOverlap);
	FrontOverlap->SetupAttachment(RootComponent);

	BackOverlap = CreateDefaultSubobject<UBoxComponent>("GoombaEnemyBackOverlap");
	BackOverlap->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BackOverlap->SetCollisionProfileName("OverlapAll");
	BackOverlap->SetGenerateOverlapEvents(true);
	BackOverlap->OnComponentBeginOverlap.AddDynamic(this, &AGoomba::OnBackwardOverlap);
	BackOverlap->SetupAttachment(RootComponent);

	Type = EEnemyType::Goomba;
	Tags.Add("Goomba");
}

void AGoomba::BeginPlay()
{
	Super::BeginPlay();

	SetState(EGoombaState::Walking);
}

void AGoomba::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (State == EGoombaState::Walking)
	{
		FVector location = GetActorLocation();
		location += Velocity * DeltaTime;
		SetActorLocation(location);
	}
	else if (State == EGoombaState::Squished)
	{
		if (SquishedDuration > 0.0f)
		{
			SquishedDuration -= DeltaTime;

			if (SquishedDuration < 0.0f)
			{
				SquishedDuration = 0.0f;
				Destroy();
			}
		}
	}
}

void AGoomba::SetState(EGoombaState state)
{
	if (State != state)
	{
		State = state;

		if (State == EGoombaState::Walking)
		{
			ApplyInitialVelocity();
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
		else if (State == EGoombaState::Squished)
		{
			SquishedDuration = EnemyConstants::GoombaSquishedDuration;
			BoxComponent->SetCollisionProfileName("EnemyDead");
		}

		UpdateFlipbook();
	}
}

void AGoomba::OnForwardOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("World") || OtherActor->ActorHasTag("Goomba") || OtherActor->ActorHasTag("MushroomPickup"))
	{
		Velocity.X = -EnemyConstants::GoombaSpeed;
	}
}

void AGoomba::OnBackwardOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("World") || OtherActor->ActorHasTag("Goomba") || OtherActor->ActorHasTag("MushroomPickup"))
	{
		Velocity.X = EnemyConstants::GoombaSpeed;
	}
}

void AGoomba::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		if (Hit.Normal.X <= -0.8f || Hit.Normal.X >= 0.8f)
		{
			// Goomba hit Mario on the side
			Cast<AMarioCharacter>(OtherActor)->HandleDamage();
		}
		else if (Hit.Normal.Z >= 0.7f)
		{
			// Goomba landed on Mario
			Cast<AMarioCharacter>(OtherActor)->HandleDamage();
		}
		else if (Hit.Normal.Z <= -0.7f)
		{
			// Mario landed on Goomba
			if (State == EGoombaState::Walking)
			{
				SetState(EGoombaState::Squished);
				Cast<AMarioCharacter>(OtherActor)->ApplyBounce();
			}
		}
	}
}

void AGoomba::ApplyInitialVelocity()
{
	if (InitialDirection == EGoombaInitialDirection::Random)
	{
		int32 index = FMath::RandRange(0, 9) % 2;
		float speeds[] = { EnemyConstants::GoombaSpeed, -EnemyConstants::GoombaSpeed };
		Velocity.X = speeds[index];
	}
	else if (InitialDirection == EGoombaInitialDirection::Right)
	{
		Velocity.X = EnemyConstants::GoombaSpeed;
	}
	else if (InitialDirection == EGoombaInitialDirection::Left)
	{
		Velocity.X = -EnemyConstants::GoombaSpeed;
	}
}

void AGoomba::UpdateFlipbook()
{
	UPaperFlipbook* flipbook = nullptr;

	if (State == EGoombaState::Walking)
	{
		flipbook = WalkingFlipbook;
	}
	else if (State == EGoombaState::Squished)
	{
		flipbook = SquishedFlipbook;
	}

	FlipbookComponent->SetFlipbook(flipbook);
	FlipbookComponent->PlayFromStart();
}