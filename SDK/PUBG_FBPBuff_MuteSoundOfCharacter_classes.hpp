#pragma once

// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_FBPBuff_MuteSoundOfCharacter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FBPBuff_MuteSoundOfCharacter.FBPBuff_MuteSoundOfCharacter_C
// 0x0008 (0x04B0 - 0x04A8)
class AFBPBuff_MuteSoundOfCharacter_C : public ATslFBRSoundBuff
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass FBPBuff_MuteSoundOfCharacter.FBPBuff_MuteSoundOfCharacter_C"));

		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
