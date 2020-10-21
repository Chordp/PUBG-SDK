#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x07E0 - 0x07E0)
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


	void OnRightArrowButtonClicked();
	void OnLeftArrowButtonClicked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
