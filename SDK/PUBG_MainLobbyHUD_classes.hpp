#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MainLobbyHUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MainLobbyHUD.MainLobbyHUD_C
// 0x0380 (0x05C8 - 0x0248)
class UMainLobbyHUD_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UButton*                                     Button_NewSystemMenu;                                     // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Quit;                                              // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Reload;                                            // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     Button_Setting;                                           // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UInvalidationBox*                            InvalidationBox;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UInvalidationBox*                            InvalidationBox02;                                        // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      LoadingSpinnerImage;                                      // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                MessageVBox;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     ReplayTestButton;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UScaleBox*                                   StageCurtain;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                WebPopupCavas;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class ALobbyHUD*                                   HUD;                                                      // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                ContinousReloadCount;                                     // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B4(0x0004) MISSED OFFSET
	struct FDateTime                                   LastReload;                                               // 0x02B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWebPopup_C*>                         VisibleWebPopupArray;                                     // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              NameTagHeight;                                            // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class AReplayList_BP_C*                            refReplayListBp;                                          // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ULobbyNameTagHUD_C*                          LobbyNameTagHUD;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHudUiConfig                                Browser_Config;                                           // 0x02E8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                LobbyNameTagHUD_Config;                                   // 0x0328(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                PopupBox_Config;                                          // 0x0368(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                OptionMenu_Gamepad_Config;                                // 0x03A8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                NewLobbySystemMenu_Config;                                // 0x03E8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                GameRatingWidget_Config;                                  // 0x0428(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                ViewModeConfig;                                           // 0x0468(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                ViewModeHelper;                                           // 0x04A8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                PopupBox_Gamepad_Config;                                  // 0x04E8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                WebpopupCanvas_Config;                                    // 0x0528(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHudUiConfig                                LobbyBlur_Config;                                         // 0x0568(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FHudUiConfig>                        DebugUI;                                                  // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     LobbySystemMenuName;                                      // 0x05B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass MainLobbyHUD.MainLobbyHUD_C"));

		return ptr;
	}


	bool HasChildren();
	void ToggleSystemMenu();
	void CloseWebPopupImpl(struct FString* PopupId);
	void HideCurtain();
	void ShowCurtain();
	void OnKey_LobbySystemMenu();
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void OnPrepass_isShipping(class UWidget** BoundWidget);
	void CleanUpNameTagWidget(int* SlotIndex);
	void SetupNameTagWidget(int* SlotIndex);
	void GetNameTagWidget(int* SlotIndex, class UTslLobbyNameTagWidget** Widget);
	void OnDestroyCharacter(int* SlotIndex);
	void OnCreateCharacter(int* SlotIndex);
	void CloseWebPopupByID(struct FString* WebPopupID);
	void RemoveWebPopup(class UWebPopup_C** Widget);
	void AddWebPopup(class UWebPopup_C** Widget);
	void CanShowWebPopup(struct FString* PopupId, bool* Result);
	void ShowWebPopupImpl(struct FWebPopupParam* Param);
	void On_SystemMenuButton_Prepass(class UWidget* BoundWidget);
	void OnReload();
	void GetMainCoherentWidget(class UCoherentUIGTWidget** Browser);
	void OnKey_SystemMenuOrEscape();
	void InitializeHUD();
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature();
	void ShowWebPopup(struct FWebPopupParam* Param);
	void Construct();
	void PreloadWebPopup(TArray<struct FWebPopupParam>* WebPopupParams);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature();
	void CloseWebPopup(struct FString* PopupId);
	void InitializeMainUMGHUD();
	void ExecuteUbergraph_MainLobbyHUD(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
