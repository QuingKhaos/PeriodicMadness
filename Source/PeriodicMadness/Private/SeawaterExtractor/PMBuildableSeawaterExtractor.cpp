#include "SeawaterExtractor/PMBuildableSeawaterExtractor.h"
#include "SeawaterExtractor/PMSeawaterVolume.h"

APMBuildableSeawaterExtractor::APMBuildableSeawaterExtractor()
	: AFGBuildableWaterPump()
{
}

//~ Begin UObject Interface
void APMBuildableSeawaterExtractor::OnConstruction(const FTransform& transform)
{
	AFGBuildableWaterPump::OnConstruction(transform);

	AActor* ExtractableResourceActor = GetExtractableResourceActor();
	if (AFGWaterVolume* WaterVolume = Cast<AFGWaterVolume>(ExtractableResourceActor)) {
		FActorSpawnParameters SeawaterVolumeSpawnParameters;
		SeawaterVolumeSpawnParameters.Owner = this;
		SeawaterVolumeSpawnParameters.bAllowDuringConstructionScript = true;
		SeawaterVolumeSpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		APMSeawaterVolume* SeawaterVolume = (APMSeawaterVolume*)GetWorld()->SpawnActor(APMSeawaterVolume::StaticClass(), NULL, NULL, SeawaterVolumeSpawnParameters);
		SeawaterVolume->SetDecoratedWaterVolume(WaterVolume);
		SeawaterVolume->SetSeawaterResourceClass(mSeawaterResourceClass);

		SetExtractableResource(SeawaterVolume);
	}
}
//~ End UObject Interface
