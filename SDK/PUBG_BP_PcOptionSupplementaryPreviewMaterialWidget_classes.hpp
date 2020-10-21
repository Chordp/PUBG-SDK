#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionSupplementaryPreviewMaterialWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryPreviewMaterialWidget.BP_PcOptionSupplementaryPreviewMaterialWidget_C
// 0x0000 (0x0498 - 0x0498)
class UBP_PcOptionSupplementaryPreviewMaterialWidget_C : public UTslGameOptionSupplementaryPreviewMaterialWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryPreviewMaterialWidget.BP_PcOptionSupplementaryPreviewMaterialWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
