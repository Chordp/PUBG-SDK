#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AnimNotify_AkEvent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.AnimNotify_AkEvent.PlayPreviewEditor
struct UAnimNotify_AkEvent_C_PlayPreviewEditor_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
