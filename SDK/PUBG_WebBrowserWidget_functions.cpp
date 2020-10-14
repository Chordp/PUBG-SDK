// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WebBrowserWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void UWebBrowser::OnUrlChanged__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature"));

	UWebBrowser_OnUrlChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.LoadURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 NewURL                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B661E30              		 offset:2b91e30                       

void UWebBrowser::LoadURL(const struct FString& NewURL)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.LoadURL"));

	UWebBrowser_LoadURL_Params params;
	params.NewURL = NewURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.LoadString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Contents                       (Parm, ZeroConstructor)
// struct FString                 DummyURL                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B661CA0              		 offset:2b91ca0                       

void UWebBrowser::LoadString(const struct FString& Contents, const struct FString& DummyURL)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.LoadString"));

	UWebBrowser_LoadString_Params params;
	params.Contents = Contents;
	params.DummyURL = DummyURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebBrowserWidget.WebBrowser.GetUrl
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF62B661C10              		 offset:2b91c10                       

struct FString UWebBrowser::GetUrl()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.GetUrl"));

	UWebBrowser_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.GetTitleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B661B80              		 offset:2b91b80                       

struct FText UWebBrowser::GetTitleText()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.GetTitleText"));

	UWebBrowser_GetTitleText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ScriptText                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B661AE0              		 offset:2b91ae0                       

void UWebBrowser::ExecuteJavascript(const struct FString& ScriptText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function WebBrowserWidget.WebBrowser.ExecuteJavascript"));

	UWebBrowser_ExecuteJavascript_Params params;
	params.ScriptText = ScriptText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
