#pragma once

#include "CoreMinimal.h"
#include "Buildables/FGBuildableWaterPump.h"
#include "Resources/FGResourceDescriptor.h"
#include "PMBuildableSeawaterExtractor.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class PERIODICMADNESS_API APMBuildableSeawaterExtractor : public AFGBuildableWaterPump
{
	GENERATED_BODY()
public:
	APMBuildableSeawaterExtractor();

	//~ Begin UObject Interface
	virtual void OnConstruction(const FTransform& transform) override;
	//~ End UObject Interface
private:
	/** Reference to the Seawater Descriptor to set on the Seawater Volume */
	UPROPERTY(EditDefaultsOnly, Category = "Extraction")
	TSubclassOf<class UFGResourceDescriptor> mSeawaterResourceClass;
};
