#include "Subsystems/PMResourceCleanerSubsystem.h"
#include "Equipment/FGResourceScanner.h"
#include "FGCharacterPlayer.h"
#include "LogPeriodicMadness.h"

APMResourceCleanerSubsystem::APMResourceCleanerSubsystem()
	: AModSubsystem()
{
}

void APMResourceCleanerSubsystem::UpdateResourceScanner()
{
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		if (const APlayerController* PC = Iterator->Get())
		{
			if (AFGCharacterPlayer* Player = Cast<AFGCharacterPlayer>(PC->GetPawn()))
			{
				if (AFGResourceScanner* Scanner = Player->GetResourceScanner())
				{
					UE_LOG(LogPeriodicMadness, Verbose, TEXT("[/PeriodicMadness/Subsystems/PMResourceCleanerSubsystem]: Generating node clusters for resource scanner."))

					Scanner->mNodeClusters.Empty();
					Scanner->GenerateNodeClusters();
				}
			}
		}
	}
}
