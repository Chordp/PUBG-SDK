#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LobbyNameTagHUD_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass LobbyNameTagHUD.LobbyNameTagHUD_C
// 0x0000 (0x0430 - 0x0430)
class ULobbyNameTagHUD_C : public UTslLobbyNameTagHudWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("WidgetBlueprintGeneratedClass LobbyNameTagHUD.LobbyNameTagHUD_C"));

		return ptr;
	}


	void CleanUpNameTagWidget(int* SlotIndex);
	void SetupNameTagWidget(int* SlotIndex);
	void GetNameTagWidget(int* SlotIndex, class UTslLobbyNameTagWidget** Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
