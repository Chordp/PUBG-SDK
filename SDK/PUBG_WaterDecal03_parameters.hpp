#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WaterDecal03_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.DecalActor.SetDecalMaterial
struct AWaterDecal03_C_SetDecalMaterial_Params
{
	class UMaterialInterface*                          NewDecalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalActor.GetDecalMaterial
struct AWaterDecal03_C_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalActor.CreateDynamicMaterialInstance
struct AWaterDecal03_C_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
