// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

namespace GameConstants
{
	// Gameplay constants
	constexpr float DestroyActorAtZ = -250.0f;
	constexpr float DefaultGameDuration = 300.0f;
	constexpr float BlackOverlayFadeInOutDuration = 0.7f;
	constexpr float BlackOverlayFadeHoldDuration = 0.1f;
	constexpr float BreakableBlockCoinSwitchDuration = 5.0f;


	// Tile constants
	constexpr float TileSize = 32.0f;
	constexpr float TileHalfSize = TileSize * 0.5f;


	// Resolution and Camera constants
	constexpr float ResolutionWidth = 640.0f;
	constexpr float ResolutionHeight = 480.0f;
	constexpr float ResolutionAspectRatio = ResolutionWidth / ResolutionHeight;
	constexpr float CameraDepthY = 200.0f;
	constexpr float CameraRotationYaw = 270.0f;
	constexpr int32 MaxCameraShakes = 9;
}
