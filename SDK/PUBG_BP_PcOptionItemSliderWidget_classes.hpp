#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemSliderWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionItemSliderWidget.BP_PcOptionItemSliderWidget_C
// 0x0000 (0x0598 - 0x0598)
class UBP_PcOptionItemSliderWidget_C : public UTslGameOptionItemSliderWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionItemSliderWidget.BP_PcOptionItemSliderWidget_C"));

		return ptr;
	}


	void STATIC_ResetAcceleration();
	void STATIC_OnSliderValueTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void STATIC_OnSliderValueTextChanged(const struct FText& Text);
	void STATIC_OnSliderValueChanged(float MappedValue);
	void STATIC_OnSliderAdjustmentEnd();
	void STATIC_OnSliderAdjustmentBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
