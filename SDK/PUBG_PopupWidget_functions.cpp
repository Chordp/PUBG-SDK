// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PopupWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopupWidget.PopupWidget_C.OnGamepadButtonVisibilityPrepass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidget_C::OnGamepadButtonVisibilityPrepass(class UWidget** BoundWidget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidget.PopupWidget_C.OnGamepadButtonVisibilityPrepass"));

	UPopupWidget_C_OnGamepadButtonVisibilityPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.SetPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupStyle*                   PopupStyle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate*        PressedDelegate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidget_C::SetPopup(EPopupStyle* PopupStyle, struct FText* Title, struct FText* Message, struct FScriptDelegate* PressedDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidget.PopupWidget_C.SetPopup"));

	UPopupWidget_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Title = Title;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidget_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidget.PopupWidget_C.Construct"));

	UPopupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidget_C::Destruct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidget.PopupWidget_C.Destruct"));

	UPopupWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidget_C::CustomEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidget.PopupWidget_C.CustomEvent"));

	UPopupWidget_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidget_C::ExecuteUbergraph_PopupWidget(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget"));

	UPopupWidget_C_ExecuteUbergraph_PopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
