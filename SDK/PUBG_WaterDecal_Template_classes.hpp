#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WaterDecal_Template_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterDecal_Template.WaterDecal_Template_C
// 0x0000 (0x03F0 - 0x03F0)
class AWaterDecal_Template_C : public AInstancedDecalActor_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass WaterDecal_Template.WaterDecal_Template_C"));

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
