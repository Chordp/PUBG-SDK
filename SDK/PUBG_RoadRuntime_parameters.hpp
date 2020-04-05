#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_RoadRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function RoadRuntime.CrossActor.UpdateSideMesh
struct ACrossActor_UpdateSideMesh_Params
{
<<<<<<< HEAD
	class UStaticMesh**                                InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator*                                   MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
	struct FVector*                                    MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UStaticMesh*                                 InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator                                    MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
	struct FVector                                     MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.CrossActor.UpdateSideActor
struct ACrossActor_UpdateSideActor_Params
{
<<<<<<< HEAD
	class UClass**                                     InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ActorRelativeLocation;                                    // (Parm, IsPlainOldData)
	struct FRotator*                                   ActorRelativeRotation;                                    // (Parm, IsPlainOldData)
	struct FVector*                                    ActorRelativeScale;                                       // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UClass*                                      InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorRelativeLocation;                                    // (Parm, IsPlainOldData)
	struct FRotator                                    ActorRelativeRotation;                                    // (Parm, IsPlainOldData)
	struct FVector                                     ActorRelativeScale;                                       // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.CrossActor.PushSideMesh
struct ACrossActor_PushSideMesh_Params
{
<<<<<<< HEAD
	class UStaticMesh**                                InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator*                                   MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
	struct FVector*                                    MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UStaticMesh*                                 InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator                                    MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
	struct FVector                                     MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.CrossActor.PushSideActor
struct ACrossActor_PushSideActor_Params
{
<<<<<<< HEAD
	class UClass**                                     InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ActorRelativeLocation;                                    // (Parm, IsPlainOldData)
	struct FRotator*                                   ActorRelativeRotation;                                    // (Parm, IsPlainOldData)
	struct FVector*                                    ActorRelativeScale;                                       // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UClass*                                      InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorRelativeLocation;                                    // (Parm, IsPlainOldData)
	struct FRotator                                    ActorRelativeRotation;                                    // (Parm, IsPlainOldData)
	struct FVector                                     ActorRelativeScale;                                       // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.CrossActor.DestroySideObjects
struct ACrossActor_DestroySideObjects_Params
{
};

// Function RoadRuntime.RoadActor.UpdateSplineMesh
struct ARoadActor_UpdateSplineMesh_Params
{
<<<<<<< HEAD
	int*                                               MeshIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                MeshIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.RoadActor.UpdateSideMeshes
struct ARoadActor_UpdateSideMeshes_Params
{
<<<<<<< HEAD
	class UStaticMesh**                                InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator*                                   MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
	struct FVector*                                    MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InShift;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InSpacing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UStaticMesh*                                 InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator                                    MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
	struct FVector                                     MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InShift;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSpacing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.RoadActor.UpdateSideActor
struct ARoadActor_UpdateSideActor_Params
{
<<<<<<< HEAD
	class UClass**                                     InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ActorRelativeLocation;                                    // (Parm, IsPlainOldData)
	struct FRotator*                                   ActorRelativeRotation;                                    // (Parm, IsPlainOldData)
	struct FVector*                                    ActorRelativeScale;                                       // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InShift;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InSpacing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UClass*                                      InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorRelativeLocation;                                    // (Parm, IsPlainOldData)
	struct FRotator                                    ActorRelativeRotation;                                    // (Parm, IsPlainOldData)
	struct FVector                                     ActorRelativeScale;                                       // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InShift;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSpacing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.RoadActor.UpdateSegment
struct ARoadActor_UpdateSegment_Params
{
<<<<<<< HEAD
	int*                                               SegmentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USplineComponent**                           SplineComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh**                                StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>*                      InAxis;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                SegmentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESplineMeshAxis>                       InAxis;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.RoadActor.PushSideMesh
struct ARoadActor_PushSideMesh_Params
{
<<<<<<< HEAD
	class UStaticMesh**                                InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator*                                   MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
	struct FVector*                                    MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InShift;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InSpacing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UStaticMesh*                                 InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FRotator                                    MeshRelativeRotation;                                     // (Parm, IsPlainOldData)
	struct FVector                                     MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InShift;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSpacing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.RoadActor.PushSideActor
struct ARoadActor_PushSideActor_Params
{
<<<<<<< HEAD
	class UClass**                                     InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    ActorRelativeLocation;                                    // (Parm, IsPlainOldData)
	struct FRotator*                                   ActorRelativeRotation;                                    // (Parm, IsPlainOldData)
	struct FVector*                                    ActorRelativeScale;                                       // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InShift;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InSpacing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UClass*                                      InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ActorRelativeLocation;                                    // (Parm, IsPlainOldData)
	struct FRotator                                    ActorRelativeRotation;                                    // (Parm, IsPlainOldData)
	struct FVector                                     ActorRelativeScale;                                       // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InShift;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InSpacing;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsNormalized;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.RoadActor.PushCurbsMeshes
struct ARoadActor_PushCurbsMeshes_Params
{
<<<<<<< HEAD
	class UStaticMesh**                                InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                InStartPrototype;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh**                                InEndPrototype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FVector*                                    MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int*                                               SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InStartEnable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              InEndEnable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UStaticMesh*                                 InPrototype;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 InStartPrototype;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 InEndPrototype;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshRelativeLocation;                                     // (Parm, IsPlainOldData)
	struct FVector                                     MeshRelativeScale;                                        // (Parm, IsPlainOldData)
	int                                                SocketIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InStartEnable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InEndEnable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function RoadRuntime.RoadActor.DestroySideObjects
struct ARoadActor_DestroySideObjects_Params
{
};

// Function RoadRuntime.RoadActor.DestroySideCurbs
struct ARoadActor_DestroySideCurbs_Params
{
};

// Function RoadRuntime.RoadActor.ClearSplineMeshes
struct ARoadActor_ClearSplineMeshes_Params
{
};

// Function RoadRuntime.RoadActor.ApproxLength
struct ARoadActor_ApproxLength_Params
{
<<<<<<< HEAD
	struct FInterpCurveVector*                         SplineInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float*                                             Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ApproxSections;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FInterpCurveVector                          SplineInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              Start;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ApproxSections;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RoadRuntime.RoadActor.AddSplineMesh
struct ARoadActor_AddSplineMesh_Params
{
<<<<<<< HEAD
	int*                                               MeshIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                MeshIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
