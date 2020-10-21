// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemButtonWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionItemButtonWidget.ShowPopupDialogEx
// (Final, Native, Protected)
// FunctionAddress:0x00007FF75B913980              		 offset:1f13980                       

void UBP_PcOptionItemButtonWidget_C::ShowPopupDialogEx()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemButtonWidget.ShowPopupDialogEx"));

	UBP_PcOptionItemButtonWidget_C_ShowPopupDialogEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemButtonWidget.OnPopupButtonPressedEvent
// (Final, Native, Protected)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D2D5180              		 offset:38d5180                       

void UBP_PcOptionItemButtonWidget_C::OnPopupButtonPressedEvent(EPopupButtonID ButtonID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslGameOptionItemButtonWidget.OnPopupButtonPressedEvent"));

	UBP_PcOptionItemButtonWidget_C_OnPopupButtonPressedEvent_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
