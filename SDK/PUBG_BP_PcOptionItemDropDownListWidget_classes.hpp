#pragma once

// PUBG (8.3.5.39) SDK

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
// 0x0020 (0x0750 - 0x0730)
class UBP_PcOptionItemDropDownListWidget_C : public UTslGameOptionItemDropDownListWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UTslUniversalInputComboBoxString*            ComboBox;                                                 // 0x0738(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionItemDropDownListWidget.BP_PcOptionItemDropDownListWidget_C"));

		return ptr;
	}


	void BndEvt__ComboBox_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(struct FString* SelectedItem, TEnumAsByte<ESelectInfo>* SelectionType);
	void ExecuteUbergraph_BP_PcOptionItemDropDownListWidget(int* EntryPoint);
	void OnSelectionChanged__DelegateSignature(struct FString* KeyStr, TEnumAsByte<ESelectInfo>* SelectionType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
