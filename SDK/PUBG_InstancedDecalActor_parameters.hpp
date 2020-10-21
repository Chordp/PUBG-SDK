#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InstancedDecalActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.DecalActor.SetDecalMaterial
struct AInstancedDecalActor_C_SetDecalMaterial_Params
{
	class UMaterialInterface*                          NewDecalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalActor.GetDecalMaterial
struct AInstancedDecalActor_C_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalActor.CreateDynamicMaterialInstance
struct AInstancedDecalActor_C_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
