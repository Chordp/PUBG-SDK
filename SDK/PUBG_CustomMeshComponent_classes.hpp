#pragma once

// PUBG (7.2.8.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomMeshComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CustomMeshComponent.CustomMeshComponent
// 0x0010 (0x0AD0 - 0x0AC0)
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AC0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomMeshComponent.CustomMeshComponent"));

		return ptr;
	}


	void STATIC_SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue);
	void STATIC_SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue);
	bool STATIC_IsMaterialSlotNameValid(const struct FName& MaterialSlotName);
	TArray<struct FName> STATIC_GetMaterialSlotNames();
	TArray<class UMaterialInterface*> STATIC_GetMaterials();
	int STATIC_GetMaterialIndex(const struct FName& MaterialSlotName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
