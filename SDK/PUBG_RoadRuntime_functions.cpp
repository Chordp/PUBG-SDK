// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_RoadRuntime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RoadRuntime.CrossActor.UpdateSideMesh
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UStaticMesh**            InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator*               MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector*                MeshRelativeScale              (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C823A00              		 offset:4a53a00                       

void ACrossActor::UpdateSideMesh(class UStaticMesh** InPrototype, struct FVector* MeshRelativeLocation, struct FRotator* MeshRelativeRotation, struct FVector* MeshRelativeScale, int* SocketIndex, bool* IsEnable, bool* IsNormalized)
=======
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE17300              		 offset:4457300                       

void ACrossActor::UpdateSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.CrossActor.UpdateSideMesh"));

	ACrossActor_UpdateSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.UpdateSideActor
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UClass**                 InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator*               ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector*                ActorRelativeScale             (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C823520              		 offset:4a53520                       

void ACrossActor::UpdateSideActor(class UClass** InPrototype, struct FVector* ActorRelativeLocation, struct FRotator* ActorRelativeRotation, struct FVector* ActorRelativeScale, int* SocketIndex, bool* IsEnable, bool* IsNormalized)
=======
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE16E20              		 offset:4456e20                       

void ACrossActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.CrossActor.UpdateSideActor"));

	ACrossActor_UpdateSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideMesh
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UStaticMesh**            InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator*               MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector*                MeshRelativeScale              (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C822EF0              		 offset:4a52ef0                       

void ACrossActor::PushSideMesh(class UStaticMesh** InPrototype, struct FVector* MeshRelativeLocation, struct FRotator* MeshRelativeRotation, struct FVector* MeshRelativeScale, int* SocketIndex, bool* IsEnable, bool* IsNormalized)
=======
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE167F0              		 offset:44567f0                       

void ACrossActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.CrossActor.PushSideMesh"));

	ACrossActor_PushSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideActor
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UClass**                 InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator*               ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector*                ActorRelativeScale             (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C822A10              		 offset:4a52a10                       

void ACrossActor::PushSideActor(class UClass** InPrototype, struct FVector* ActorRelativeLocation, struct FRotator* ActorRelativeRotation, struct FVector* ActorRelativeScale, int* SocketIndex, bool* IsEnable, bool* IsNormalized)
=======
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE16310              		 offset:4456310                       

void ACrossActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.CrossActor.PushSideActor"));

	ACrossActor_PushSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.DestroySideObjects
// (Final, Native, Public)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C822730              		 offset:4a52730                       
=======
// FunctionAddress:0x00007FF6DAE16030              		 offset:4456030                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void ACrossActor::DestroySideObjects()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.CrossActor.DestroySideObjects"));

	ACrossActor_DestroySideObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSplineMesh
// (Final, Native, Public)
// Parameters:
<<<<<<< HEAD
// int*                           MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C823EE0              		 offset:4a53ee0                       

void ARoadActor::UpdateSplineMesh(int* MeshIndex)
=======
// int                            MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE177E0              		 offset:44577e0                       

void ARoadActor::UpdateSplineMesh(int MeshIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.UpdateSplineMesh"));

	ARoadActor_UpdateSplineMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideMeshes
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UStaticMesh**            InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator*               MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector*                MeshRelativeScale              (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C823C30              		 offset:4a53c30                       

void ARoadActor::UpdateSideMeshes(class UStaticMesh** InPrototype, struct FVector* MeshRelativeLocation, struct FRotator* MeshRelativeRotation, struct FVector* MeshRelativeScale, int* SocketIndex, int* InShift, int* InSpacing, bool* IsEnable, bool* IsNormalized)
=======
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE17530              		 offset:4457530                       

void ARoadActor::UpdateSideMeshes(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.UpdateSideMeshes"));

	ARoadActor_UpdateSideMeshes_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideActor
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UClass**                 InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator*               ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector*                ActorRelativeScale             (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C823750              		 offset:4a53750                       

void ARoadActor::UpdateSideActor(class UClass** InPrototype, struct FVector* ActorRelativeLocation, struct FRotator* ActorRelativeRotation, struct FVector* ActorRelativeScale, int* SocketIndex, int* InShift, int* InSpacing, bool* IsEnable, bool* IsNormalized)
=======
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE17050              		 offset:4457050                       

void ARoadActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.UpdateSideActor"));

	ARoadActor_UpdateSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSegment
// (Final, Native, Public)
// Parameters:
<<<<<<< HEAD
// int*                           SegmentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent**       SplineComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMesh**            StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineMeshAxis>*  InAxis                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8233D0              		 offset:4a533d0                       

void ARoadActor::UpdateSegment(int* SegmentIndex, class USplineComponent** SplineComponent, class UStaticMesh** StaticMesh, TEnumAsByte<ESplineMeshAxis>* InAxis)
=======
// int                            SegmentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        SplineComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineMeshAxis>   InAxis                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE16CD0              		 offset:4456cd0                       

void ARoadActor::UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<ESplineMeshAxis> InAxis)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.UpdateSegment"));

	ARoadActor_UpdateSegment_Params params;
	params.SegmentIndex = SegmentIndex;
	params.SplineComponent = SplineComponent;
	params.StaticMesh = StaticMesh;
	params.InAxis = InAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideMesh
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UStaticMesh**            InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator*               MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector*                MeshRelativeScale              (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C823120              		 offset:4a53120                       

void ARoadActor::PushSideMesh(class UStaticMesh** InPrototype, struct FVector* MeshRelativeLocation, struct FRotator* MeshRelativeRotation, struct FVector* MeshRelativeScale, int* SocketIndex, int* InShift, int* InSpacing, bool* IsEnable, bool* IsNormalized)
=======
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE16A20              		 offset:4456a20                       

void ARoadActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.PushSideMesh"));

	ARoadActor_PushSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideActor
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UClass**                 InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator*               ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector*                ActorRelativeScale             (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C822C40              		 offset:4a52c40                       

void ARoadActor::PushSideActor(class UClass** InPrototype, struct FVector* ActorRelativeLocation, struct FRotator* ActorRelativeRotation, struct FVector* ActorRelativeScale, int* SocketIndex, int* InShift, int* InSpacing, bool* IsEnable, bool* IsNormalized)
=======
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE16540              		 offset:4456540                       

void ARoadActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.PushSideActor"));

	ARoadActor_PushSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushCurbsMeshes
// (Final, Native, Public, HasDefaults)
// Parameters:
<<<<<<< HEAD
// class UStaticMesh**            InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh**            InStartPrototype               (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh**            InEndPrototype                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FVector*                MeshRelativeScale              (Parm, IsPlainOldData)
// int*                           SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InStartEnable                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InEndEnable                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C822770              		 offset:4a52770                       

void ARoadActor::PushCurbsMeshes(class UStaticMesh** InPrototype, class UStaticMesh** InStartPrototype, class UStaticMesh** InEndPrototype, struct FVector* MeshRelativeLocation, struct FVector* MeshRelativeScale, int* SocketIndex, bool* IsEnable, bool* InStartEnable, bool* InEndEnable)
=======
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             InStartPrototype               (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             InEndPrototype                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InStartEnable                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InEndEnable                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE16070              		 offset:4456070                       

void ARoadActor::PushCurbsMeshes(class UStaticMesh* InPrototype, class UStaticMesh* InStartPrototype, class UStaticMesh* InEndPrototype, const struct FVector& MeshRelativeLocation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool InStartEnable, bool InEndEnable)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.PushCurbsMeshes"));

	ARoadActor_PushCurbsMeshes_Params params;
	params.InPrototype = InPrototype;
	params.InStartPrototype = InStartPrototype;
	params.InEndPrototype = InEndPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.InStartEnable = InStartEnable;
	params.InEndEnable = InEndEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.DestroySideObjects
// (Final, Native, Public)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C822750              		 offset:4a52750                       
=======
// FunctionAddress:0x00007FF6DAE16050              		 offset:4456050                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void ARoadActor::DestroySideObjects()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.DestroySideObjects"));

	ARoadActor_DestroySideObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.DestroySideCurbs
// (Final, Native, Public)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C822710              		 offset:4a52710                       
=======
// FunctionAddress:0x00007FF6DAE16010              		 offset:4456010                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void ARoadActor::DestroySideCurbs()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.DestroySideCurbs"));

	ARoadActor_DestroySideCurbs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ClearSplineMeshes
// (Final, Native, Public)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C8226F0              		 offset:4a526f0                       
=======
// FunctionAddress:0x00007FF6DAE15FF0              		 offset:4455ff0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void ARoadActor::ClearSplineMeshes()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.ClearSplineMeshes"));

	ARoadActor_ClearSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ApproxLength
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
<<<<<<< HEAD
// struct FInterpCurveVector*     SplineInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ApproxSections                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C822570              		 offset:4a52570                       

float ARoadActor::STATIC_ApproxLength(struct FInterpCurveVector* SplineInfo, float* Start, float* End, int* ApproxSections)
=======
// struct FInterpCurveVector      SplineInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ApproxSections                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE15E70              		 offset:4455e70                       

float ARoadActor::STATIC_ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.ApproxLength"));

	ARoadActor_ApproxLength_Params params;
	params.SplineInfo = SplineInfo;
	params.Start = Start;
	params.End = End;
	params.ApproxSections = ApproxSections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RoadRuntime.RoadActor.AddSplineMesh
// (Final, Native, Public)
// Parameters:
<<<<<<< HEAD
// int*                           MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8224F0              		 offset:4a524f0                       

void ARoadActor::AddSplineMesh(int* MeshIndex)
=======
// int                            MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAE15DF0              		 offset:4455df0                       

void ARoadActor::AddSplineMesh(int MeshIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function RoadRuntime.RoadActor.AddSplineMesh"));

	ARoadActor_AddSplineMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
