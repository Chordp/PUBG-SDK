#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Foliage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
struct UFoliageStatistics_FoliageOverlappingSphereCount_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                StaticMesh;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CenterPosition;                                           // (Parm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CenterPosition;                                           // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
struct UFoliageStatistics_FoliageOverlappingBoxCount_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                StaticMesh;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox*                                       Box;                                                      // (Parm, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        Box;                                                      // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Foliage.InteractiveFoliageActor.CapsuleTouched
struct AInteractiveFoliageActor_CapsuleTouched_Params
{
<<<<<<< HEAD
	class UPrimitiveComponent**                        OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
=======
	class UPrimitiveComponent*                         OverlappedComp;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OverlapInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function Foliage.ProceduralFoliageSpawner.Simulate
struct UProceduralFoliageSpawner_Simulate_Params
{
<<<<<<< HEAD
	int*                                               NumSteps;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                NumSteps;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
