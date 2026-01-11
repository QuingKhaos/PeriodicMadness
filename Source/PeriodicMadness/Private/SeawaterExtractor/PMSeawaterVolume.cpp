#include "SeawaterExtractor/PMSeawaterVolume.h"

APMSeawaterVolume::APMSeawaterVolume()
	: AActor()
{
}

void APMSeawaterVolume::SetDecoratedWaterVolume(AFGWaterVolume* decoratedWaterVolume)
{
	mDecoratedWaterVolume = decoratedWaterVolume;
}

void APMSeawaterVolume::SetSeawaterResourceClass(TSubclassOf<class UFGResourceDescriptor> resourceClass)
{
	mSeawaterResourceClass = resourceClass;
}

//~ Begin AActor Interface
void APMSeawaterVolume::BeginPlay()
{
	if (mDecoratedWaterVolume) {
		mDecoratedWaterVolume->BeginPlay();
	}
}

void APMSeawaterVolume::EndPlay(const EEndPlayReason::Type endPlayReason)
{
	if (mDecoratedWaterVolume) {
		mDecoratedWaterVolume->EndPlay(endPlayReason);
	}
}

void APMSeawaterVolume::PostUnregisterAllComponents(void)
{
	if (mDecoratedWaterVolume) {
		mDecoratedWaterVolume->PostUnregisterAllComponents();
	}
}

void APMSeawaterVolume::PostRegisterAllComponents()
{
	if (mDecoratedWaterVolume) {
		mDecoratedWaterVolume->PostRegisterAllComponents();
	}
}
//~ End AActor Interface

//~ Begin IFGSaveInterface Interface
bool APMSeawaterVolume::ShouldSave_Implementation() const
{
	return true;
}

bool APMSeawaterVolume::NeedTransform_Implementation()
{
	return true;
}
//~ End IFGSaveInterface Interface

//~ Begin IFGExtractableResourceInterface Interface
void APMSeawaterVolume::SetIsOccupied(bool occupied)
{
	mDecoratedWaterVolume->SetIsOccupied(occupied);
}

bool APMSeawaterVolume::IsOccupied() const
{
	return mDecoratedWaterVolume->IsOccupied();
}

bool APMSeawaterVolume::CanBecomeOccupied() const
{
	return mDecoratedWaterVolume->CanBecomeOccupied();
}

bool APMSeawaterVolume::HasAnyResources() const
{
	return mDecoratedWaterVolume->HasAnyResources();
}

TSubclassOf<class UFGResourceDescriptor> APMSeawaterVolume::GetResourceClass() const
{
	return mSeawaterResourceClass;
}

int32 APMSeawaterVolume::ExtractResource(int32 amount)
{
	return mDecoratedWaterVolume->ExtractResource(amount);
}

float APMSeawaterVolume::GetExtractionSpeedMultiplier() const
{
	return mDecoratedWaterVolume->GetExtractionSpeedMultiplier();
}

FVector APMSeawaterVolume::GetPlacementLocation(const FVector& hitLocation) const
{
	return mDecoratedWaterVolume->GetPlacementLocation(hitLocation);
}

bool APMSeawaterVolume::CanPlaceResourceExtractor() const
{
	return mDecoratedWaterVolume->CanPlaceResourceExtractor();
}
//~ End IFGExtractableResourceInterface Interface