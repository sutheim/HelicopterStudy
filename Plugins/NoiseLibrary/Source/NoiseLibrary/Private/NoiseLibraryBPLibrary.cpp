// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "NoiseLibraryBPLibrary.h"
#include "NoiseLibrary.h"

UNoiseLibraryBPLibrary::UNoiseLibraryBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UNoiseLibraryBPLibrary::SimplexNoiseFloat(float Param)
{
	return SimplexNoise::noise(Param);
}

float UNoiseLibraryBPLibrary::SimplexNoiseVector2D(FVector2D Param)
{
	return SimplexNoise::noise(Param.X,Param.Y);
}

float UNoiseLibraryBPLibrary::SimplexNoiseVector(FVector Param)
{
	return SimplexNoise::noise(Param.X,Param.Y,Param.Z);
}

