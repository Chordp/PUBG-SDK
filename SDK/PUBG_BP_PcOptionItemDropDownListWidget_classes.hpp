#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemDropDownListWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C
// 0x0020 (0x05D8 - 0x05B8)
class UBP_PcOptionItemDropDownListWidget_C : public UTslGameOptionItemDropDownListWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B8(0x0008) (Transient, DuplicateTransient)
	class UTslUniversalInputComboBoxString*            ComboBox;                                                 // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C"));

		return ptr;
	}


	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void ExecuteUbergraph_BP_PcOptionItemDropDownListWidget(int EntryPoint);
	void OnSelectionChanged__DelegateSignature(const struct FString& KeyStr, TEnumAsByte<ESelectInfo> SelectionType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
