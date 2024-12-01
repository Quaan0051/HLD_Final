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
    constexpr float TwompFallSpeed = 150.0f;
    constexpr float ThwompRiseSpeed = 100.0f;
    constexpr float ThwompDelay = 3.0f;

    //BoomBoom constants
    constexpr int    BoomBoomMaxLives = 3;
    constexpr float BoomBoomInitialSpeed = 100.0f;
    constexpr float BoomBoomDamagedSpeed = 150.0f;
    constexpr float BoomBoomJumpStrength = 30.0f;
    constexpr float BoomBoomPlayerDetectionRange = 10.0f;
    constexpr float BoomBoomDamagedDuration = 2.0f;
    constexpr float BoomBoomJumpPauseDuration = 1.0f;
    constexpr float BoomBoomDirectionChangeTimerMin = 0.5f;
    constexpr float BoomBoomDirectionChangeTimerMax = 2.0f;
    constexpr float BoomBoomJumpTimerMin = 2.0f;
    constexpr float BoomBoomJumpTimerMax = 4.0f;
}