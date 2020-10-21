// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AnimGraphRuntime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Engine.AnimInstance.UnlockAIResources
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUnlockMovement                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UnlockAILogic                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A844750              		 offset:e44750                        

void UAnimSequencerInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.UnlockAIResources"));

	UAnimSequencerInstance_UnlockAIResources_Params params;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.TryGetPawnOwner
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B333930              		 offset:1933930                       

class APawn* UAnimSequencerInstance::TryGetPawnOwner()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.TryGetPawnOwner"));

	UAnimSequencerInstance_TryGetPawnOwner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.StopSlotAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          inBlendOutTime                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B4C0660              		 offset:1ac0660                       

void UAnimSequencerInstance::StopSlotAnimation(float inBlendOutTime, const struct FName& SlotNodeName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.StopSlotAnimation"));

	UAnimSequencerInstance_StopSlotAnimation_Params params;
	params.inBlendOutTime = inBlendOutTime;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SnapshotPose
// (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FPoseSnapshot           Snapshot                       (Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF75CB8D980              		 offset:318d980                       

void UAnimSequencerInstance::SnapshotPose(struct FPoseSnapshot* Snapshot)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SnapshotPose"));

	UAnimSequencerInstance_SnapshotPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}


// Function Engine.AnimInstance.SetRootMotionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERootMotionMode>   Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E0394F0              		 offset:46394f0                       

void UAnimSequencerInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SetRootMotionMode"));

	UAnimSequencerInstance_SetRootMotionMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SetMorphTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   MorphTargetName                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AD0D0D0              		 offset:130d0d0                       

