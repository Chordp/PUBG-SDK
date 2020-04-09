#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CS_WeapGun_Rifle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CS_WeapGun_Rifle.CS_WeapGun_Rifle_762_C
// 0x0000 (0x0170 - 0x0170)
class UCS_WeapGun_Rifle_762_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass CS_WeapGun_Rifle.CS_WeapGun_Rifle_762_C"));

		return ptr;
	}


	void STATIC_ReceiveStopShake(bool bImmediately);
	void STATIC_ReceivePlayShake(float Scale);
	bool STATIC_ReceiveIsFinished();
	void STATIC_BlueprintUpdateCameraShake(float DeltaTime, float ALPHA, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
