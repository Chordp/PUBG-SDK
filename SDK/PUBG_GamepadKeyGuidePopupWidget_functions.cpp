// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GamepadKeyGuidePopupWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GamepadKeyGuidePopupWidget.GamepadKeyGuidePopupWidget_C.SetPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupStyle                    PopupStyle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         PressedDelegate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UGamepadKeyGuidePopupWidget_C::SetPopup(EPopupStyle PopupStyle, const struct FText& Title, const struct FText& Message, const struct FScriptDelegate& PressedDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GamepadKeyGuidePopupWidget.GamepadKeyGuidePopupWidget_C.SetPopup"));

	UGamepadKeyGuidePopupWidget_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Title = Title;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadKeyGuidePopupWidget.GamepadKeyGuidePopupWidget_C.ExecuteUbergraph_GamepadKeyGuidePopupWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UGamepadKeyGuidePopupWidget_C::ExecuteUbergraph_GamepadKeyGuidePopupWidget(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GamepadKeyGuidePopupWidget.GamepadKeyGuidePopupWidget_C.ExecuteUbergraph_GamepadKeyGuidePopupWidget"));

	UGamepadKeyGuidePopupWidget_C_ExecuteUbergraph_GamepadKeyGuidePopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
