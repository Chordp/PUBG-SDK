#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionTabLabelWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionTabLabelWidget.BP_PcOptionTabLabelWidget_C
// 0x0000 (0x0480 - 0x0480)
class UBP_PcOptionTabLabelWidget_C : public UTslGameOptionTabLabelWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionTabLabelWidget.BP_PcOptionTabLabelWidget_C"));

		return ptr;
	}


	void STATIC_OnLabelButtonClicked();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
