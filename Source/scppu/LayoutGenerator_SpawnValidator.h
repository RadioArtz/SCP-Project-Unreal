

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LayoutGenerator_Structs.h"
#include "LayoutGenerator_Cell.h"
#include "LayoutGenerator_SpawnValidator.generated.h"

UCLASS(Blueprintable, Abstract)
class SCPPU_API ULayoutGenerator_SpawnValidator : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent)
		bool IsSpawnValid(ALayoutGenerator_Main* LayoutGenerator, FIntVector2D Location);

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FRandomStream RandomStream;

};
