#pragma once

#include "CoreMinimal.h"
#include "Resources/FGExtractableResourceInterface.h"
#include "Resources/FGResourceDescriptor.h"
#include "FGSaveInterface.h"
#include "FGWaterVolume.h"
#include "PMSeawaterVolume.generated.h"

/**
 * 
 */
UCLASS(HideCategories = (Collision))
class PERIODICMADNESS_API APMSeawaterVolume : public AActor, public IFGSaveInterface, public IFGExtractableResourceInterface
{
	GENERATED_BODY()
public:
	/** ctor */
	APMSeawaterVolume();

	void SetDecoratedWaterVolume(AFGWaterVolume* decoratedWaterVolume);
	void SetSeawaterResourceClass(TSubclassOf<class UFGResourceDescriptor> resourceClass);

	//~ Begin AActor Interface
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type endPlayReason) override;
	virtual void PostUnregisterAllComponents(void) override;
	virtual void PostRegisterAllComponents() override;
	//~ End AActor Interface

	//~ Begin IFGSaveInterface Interface
	virtual bool ShouldSave_Implementation() const override;
	virtual bool NeedTransform_Implementation() override;
	//~ End IFGSaveInterface Interface

	//~ Begin IFGExtractableResourceInterface Interface
	UFUNCTION()
	virtual void SetIsOccupied(bool occupied) override;
	UFUNCTION()
	virtual bool IsOccupied() const override;
	UFUNCTION()
	virtual bool CanBecomeOccupied() const override;
	UFUNCTION()
	virtual bool HasAnyResources() const override;
	UFUNCTION()
	virtual TSubclassOf<class UFGResourceDescriptor> GetResourceClass() const override;
	UFUNCTION()
	virtual int32 ExtractResource(int32 amount) override;
	UFUNCTION()
	virtual float GetExtractionSpeedMultiplier() const override;
	UFUNCTION()
	virtual FVector GetPlacementLocation(const FVector& hitLocation) const override;
	UFUNCTION()
	virtual bool CanPlaceResourceExtractor() const override;
	//~ End IFGExtractableResourceInterface Interface
private:
	UPROPERTY(SaveGame)
	AFGWaterVolume* mDecoratedWaterVolume;

	/** Reference to the Seawater Descriptor. */
	UPROPERTY(SaveGame)
	TSubclassOf<class UFGResourceDescriptor> mSeawaterResourceClass;
};
