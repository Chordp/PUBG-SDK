#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BloodSpotWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BloodSpotWidget.BloodSpotWidget_C
// 0x003C (0x0284 - 0x0248)
class UBloodSpotWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadOut2;                                                  // 0x0250(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      BloodSpotImage;                                           // 0x0258(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*                    MatBloodSpot;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SaveRandomValue;                                          // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OriginalColor;                                            // 0x026C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OriginalColorShadow;                                      // 0x0278(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BloodSpotWidget.BloodSpotWidget_C"));

		return ptr;
	}


	void Start();
	void Construct();
	void OnAnimationFinished(class UWidgetAnimation** Animation);
	void OnAnimationStarted(class UWidgetAnimation** Animation);
	void ExecuteUbergraph_BloodSpotWidget(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
