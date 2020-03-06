// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWebView_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyWebView.LobbyWebView_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply ULobbyWebView_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.OnKeyDown"));

	ULobbyWebView_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebView.LobbyWebView_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply ULobbyWebView_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.OnPreviewMouseButtonDown"));

	ULobbyWebView_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebView.LobbyWebView_C.GetMainCoherentWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCoherentUIGTWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

class UCoherentUIGTWidget* ULobbyWebView_C::GetMainCoherentWidget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.GetMainCoherentWidget"));

	ULobbyWebView_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebView.LobbyWebView_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FEventReply ULobbyWebView_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.OnPreviewKeyDown"));

	ULobbyWebView_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebView.LobbyWebView_C.WebViewBroadcast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                EventName                      (Parm, ZeroConstructor)
// struct FString*                Parameter                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::WebViewBroadcast(struct FString* EventName, struct FString* Parameter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.WebViewBroadcast"));

	ULobbyWebView_C_WebViewBroadcast_Params params;
	params.EventName = EventName;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewUnload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::WebViewUnload(int* ViewIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.WebViewUnload"));

	ULobbyWebView_C_WebViewUnload_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           VeiwIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          visible                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::WebViewShow(int* VeiwIndex, bool* visible)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.WebViewShow"));

	ULobbyWebView_C_WebViewShow_Params params;
	params.VeiwIndex = VeiwIndex;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload** payload                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::HandleEventFromWeb(class UCoherentUIGTJSPayload** payload)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb"));

	ULobbyWebView_C_HandleEventFromWeb_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewInputFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::WebViewInputFocus(int* ViewIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.WebViewInputFocus"));

	ULobbyWebView_C_WebViewInputFocus_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewLoad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ViewIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                URL                            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::WebViewLoad(int* ViewIndex, struct FString* URL)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.WebViewLoad"));

	ULobbyWebView_C_WebViewLoad_Params params;
	params.ViewIndex = ViewIndex;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.J
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCoherentUIGTJSPayload** payload                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::J(class UCoherentUIGTJSPayload** payload)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.J"));

	ULobbyWebView_C_J_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::Construct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.Construct"));

	ULobbyWebView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.Tick"));

	ULobbyWebView_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature"));

	ULobbyWebView_C_BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::Destruct()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.Destruct"));

	ULobbyWebView_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature
// (BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature"));

	ULobbyWebView_C_BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::CustomEvent(float* Scale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.CustomEvent"));

	ULobbyWebView_C_CustomEvent_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULobbyWebView_C::ExecuteUbergraph_LobbyWebView(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView"));

	ULobbyWebView_C_ExecuteUbergraph_LobbyWebView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
