#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_RoadRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class RoadRuntime.CrossActor
// 0x0030 (0x0440 - 0x0410)
class ACrossActor : public AStaticMeshActor
{
public:
	struct FString                                     UniqueKey;                                                // 0x0410(0x0010) (ZeroConstructor)
	TArray<struct FCrossActorManager>                  SideActors;                                               // 0x0420(0x0010) (ZeroConstructor)
	TArray<struct FCrossMeshManager>                   SideMeshes;                                               // 0x0430(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class RoadRuntime.CrossActor"));

		return ptr;
	}


	void UpdateSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized);
	void UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized);
	void PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized);
	void PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized);
	void DestroySideObjects();
};


// Class RoadRuntime.RoadActor
// 0x0088 (0x0488 - 0x0400)
class ARoadActor : public AActor
{
public:
	TEnumAsByte<ESplineMeshAxis>                       SplineMeshAxis;                                           // 0x0400(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	struct FVector                                     LocalOffset;                                              // 0x0404(0x000C) (IsPlainOldData)
	class ARoadActor*                                  Father;                                                   // 0x0410(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     UniqueKey;                                                // 0x0418(0x0010) (ZeroConstructor)
	class USplineComponent*                            Spline;                                                   // 0x0428(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                Index;                                                    // 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Segmentation;                                             // 0x0434(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StepGeneration;                                           // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 RoadMesh;                                                 // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                RoadMeshesComp;                                           // 0x0448(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FSideActorManager>                   SideActors;                                               // 0x0458(0x0010) (ZeroConstructor)
	TArray<struct FSideMeshManager>                    SideMeshes;                                               // 0x0468(0x0010) (ZeroConstructor)
	TArray<struct FCurbsManager>                       SideCurbs;                                                // 0x0478(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass(_xor_("Class RoadRuntime.RoadActor"));

		return ptr;
	}


	void UpdateSplineMesh(int MeshIndex);
	void UpdateSideMeshes(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<ESplineMeshAxis> InAxis);
	void PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void PushCurbsMeshes(class UStaticMesh* InPrototype, class UStaticMesh* InStartPrototype, class UStaticMesh* InEndPrototype, const struct FVector& MeshRelativeLocation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool InStartEnable, bool InEndEnable);
	void DestroySideObjects();
	void DestroySideCurbs();
	void ClearSplineMeshes();
	float STATIC_ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections);
	void AddSplineMesh(int MeshIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
