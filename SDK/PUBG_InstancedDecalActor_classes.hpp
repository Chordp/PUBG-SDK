#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InstancedDecalActor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InstancedDecalActor.InstancedDecalActor_C
// 0x0000 (0x03F0 - 0x03F0)
class AInstancedDecalActor_C : public ADecalActor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass InstancedDecalActor.InstancedDecalActor_C"));

		return ptr;
	}


	void STATIC_SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	class UMaterialInterface* STATIC_GetDecalMaterial();
	class UMaterialInstanceDynamic* STATIC_CreateDynamicMaterialInstance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
