#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslCaptureMastery_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TslCaptureMastery.TslCaptureMastery_C
// 0x0008 (0x0420 - 0x0418)
class ATslCaptureMastery_C : public ATslLobbyLevelScriptCustom
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass TslCaptureMastery.TslCaptureMastery_C"));

		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslCaptureMastery(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
