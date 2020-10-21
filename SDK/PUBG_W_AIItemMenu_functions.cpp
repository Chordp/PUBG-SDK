// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_AIItemMenu_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AIItemMenu.W_AIItemMenu_C.InitItemsData
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::InitItemsData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.InitItemsData"));

	UW_AIItemMenu_C_InitItemsData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.InitAIList
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::InitAIList()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.InitAIList"));

	UW_AIItemMenu_C_InitAIList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.SetUseBtn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::SetUseBtn()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.SetUseBtn"));

	UW_AIItemMenu_C_SetUseBtn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

struct FEventReply UW_AIItemMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.OnKeyUp"));

	UW_AIItemMenu_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_AIItemMenu.W_AIItemMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

struct FEventReply UW_AIItemMenu_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.OnKeyDown"));

	UW_AIItemMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function W_AIItemMenu.W_AIItemMenu_C.GiveItemToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InItem                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::GiveItemToPlayer(const struct FName& InItem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.GiveItemToPlayer"));

	UW_AIItemMenu_C_GiveItemToPlayer_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.DoExit
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::DoExit()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.DoExit"));

	UW_AIItemMenu_C_DoExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.Construct"));

	UW_AIItemMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature"));

	UW_AIItemMenu_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.Event Close
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::Event_Close()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.Event Close"));

	UW_AIItemMenu_C_Event_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.CenterCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       InPC                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::CenterCursor(class APlayerController* InPC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.CenterCursor"));

	UW_AIItemMenu_C_CenterCursor_Params params;
	params.InPC = InPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature"));

	UW_AIItemMenu_C_BndEvt__UseButton_123_K2Node_ComponentBoundEvent_108_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::Destruct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.Destruct"));

	UW_AIItemMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AIItemMenu.W_AIItemMenu_C.ExecuteUbergraph_W_AIItemMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UW_AIItemMenu_C::ExecuteUbergraph_W_AIItemMenu(int EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function W_AIItemMenu.W_AIItemMenu_C.ExecuteUbergraph_W_AIItemMenu"));

	UW_AIItemMenu_C_ExecuteUbergraph_W_AIItemMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
