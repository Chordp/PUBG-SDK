#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WaterDecal03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterDecal03.WaterDecal03_C
// 0x0000 (0x03F0 - 0x03F0)
class AWaterDecal03_C : public AWaterDecal_Template_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("BlueprintGeneratedClass WaterDecal03.WaterDecal03_C"));

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
