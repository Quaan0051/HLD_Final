// Fill out your copyright notice in the Description page of Project Settings.


#include "DryBones.h"
#include "EnemyConstants.h"
#include "MarioCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "Math/UnrealMathUtility.h"

ADryBones::ADryBones() :
	FrontOverlap(nullptr),
	BackOverlap(nullptr),
	WalkingFlipbook(nullptr),
	GoingDownFlipbook(nullptr),
	StirringFlipbook(nullptr),
	Velocity(),
	GoingDownDuration(0.0f),
	StirringDuration(0.0f),
	DownedDuration(0.0f),
	Timer(0.0f),
	State(EDryBonesState::Unknown),
	DryBonesDirection(EDryBonesDirection::Right)
{
	BoxComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxComponent->SetCollisionProfileName("BlockAllDynamic");
	BoxComponent->SetSimulatePhysics(true);
	BoxComponent->SetNotifyRigidBodyCollision(true);
	BoxComponent->OnComponentHit.AddDynamic(this, &ADryBones::OnHit);

	FrontOverlap = CreateDefaultSubobject<UBoxComponent>("DryBonesFrontOverlap");
	FrontOverlap->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	FrontOverlap->SetCollisionProfileName("OverlapAll");
	FrontOverlap->SetGenerateOverlapEvents(true);
	FrontOverlap->OnComponentBeginOverlap.AddDynamic(this, &ADryBones::OnFrontOverlap);
	FrontOverlap->SetupAttachment(RootComponent);

	BackOverlap = CreateDefaultSubobject<UBoxComponent>("DryBonesBackOverlap");
	BackOverlap->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BackOverlap->SetCollisionProfileName("OverlapAll");
	BackOverlap->SetGenerateOverlapEvents(true);
	BackOverlap->OnComponentBeginOverlap.AddDynamic(this, &ADryBones::OnBackOverlap);
	BackOverlap->SetupAttachment(RootComponent);

	Type = EEnemyType::DryBones;
	Tags.Add("DryBones");
}

void ADryBones::BeginPlay()
{
	Super::BeginPlay();

	SetState(EDryBonesState::Walking);
}

void ADryBones::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (State == EDryBonesState::Walking)
	{
		FVector location = GetActorLocation();
		location += Velocity * DeltaTime;
		SetActorLocation(location);
	}
	else if (State == EDryBonesState::GoingDown)
	{
		//???
		GoingDownDuration -= DeltaTime;

		if (GoingDownDuration <= 0.0f)
		{
			SetState(EDryBonesState::Downed);
		}
	}
	else if (State == EDryBonesState::Downed)
	{
		DownedDuration -= DeltaTime;

		if (DownedDuration <= 0.0f)
		{
			SetState(EDryBonesState::Stirring);
		}
	}
	else if (State == EDryBonesState::Stirring)
	{
		//stirring duration
		StirringDuration -= DeltaTime;

		if (StirringDuration <= 0.0f)
		{
			SetState(EDryBonesState::Walking);
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

void ADryBones::SetState(EDryBonesState state)
{
	if (State != state)
	{
		State = state;

		if (State == EDryBonesState::Walking)
		{
			ApplyVelocity();
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
		else if (State == EDryBonesState::GoingDown)
		{
			GoingDownDuration = EnemyConstants::DryBonesGoingDownDuration;
			BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}
		else if (State == EDryBonesState::Downed)
		{
			DownedDuration = EnemyConstants::DryBonesDownedDuration;
			//BoxComponent->SetCollisionProfileName("BlockAllDynamic");
			BoxComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			BoxComponent->SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
		}
		else if (State == EDryBonesState::Stirring)
		{
			StirringDuration = EnemyConstants::DryBonesStirringDuration;
			//BoxComponent->SetCollisionProfileName("EnemyDynamic");
		}

		UpdateFlipbook();
	}
}

void ADryBones::SetDirection(EDryBonesDirection direction)
{
	if (DryBonesDirection != direction)
	{
		DryBonesDirection = direction;

		if (DryBonesDirection == EDryBonesDirection::Left)
		{
			ApplyVelocity();
		}
		else if (DryBonesDirection == EDryBonesDirection::Right)
		{
			ApplyVelocity();
		}

		UpdateFlipbook();
	}
}

void ADryBones::OnFrontOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (State == EDryBonesState::Walking || State == EDryBonesState::Stirring)
	{
		if (OtherActor->ActorHasTag("World") || OtherActor->ActorHasTag("Pickup") || OtherActor->ActorHasTag("Enemy"))
		{
			SetDirection(EDryBonesDirection::Left);
			FlipbookComponent->SetRelativeScale3D(FVector(-1.0f, 1.0f, 1.0f));
		}
	}
}

void ADryBones::OnBackOverlap(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (State == EDryBonesState::Walking || State == EDryBonesState::Stirring)
	{
		if (OtherActor->ActorHasTag("World") || OtherActor->ActorHasTag("Pickup") || OtherActor->ActorHasTag("Enemy"))
		{
			SetDirection(EDryBonesDirection::Right);
			FlipbookComponent->SetRelativeScale3D(FVector(1.0f, 1.0f, 1.0f));
		}
	}
}

void ADryBones::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor->ActorHasTag("MarioCharacter"))
	{
		if (Hit.Normal.X <= -0.8f || Hit.Normal.X >= 0.8f)
		{
			if (State != EDryBonesState::GoingDown && State != EDryBonesState::Downed)
			{
				// Koopa hit Mario on the side
				Cast<AMarioCharacter>(OtherActor)->HandleDamage();
			}
		}
		else if (Hit.Normal.Z >= 0.7f)
		{
			// Koopa landed on Mario
			Cast<AMarioCharacter>(OtherActor)->HandleDamage();
		}
		else if (Hit.Normal.Z <= -0.7f)
		{
			// Mario landed on Koopa
			if (State == EDryBonesState::Walking)
			{
				SetState(EDryBonesState::GoingDown);
				Cast<AMarioCharacter>(OtherActor)->ApplyBounce();
			}
		}
	}
}

void ADryBones::ApplyVelocity()
{
	if (DryBonesDirection == EDryBonesDirection::Right)
	{
		Velocity.X = EnemyConstants::DryBonesSpeed;
	}
	else if (DryBonesDirection == EDryBonesDirection::Left)
	{
		Velocity.X = -EnemyConstants::DryBonesSpeed;
	}
}

void ADryBones::UpdateFlipbook()
{
	UPaperFlipbook* flipbook = nullptr;

	if (State == EDryBonesState::Walking)
	{
		flipbook = WalkingFlipbook;
	}
	else if (State == EDryBonesState::GoingDown)
	{
		flipbook = GoingDownFlipbook;
	}
	else if (State == EDryBonesState::Downed)
	{
		flipbook = DownedFlipbook;
	}
	else if (State == EDryBonesState::Stirring)
	{
		flipbook = StirringFlipbook;
	}
	

	FlipbookComponent->SetFlipbook(flipbook);
	FlipbookComponent->PlayFromStart();
}
