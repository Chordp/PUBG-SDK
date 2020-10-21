#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomMeshComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
struct UCustomMeshComponent_SetVectorParameterValueOnMaterials_Params
{
	struct FName                                       ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParameterValue;                                           // (ConstParm, Parm, IsPlainOldData)
};

// Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
struct UCustomMeshComponent_SetScalarParameterValueOnMaterials_Params
{
	struct FName                                       ParameterName;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParameterValue;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.MeshComponent.IsMaterialSlotNameValid
struct UCustomMeshComponent_IsMaterialSlotNameValid_Params
{
	struct FName                                       MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.MeshComponent.GetMaterialSlotNames
struct UCustomMeshComponent_GetMaterialSlotNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.MeshComponent.GetMaterials
struct UCustomMeshComponent_GetMaterials_Params
{
	TArray<class UMaterialInterface*>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Engine.MeshComponent.GetMaterialIndex
struct UCustomMeshComponent_GetMaterialIndex_Params
{
	struct FName                                       MaterialSlotName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
