#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionItemStepperIndicatorWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionItemStepperIndicatorWidget.BP_PcOptionItemStepperIndicatorWidget_C
// 0x0000 (0x0490 - 0x0490)
class UBP_PcOptionItemStepperIndicatorWidget_C : public UTslGameOptionItemStepperIndicatorWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionItemStepperIndicatorWidget.BP_PcOptionItemStepperIndicatorWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
