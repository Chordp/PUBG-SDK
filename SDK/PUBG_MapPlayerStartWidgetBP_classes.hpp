#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapPlayerStartWidgetBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapPlayerStartWidgetBP.MapPlayerStartWidgetBP_C
// 0x0000 (0x0628 - 0x0628)
class UMapPlayerStartWidgetBP_C : public UMapPlayerStartWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass MapPlayerStartWidgetBP.MapPlayerStartWidgetBP_C"));

		return ptr;
	}


	void OnRespawnButtonDown();
	void OnPlayerRespawnSpotChanged(const struct FName& RespawnSpotName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
