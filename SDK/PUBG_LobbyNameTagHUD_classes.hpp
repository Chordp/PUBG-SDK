#pragma once

// PUBG (7.2.8.10) SDK

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
// 0x0000 (0x0438 - 0x0438)
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


	void STATIC_UpdateNameTagWidget_Internal(int SlotIndex);
	void STATIC_SetNameTagWidget_Internal(int SlotIndex);
	void STATIC_ResetNameTagWidget_Internal(int SlotIndex);
	class UTslLobbyNameTagWidget* STATIC_GetNameTagWidget_Internal(int SlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
