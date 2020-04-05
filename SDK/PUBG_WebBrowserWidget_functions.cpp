// PUBG (7.1.6.5) SDK

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
<<<<<<< HEAD
// struct FText*                  Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void UWebBrowser::OnUrlChanged__DelegateSignature(struct FText* Text)
=======
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void UWebBrowser::OnUrlChanged__DelegateSignature(const struct FText& Text)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                NewURL                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8FFCA0              		 offset:4b2fca0                       

void UWebBrowser::LoadURL(struct FString* NewURL)
=======
// struct FString                 NewURL                         (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAEF3800              		 offset:4533800                       

void UWebBrowser::LoadURL(const struct FString& NewURL)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Contents                       (Parm, ZeroConstructor)
// struct FString*                DummyURL                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8FFB10              		 offset:4b2fb10                       

void UWebBrowser::LoadString(struct FString* Contents, struct FString* DummyURL)
=======
// struct FString                 Contents                       (Parm, ZeroConstructor)
// struct FString                 DummyURL                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAEF3670              		 offset:4533670                       

void UWebBrowser::LoadString(const struct FString& Contents, const struct FString& DummyURL)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C8FFA80              		 offset:4b2fa80                       
=======
// FunctionAddress:0x00007FF6DAEF35E0              		 offset:45335e0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C8FF9F0              		 offset:4b2f9f0                       
=======
// FunctionAddress:0x00007FF6DAEF3550              		 offset:4533550                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// struct FString*                ScriptText                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8FF950              		 offset:4b2f950                       

void UWebBrowser::ExecuteJavascript(struct FString* ScriptText)
=======
// struct FString                 ScriptText                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAEF34B0              		 offset:45334b0                       

void UWebBrowser::ExecuteJavascript(const struct FString& ScriptText)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
