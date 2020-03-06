#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyHUD_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyHUD_Default.LobbyHUD_Default_C
// 0x004C (0x12BC - 0x1270)
class ALobbyHUD_Default_C : public ALobbyHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1270(0x0008) (Transient, DuplicateTransient)
	class ABP_MasteryPose_C*                           PoseActor;                                                // 0x1278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  MasteryPoseData;                                          // 0x1280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     DefaultPose;                                              // 0x1288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CurrentPose;                                              // 0x1298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     InputPose;                                                // 0x12A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PoseDelayTime;                                            // 0x12B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LobbyHUD_Default.LobbyHUD_Default_C"));

		return ptr;
	}


	void ChangeScene(struct FString* PoseId);
	void ShowPoseActor(struct FString* SourceString, TArray<struct FString>* SkinIDs);
	void DestroyPoseActor();
	void UserConstructionScript();
	void HideMasteryPose();
	void ShowMasteryPose(struct FString* PoseId, TArray<struct FString>* ItemIDs);
	void ReceivePostBeginPlay();
	void ExecuteUbergraph_LobbyHUD_Default(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
