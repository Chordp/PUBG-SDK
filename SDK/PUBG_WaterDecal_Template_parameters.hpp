#pragma once

// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WaterDecal_Template_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Engine.DecalActor.SetDecalMaterial
struct AWaterDecal_Template_C_SetDecalMaterial_Params
{
	class UMaterialInterface*                          NewDecalMaterial;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Engine.DecalActor.GetDecalMaterial
struct AWaterDecal_Template_C_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Engine.DecalActor.CreateDynamicMaterialInstance
struct AWaterDecal_Template_C_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
