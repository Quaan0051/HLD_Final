// Fill out your copyright notice in the Description page of Project Settings.


#include "Thwomp.h"
#include "EnemyConstants.h"
#include "MarioCharacter.h"
#include "MarioController.h"
#include "PlatformerGameModeBase.h"
#include "Components/BoxComponent.h"
#include "Math/UnrealMathUtility.h" 

AThwomp::AThwomp() :
	State(EThwompState::Unknown),
	BottomOverlap(nullptr),
	IdleLocation(),
	WaitingDuration(0.0f),
	Timer(0.0f)
{
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(false);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &AThwomp::OnHit);

	BottomOverlap = CreateDefaultSubobject<UBoxComponent>("ThwompBottomOverlap");
	BottomOverlap->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BottomOverlap->SetCollisionProfileName("OverlapAll");
	BottomOverlap->SetGenerateOverlapEvents(true);
	BottomOverlap->OnComponentBeginOverlap.AddDynamic(this, &AThwomp::OnBottomOverlap);
	BottomOverlap->SetupAttachment(RootComponent);

	Type = EEnemyType::Thwomp;
	Tags.Add("Thwomp");
}

void AThwomp::BeginPlay()
{
	Super::BeginPlay();

	SetState(EThwompState::Idle);

	IdleLocation = GetActorLocation();
}

void AThwomp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (State == EThwompState::Idle)
	{
		AMarioCharacter* mario = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>();

		//check mario X and Z
		if (GetActorLocation().Z > mario->GetActorLocation().Z) // if Thwomp is above Mario on Z
		{
			//if mario x intersecting with thwomp min/max X, change state
			if (mario->GetActorLocation().X > GetActorLocation().X - 32 && mario->GetActorLocation().X < GetActorLocation().X + 32)
			{
				SetState(EThwompState::Falling);
			}
		}
	}
	else if (State == EThwompState::Falling)
	{
		FVector location = GetActorLocation();
		location += Velocity * DeltaTime;
		SetActorLocation(location);
	}
	else if (State == EThwompState::Waiting)
	{
		WaitingDuration -= DeltaTime;

		if (WaitingDuration <= 0.0f)
		{
			SetState(EThwompState::Rising);
		}
	}
	else if (State == EThwompState::Rising)
	{
		FVector location = GetActorLocation();
		location += Velocity * DeltaTime;
		SetActorLocation(location);

		//once back at starting/idle location, set state to idle
		if (location.Z >= IdleLocation.Z)
		{
			SetState(EThwompState::Idle);
		}
	}
	
	if (Timer > 0.0f)
	{
		Timer -= DeltaTime;

		if (Timer <= 0.0f)
		{
			Timer = 0.0f;
		}
	}
}

void AThwomp::OnBottomOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("World"))
	{
		//shake screen
		GetWorld()->GetAuthGameMode<APlatformerGameModeBase>()->ApplyCameraShake();

		//set state to waiting
		SetState(EThwompState::Waiting);
	}
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		Cast<AMarioCharacter>(OtherActor)->HandleDamage();
	}
}

void AThwomp::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		Cast<AMarioCharacter>(OtherActor)->HandleDamage(); 
	}
}

void AThwomp::SetState(EThwompState state)
{
	if (State != state)
	{
		State = state;

		if (State == EThwompState::Idle)
		{
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
		else if (State == EThwompState::Falling)
		{
			ApplyInitialVelocity(); 
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
		else if (State == EThwompState::Waiting)
		{
			WaitingDuration = EnemyConstants::ThwompDelay;
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
		else if (State == EThwompState::Rising) 
		{
			ApplyInitialVelocity(); 
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
	}
}

void AThwomp::ApplyInitialVelocity()
{
	// if state is falling set velocity to falling speed
	if (State == EThwompState::Falling)
	{
		Velocity.Z = -EnemyConstants::ThwompFallSpeed;
	}
	// else if state is rising set velocity to rising speed
	else if (State == EThwompState::Rising)
	{
		Velocity.Z = EnemyConstants::ThwompRiseSpeed;
	}
	
}
