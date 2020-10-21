#pragma once

// PUBG (9.1.5.3) SDK

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
// 0x0010 (0x0AC0 - 0x0AB0)
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0AB0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class CustomMeshComponent.CustomMeshComponent"));

		return ptr;
	}


	void SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue);
	void SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue);
	bool IsMaterialSlotNameValid(const struct FName& MaterialSlotName);
	TArray<struct FName> GetMaterialSlotNames();
	TArray<class UMaterialInterface*> GetMaterials();
	int GetMaterialIndex(const struct FName& MaterialSlotName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
