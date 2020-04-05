// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Niagara_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Niagara.NiagaraComponent.SetRenderingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInRenderingEnabled            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA5BB0              		 offset:31d5bb0                       

void UNiagaraComponent::SetRenderingEnabled(bool* bInRenderingEnabled)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetRenderingEnabled"));

	UNiagaraComponent_SetRenderingEnabled_Params params;
	params.bInRenderingEnabled = bInRenderingEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                InVariableName                 (Parm, ZeroConstructor)
// struct FVector4*               InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA5AB0              		 offset:31d5ab0                       

void UNiagaraComponent::SetNiagaraVariableVec4(struct FString* InVariableName, struct FVector4* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableVec4"));

	UNiagaraComponent_SetNiagaraVariableVec4_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                InVariableName                 (Parm, ZeroConstructor)
// struct FVector*                InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA59C0              		 offset:31d59c0                       

void UNiagaraComponent::SetNiagaraVariableVec3(struct FString* InVariableName, struct FVector* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableVec3"));

	UNiagaraComponent_SetNiagaraVariableVec3_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D*              InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA58E0              		 offset:31d58e0                       

void UNiagaraComponent::SetNiagaraVariableVec2(struct FString* InVariableName, struct FVector2D* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableVec2"));

	UNiagaraComponent_SetNiagaraVariableVec2_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InVariableName                 (Parm, ZeroConstructor)
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA57F0              		 offset:31d57f0                       

void UNiagaraComponent::SetNiagaraVariableFloat(struct FString* InVariableName, float* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableFloat"));

	UNiagaraComponent_SetNiagaraVariableFloat_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InVariableName                 (Parm, ZeroConstructor)
// bool*                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA5700              		 offset:31d5700                       

void UNiagaraComponent::SetNiagaraVariableBool(struct FString* InVariableName, bool* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraVariableBool"));

	UNiagaraComponent_SetNiagaraVariableBool_Params params;
	params.InVariableName = InVariableName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraStaticMeshDataInterfaceActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InVariableName                 (Parm, ZeroConstructor)
// class AActor**                 InSource                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA5620              		 offset:31d5620                       

void UNiagaraComponent::SetNiagaraStaticMeshDataInterfaceActor(struct FString* InVariableName, class AActor** InSource)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraStaticMeshDataInterfaceActor"));

	UNiagaraComponent_SetNiagaraStaticMeshDataInterfaceActor_Params params;
	params.InVariableName = InVariableName;
	params.InSource = InSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.SetNiagaraEmitterSpawnRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InEmitterName                  (Parm, ZeroConstructor)
// float*                         InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA5530              		 offset:31d5530                       

void UNiagaraComponent::SetNiagaraEmitterSpawnRate(struct FString* InEmitterName, float* InValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.SetNiagaraEmitterSpawnRate"));

	UNiagaraComponent_SetNiagaraEmitterSpawnRate_Params params;
	params.InEmitterName = InEmitterName;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ResetEffect
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71AFA5510              		 offset:31d5510                       

void UNiagaraComponent::ResetEffect()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.ResetEffect"));

	UNiagaraComponent_ResetEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraComponent.ReinitializeEffect
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71AFA54F0              		 offset:31d54f0                       

void UNiagaraComponent::ReinitializeEffect()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraComponent.ReinitializeEffect"));

	UNiagaraComponent_ReinitializeEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UNiagaraEffect**         EffectTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA5DD0              		 offset:31d5dd0                       

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAttached(class UNiagaraEffect** EffectTemplate, class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, struct FRotator* Rotation, TEnumAsByte<EAttachLocation>* LocationType, bool* bAutoDestroy)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.SpawnEffectAttached"));

	UNiagaraFunctionLibrary_SpawnEffectAttached_Params params;
	params.EffectTemplate = EffectTemplate;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.LocationType = LocationType;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraEffect**         EffectTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, IsPlainOldData)
// struct FRotator*               Rotation                       (Parm, IsPlainOldData)
// bool*                          bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71AFA5C40              		 offset:31d5c40                       

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAtLocation(class UObject** WorldContextObject, class UNiagaraEffect** EffectTemplate, struct FVector* Location, struct FRotator* Rotation, bool* bAutoDestroy)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Niagara.NiagaraFunctionLibrary.SpawnEffectAtLocation"));

	UNiagaraFunctionLibrary_SpawnEffectAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.EffectTemplate = EffectTemplate;
	params.Location = Location;
	params.Rotation = Rotation;
	params.bAutoDestroy = bAutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
