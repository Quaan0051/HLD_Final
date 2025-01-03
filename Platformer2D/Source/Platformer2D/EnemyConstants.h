// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

namespace EnemyConstants
{
    // Piranha Plant constants
    constexpr float PiranhaPlantOffsetZ = 48.0f;
    constexpr float PiranhaPlantAnimationDuration = 0.75f;
    constexpr float PiranhaPlantActiveDuration = 2.5f;
    constexpr float PiranhaPlantHiddenDurationMin = 2.0f;
    constexpr float PiranhaPlantHiddenDurationMax = 4.0f;

    // Goomba constants
    constexpr float GoombaSpeed = 100.0f;
    constexpr float GoombaSquishedDuration = 0.6f;

	// Boo constants
	constexpr float BooXSpeed = 100.0f;
	constexpr float BooZSpeed = 120.0f;

	// Thwomp constants
	constexpr float ThwompFallSpeed = 400.0f;
	constexpr float ThwompRiseSpeed = 100.0f;
	constexpr float ThwompDelay = 3.0f;

	// BoomBoom constants
	constexpr int	BoomBoomMaxLives = 3;
	constexpr float BoomBoomInitialSpeed = 150.0f;
	constexpr float BoomBoomDamagedSpeed = 250.0f;
	constexpr float BoomBoomJumpStrength = 7000.0f;
	constexpr float BoomBoomPlayerDetectionRange = 200.0f;
	constexpr float BoomBoomDamagedDuration = 2.0f;
	constexpr float BoomBoomIdleDuration = 1.5f;
	constexpr float BoomBoomJumpPauseDuration = 1.0f;
	constexpr float BoomBoomDirectionChangeTimerMin = 0.5f;
	constexpr float BoomBoomDirectionChangeTimerMax = 2.0f;
	constexpr float BoomBoomJumpTimerMin = 3.0f;
	constexpr float BoomBoomJumpTimerMax = 5.0f;

	// Dry Bones constants
	constexpr float DryBonesSpeed = 85.0f;
	constexpr float DryBonesGoingDownDuration = 0.01f;
	constexpr float DryBonesStirringDuration = 1.0f;
	constexpr float DryBonesDownedDuration = 2.5f;

	// ChainChomp constants
	constexpr float ChainChompSpeed = 80.0f;
	constexpr float ChainChompJumpSpeed = 400.0f;
	constexpr float ChainChompPlayerDetectionRange = 600.0f;
	constexpr float ChainChompMaxDistanceFromAnchor = 120.0f;
	constexpr float ChainChompDirectionChangeTimerMin = 0.5f;
	constexpr float ChainChompDirectionChangeTimerMax = 2.0f;
	constexpr float ChainChompJumpTimerMin = 1.0f;
	constexpr float ChainChompJumpTimerMax = 2.0f;
	constexpr float ChainChompJumpHeightMin = 0.4f;
	constexpr float ChainChompJumpHeightMax = 1.0f;
	constexpr float ChainChompJumpHoldDuration = 2.0f;
	
}
