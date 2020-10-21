// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemStepperIndicatorWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionItemStepperIndicatorWidget.OnClicked
// (Final, Native, Public)
// FunctionAddress:0x00007FF75A122770              		 offset:722770                        

void UBP_PcOptionItemStepperIndicatorWidget_C::OnClicked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemStepperIndicatorWidget.OnClicked"));

	UBP_PcOptionItemStepperIndicatorWidget_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
