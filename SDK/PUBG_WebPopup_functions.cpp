// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WebPopup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam*         WebPopupParam                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::UpdateButtonGroupVisibility_BP(struct FWebPopupParam* WebPopupParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP"));

	UWebPopup_C_UpdateButtonGroupVisibility_BP_Params params;
	params.WebPopupParam = WebPopupParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam*         WebPopupParam                  (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::UpdateBackgroundColor_BP(struct FWebPopupParam* WebPopupParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP"));

	UWebPopup_C_UpdateBackgroundColor_BP_Params params;
	params.WebPopupParam = WebPopupParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.PreSetting_BP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWebPopupParam*         Param                          (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::PreSetting_BP(struct FWebPopupParam* Param)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.PreSetting_BP"));

	UWebPopup_C_PreSetting_BP_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.SetPopupData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                PopupId                        (Parm, ZeroConstructor)
// struct FString*                Uri                            (Parm, ZeroConstructor)
// bool*                          UseBackgroundColor             (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BackgroundColor                (Parm, IsPlainOldData)
// bool*                          bShowButtonGroup               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::SetPopupData(struct FString* PopupId, struct FString* Uri, bool* UseBackgroundColor, struct FLinearColor* BackgroundColor, bool* bShowButtonGroup)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.SetPopupData"));

	UWebPopup_C_SetPopupData_Params params;
	params.PopupId = PopupId;
	params.Uri = Uri;
	params.UseBackgroundColor = UseBackgroundColor;
	params.BackgroundColor = BackgroundColor;
	params.bShowButtonGroup = bShowButtonGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::Destruct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.Destruct"));

	UWebPopup_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));

	UWebPopup_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature"));

	UWebPopup_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature"));

	UWebPopup_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                path                           (Parm, ZeroConstructor)
// bool*                          isMainFrame                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature(struct FString* path, bool* isMainFrame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature"));

	UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature_Params params;
	params.path = path;
	params.isMainFrame = isMainFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.OnUpdateWebPopup
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FWebPopupParam*         WebPopupParam                  (Parm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::OnUpdateWebPopup(struct FWebPopupParam* WebPopupParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.OnUpdateWebPopup"));

	UWebPopup_C_OnUpdateWebPopup_Params params;
	params.WebPopupParam = WebPopupParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                path                           (Parm, ZeroConstructor)
// bool*                          isMainFrame                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature(struct FString* path, bool* isMainFrame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature"));

	UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature_Params params;
	params.path = path;
	params.isMainFrame = isMainFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                path                           (Parm, ZeroConstructor)
// struct FString*                Error                          (Parm, ZeroConstructor)
// bool*                          isMainFrame                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature(struct FString* path, struct FString* Error, bool* isMainFrame)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature"));

	UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature_Params params;
	params.path = path;
	params.Error = Error;
	params.isMainFrame = isMainFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::ExecuteUbergraph_WebPopup(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup"));

	UWebPopup_C_ExecuteUbergraph_WebPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWebPopup_C*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebPopup_C::OnClosePopup__DelegateSignature(class UWebPopup_C* Widget)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature"));

	UWebPopup_C_OnClosePopup__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
