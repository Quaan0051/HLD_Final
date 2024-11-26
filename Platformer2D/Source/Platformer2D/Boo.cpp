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
	BoxComponent->SetSimulatePhysics(false);
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
		ApplyInitialVelocity();
		FVector location = GetActorLocation(); 
		location += Velocity * DeltaTime; 
		SetActorLocation(location); 
	}

	AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>(); 
	AMarioPlayerState* playerState = Cast<AMarioPlayerState>(mario->GetPlayerState());

	// check mario direction
	if (playerState->Direction == EMarioDirection::Left) // if mario looking left
	{
		if (GetActorLocation().X < mario->GetActorLocation().X) // if Boo is to the left of mario
		{
			SetState(EBooState::Hiding);
		}
		else if (GetActorLocation().X > mario->GetActorLocation().X) // if Boo is to the right of mario
		{
			BooDirection = EBooDirection::Left;
			SetState(EBooState::Active);
		}
	}
	else if (playerState->Direction == EMarioDirection::Right) // if mario looking right
	{
		if (GetActorLocation().X > mario->GetActorLocation().X) // if Boo is to the right of mario
		{
			SetState(EBooState::Hiding);
		}
		else if (GetActorLocation().X < mario->GetActorLocation().X) // if Boo is to the left of mario
		{
			BooDirection = EBooDirection::Right;
			SetState(EBooState::Active);
		}
	}
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
		Velocity.X = -EnemyConstants::BooXSpeed;
		FlipbookComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
	}
	else if (BooDirection == EBooDirection::Right)
	{
		Velocity.X = EnemyConstants::BooXSpeed;
		FlipbookComponent->SetRelativeScale3D(FVector(-1.0f, 1.0f, 1.0f));
	}

	AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();

	if (GetActorLocation().Z > mario->GetActorLocation().Z) // if Boo Z > Mario Z
	{
		Velocity.Z = -EnemyConstants::BooZSpeed;
	}
	else if (GetActorLocation().Z < mario->GetActorLocation().Z) // if Boo Z < Mario Z
	{
		Velocity.Z = EnemyConstants::BooZSpeed;
	}
}

void ABoo::UpdateFlipbook()
{
	UPaperFlipbook* flipbook = nullptr;

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
