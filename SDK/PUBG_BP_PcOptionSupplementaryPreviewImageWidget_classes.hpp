#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionSupplementaryPreviewImageWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryPreviewImageWidget.BP_PcOptionSupplementaryPreviewImageWidget_C
// 0x0000 (0x0438 - 0x0438)
class UBP_PcOptionSupplementaryPreviewImageWidget_C : public UTslGameOptionSupplementaryPreviewImageWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionSupplementaryPreviewImageWidget.BP_PcOptionSupplementaryPreviewImageWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
