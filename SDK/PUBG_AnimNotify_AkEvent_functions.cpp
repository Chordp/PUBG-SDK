// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AnimNotify_AkEvent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.AnimNotify_AkEvent.PlayPreviewEditor
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class USkeletalMeshComponent*  MeshComp                       (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF759D9ABE0              		 offset:39abe0                        

void UAnimNotify_AkEvent_C::PlayPreviewEditor(class USkeletalMeshComponent* MeshComp)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.AnimNotify_AkEvent.PlayPreviewEditor"));

	UAnimNotify_AkEvent_C_PlayPreviewEditor_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