void UAnimSequencerInstance::SetMorphTarget(const struct FName& MorphTargetName, float Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SetMorphTarget"));

	UAnimSequencerInstance_SetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SavePoseSnapshot
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SnapshotName                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759AE25C0              		 offset:e25c0                         

void UAnimSequencerInstance::SavePoseSnapshot(const struct FName& SnapshotName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.SavePoseSnapshot"));

	UAnimSequencerInstance_SavePoseSnapshot_Params params;
	params.SnapshotName = SnapshotName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*       Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOutTriggerTime            (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeToStartMontageAt         (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759FF5280              		 offset:5f5280                        

class UAnimMontage* UAnimSequencerInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage"));

	UAnimSequencerInstance_PlaySlotAnimationAsDynamicMontage_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;
	params.BlendOutTriggerTime = BlendOutTriggerTime;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.PlaySlotAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*       Asset                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendInTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendOutTime                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LoopCount                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B69E8C0              		 offset:1c9e8c0                       

float UAnimSequencerInstance::PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.PlaySlotAnimation"));

	UAnimSequencerInstance_PlaySlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Stop
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          inBlendOutTime                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A172A90              		 offset:772a90                        

void UAnimSequencerInstance::Montage_Stop(float inBlendOutTime, class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Stop"));

	UAnimSequencerInstance_Montage_Stop_Params params;
	params.inBlendOutTime = inBlendOutTime;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewPosition                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D8F38B0              		 offset:3ef38b0                       

void UAnimSequencerInstance::Montage_SetPosition(class UAnimMontage* Montage, float NewPosition)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetPosition"));

	UAnimSequencerInstance_Montage_SetPosition_Params params;
	params.Montage = Montage;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewPlayRate                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D169FB0              		 offset:3769fb0                       

void UAnimSequencerInstance::Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetPlayRate"));

	UAnimSequencerInstance_Montage_SetPlayRate_Params params;
	params.Montage = Montage;
	params.NewPlayRate = NewPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetNextSection
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SectionNameToChange            (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NextSection                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B304B50              		 offset:1904b50                       

void UAnimSequencerInstance::Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_SetNextSection"));

	UAnimSequencerInstance_Montage_SetNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Resume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D1D3C90              		 offset:37d3c90                       

void UAnimSequencerInstance::Montage_Resume(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Resume"));

	UAnimSequencerInstance_Montage_Resume_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Play
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// EMontagePlayReturnType         ReturnValueType                (Parm, ZeroConstructor, IsPlainOldData)
// float                          InTimeToStartMontageAt         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B530510              		 offset:1b30510                       

float UAnimSequencerInstance::Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Play"));

	UAnimSequencerInstance_Montage_Play_Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.ReturnValueType = ReturnValueType;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D70D3F0              		 offset:3d0d3f0                       

void UAnimSequencerInstance::Montage_Pause(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_Pause"));

	UAnimSequencerInstance_Montage_Pause_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D90B300              		 offset:3f0b300                       

void UAnimSequencerInstance::Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_JumpToSectionsEnd"));

	UAnimSequencerInstance_Montage_JumpToSectionsEnd_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSection
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759B71720              		 offset:171720                        

void UAnimSequencerInstance::Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_JumpToSection"));

	UAnimSequencerInstance_Montage_JumpToSection_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EC4B930              		 offset:524b930                       

bool UAnimSequencerInstance::Montage_IsPlaying(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_IsPlaying"));

	UAnimSequencerInstance_Montage_IsPlaying_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B672FC0              		 offset:1c72fc0                       

bool UAnimSequencerInstance::Montage_IsActive(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_IsActive"));

	UAnimSequencerInstance_Montage_IsActive_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759F97E20              		 offset:597e20                        

float UAnimSequencerInstance::Montage_GetPosition(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetPosition"));

	UAnimSequencerInstance_Montage_GetPosition_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AB73860              		 offset:1173860                       

float UAnimSequencerInstance::Montage_GetPlayRate(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetPlayRate"));

	UAnimSequencerInstance_Montage_GetPlayRate_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetIsStopped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B2CDFE0              		 offset:18cdfe0                       

bool UAnimSequencerInstance::Montage_GetIsStopped(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetIsStopped"));

	UAnimSequencerInstance_Montage_GetIsStopped_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetCurrentSection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A85CB70              		 offset:e5cb70                        

struct FName UAnimSequencerInstance::Montage_GetCurrentSection(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetCurrentSection"));

	UAnimSequencerInstance_Montage_GetCurrentSection_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetBlendTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            Montage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D0500E0              		 offset:36500e0                       

float UAnimSequencerInstance::Montage_GetBlendTime(class UAnimMontage* Montage)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.Montage_GetBlendTime"));

	UAnimSequencerInstance_Montage_GetBlendTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.LockAIResources
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bLockMovement                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LockAILogic                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A844750              		 offset:e44750                        

void UAnimSequencerInstance::LockAIResources(bool bLockMovement, bool LockAILogic)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.LockAIResources"));

	UAnimSequencerInstance_LockAIResources_Params params;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSyncGroupName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   PreviousMarker                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NextMarker                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRespectMarkerOrder            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D120880              		 offset:3720880                       

bool UAnimSequencerInstance::IsSyncGroupBetweenMarkers(const struct FName& InSyncGroupName, const struct FName& PreviousMarker, const struct FName& NextMarker, bool bRespectMarkerOrder)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsSyncGroupBetweenMarkers"));

	UAnimSequencerInstance_IsSyncGroupBetweenMarkers_Params params;
	params.InSyncGroupName = InSyncGroupName;
	params.PreviousMarker = PreviousMarker;
	params.NextMarker = NextMarker;
	params.bRespectMarkerOrder = bRespectMarkerOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsPlayingSlotAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimSequenceBase*       Asset                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotNodeName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA36080              		 offset:2036080                       

bool UAnimSequencerInstance::IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsPlayingSlotAnimation"));

	UAnimSequencerInstance_IsPlayingSlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsAnyMontagePlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759C5C0C0              		 offset:25c0c0                        

bool UAnimSequencerInstance::IsAnyMontagePlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.IsAnyMontagePlaying"));

	UAnimSequencerInstance_IsAnyMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   SyncGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MarkerName                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AB8C750              		 offset:118c750                       

bool UAnimSequencerInstance::HasMarkerBeenHitThisFrame(const struct FName& SyncGroup, const struct FName& MarkerName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.HasMarkerBeenHitThisFrame"));

	UAnimSequencerInstance_HasMarkerBeenHitThisFrame_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetTimeToClosestMarker
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   SyncGroup                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   MarkerName                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutMarkerTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D409310              		 offset:3a09310                       

bool UAnimSequencerInstance::GetTimeToClosestMarker(const struct FName& SyncGroup, const struct FName& MarkerName, float* OutMarkerTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetTimeToClosestMarker"));

	UAnimSequencerInstance_GetTimeToClosestMarker_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMarkerTime != nullptr)
		*OutMarkerTime = params.OutMarkerTime;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetSyncGroupPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSyncGroupName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FMarkerSyncAnimPosition ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF75A763B40              		 offset:d63b40                        

struct FMarkerSyncAnimPosition UAnimSequencerInstance::GetSyncGroupPosition(const struct FName& InSyncGroupName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetSyncGroupPosition"));

	UAnimSequencerInstance_GetSyncGroupPosition_Params params;
	params.InSyncGroupName = InSyncGroupName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetStateWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75ECB1B30              		 offset:52b1b30                       

float UAnimSequencerInstance::GetStateWeight(int MachineIndex, int StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetStateWeight"));

	UAnimSequencerInstance_GetStateWeight_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B79D5B0              		 offset:1d9d5b0                       

float UAnimSequencerInstance::GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction"));

	UAnimSequencerInstance_GetRelevantAnimTimeRemainingFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A8F80C0              		 offset:ef80c0                        

float UAnimSequencerInstance::GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeRemaining"));

	UAnimSequencerInstance_GetRelevantAnimTimeRemaining_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A6E41B0              		 offset:ce41b0                        

float UAnimSequencerInstance::GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTimeFraction"));

	UAnimSequencerInstance_GetRelevantAnimTimeFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CBA6FE0              		 offset:31a6fe0                       

float UAnimSequencerInstance::GetRelevantAnimTime(int MachineIndex, int StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimTime"));

	UAnimSequencerInstance_GetRelevantAnimTime_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CA9D9B0              		 offset:309d9b0                       

float UAnimSequencerInstance::GetRelevantAnimLength(int MachineIndex, int StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetRelevantAnimLength"));

	UAnimSequencerInstance_GetRelevantAnimLength_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75EB5A510              		 offset:515a510                       

class USkeletalMeshComponent* UAnimSequencerInstance::GetOwningComponent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetOwningComponent"));

	UAnimSequencerInstance_GetOwningComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA4CA20              		 offset:204ca20                       

class AActor* UAnimSequencerInstance::GetOwningActor()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetOwningActor"));

	UAnimSequencerInstance_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B2CDF20              		 offset:18cdf20                       

float UAnimSequencerInstance::GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction"));

	UAnimSequencerInstance_GetInstanceTransitionTimeElapsedFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A7031F0              		 offset:d031f0                        

float UAnimSequencerInstance::GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed"));

	UAnimSequencerInstance_GetInstanceTransitionTimeElapsed_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            TransitionIndex                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B841490              		 offset:1e41490                       

float UAnimSequencerInstance::GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration"));

	UAnimSequencerInstance_GetInstanceTransitionCrossfadeDuration_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceStateWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A97A8A0              		 offset:f7a8a0                        

float UAnimSequencerInstance::GetInstanceStateWeight(int MachineIndex, int StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceStateWeight"));

	UAnimSequencerInstance_GetInstanceStateWeight_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceMachineWeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759AA8FC0              		 offset:a8fc0                         

float UAnimSequencerInstance::GetInstanceMachineWeight(int MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceMachineWeight"));

	UAnimSequencerInstance_GetInstanceMachineWeight_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B34C0D0              		 offset:194c0d0                       

float UAnimSequencerInstance::GetInstanceCurrentStateElapsedTime(int MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime"));

	UAnimSequencerInstance_GetInstanceCurrentStateElapsedTime_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B2575E0              		 offset:18575e0                       

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction"));

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D4681F0              		 offset:3a681f0                       

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd"));

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEnd_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CE0DD50              		 offset:340dd50                       

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction"));

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A58EC00              		 offset:b8ec00                        

float UAnimSequencerInstance::GetInstanceAssetPlayerTime(int AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerTime"));

	UAnimSequencerInstance_GetInstanceAssetPlayerTime_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            AssetPlayerIndex               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AAE7FC0              		 offset:10e7fc0                       

float UAnimSequencerInstance::GetInstanceAssetPlayerLength(int AssetPlayerIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetInstanceAssetPlayerLength"));

	UAnimSequencerInstance_GetInstanceAssetPlayerLength_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurveValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BB480E0              		 offset:21480e0                       

float UAnimSequencerInstance::GetCurveValue(const struct FName& CurveName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurveValue"));

	UAnimSequencerInstance_GetCurveValue_Params params;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75EE70A30              		 offset:5470a30                       

struct FName UAnimSequencerInstance::GetCurrentStateName(int MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentStateName"));

	UAnimSequencerInstance_GetCurrentStateName_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentStateElapsedTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            MachineIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759CD15D0              		 offset:2d15d0                        

float UAnimSequencerInstance::GetCurrentStateElapsedTime(int MachineIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentStateElapsedTime"));

	UAnimSequencerInstance_GetCurrentStateElapsedTime_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentActiveMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E039400              		 offset:4639400                       

class UAnimMontage* UAnimSequencerInstance::GetCurrentActiveMontage()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetCurrentActiveMontage"));

	UAnimSequencerInstance_GetCurrentActiveMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimationAsset*         AnimAsset                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A719740              		 offset:d19740                        

float UAnimSequencerInstance::STATIC_GetAnimAssetPlayerTimeFromEndFraction(class UAnimationAsset* AnimAsset, float CurrentTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction"));

	UAnimSequencerInstance_GetAnimAssetPlayerTimeFromEndFraction_Params params;
	params.AnimAsset = AnimAsset;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimationAsset*         AnimAsset                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AB02950              		 offset:1102950                       

float UAnimSequencerInstance::GetAnimAssetPlayerTimeFromEnd(class UAnimationAsset* AnimAsset, float CurrentTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd"));

	UAnimSequencerInstance_GetAnimAssetPlayerTimeFromEnd_Params params;
	params.AnimAsset = AnimAsset;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimationAsset*         AnimAsset                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentTime                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759F13CD0              		 offset:513cd0                        

float UAnimSequencerInstance::STATIC_GetAnimAssetPlayerTimeFraction(class UAnimationAsset* AnimAsset, float CurrentTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction"));

	UAnimSequencerInstance_GetAnimAssetPlayerTimeFraction_Params params;
	params.AnimAsset = AnimAsset;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAnimAssetPlayerLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimationAsset*         AnimAsset                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759C13470              		 offset:213470                        

float UAnimSequencerInstance::STATIC_GetAnimAssetPlayerLength(class UAnimationAsset* AnimAsset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.GetAnimAssetPlayerLength"));

	UAnimSequencerInstance_GetAnimAssetPlayerLength_Params params;
	params.AnimAsset = AnimAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.ClearMorphTargets
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75BA74560              		 offset:2074560                       

void UAnimSequencerInstance::ClearMorphTargets()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.ClearMorphTargets"));

	UAnimSequencerInstance_ClearMorphTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.CalculateDirection
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Velocity                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                BaseRotation                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DF30950              		 offset:4530950                       

float UAnimSequencerInstance::CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.CalculateDirection"));

	UAnimSequencerInstance_CalculateDirection_Params params;
	params.Velocity = Velocity;
	params.BaseRotation = BaseRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UAnimSequencerInstance::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintUpdateAnimation"));

	UAnimSequencerInstance_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UAnimSequencerInstance::BlueprintPostEvaluateAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintPostEvaluateAnimation"));

	UAnimSequencerInstance_BlueprintPostEvaluateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// FunctionAddress:0x00007FF75E302250              		 offset:4902250                       

void UAnimSequencerInstance::BlueprintInitializeAnimation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.AnimInstance.BlueprintInitializeAnimation"));

	UAnimSequencerInstance_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF75AF2DE70              		 offset:152de70                       

void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived"));

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FName                   NotifyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF75B40E800              		 offset:1a0e800                       

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived"));

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BADA650              		 offset:20da650                       

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded"));

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BB483A0              		 offset:21483a0                       

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut"));

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  InSkeletalMeshComponent        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartingPosition               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartingSection                (Parm, ZeroConstructor, IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AE9A430              		 offset:149a430                       

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::STATIC_CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage"));

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

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
