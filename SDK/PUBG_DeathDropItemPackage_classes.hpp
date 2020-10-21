#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_DeathDropItemPackage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeathDropItemPackage.DeathDropItemPackage_C
// 0x0008 (0x05F0 - 0x05E8)
class ADeathDropItemPackage_C : public AFloorSnapItemPackage
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass DeathDropItemPackage.DeathDropItemPackage_C"));

		return ptr;
	}


	struct FText GetCategory();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DeathDropItemPackage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
