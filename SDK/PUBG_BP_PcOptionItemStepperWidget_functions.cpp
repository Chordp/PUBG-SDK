// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemStepperWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionItemStepperWidget.OnRightArrowButtonClicked
// (Final, Native, Public)
// FunctionAddress:0x00007FF75D4C68E0              		 offset:3ac68e0                       

void UBP_PcOptionItemStepperWidget_C::OnRightArrowButtonClicked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemStepperWidget.OnRightArrowButtonClicked"));

	UBP_PcOptionItemStepperWidget_C_OnRightArrowButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemStepperWidget.OnLeftArrowButtonClicked
// (Final, Native, Public)
// FunctionAddress:0x00007FF75DE79950              		 offset:4479950                       

void UBP_PcOptionItemStepperWidget_C::OnLeftArrowButtonClicked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemStepperWidget.OnLeftArrowButtonClicked"));

	UBP_PcOptionItemStepperWidget_C_OnLeftArrowButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
