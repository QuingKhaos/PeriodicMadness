#pragma once

#include "CoreMinimal.h"
#include "Subsystem/ModSubsystem.h"
#include "PMResourceCleanerSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class PERIODICMADNESS_API APMResourceCleanerSubsystem : public AModSubsystem
{
	GENERATED_BODY()

public:
	APMResourceCleanerSubsystem();

	UFUNCTION(BlueprintCallable, Category="Periodic Madness|Resource Cleaner")
	void UpdateResourceScanner();
};
