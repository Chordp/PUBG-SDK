#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0458 - 0x0458)
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


	void UpdateNameTagWidget_Internal(int SlotIndex);
	void UpdateNameTag(int SlotIndex);
	void SetNameTagWidget_Internal(int SlotIndex);
	void ResetNameTagWidget_Internal(int SlotIndex);
	class UTslLobbyNameTagWidget* GetNameTagWidget_Internal(int SlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
