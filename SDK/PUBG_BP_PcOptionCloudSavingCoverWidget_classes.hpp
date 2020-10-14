#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_PcOptionCloudSavingCoverWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_PcOptionCloudSavingCoverWidget.BP_PcOptionCloudSavingCoverWidget_C
// 0x0000 (0x0568 - 0x0568)
class UBP_PcOptionCloudSavingCoverWidget_C : public UTslGameOptionCloudRequestTimeoutCoverWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass BP_PcOptionCloudSavingCoverWidget.BP_PcOptionCloudSavingCoverWidget_C"));

		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
