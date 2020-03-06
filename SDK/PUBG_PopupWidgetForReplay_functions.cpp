// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PopupWidgetForReplay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Get_TextCancel_Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FText UPopupWidgetForReplay_C::Get_TextCancel_Text()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Get_TextCancel_Text"));

	UPopupWidgetForReplay_C_Get_TextCancel_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature"));

	UPopupWidgetForReplay_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature"));

	UPopupWidgetForReplay_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct"));

	UPopupWidgetForReplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::Custom_Event()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event"));

	UPopupWidgetForReplay_C_Custom_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::Destruct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct"));

	UPopupWidgetForReplay_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::XBoxOneOk()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk"));

	UPopupWidgetForReplay_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupStyle*                   PopupStyle                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Title                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  Message                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate*        PressedDelegate                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::SetPopup(EPopupStyle* PopupStyle, struct FText* Title, struct FText* Message, struct FScriptDelegate* PressedDelegate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup"));

	UPopupWidgetForReplay_C_SetPopup_Params params;
	params.PopupStyle = PopupStyle;
	params.Title = Title;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Tick"));

	UPopupWidgetForReplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::ExecuteUbergraph_PopupWidgetForReplay(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay"));

	UPopupWidgetForReplay_C_ExecuteUbergraph_PopupWidgetForReplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::HideMyself__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature"));

	UPopupWidgetForReplay_C_HideMyself__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 NewParam                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UPopupWidgetForReplay_C::ButtonClickDispatcher__DelegateSignature(EPopupButtonID NewParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature"));

	UPopupWidgetForReplay_C_ButtonClickDispatcher__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
