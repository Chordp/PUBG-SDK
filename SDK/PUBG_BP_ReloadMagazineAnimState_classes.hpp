#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ReloadMagazineAnimState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C
// 0x0010 (0x0048 - 0x0038)
class UBP_ReloadMagazineAnimState_C : public UTslReloadMagazineAnimState
{
public:
	TEnumAsByte<Enum_MagazineReloadAnimStateActionType> ActionType;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class AActor*                                      Gun;                                                      // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass BP_ReloadMagazineAnimState.BP_ReloadMagazineAnimState_C"));

		return ptr;
	}


	void DropMag(class USkeletalMeshComponent** MeshComp);
	void AttachMag(class USkeletalMeshComponent** MeshComp, bool* Attach);
	void ShowMag(class USkeletalMeshComponent** MeshComp, bool* Show);
	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
