#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_MasteryPose_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MasteryPose.BP_MasteryPose_C
// 0x0040 (0x0450 - 0x0410)
class ABP_MasteryPose_C : public AMasteryPose
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             PlayerCardScene;                                          // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             LobbyScene;                                               // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPoseCharacterAttachments>           CharacterAttachedObjects;                                 // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_MasteryPose.BP_MasteryPose_C"));

		return ptr;
	}


	void ClearEffects();
	void AttachObjects(class ACharacter** LobbyCharacter);
	void ShowPlayerCardEffects();
	void ShowLobbyEffects();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void AttachObjectsEvent(class ACharacter** Character);
	void ClearEffectsEvent();
	void ShowEffects();
	void ExecuteUbergraph_BP_MasteryPose(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
