#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AnimNotify_AkEvent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C
// 0x0000 (0x0058 - 0x0058)
class UAnimNotify_AkEvent_C : public UAnimNotify_AkEvent
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass AnimNotify_AkEvent.AnimNotify_AkEvent_C"));

		return ptr;
	}


	void STATIC_PlayPreviewEditor(class USkeletalMeshComponent* MeshComp);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
