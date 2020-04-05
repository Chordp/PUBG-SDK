#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C
// 0x0018 (0x0400 - 0x03E8)
class UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C : public UTslGameOptionSupplementaryMicrophoneVolumeUnitMeterWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	class UWidgetAnimation*                            MicVolumeMeterCover_Anim;                                 // 0x03F0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              PlaybackSpeed;                                            // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PrevLevel;                                                // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C"));

		return ptr;
	}


	void GetGamePadHelpWidgetClass(class UClass** GuideClass);
	void OnAnimFinish();
	void UpdateVolumeMeterValue(float* Volume_Level_in_Decimal);
	void Construct();
	void UpdateVolumeUnitMeter(float* Energy);
	void ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
