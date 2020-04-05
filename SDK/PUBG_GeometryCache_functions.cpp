// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GeometryCache_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGeometryCacheComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC5B0              		 offset:240c5b0                       
=======
// FunctionAddress:0x00007FF6D8AD75A0              		 offset:21175a0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent"));

	AGeometryCacheActor_GetGeometryCacheComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.Stop
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DCB40              		 offset:240cb40                       
=======
// FunctionAddress:0x00007FF6D80265B0              		 offset:16665b0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UGeometryCacheComponent::Stop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.Stop"));

	UGeometryCacheComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// float*                         NewStartTimeOffset             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A1DCAC0              		 offset:240cac0                       

void UGeometryCacheComponent::SetStartTimeOffset(float* NewStartTimeOffset)
=======
// float                          NewStartTimeOffset             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8026530              		 offset:1666530                       

void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset"));

	UGeometryCacheComponent_SetStartTimeOffset_Params params;
	params.NewStartTimeOffset = NewStartTimeOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// float*                         NewPlaybackSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A1DCA40              		 offset:240ca40                       

void UGeometryCacheComponent::SetPlaybackSpeed(float* NewPlaybackSpeed)
=======
// float                          NewPlaybackSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D80264B0              		 offset:16664b0                       

void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed"));

	UGeometryCacheComponent_SetPlaybackSpeed_Params params;
	params.NewPlaybackSpeed = NewPlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.SetLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// bool*                          bNewLooping                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A1DC770              		 offset:240c770                       

void UGeometryCacheComponent::SetLooping(bool* bNewLooping)
=======
// bool                           bNewLooping                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D80261E0              		 offset:16661e0                       

void UGeometryCacheComponent::SetLooping(bool bNewLooping)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.SetLooping"));

	UGeometryCacheComponent_SetLooping_Params params;
	params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
// (Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UGeometryCache**         NewGeomCache                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C658DF0              		 offset:4888df0                       

bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache** NewGeomCache)
=======
// class UGeometryCache*          NewGeomCache                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BF80              		 offset:428bf80                       

bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.SetGeometryCache"));

	UGeometryCacheComponent_SetGeometryCache_Params params;
	params.NewGeomCache = NewGeomCache;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC750              		 offset:240c750                       
=======
// FunctionAddress:0x00007FF6D80261C0              		 offset:16661c0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UGeometryCacheComponent::PlayReversedFromEnd()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd"));

	UGeometryCacheComponent_PlayReversedFromEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.PlayReversed
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC730              		 offset:240c730                       
=======
// FunctionAddress:0x00007FF6D80261A0              		 offset:16661a0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UGeometryCacheComponent::PlayReversed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.PlayReversed"));

	UGeometryCacheComponent_PlayReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC710              		 offset:240c710                       
=======
// FunctionAddress:0x00007FF6D8026180              		 offset:1666180                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UGeometryCacheComponent::PlayFromStart()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.PlayFromStart"));

	UGeometryCacheComponent_PlayFromStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.Play
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC6F0              		 offset:240c6f0                       
=======
// FunctionAddress:0x00007FF6D8026160              		 offset:1666160                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UGeometryCacheComponent::Play()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.Play"));

	UGeometryCacheComponent_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.Pause
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC6D0              		 offset:240c6d0                       
=======
// FunctionAddress:0x00007FF6D8026140              		 offset:1666140                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void UGeometryCacheComponent::Pause()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.Pause"));

	UGeometryCacheComponent_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC6A0              		 offset:240c6a0                       
=======
// FunctionAddress:0x00007FF6D8026110              		 offset:1666110                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UGeometryCacheComponent::IsPlayingReversed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed"));

	UGeometryCacheComponent_IsPlayingReversed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC670              		 offset:240c670                       
=======
// FunctionAddress:0x00007FF6D80260E0              		 offset:16660e0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UGeometryCacheComponent::IsPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.IsPlaying"));

	UGeometryCacheComponent_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.IsLooping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC640              		 offset:240c640                       
=======
// FunctionAddress:0x00007FF6D80260B0              		 offset:16660b0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

bool UGeometryCacheComponent::IsLooping()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.IsLooping"));

	UGeometryCacheComponent_IsLooping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC610              		 offset:240c610                       
=======
// FunctionAddress:0x00007FF6D8026080              		 offset:1666080                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UGeometryCacheComponent::GetStartTimeOffset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset"));

	UGeometryCacheComponent_GetStartTimeOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A1DC5E0              		 offset:240c5e0                       
=======
// FunctionAddress:0x00007FF6D8026050              		 offset:1666050                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float UGeometryCacheComponent::GetPlaybackSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed"));

	UGeometryCacheComponent_GetPlaybackSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
// (Final, Native, Public, HasOutParms)
// Parameters:
<<<<<<< HEAD
// struct FGeometryCacheMeshData* MeshData                       (ConstParm, Parm, OutParm, ReferenceParm)
// float*                         SampleTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A1DC440              		 offset:240c440                       

void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(struct FGeometryCacheMeshData* MeshData, float* SampleTime)
=======
// struct FGeometryCacheMeshData  MeshData                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SampleTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8025EE0              		 offset:1665ee0                       

void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample"));

	UGeometryCacheTrack_FlipbookAnimation_AddMeshSample_Params params;
	params.MeshData = MeshData;
	params.SampleTime = SampleTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
// (Final, Native, Public, HasOutParms)
// Parameters:
<<<<<<< HEAD
// struct FGeometryCacheMeshData* NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71A1DC800              		 offset:240c800                       

void UGeometryCacheTrack_TransformAnimation::SetMesh(struct FGeometryCacheMeshData* NewMeshData)
=======
// struct FGeometryCacheMeshData  NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8026270              		 offset:1666270                       

void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh"));

	UGeometryCacheTrack_TransformAnimation_SetMesh_Params params;
	params.NewMeshData = NewMeshData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
// (Final, Native, Public, HasOutParms)
// Parameters:
<<<<<<< HEAD
// struct FGeometryCacheMeshData* NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71A1DC920              		 offset:240c920                       

void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(struct FGeometryCacheMeshData* NewMeshData)
=======
// struct FGeometryCacheMeshData  NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8026390              		 offset:1666390                       

void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh"));

	UGeometryCacheTrack_TransformGroupAnimation_SetMesh_Params params;
	params.NewMeshData = NewMeshData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
