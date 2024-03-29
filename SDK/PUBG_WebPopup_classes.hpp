#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WebPopup_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WebPopup.WebPopup_C
// 0x0040 (0x0498 - 0x0458)
class UWebPopup_C : public UTslWebPopup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image;                                                    // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     LoadingMaing;                                             // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     MainButtonGroup;                                          // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTslCoherentWidget*                          WebView;                                                  // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     WebViewBorder;                                            // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnClosePopup;                                             // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass WebPopup.WebPopup_C"));

		return ptr;
	}


	void UpdateButtonGroupVisibility_BP(const struct FWebPopupParam& WebPopupParam);
	void UpdateBackgroundColor_BP(const struct FWebPopupParam& WebPopupParam);
	void PreSetting_BP(const struct FWebPopupParam& Param);
	void SetPopupData(const struct FString& PopupId, const struct FString& Uri, bool UseBackgroundColor, const struct FLinearColor& BackgroundColor, bool bShowButtonGroup);
	void Destruct();
	void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature(const struct FString& path, bool isMainFrame);
	void OnUpdateWebPopup(const struct FWebPopupParam& WebPopupParam);
	void BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature(const struct FString& path, bool isMainFrame);
	void BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature(const struct FString& path, const struct FString& Error, bool isMainFrame);
	void ExecuteUbergraph_WebPopup(int EntryPoint);
	void OnClosePopup__DelegateSignature(class UWebPopup_C* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
