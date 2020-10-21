// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Punch_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslParticle.SetParticleParameter
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bEnableRTPC                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D1F88D0              		 offset:37f88d0                       

void AP_Punch_BP_C::SetParticleParameter(const struct FName& Name, const struct FVector& Value, bool bEnableRTPC)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.SetParticleParameter"));

	AP_Punch_BP_C_SetParticleParameter_Params params;
	params.Name = Name;
	params.Value = Value;
	params.bEnableRTPC = bEnableRTPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleFinish
// (Final, Native, Protected)
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75E730ED0              		 offset:4d30ed0                       

void AP_Punch_BP_C::OnParticleFinish(class UParticleSystemComponent* PSystem)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.OnParticleFinish"));

	AP_Punch_BP_C_OnParticleFinish_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleCollide
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B6EC250              		 offset:1cec250                       

void AP_Punch_BP_C::OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.OnParticleCollide"));

	AP_Punch_BP_C_OnParticleCollide_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParameterUpdated
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void AP_Punch_BP_C::OnParameterUpdated()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.OnParameterUpdated"));

	AP_Punch_BP_C_OnParameterUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.GetWaterVolumeHeight
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           OutbIsInWater                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutWaterHeight                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DB2F670              		 offset:412f670                       

void AP_Punch_BP_C::GetWaterVolumeHeight(bool* OutbIsInWater, float* OutWaterHeight)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetWaterVolumeHeight"));

	AP_Punch_BP_C_GetWaterVolumeHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutbIsInWater != nullptr)
		*OutbIsInWater = params.OutbIsInWater;
	if (OutWaterHeight != nullptr)
		*OutWaterHeight = params.OutWaterHeight;
}


// Function TslGame.TslParticle.GetPhysicalSurfaceFromRay
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 StartActorOffset               (ConstParm, Parm, IsPlainOldData)
// struct FVector                 TraceRay                       (ConstParm, Parm, IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AFF3D40              		 offset:15f3d40                       

TEnumAsByte<EPhysicalSurface> AP_Punch_BP_C::GetPhysicalSurfaceFromRay(const struct FVector& StartActorOffset, const struct FVector& TraceRay)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetPhysicalSurfaceFromRay"));

	AP_Punch_BP_C_GetPhysicalSurfaceFromRay_Params params;
	params.StartActorOffset = StartActorOffset;
	params.TraceRay = TraceRay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleVectorParamter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 DefaultValue                   (ConstParm, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A0C0C80              		 offset:6c0c80                        

struct FVector AP_Punch_BP_C::GetParticleVectorParamter(const struct FName& Name, const struct FVector& DefaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetParticleVectorParamter"));

	AP_Punch_BP_C_GetParticleVectorParamter_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleParamterByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DefaultValue                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AB82F80              		 offset:1182f80                       

float AP_Punch_BP_C::GetParticleParamterByName(const struct FName& Name, float DefaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetParticleParamterByName"));

	AP_Punch_BP_C_GetParticleParamterByName_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleParamter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          DefaultValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A7564C0              		 offset:d564c0                        

float AP_Punch_BP_C::GetParticleParamter(const struct FString& Name, float DefaultValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetParticleParamter"));

	AP_Punch_BP_C_GetParticleParamter_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D2FFE10              		 offset:38ffe10                       

float AP_Punch_BP_C::STATIC_GetEmitterGlobalSpawnRateScale()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale"));

	AP_Punch_BP_C_GetEmitterGlobalSpawnRateScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.ForceSpawn
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// int                            EmitterIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InLocation                     (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75BB56700              		 offset:2156700                       

void AP_Punch_BP_C::ForceSpawn(int EmitterIndex, const struct FVector& InLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.ForceSpawn"));

	AP_Punch_BP_C_ForceSpawn_Params params;
	params.EmitterIndex = EmitterIndex;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.AttachToParent
// (Final, Native, Protected)
// FunctionAddress:0x00007FF759C677F0              		 offset:2677f0                        

void AP_Punch_BP_C::AttachToParent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslParticle.AttachToParent"));

	AP_Punch_BP_C_AttachToParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
