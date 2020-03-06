#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyViewMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// 0x00C0 (0x0520 - 0x0460)
class ALobbyViewMode_C : public AViewModeStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Target;                                                   // 0x0470(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Rollback;                                                 // 0x047C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	struct FTransform                                  CurrentTM;                                                // 0x0490(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  NextTM;                                                   // 0x04C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Temp;                                                     // 0x04F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C"));

		return ptr;
	}


	void UserConstructionScript();
	void AddYaw(float* Value);
	void AddPitch(float* Value);
	void AddRoll(float* Value);
	void AddViewDistance(float* Value);
	void ReceiveTick(float* DeltaSeconds);
	void SetViewModeAbleActor(class AActor** Actor);
	void ExecuteUbergraph_LobbyViewMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
