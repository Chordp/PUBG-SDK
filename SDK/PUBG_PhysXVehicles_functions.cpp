// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PhysXVehicles_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AWheeledVehicle*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B646A80              		 offset:2b76a80                       

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


// Function PhysXVehicles.VehicleWheel.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B646AB0              		 offset:2b76ab0                       

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
// FunctionAddress:0x00007FF62B6469F0              		 offset:2b769f0                       

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
// FunctionAddress:0x00007FF62B6469C0              		 offset:2b769c0                       

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
// FunctionAddress:0x00007FF62B646960              		 offset:2b76960                       

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
// FunctionAddress:0x00007FF62B646930              		 offset:2b76930                       

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
// FunctionAddress:0x00007FF62B646900              		 offset:2b76900                       

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
// bool                           bUseAuto                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B647820              		 offset:2b77820                       

void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto)
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
// float                          Throttle                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B6477A0              		 offset:2b777a0                       

void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle)
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
// int                            GearNum                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bImmediate                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B6476E0              		 offset:2b776e0                       

void UWheeledVehicleMovementComponent::SetTargetGear(int GearNum, bool bImmediate)
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
// float                          Steering                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B647660              		 offset:2b77660                       

void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering)
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
// bool                           bNewHandbrake                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B647500              		 offset:2b77500                       

void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake)
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
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B647470              		 offset:2b77470                       

void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask)
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
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B6473F0              		 offset:2b773f0                       

void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int GroupFlags)
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
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B647360              		 offset:2b77360                       

void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask)
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
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B6472E0              		 offset:2b772e0                       

void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int GroupFlags)
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
// bool                           bNewGearUp                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B647250              		 offset:2b77250                       

void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp)
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
// bool                           bNewGearDown                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B6471C0              		 offset:2b771c0                       

void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown)
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
// float                          Brake                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B646FA0              		 offset:2b76fa0                       

void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake)
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
// struct FNavAvoidanceMask       GroupMask                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B646F10              		 offset:2b76f10                       

void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask)
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
// int                            GroupFlags                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B646E90              		 offset:2b76e90                       

void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int GroupFlags)
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
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B646E00              		 offset:2b76e00                       

void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable)
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
// float                          InSteeringInput                (Parm, ZeroConstructor, IsPlainOldData)
// float                          InThrottleInput                (Parm, ZeroConstructor, IsPlainOldData)
// float                          InBrakeInput                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InHandbrakeInput               (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentGear                    (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       checksum                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B646BE0              		 offset:2b76be0                       

void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear, uint32_t checksum)
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
	params.checksum = checksum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhysXVehicles.WheeledVehicleMovementComponent.OnRep_TirePunctured
// (Native, Public)
// Parameters:
// TArray<bool>                   LastTirePunctured              (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B646AE0              		 offset:2b76ae0                       

void UWheeledVehicleMovementComponent::OnRep_TirePunctured(TArray<bool> LastTirePunctured)
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
// FunctionAddress:0x00007FF62B646A50              		 offset:2b76a50                       

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
// FunctionAddress:0x00007FF62B646A20              		 offset:2b76a20                       

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
// FunctionAddress:0x00007FF62B646990              		 offset:2b76990                       

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
// FunctionAddress:0x00007FF62B6468D0              		 offset:2b768d0                       

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
// FunctionAddress:0x00007FF62B6468A0              		 offset:2b768a0                       

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
// FunctionAddress:0x00007FF62B646870              		 offset:2b76870                       

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
// FunctionAddress:0x00007FF62B646840              		 offset:2b76840                       

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


// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B647590              		 offset:2b77590                       

void USimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int WheelIndex)
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
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B6470F0              		 offset:2b770f0                       

void USimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int WheelIndex)
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
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B647020              		 offset:2b77020                       

void USimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int WheelIndex)
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
