// MyDataAsset.h

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyDataAsset.generated.h"

/**
 * Example data asset class
 */
UCLASS(BlueprintType)
class MYGAME_API UMyDataAsset : public UDataAsset
{
    GENERATED_BODY()

public:
    // Example data properties
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
    FString MyStringData;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
    int32 MyIntegerData;

    // Additional properties and methods
};
