#pragma once

// PUBG (7.2.8.10) SDK

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
// 0x0000 (0x0548 - 0x0548)
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


	void STATIC_OnTimeout();
	void STATIC_OnFinishShowResultMessage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
