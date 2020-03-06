#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWebView_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LobbyWebView.LobbyWebView_C
// 0x0035 (0x041D - 0x03E8)
class ULobbyWebView_C : public UBaseLobbyWebView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	class ULobbyRotationRectWidget_C*                  RotationRect;                                             // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCoherentUIGTWidget*                         WebView;                                                  // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UCoherentUIGTWidget*>                 ViewArray;                                                // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                TickForWebViewVisibilityChange;                           // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SaveMosuePosition;                                        // 0x0414(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoredLobbyWeb;                                         // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass LobbyWebView.LobbyWebView_C"));

		return ptr;
	}


	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent);
	class UCoherentUIGTWidget* GetMainCoherentWidget();
	struct FEventReply OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void WebViewBroadcast(struct FString* EventName, struct FString* Parameter);
	void WebViewUnload(int* ViewIndex);
	void WebViewShow(int* VeiwIndex, bool* visible);
	void HandleEventFromWeb(class UCoherentUIGTJSPayload** payload);
	void WebViewInputFocus(int* ViewIndex);
	void WebViewLoad(int* ViewIndex, struct FString* URL);
	void J(class UCoherentUIGTJSPayload** payload);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature();
	void Destruct();
	void BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature();
	void CustomEvent(float* Scale);
	void ExecuteUbergraph_LobbyWebView(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
