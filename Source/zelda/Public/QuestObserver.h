// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "QuestObserver.generated.h"

/**
 * 
 */
UCLASS()
class ZELDA_API UQuestObserver : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UQuestObserver();

	static UQuestObserver* Ins;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuestMSGs, FString, msg, int32, num);

public:
	UFUNCTION(BluePrintPure, Category = "QuestObserver")
		static UQuestObserver* getQuestObserver();


	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "QuestObserver")
		FQuestMSGs sendMSGToQuestObserver;


};