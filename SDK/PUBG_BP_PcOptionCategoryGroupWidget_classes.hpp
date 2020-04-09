#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionCategoryGroupWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionCategoryGroupWidget.BP_PcOptionCategoryGroupWidget_C
// 0x0000 (0x0488 - 0x0488)
class UBP_PcOptionCategoryGroupWidget_C : public UTslGameOptionCategoryGroupWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionCategoryGroupWidget.BP_PcOptionCategoryGroupWidget_C"));

		return ptr;
	}


	void STATIC_OnCloudOptionTooltipDeactivated();
	void STATIC_OnCloudOptionTooltipActivated();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
