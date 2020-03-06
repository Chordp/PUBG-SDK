// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MainLobbyHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainLobbyHUD.MainLobbyHUD_C.HasChildren
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

bool UMainLobbyHUD_C::HasChildren()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.HasChildren"));

	UMainLobbyHUD_C_HasChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ToggleSystemMenu
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::ToggleSystemMenu()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.ToggleSystemMenu"));

	UMainLobbyHUD_C_ToggleSystemMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupImpl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::CloseWebPopupImpl(struct FString* PopupId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupImpl"));

	UMainLobbyHUD_C_CloseWebPopupImpl_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.HideCurtain
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::HideCurtain()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.HideCurtain"));

	UMainLobbyHUD_C_HideCurtain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowCurtain
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::ShowCurtain()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.ShowCurtain"));

	UMainLobbyHUD_C_ShowCurtain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_LobbySystemMenu
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::OnKey_LobbySystemMenu()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.OnKey_LobbySystemMenu"));

	UMainLobbyHUD_C_OnKey_LobbySystemMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply UMainLobbyHUD_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.OnKeyDown"));

	UMainLobbyHUD_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnPrepass_isShipping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::OnPrepass_isShipping(class UWidget** BoundWidget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.OnPrepass_isShipping"));

	UMainLobbyHUD_C_OnPrepass_isShipping_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CleanUpNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::CleanUpNameTagWidget(int* SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.CleanUpNameTagWidget"));

	UMainLobbyHUD_C_CleanUpNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.SetupNameTagWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::SetupNameTagWidget(int* SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.SetupNameTagWidget"));

	UMainLobbyHUD_C_SetupNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.GetNameTagWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTslLobbyNameTagWidget*  Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::GetNameTagWidget(int* SlotIndex, class UTslLobbyNameTagWidget** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.GetNameTagWidget"));

	UMainLobbyHUD_C_GetNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnDestroyCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::OnDestroyCharacter(int* SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.OnDestroyCharacter"));

	UMainLobbyHUD_C_OnDestroyCharacter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnCreateCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::OnCreateCharacter(int* SlotIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.OnCreateCharacter"));

	UMainLobbyHUD_C_OnCreateCharacter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupByID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                WebPopupID                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::CloseWebPopupByID(struct FString* WebPopupID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupByID"));

	UMainLobbyHUD_C_CloseWebPopupByID_Params params;
	params.WebPopupID = WebPopupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.RemoveWebPopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWebPopup_C**            Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::RemoveWebPopup(class UWebPopup_C** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.RemoveWebPopup"));

	UMainLobbyHUD_C_RemoveWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.AddWebPopup
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWebPopup_C**            Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::AddWebPopup(class UWebPopup_C** Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.AddWebPopup"));

	UMainLobbyHUD_C_AddWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CanShowWebPopup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::CanShowWebPopup(struct FString* PopupId, bool* Result)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.CanShowWebPopup"));

	UMainLobbyHUD_C_CanShowWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopupImpl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam*         Param                          (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::ShowWebPopupImpl(struct FWebPopupParam* Param)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopupImpl"));

	UMainLobbyHUD_C_ShowWebPopupImpl_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.On_SystemMenuButton_Prepass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::On_SystemMenuButton_Prepass(class UWidget* BoundWidget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.On_SystemMenuButton_Prepass"));

	UMainLobbyHUD_C_On_SystemMenuButton_Prepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnReload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::OnReload()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.OnReload"));

	UMainLobbyHUD_C_OnReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.GetMainCoherentWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTWidget*     Browser                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::GetMainCoherentWidget(class UCoherentUIGTWidget** Browser)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.GetMainCoherentWidget"));

	UMainLobbyHUD_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Browser != nullptr)
		*Browser = params.Browser;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_SystemMenuOrEscape
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::OnKey_SystemMenuOrEscape()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.OnKey_SystemMenuOrEscape"));

	UMainLobbyHUD_C_OnKey_SystemMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.InitializeHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::InitializeHUD()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.InitializeHUD"));

	UMainLobbyHUD_C_InitializeHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature"));

	UMainLobbyHUD_C_BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature"));

	UMainLobbyHUD_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature"));

	UMainLobbyHUD_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam*         Param                          (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::ShowWebPopup(struct FWebPopupParam* Param)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopup"));

	UMainLobbyHUD_C_ShowWebPopup_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.Construct"));

	UMainLobbyHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.PreloadWebPopup
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FWebPopupParam>* WebPopupParams                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::PreloadWebPopup(TArray<struct FWebPopupParam>* WebPopupParams)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.PreloadWebPopup"));

	UMainLobbyHUD_C_PreloadWebPopup_Params params;
	params.WebPopupParams = WebPopupParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature"));

	UMainLobbyHUD_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature"));

	UMainLobbyHUD_C_BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopup
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::CloseWebPopup(struct FString* PopupId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopup"));

	UMainLobbyHUD_C_CloseWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.InitializeMainUMGHUD
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::InitializeMainUMGHUD()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.InitializeMainUMGHUD"));

	UMainLobbyHUD_C_InitializeMainUMGHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ExecuteUbergraph_MainLobbyHUD
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UMainLobbyHUD_C::ExecuteUbergraph_MainLobbyHUD(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MainLobbyHUD.MainLobbyHUD_C.ExecuteUbergraph_MainLobbyHUD"));

	UMainLobbyHUD_C_ExecuteUbergraph_MainLobbyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
