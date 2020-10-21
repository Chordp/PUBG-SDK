// PUBG (9.1.5.3) SDK

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
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FF870              		 offset:2cff870                       

void ACrossActor::UpdateSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
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
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FF390              		 offset:2cff390                       

void ACrossActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
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
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FED60              		 offset:2cfed60                       

void ACrossActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
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
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FE880              		 offset:2cfe880                       

void ACrossActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
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
// FunctionAddress:0x00007FF75C6FE5A0              		 offset:2cfe5a0                       

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
// int                            MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FFD50              		 offset:2cffd50                       

void ARoadActor::UpdateSplineMesh(int MeshIndex)
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
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FFAA0              		 offset:2cffaa0                       

void ARoadActor::UpdateSideMeshes(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
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
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FF5C0              		 offset:2cff5c0                       

void ARoadActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
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
// int                            SegmentIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class USplineComponent*        SplineComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESplineMeshAxis>   InAxis                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FF240              		 offset:2cff240                       

void ARoadActor::UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<ESplineMeshAxis> InAxis)
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
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FEF90              		 offset:2cfef90                       

void ARoadActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
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
// class UClass*                  InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (Parm, IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (Parm, IsPlainOldData)
// struct FVector                 ActorRelativeScale             (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InShift                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            InSpacing                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNormalized                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FEAB0              		 offset:2cfeab0                       

void ARoadActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
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
// class UStaticMesh*             InPrototype                    (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             InStartPrototype               (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMesh*             InEndPrototype                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (Parm, IsPlainOldData)
// struct FVector                 MeshRelativeScale              (Parm, IsPlainOldData)
// int                            SocketIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InStartEnable                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InEndEnable                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FE5E0              		 offset:2cfe5e0                       

void ARoadActor::PushCurbsMeshes(class UStaticMesh* InPrototype, class UStaticMesh* InStartPrototype, class UStaticMesh* InEndPrototype, const struct FVector& MeshRelativeLocation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool InStartEnable, bool InEndEnable)
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
// FunctionAddress:0x00007FF75C6FE5C0              		 offset:2cfe5c0                       

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
// FunctionAddress:0x00007FF75C6FE580              		 offset:2cfe580                       

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
// FunctionAddress:0x00007FF75C6FE560              		 offset:2cfe560                       

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
// struct FInterpCurveVector      SplineInfo                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          Start                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ApproxSections                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FE3E0              		 offset:2cfe3e0                       

float ARoadActor::STATIC_ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections)
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
// int                            MeshIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C6FE360              		 offset:2cfe360                       

void ARoadActor::AddSplineMesh(int MeshIndex)
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
