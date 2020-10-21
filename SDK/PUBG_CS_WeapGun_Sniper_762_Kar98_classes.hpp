#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CS_WeapGun_Sniper_762_Kar98_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_WeapGun_Sniper_762_Kar98.CS_WeapGun_Sniper_762_Kar98_C
// 0x0000 (0x0180 - 0x0180)
class UCS_WeapGun_Sniper_762_Kar98_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass CS_WeapGun_Sniper_762_Kar98.CS_WeapGun_Sniper_762_Kar98_C"));

		return ptr;
	}


	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float DeltaTime, float ALPHA, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
