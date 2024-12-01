// Fill out your copyright notice in the Description page of Project Settings.


#include "BoomBoom.h"
#include "EnemyConstants.h"
#include "MarioCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "Math/UnrealMathUtility.h"

ABoomBoom::ABoomBoom() :
	Velocity(),
	State(EBoomBoomState::Unknown),
	StateTimer(0.0f),
	Lives(EnemyConstants::BoomBoomMaxLives),
	IdleFlipbook(nullptr),
	ActiveFlipbook(nullptr),
	DamagedFlipbook(nullptr)
{
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(true);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &ABoomBoom::OnHit);

	Type = EEnemyType::BoomBoom;
	Tags.Add("BoomBoom");
}

void ABoomBoom::BeginPlay()
{
	Super::BeginPlay();

	Velocity = FVector(-EnemyConstants::BoomBoomInitialSpeed,0,0);
	BoxComponent->SetCollisionProfileName("EnemyDynamic");
	SetState(EBoomBoomState::Idle);
}

void ABoomBoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (State == EBoomBoomState::Idle)
	{
		StateTimer -= DeltaTime;
		if (StateTimer <= 0.0f)
		{
			FVector marioLocation = GetWorld()->GetFirstPlayerController()->GetPawn<AMarioCharacter>()->GetActorLocation();
			FVector boomboomLocation = GetActorLocation();
			float distanceToMario = sqrt(pow(marioLocation.X - boomboomLocation.X, 2) + pow(marioLocation.Z - boomboomLocation.Z, 2));
			if (distanceToMario <= EnemyConstants::BoomBoomPlayerDetectionRange)
			{
				SetState(EBoomBoomState::Active);
			}
		}
	}
	else if (State == EBoomBoomState::Active)
	{
		FVector location = GetActorLocation();
		location += Velocity;
		SetActorLocation(location);

		DirectionTimer -= DeltaTime;
		if (DirectionTimer <= 0.0f)
		{
			Velocity *= -1;
			DirectionTimer = FMath::FRandRange(EnemyConstants::BoomBoomDirectionChangeTimerMin, EnemyConstants::BoomBoomDirectionChangeTimerMax);
		}

		StateTimer -= DeltaTime;
		if (StateTimer <= 0.0f)
		{
			SetState(EBoomBoomState::Jumping);
		}
	}
	else if (State == EBoomBoomState::Jumping)
	{
		if (StateTimer > 0.0f)
		{
			StateTimer -= DeltaTime;
			if (StateTimer <= 0.0f)
			{
				FVector force = FVector(1, 0, 1).GetSafeNormal();
				if (Velocity.X < 0.0f) force.X *= -1;
				BoxComponent->AddForce(force * EnemyConstants::BoomBoomJumpStrength);
			}
		}
	}
	else if (State == EBoomBoomState::Damaged)
	{
		StateTimer -= DeltaTime;
		if (StateTimer <= 0.0f)
		{
			StateTimer = EnemyConstants::BoomBoomIdleDuration;
			SetState(EBoomBoomState::Idle);
		}
	}
}

void ABoomBoom::SetState(EBoomBoomState state)
{
	if (State != state)
	{
		State = state;

		if (State == EBoomBoomState::Active)
		{
			StateTimer = FMath::FRandRange(EnemyConstants::BoomBoomJumpTimerMin, EnemyConstants::BoomBoomJumpTimerMax);
			DirectionTimer = FMath::FRandRange(EnemyConstants::BoomBoomDirectionChangeTimerMin, EnemyConstants::BoomBoomDirectionChangeTimerMax);
		}
		else if (State == EBoomBoomState::Jumping)
		{
			StateTimer = EnemyConstants::BoomBoomJumpPauseDuration;
		}
		else if (State == EBoomBoomState::Damaged)
		{
			StateTimer = EnemyConstants::BoomBoomDamagedDuration;
			Lives--;
			if (Lives == 1)
			{
				Velocity.Normalize();
				Velocity *= EnemyConstants::BoomBoomDamagedSpeed;
			}
			else if (Lives == 0)
			{
				
			}
		}

		UpdateFlipbook();
	}
}

void ABoomBoom::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		if (Hit.Normal.X <= -0.8f || Hit.Normal.X >= 0.8f)
		{
			// BoomBoom hit Mario on the side
			Cast<AMarioCharacter>(OtherActor)->HandleDamage();
		}
		else if (Hit.Normal.Z >= 0.7f)
		{
			// BoomBoom landed on Mario
			Cast<AMarioCharacter>(OtherActor)->HandleDamage();
		}
		else if (Hit.Normal.Z <= -0.7f)
		{
			// Mario landed on BoomBoom
			if (State == EBoomBoomState::Active)
			{
				SetState(EBoomBoomState::Damaged);
				Cast<AMarioCharacter>(OtherActor)->ApplyBounce();
			}
		}
	}
	else if (OtherActor->ActorHasTag("World"))
	{
		if (Hit.Normal.X <= -0.8f || Hit.Normal.X >= 0.8f)
		{
			Velocity *= -1;
		}
		else if (State == EBoomBoomState::Jumping && Hit.Normal.Z >= 0.7f)
		{
			SetState(EBoomBoomState::Active);
		}
	}
}

void ABoomBoom::UpdateFlipbook()
{
	UPaperFlipbook* flipbook = nullptr;

	if (State == EBoomBoomState::Idle)
	{
		flipbook = IdleFlipbook;
	}
	else if (State == EBoomBoomState::Active || State == EBoomBoomState::Jumping)
	{
		flipbook = ActiveFlipbook;
	}
	else if (State == EBoomBoomState::Damaged)
	{
		flipbook = DamagedFlipbook;
	}

	FlipbookComponent->SetFlipbook(flipbook);
	FlipbookComponent->PlayFromStart();
}
