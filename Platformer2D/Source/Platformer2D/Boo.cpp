// Fill out your copyright notice in the Description page of Project Settings.


#include "Boo.h"
#include "EnemyConstants.h"
#include "MarioCharacter.h"
#include "MarioPlayerState.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "Math/UnrealMathUtility.h"

ABoo::ABoo() :
	ActiveFlipbook(nullptr),
	HidingFlipbook(nullptr),
	Velocity(),
	State(EBooState::Unknown),
	BooDirection(EBooDirection::Left)
{
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(true);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &ABoo::OnHit);

	Type = EEnemyType::Boo;
	Tags.Add("Boo");
}

void ABoo::BeginPlay()
{
	Super::BeginPlay();

	SetState(EBooState::Active);
}

void ABoo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (State == EBooState::Active) 
	{
		FVector location = GetActorLocation(); 
		location += Velocity * DeltaTime; 
		SetActorLocation(location); 
	}

	// check mario direction
	// if facing Boo, set state to hiding
	// if facing away, set state to active
}

void ABoo::SetState(EBooState state)
{
	if (State != state)
	{
		State = state;

		if (State == EBooState::Active)
		{
			ApplyInitialVelocity();
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
		else if (State == EBooState::Hiding)
		{
			BoxComponent->SetCollisionProfileName("EnemyDead");
		}

		UpdateFlipbook();
	}
}

void ABoo::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		if (Hit.Normal.X <= -0.8f || Hit.Normal.X >= 0.8f)
		{
			// Boo hit Mario on the side
			Cast<AMarioCharacter>(OtherActor)->HandleDamage();
		}
		else if (Hit.Normal.Z >= 0.7f || Hit.Normal.Z <= -0.7f)
		{
			// Boo hit top or bottom of Mario
			Cast<AMarioCharacter>(OtherActor)->HandleDamage();
		}
	}
}

void ABoo::ApplyInitialVelocity()
{
	if (BooDirection == EBooDirection::Left) 
	{
		Velocity.X = -EnemyConstants::BooSpeed;
	}
	else if (BooDirection == EBooDirection::Right)
	{
		Velocity.X = EnemyConstants::BooSpeed;
	}
}

void ABoo::UpdateFlipbook()
{
	UPaperFlipbook* flipbook = nullptr;

	//FlipbookComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	//FlipbookComponent->SetRelativeScale3D(FVector(-1.0f, 1.0f, 1.0f));

	if (State == EBooState::Active)
	{
		flipbook = ActiveFlipbook;
	}
	else if (State == EBooState::Hiding)
	{
		flipbook = HidingFlipbook;
	}

	FlipbookComponent->SetFlipbook(flipbook);
	FlipbookComponent->PlayFromStart();
}
