#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlayerCardStudioV2_Default_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C
// 0x0018 (0x04F8 - 0x04E0)
class APlayerCardStudioV2_Default_C : public APlayerCardStudioV2
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (Transient, DuplicateTransient)
	class UDataTable*                                  MasteryPoseData;                                          // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_MasteryPose_C*                           PoseActor;                                                // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass PlayerCardStudioV2_Default.PlayerCardStudioV2_Default_C"));

		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_PlayerCardStudioV2_Default(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
