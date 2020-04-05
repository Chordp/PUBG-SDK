// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PhysXVehicles_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhysXVehicles.VehicleWheel.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E42D0              		 offset:4b142d0                       

bool UVehicleWheel::IsInAir()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.IsInAir"));

	UVehicleWheel_IsInAir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4210              		 offset:4b14210                       

float UVehicleWheel::GetSuspensionOffset()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset"));

	UVehicleWheel_GetSuspensionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E41E0              		 offset:4b141e0                       

float UVehicleWheel::GetSteerAngle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetSteerAngle"));

	UVehicleWheel_GetSteerAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4180              		 offset:4b14180                       

float UVehicleWheel::GetRotationAngle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetRotationAngle"));

	UVehicleWheel_GetRotationAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetLongitudinalSlip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4150              		 offset:4b14150                       

float UVehicleWheel::GetLongitudinalSlip()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetLongitudinalSlip"));

	UVehicleWheel_GetLongitudinalSlip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleWheel.GetLateralSlip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4120              		 offset:4b14120                       

float UVehicleWheel::GetLateralSlip()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleWheel.GetLateralSlip"));

	UVehicleWheel_GetLateralSlip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bUseAuto                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E5040              		 offset:4b15040                       

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool* bUseAuto)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears"));

	UWheeledVehicleMovementComponent_SetUseAutoGears_Params params;
	params.bUseAuto = bUseAuto;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Throttle                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4FC0              		 offset:4b14fc0                       

void UWheeledVehicleMovementComponent::SetThrottleInput(float* Throttle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput"));

	UWheeledVehicleMovementComponent_SetThrottleInput_Params params;
	params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GearNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4F00              		 offset:4b14f00                       

void UWheeledVehicleMovementComponent::SetTargetGear(int* GearNum, bool* bImmediate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear"));

	UWheeledVehicleMovementComponent_SetTargetGear_Params params;
	params.GearNum = GearNum;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Steering                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4E80              		 offset:4b14e80                       

void UWheeledVehicleMovementComponent::SetSteeringInput(float* Steering)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput"));

	UWheeledVehicleMovementComponent_SetSteeringInput_Params params;
	params.Steering = Steering;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewHandbrake                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4D20              		 offset:4b14d20                       

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool* bNewHandbrake)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput"));

	UWheeledVehicleMovementComponent_SetHandbrakeInput_Params params;
	params.bNewHandbrake = bNewHandbrake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4C90              		 offset:4b14c90                       

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask"));

	UWheeledVehicleMovementComponent_SetGroupsToIgnoreMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4C10              		 offset:4b14c10                       

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore"));

	UWheeledVehicleMovementComponent_SetGroupsToIgnore_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4B80              		 offset:4b14b80                       

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask"));

	UWheeledVehicleMovementComponent_SetGroupsToAvoidMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4B00              		 offset:4b14b00                       

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid"));

	UWheeledVehicleMovementComponent_SetGroupsToAvoid_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewGearUp                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4A70              		 offset:4b14a70                       

void UWheeledVehicleMovementComponent::SetGearUp(bool* bNewGearUp)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp"));

	UWheeledVehicleMovementComponent_SetGearUp_Params params;
	params.bNewGearUp = bNewGearUp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNewGearDown                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E49E0              		 offset:4b149e0                       

void UWheeledVehicleMovementComponent::SetGearDown(bool* bNewGearDown)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown"));

	UWheeledVehicleMovementComponent_SetGearDown_Params params;
	params.bNewGearDown = bNewGearDown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Brake                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E47C0              		 offset:4b147c0                       

void UWheeledVehicleMovementComponent::SetBrakeInput(float* Brake)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput"));

	UWheeledVehicleMovementComponent_SetBrakeInput_Params params;
	params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FNavAvoidanceMask*      GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4730              		 offset:4b14730                       

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(struct FNavAvoidanceMask* GroupMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask"));

	UWheeledVehicleMovementComponent_SetAvoidanceGroupMask_Params params;
	params.GroupMask = GroupMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E46B0              		 offset:4b146b0                       

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int* GroupFlags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup"));

	UWheeledVehicleMovementComponent_SetAvoidanceGroup_Params params;
	params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4620              		 offset:4b14620                       

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool* bEnable)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled"));

	UWheeledVehicleMovementComponent_SetAvoidanceEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// float*                         InSteeringInput                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InThrottleInput                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InBrakeInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InHandbrakeInput               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           CurrentGear                    (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t*                      Checksum                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4400              		 offset:4b14400                       

void UWheeledVehicleMovementComponent::ServerUpdateState(float* InSteeringInput, float* InThrottleInput, float* InBrakeInput, float* InHandbrakeInput, int* CurrentGear, uint32_t* Checksum)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState"));

	UWheeledVehicleMovementComponent_ServerUpdateState_Params params;
	params.InSteeringInput = InSteeringInput;
	params.InThrottleInput = InThrottleInput;
	params.InBrakeInput = InBrakeInput;
	params.InHandbrakeInput = InHandbrakeInput;
	params.CurrentGear = CurrentGear;
	params.Checksum = Checksum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured
// (Native, Public)
// Parameters:
// TArray<bool>*                  LastTirePunctured              (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C8E4300              		 offset:4b14300                       

void UWheeledVehicleMovementComponent::OnRep_TirePunctured(TArray<bool>* LastTirePunctured)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured"));

	UWheeledVehicleMovementComponent_OnRep_TirePunctured_Params params;
	params.LastTirePunctured = LastTirePunctured;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4270              		 offset:4b14270                       

bool UWheeledVehicleMovementComponent::GetUseAutoGears()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears"));

	UWheeledVehicleMovementComponent_GetUseAutoGears_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4240              		 offset:4b14240                       

int UWheeledVehicleMovementComponent::GetTargetGear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear"));

	UWheeledVehicleMovementComponent_GetTargetGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetSideSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E41B0              		 offset:4b141b0                       

float UWheeledVehicleMovementComponent::GetSideSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetSideSpeed"));

	UWheeledVehicleMovementComponent_GetSideSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E40F0              		 offset:4b140f0                       

float UWheeledVehicleMovementComponent::GetForwardSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed"));

	UWheeledVehicleMovementComponent_GetForwardSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E40C0              		 offset:4b140c0                       

float UWheeledVehicleMovementComponent::GetEngineRotationSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed"));

	UWheeledVehicleMovementComponent_GetEngineRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4090              		 offset:4b14090                       

float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed"));

	UWheeledVehicleMovementComponent_GetEngineMaxRotationSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4060              		 offset:4b14060                       

int UWheeledVehicleMovementComponent::GetCurrentGear()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear"));

	UWheeledVehicleMovementComponent_GetCurrentGear_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWheeledVehicle*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E42A0              		 offset:4b142a0                       

class AWheeledVehicle* UVehicleAnimInstance::GetVehicle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.VehicleAnimInstance.GetVehicle"));

	UVehicleAnimInstance_GetVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4DB0              		 offset:4b14db0                       

void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float* SteerAngle, int* WheelIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle"));

	USimpleWheeledVehicleMovementComponent_SetSteerAngle_Params params;
	params.SteerAngle = SteerAngle;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4910              		 offset:4b14910                       

void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float* DriveTorque, int* WheelIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque"));

	USimpleWheeledVehicleMovementComponent_SetDriveTorque_Params params;
	params.DriveTorque = DriveTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C8E4840              		 offset:4b14840                       

void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float* BrakeTorque, int* WheelIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque"));

	USimpleWheeledVehicleMovementComponent_SetBrakeTorque_Params params;
	params.BrakeTorque = BrakeTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
