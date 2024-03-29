#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WebBrowserWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class WebBrowserWidget.WebBrowser
// 0x0038 (0x0178 - 0x0140)
class UWebBrowser : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnUrlChanged;                                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     InitialURL;                                               // 0x0150(0x0010) (Edit, ZeroConstructor)
	bool                                               bSupportsTransparency;                                    // 0x0160(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0161(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class WebBrowserWidget.WebBrowser"));

		return ptr;
	}


	void OnUrlChanged__DelegateSignature(const struct FText& Text);
	void LoadURL(const struct FString& NewURL);
	void LoadString(const struct FString& Contents, const struct FString& DummyURL);
	struct FString GetUrl();
	struct FText GetTitleText();
	void ExecuteJavascript(const struct FString& ScriptText);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
