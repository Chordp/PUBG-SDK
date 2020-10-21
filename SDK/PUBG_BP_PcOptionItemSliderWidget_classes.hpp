#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0740 - 0x0740)
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


	void ResetAcceleration();
	void OnSliderValueTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSliderValueTextChanged(const struct FText& Text);
	void OnSliderValueChanged(float MappedValue);
	void OnSliderAdjustmentEnd();
	void OnSliderAdjustmentBegin();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
