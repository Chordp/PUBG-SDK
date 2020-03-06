#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplayList_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// 0x0070 (0x0470 - 0x0400)
class AReplayList_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTslGameInstance*                            TslGameInstance;                                          // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUiReplayList_C*                             UiReplayList;                                             // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     IsLive;                                                   // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       NewVar;                                                   // 0x0430(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     RegionOrLocal;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PageSize;                                                 // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                pageCount;                                                // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              prev_Percent;                                             // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class UWidget*                                     CurrentItemWidget;                                        // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C"));

		return ptr;
	}


	void OnUpdateItem(struct FReplayItem* inReplayItem);
	void UpdateReplayList(struct FString* inRegionOrLocal);
	void CheckReplayBusyStatus(bool* bIsReplayBusy);
	void OnGoPageBtn();
	void OnNextPageBtn();
	void OnPrevPageBtn();
	void ClearReplayList();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CreateReplayListEvent();
	void PrevPageEvent();
	void NextPageEvent();
	void GoPageEvent();
	void OnItemClicked(struct FString* RegionOrLocal, struct FReplayItem* inReplayItem);
	void ExecuteUbergraph_ReplayList_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
