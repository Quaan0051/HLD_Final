// Fill out your copyright notice in the Description page of Project Settings.


#include "BoomBoom.h"
#include "EnemyConstants.h"
#include "MarioCharacter.h"
#include "MarioCamera.h"
#include "StarEffect.h"
#include "PoofEffect.h"
#include "QuestionCircle.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "Math/UnrealMathUtility.h"
#include "PlatformerGameModeBase.h"

ABoomBoom::ABoomBoom() :
	Velocity(),
	State(EBoomBoomState::Unknown),
	StateTimer(0.0f),
	DirectionTimer(0.0f),
	Lives(EnemyConstants::BoomBoomMaxLives),
	IdleFlipbook(nullptr),
	ActiveFlipbook(nullptr),
	DamagedFlipbook(nullptr),
	DeadFlipbook(nullptr)
{
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(true);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &ABoomBoom::OnHit);

	LeftOverlap = CreateDefaultSubobject<UBoxComponent>("BoomBoomLeftOverlap");
	LeftOverlap->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	LeftOverlap->SetCollisionProfileName("OverlapAll");
	LeftOverlap->SetGenerateOverlapEvents(true);
	LeftOverlap->OnComponentBeginOverlap.AddDynamic(this, &ABoomBoom::OnSideOverlap);
	LeftOverlap->SetupAttachment(RootComponent);

	RightOverlap = CreateDefaultSubobject<UBoxComponent>("BoomBoomRightOverlap");
	RightOverlap->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	RightOverlap->SetCollisionProfileName("OverlapAll");
	RightOverlap->SetGenerateOverlapEvents(true);
	RightOverlap->OnComponentBeginOverlap.AddDynamic(this, &ABoomBoom::OnSideOverlap);
	RightOverlap->SetupAttachment(RootComponent);

	BottomOverlap = CreateDefaultSubobject<UBoxComponent>("BoomBoomBottomOverlap");
	BottomOverlap->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BottomOverlap->SetCollisionProfileName("OverlapAll");
	BottomOverlap->SetGenerateOverlapEvents(true);
	BottomOverlap->OnComponentBeginOverlap.AddDynamic(this, &ABoomBoom::OnBottomOverlap);
	BottomOverlap->SetupAttachment(RootComponent);

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
		if (StateTimer > 0.0f)
		{
			StateTimer -= DeltaTime;
			if (StateTimer <= 0.0f)
			{
				SetState(EBoomBoomState::Active);
			}
		}
		else
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
		location += Velocity * DeltaTime;
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
				FVector force = FVector(1, 0, 1);
				if (Velocity.X < 0.0f)
				{
					force.X *= -1;
				}	
				BoxComponent->AddImpulse(force * EnemyConstants::BoomBoomJumpStrength);
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
	else if (State == EBoomBoomState::Dead)
	{
		StateTimer -= DeltaTime;
		if (StateTimer <= 0.0f)
		{
			FVector location = GetActorLocation();
			const int32 numStars = 8;
			AStarEffect* stars[numStars] = {};
			FVector endPoints[numStars] = { location + FVector(0.0f,0.0f,160.0f),
											location + FVector(110.0f,0.0f,110.0f),
											location + FVector(160.0f,0.0f,0.0f),
											location + FVector(110.0f,0.0f,-110.0f),
											location + FVector(0.0f,0.0f,-160.0f),
											location + FVector(-110.0f,0.0f,-110.0f),
											location + FVector(-160.0f,0.0f,0.0f),
											location + FVector(-110.0f,0.0f,110.0f) };

			for (int i = 0; i < numStars; i++)
			{
				stars[i] = GetWorld()->SpawnActor<AStarEffect>(StarEffectTemplate, location, FRotator(0.0f, 0.0f, 0.0f));
				stars[i]->Spawn(endPoints[i]);
			}

			GetWorld()->SpawnActor<APoofEffect>(PoofEffectTemplate, location, FRotator(0.0f, 0.0f, 0.0f));
			GetWorld()->SpawnActor<AQuestionCircle>(QuestionCircleTemplate, location, FRotator(0.0f, 0.0f, 0.0f));

			Destroy();
		}
	}
}

void ABoomBoom::SetState(EBoomBoomState state)
{
	if (State != state)
	{
		State = state;

		if (State == EBoomBoomState::Idle)
		{
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
		else if (State == EBoomBoomState::Active)
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
			BoxComponent->SetCollisionProfileName("EnemyDead");
			StateTimer = EnemyConstants::BoomBoomDamagedDuration;
			Lives--;
			if (Lives == 1)
			{
				Velocity.Normalize();
				Velocity *= EnemyConstants::BoomBoomDamagedSpeed;
			}
			else if (Lives == 0)
			{
				SetState(EBoomBoomState::Dead);
			}
		}
		else if (State == EBoomBoomState::Dead)
		{
			StateTimer = EnemyConstants::BoomBoomDamagedDuration;
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
			if (State == EBoomBoomState::Active || State == EBoomBoomState::Jumping)
			{
				SetState(EBoomBoomState::Damaged);
				Cast<AMarioCharacter>(OtherActor)->ApplyBounce();
			}
		}
	}
}

void ABoomBoom::OnSideOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("World"))
	{
		Velocity.X *= -1;
	}
}

void ABoomBoom::OnBottomOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (State == EBoomBoomState::Jumping && OtherActor->ActorHasTag("World"))
	{
		SetState(EBoomBoomState::Active);
		GetWorld()->GetAuthGameMode<APlatformerGameModeBase>()->ApplyCameraShake();
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
	else if (State == EBoomBoomState::Dead)
	{
		flipbook = DeadFlipbook;
	}

	FlipbookComponent->SetFlipbook(flipbook);
	FlipbookComponent->PlayFromStart();
}
