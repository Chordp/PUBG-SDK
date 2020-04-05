#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomMeshComponent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
struct UCustomMeshComponent_SetCustomMeshTriangles_Params
{
<<<<<<< HEAD
	TArray<struct FCustomMeshTriangle>*                Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	TArray<struct FCustomMeshTriangle>                 Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
struct UCustomMeshComponent_ClearCustomMeshTriangles_Params
{
};

// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
struct UCustomMeshComponent_AddCustomMeshTriangles_Params
{
<<<<<<< HEAD
	TArray<struct FCustomMeshTriangle>*                Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	TArray<struct FCustomMeshTriangle>                 Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
