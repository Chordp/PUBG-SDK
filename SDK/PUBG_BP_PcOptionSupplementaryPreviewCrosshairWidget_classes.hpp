#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionSupplementaryPreviewCrosshairWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryPreviewCrosshairWidget.BP_PcOptionSupplementaryPreviewCrosshairWidget_C
// 0x0000 (0x0438 - 0x0438)
class UBP_PcOptionSupplementaryPreviewCrosshairWidget_C : public UTslGameOptionSupplementaryPreviewCrosshairWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryPreviewCrosshairWidget.BP_PcOptionSupplementaryPreviewCrosshairWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
