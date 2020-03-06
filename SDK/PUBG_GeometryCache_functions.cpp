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
// FunctionAddress:0x00007FF6D8AD75A0              		 offset:21175a0                       

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
// FunctionAddress:0x00007FF6D80265B0              		 offset:16665b0                       

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
// float                          NewStartTimeOffset             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8026530              		 offset:1666530                       

void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset)
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
// float                          NewPlaybackSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D80264B0              		 offset:16664b0                       

void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed)
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
// bool                           bNewLooping                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D80261E0              		 offset:16661e0                       

void UGeometryCacheComponent::SetLooping(bool bNewLooping)
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
// class UGeometryCache*          NewGeomCache                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC4BF80              		 offset:428bf80                       

bool UGeometryCacheComponent::SetGeometryCache(class UGeometryCache* NewGeomCache)
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
// FunctionAddress:0x00007FF6D80261C0              		 offset:16661c0                       

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
// FunctionAddress:0x00007FF6D80261A0              		 offset:16661a0                       

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
// FunctionAddress:0x00007FF6D8026180              		 offset:1666180                       

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
// FunctionAddress:0x00007FF6D8026160              		 offset:1666160                       

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
// FunctionAddress:0x00007FF6D8026140              		 offset:1666140                       

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
// FunctionAddress:0x00007FF6D8026110              		 offset:1666110                       

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
// FunctionAddress:0x00007FF6D80260E0              		 offset:16660e0                       

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
// FunctionAddress:0x00007FF6D80260B0              		 offset:16660b0                       

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
// FunctionAddress:0x00007FF6D8026080              		 offset:1666080                       

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
// FunctionAddress:0x00007FF6D8026050              		 offset:1666050                       

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
// struct FGeometryCacheMeshData  MeshData                       (ConstParm, Parm, OutParm, ReferenceParm)
// float                          SampleTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D8025EE0              		 offset:1665ee0                       

void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime)
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
// struct FGeometryCacheMeshData  NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8026270              		 offset:1666270                       

void UGeometryCacheTrack_TransformAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
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
// struct FGeometryCacheMeshData  NewMeshData                    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF6D8026390              		 offset:1666390                       

void UGeometryCacheTrack_TransformGroupAnimation::SetMesh(const struct FGeometryCacheMeshData& NewMeshData)
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
