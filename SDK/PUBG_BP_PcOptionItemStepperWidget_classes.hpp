#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemStepperWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionItemStepperWidget.BP_PcOptionItemStepperWidget_C
// 0x0000 (0x0630 - 0x0630)
class UBP_PcOptionItemStepperWidget_C : public UTslGameOptionItemStepperWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionItemStepperWidget.BP_PcOptionItemStepperWidget_C"));

		return ptr;
	}


	void STATIC_OnRightArrowButtonClicked();
	void STATIC_OnLeftArrowButtonClicked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
