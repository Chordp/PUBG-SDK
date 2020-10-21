#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0000 (0x0418 - 0x0418)
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


	void SetDecalMaterial(class UMaterialInterface* NewDecalMaterial);
	class UMaterialInterface* GetDecalMaterial();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
