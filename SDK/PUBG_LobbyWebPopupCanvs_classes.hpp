#pragma once

// PUBG (7.1.6.5) SDK

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
// 0x0030 (0x0278 - 0x0248)
class ULobbyWebPopupCanvs_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                WebPopupCavas;                                            // 0x0250(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UWebPopup_C*>                         PanelAddedWebPopupArray;                                  // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWebPopup_C*>                         PreCreatePopupArray;                                      // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass LobbyWebPopupCanvs.LobbyWebPopupCanvs_C"));

		return ptr;
	}


	bool HasChildren();
	void CreateWebPopupAndAddPanel(struct FWebPopupParam* Param, bool* bShow, bool* bReuse, class UWebPopup_C** WebPopup);
	void ShowWebPopupImpl(struct FWebPopupParam* PopupParam);
	void OnPreloadWebPopupImpl(TArray<struct FWebPopupParam>* Params);
	void GetWebPopupFromPopupId(struct FString* PopupId, class UWebPopup_C** WebPopup);
	void ChangeWebPopupUriImpl(const struct FString& PopupId, const struct FString& Uri);
	void OnCloseWebPopupImpl(struct FString* PopupId);
	void CloseWebPopupByID(struct FString* WebPopupID, bool* bForceRemoveParent);
	void RemoveWebPopup(class UWebPopup_C** Widget);
	void AddWebPopup(class UWebPopup_C** Widget);
	void CanShowWebPopup(struct FString* PopupId, bool* Result);
	void CreateWebPopupImpl(struct FWebPopupParam* Param, bool* bShow, bool* bReuse);
	void CloseWebPopup(struct FString* PopupId);
	void ShowWebPopup(struct FWebPopupParam* Param);
	void PreloadWebPopup(TArray<struct FWebPopupParam>* WebPopupParams);
	void Construct();
	void ExecuteUbergraph_LobbyWebPopupCanvs(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
