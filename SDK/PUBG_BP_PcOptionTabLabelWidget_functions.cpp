// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionTabLabelWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionTabLabelWidget.OnLabelButtonClicked
// (Final, Native, Private)
// FunctionAddress:0x00007FF75A0F0860              		 offset:6f0860                        

void UBP_PcOptionTabLabelWidget_C::OnLabelButtonClicked()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionTabLabelWidget.OnLabelButtonClicked"));

	UBP_PcOptionTabLabelWidget_C_OnLabelButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
