// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LaserPointerAttachment_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslLaserPointerAttachment.OnSpectatingChanged
// (Final, Native, Private)
// Parameters:
// bool                           bIsSpectating                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A996530              		 offset:f96530                        

void ULaserPointerAttachment_C::OnSpectatingChanged(bool bIsSpectating)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslLaserPointerAttachment.OnSpectatingChanged"));

	ULaserPointerAttachment_C_OnSpectatingChanged_Params params;
	params.bIsSpectating = bIsSpectating;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslLaserPointerAttachment.ActivateLaser
// (Final, Native, Private)
// FunctionAddress:0x00007FF75B5664F0              		 offset:1b664f0                       

void ULaserPointerAttachment_C::ActivateLaser()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslLaserPointerAttachment.ActivateLaser"));

	ULaserPointerAttachment_C_ActivateLaser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
