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
// bool                           bInRenderingEnabled            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA514150              		 offset:3b54150                       

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
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
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector4                InValue                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA514050              		 offset:3b54050                       

void UNiagaraComponent::SetNiagaraVariableVec4(const struct FString& InVariableName, const struct FVector4& InValue)
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
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector                 InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA513F60              		 offset:3b53f60                       

void UNiagaraComponent::SetNiagaraVariableVec3(const struct FString& InVariableName, const struct FVector& InValue)
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
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// struct FVector2D               InValue                        (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DA513E80              		 offset:3b53e80                       

void UNiagaraComponent::SetNiagaraVariableVec2(const struct FString& InVariableName, const struct FVector2D& InValue)
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
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA513D90              		 offset:3b53d90                       

void UNiagaraComponent::SetNiagaraVariableFloat(const struct FString& InVariableName, float InValue)
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
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA513CA0              		 offset:3b53ca0                       

void UNiagaraComponent::SetNiagaraVariableBool(const struct FString& InVariableName, bool InValue)
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
// struct FString                 InVariableName                 (Parm, ZeroConstructor)
// class AActor*                  InSource                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA513BC0              		 offset:3b53bc0                       

void UNiagaraComponent::SetNiagaraStaticMeshDataInterfaceActor(const struct FString& InVariableName, class AActor* InSource)
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
// struct FString                 InEmitterName                  (Parm, ZeroConstructor)
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DA513AD0              		 offset:3b53ad0                       

void UNiagaraComponent::SetNiagaraEmitterSpawnRate(const struct FString& InEmitterName, float InValue)
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
// FunctionAddress:0x00007FF6DA513AB0              		 offset:3b53ab0                       

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
// FunctionAddress:0x00007FF6DA513A90              		 offset:3b53a90                       

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
// class UNiagaraEffect*          EffectTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6DA514370              		 offset:3b54370                       

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy)
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
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraEffect*          EffectTemplate                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// bool                           bAutoDestroy                   (Parm, ZeroConstructor, IsPlainOldData)
// class UNiagaraComponent*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF6DA5141E0              		 offset:3b541e0                       

class UNiagaraComponent* UNiagaraFunctionLibrary::STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy)
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
