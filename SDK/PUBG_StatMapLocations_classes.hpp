#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_StatMapLocations_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StatMapLocations.StatMapLocations_C
// 0x00CC (0x04CC - 0x0400)
class AStatMapLocations_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentLocationNumber;                                    // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0414(0x000C) MISSED OFFSET
	struct FTransform                                  CurrentTransform;                                         // 0x0420(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeStatCheck;                                     // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	TArray<struct FString>                             BeginConsoleCommands;                                     // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             StatGroups;                                               // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DelayTimeAfterTeleport;                                   // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x047C(0x0004) MISSED OFFSET
	TArray<struct FString>                             StatCounterNames;                                         // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             StatCycleNames;                                           // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStatLocationsWidget_C*                      StatsWidget;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             StatsOutputArray;                                         // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          MapLocations;                                             // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StartupDelay;                                             // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass StatMapLocations.StatMapLocations_C"));

		return ptr;
	}


	void AppendStatDataToColumnNames(struct FString* Column_Names_as_String, TArray<struct FString>* Stat_Data, TArray<struct FString>* Array);
	void GetCurrentLevelLocations();
	void GetMapLocations(struct FString* InSection, TArray<struct FTransform>* MapTransformArray);
	void CreateStatWidget();
	void GatherStats(TArray<struct FString>* Output);
	void SetCurrentTransform();
	void CheckPlayerTransform(bool* PlayerHasNotMoved);
	void MoveToDebugLocation(int* PointNumber, struct FString* OutMoveLocation);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetUp();
	void StatMapLocations();
	void ExecuteUbergraph_StatMapLocations(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif