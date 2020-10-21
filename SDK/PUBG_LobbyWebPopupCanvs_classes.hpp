#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyWebPopupCanvs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C
// 0x0030 (0x0290 - 0x0260)
class ULobbyWebPopupCanvs_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                WebPopupCavas;                                            // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UWebPopup_C*>                         PanelAddedWebPopupArray;                                  // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWebPopup_C*>                         PreCreatePopupArray;                                      // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C"));

		return ptr;
	}


	bool HasChildren();
	void CreateWebPopupAndAddPanel(const struct FWebPopupParam& Param, bool bShow, bool bReuse, class UWebPopup_C** WebPopup);
	void ShowWebPopupImpl(const struct FWebPopupParam& PopupParam);
	void OnPreloadWebPopupImpl(TArray<struct FWebPopupParam>* Params);
	void GetWebPopupFromPopupId(const struct FString& PopupId, class UWebPopup_C** WebPopup);
	void ChangeWebPopupUriImpl(const struct FString& PopupId, const struct FString& Uri);
	void OnCloseWebPopupImpl(const struct FString& PopupId);
	void CloseWebPopupByID(const struct FString& WebPopupID, bool bForceRemoveParent);
	void RemoveWebPopup(class UWebPopup_C* Widget);
	void AddWebPopup(class UWebPopup_C* Widget);
	void CanShowWebPopup(const struct FString& PopupId, bool* Result);
	void CreateWebPopupImpl(const struct FWebPopupParam& Param, bool bShow, bool bReuse);
	void CloseWebPopup(const struct FString& PopupId);
	void ShowWebPopup(const struct FWebPopupParam& Param);
	void PreloadWebPopup(TArray<struct FWebPopupParam> WebPopupParams);
	void Construct();
	void ExecuteUbergraph_LobbyWebPopupCanvs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
