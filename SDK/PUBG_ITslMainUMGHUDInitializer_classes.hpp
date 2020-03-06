#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ITslMainUMGHUDInitializer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ITslMainUMGHUDInitializer.ITslMainUMGHUDInitializer_C
// 0x0000 (0x0028 - 0x0028)
class UITslMainUMGHUDInitializer_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass ITslMainUMGHUDInitializer.ITslMainUMGHUDInitializer_C"));

		return ptr;
	}


	void InitializeMainUMGHUD();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
