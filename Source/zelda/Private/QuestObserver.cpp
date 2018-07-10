// Fill out your copyright notice in the Description page of Project Settings.

#include "zelda.h"
#include "QuestObserver.h"

UQuestObserver * UQuestObserver::Ins;

UQuestObserver::UQuestObserver()
{
	AddToRoot();
}

UQuestObserver * UQuestObserver::getQuestObserver()
{
	if (Ins == nullptr)
	{
		Ins = NewObject<UQuestObserver>();
	}
	return Ins;
}

