#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WebBrowserWidget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
struct UWebBrowser_OnUrlChanged__DelegateSignature_Params
{
<<<<<<< HEAD
	struct FText*                                      Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WebBrowserWidget.WebBrowser.LoadURL
struct UWebBrowser_LoadURL_Params
{
<<<<<<< HEAD
	struct FString*                                    NewURL;                                                   // (Parm, ZeroConstructor)
=======
	struct FString                                     NewURL;                                                   // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WebBrowserWidget.WebBrowser.LoadString
struct UWebBrowser_LoadString_Params
{
<<<<<<< HEAD
	struct FString*                                    Contents;                                                 // (Parm, ZeroConstructor)
	struct FString*                                    DummyURL;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     Contents;                                                 // (Parm, ZeroConstructor)
	struct FString                                     DummyURL;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function WebBrowserWidget.WebBrowser.GetUrl
struct UWebBrowser_GetUrl_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WebBrowserWidget.WebBrowser.GetTitleText
struct UWebBrowser_GetTitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
struct UWebBrowser_ExecuteJavascript_Params
{
<<<<<<< HEAD
	struct FString*                                    ScriptText;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     ScriptText;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
