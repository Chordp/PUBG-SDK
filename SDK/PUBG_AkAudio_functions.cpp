// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AkAudio_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkAmbientSound.StopAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75C5D20D0              		 offset:2bd20d0                       

void AAkAmbientSound::StopAmbientSound()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StopAmbientSound"));

	AAkAmbientSound_StopAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.StartAmbientSound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75C5D1E70              		 offset:2bd1e70                       

void AAkAmbientSound::StartAmbientSound()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.StartAmbientSound"));

	AAkAmbientSound_StartAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSound.IsCurrentlyPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D03C0              		 offset:2bd03c0                       

bool AAkAmbientSound::IsCurrentlyPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkAmbientSound.IsCurrentlyPlaying"));

	AAkAmbientSound_IsCurrentlyPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.UseVolumesForRTPCs
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           inUseVolumesForRTPCs           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D24F0              		 offset:2bd24f0                       

void UAkComponent::UseVolumesForRTPCs(bool inUseVolumesForRTPCs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseVolumesForRTPCs"));

	UAkComponent_UseVolumesForRTPCs_Params params;
	params.inUseVolumesForRTPCs = inUseVolumesForRTPCs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D23A0              		 offset:2bd23a0                       

void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseReverbVolumes"));

	UAkComponent_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.UseIndoorCheck
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           inUseIndoorCheck               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D2310              		 offset:2bd2310                       

void UAkComponent::UseIndoorCheck(bool inUseIndoorCheck)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.UseIndoorCheck"));

	UAkComponent_UseIndoorCheck_Params params;
	params.inUseIndoorCheck = inUseIndoorCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.StopPlayingID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D2110              		 offset:2bd2110                       

void UAkComponent::StopPlayingID(int PlayingID)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.StopPlayingID"));

	UAkComponent_StopPlayingID_Params params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.Stop
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75C5D1FB0              		 offset:2bd1fb0                       

void UAkComponent::Stop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.Stop"));

	UAkComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetSwitch
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SwitchGroup                    (Parm, ZeroConstructor)
// struct FString                 SwitchState                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF75C5D1950              		 offset:2bd1950                       

void UAkComponent::SetSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetSwitch"));

	UAkComponent_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bStopWhenOwnerDestroyed        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D18C0              		 offset:2bd18c0                       

void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed"));

	UAkComponent_SetStopWhenOwnerDestroyed_Params params;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 RTPC                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D1560              		 offset:2bd1560                       

void UAkComponent::SetRTPCValue(const struct FString& RTPC, float Value, int InterpolationTimeMs)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetRTPCValue"));

	UAkComponent_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D1420              		 offset:2bd1420                       

void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetOutputBusVolume"));

	UAkComponent_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetMinVolumeRTPCUpdateInterval
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                          Interval                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D13A0              		 offset:2bd13a0                       

void UAkComponent::SetMinVolumeRTPCUpdateInterval(float Interval)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetMinVolumeRTPCUpdateInterval"));

	UAkComponent_SetMinVolumeRTPCUpdateInterval_Params params;
	params.Interval = Interval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetAttenuationScalingFactor
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D1320              		 offset:2bd1320                       

void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetAttenuationScalingFactor"));

	UAkComponent_SetAttenuationScalingFactor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.SetActiveListeners
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            in_uListenerMask               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D1290              		 offset:2bd1290                       

void UAkComponent::SetActiveListeners(int in_uListenerMask)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.SetActiveListeners"));

	UAkComponent_SetActiveListeners_Params params;
	params.in_uListenerMask = in_uListenerMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.PostTrigger
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Trigger                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF75C5D10E0              		 offset:2bd10e0                       

void UAkComponent::PostTrigger(const struct FString& Trigger)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostTrigger"));

	UAkComponent_PostTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkComponent.PostAssociatedAkEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D0850              		 offset:2bd0850                       

int UAkComponent::PostAssociatedAkEvent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAssociatedAkEvent"));

	UAkComponent_PostAssociatedAkEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEventByName
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D07A0              		 offset:2bd07a0                       

int UAkComponent::PostAkEventByName(const struct FString& in_EventName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEventByName"));

	UAkComponent_PostAkEventByName_Params params;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.PostAkEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D06B0              		 offset:2bd06b0                       

int UAkComponent::PostAkEvent(class UAkAudioEvent* AkEvent, const struct FString& in_EventName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.PostAkEvent"));

	UAkComponent_PostAkEvent_Params params;
	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.IsUsingVolumesForRTPCs
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D0420              		 offset:2bd0420                       

bool UAkComponent::IsUsingVolumesForRTPCs()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.IsUsingVolumesForRTPCs"));

	UAkComponent_IsUsingVolumesForRTPCs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.IsCurrentlyPlaying
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D03F0              		 offset:2bd03f0                       

bool UAkComponent::IsCurrentlyPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.IsCurrentlyPlaying"));

	UAkComponent_IsCurrentlyPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.GetAttenuationRadius
// (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D0380              		 offset:2bd0380                       

float UAkComponent::GetAttenuationRadius()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.GetAttenuationRadius"));

	UAkComponent_GetAttenuationRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkComponent.CalculateRelativeSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C5D01A0              		 offset:2bd01a0                       

void UAkComponent::CalculateRelativeSpeed(float DeltaTime)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkComponent.CalculateRelativeSpeed"));

	UAkComponent_CalculateRelativeSpeed_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.ToggleVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CCE5A90              		 offset:32e5a90                       

void UAkSoundVolumeComponentBase::ToggleVisibility(bool bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.ToggleVisibility"));

	UAkSoundVolumeComponentBase_ToggleVisibility_Params params;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SnapTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A84B580              		 offset:e4b580                        

bool UAkSoundVolumeComponentBase::SnapTo(class USceneComponent* InParent, const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SnapTo"));

	UAkSoundVolumeComponentBase_SnapTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.SetWorldScale3D
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewScale                       (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75D498FE0              		 offset:3a98fe0                       

void UAkSoundVolumeComponentBase::SetWorldScale3D(const struct FVector& NewScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetWorldScale3D"));

	UAkSoundVolumeComponentBase_SetWorldScale3D_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewVisibility                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A116BE0              		 offset:716be0                        

void UAkSoundVolumeComponentBase::SetVisibility(bool bNewVisibility, bool bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetVisibility"));

	UAkSoundVolumeComponentBase_SetVisibility_Params params;
	params.bNewVisibility = bNewVisibility;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetRelativeScale3D
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewScale3D                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF759B47BE0              		 offset:147be0                        

void UAkSoundVolumeComponentBase::SetRelativeScale3D(const struct FVector& NewScale3D)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetRelativeScale3D"));

	UAkSoundVolumeComponentBase_SetRelativeScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetIsAttachmentReplicated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DC15A60              		 offset:4215a60                       

void UAkSoundVolumeComponentBase::SetIsAttachmentReplicated(bool ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetIsAttachmentReplicated"));

	UAkSoundVolumeComponentBase_SetIsAttachmentReplicated_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetIsAttachmentReferenceReplicated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ShouldReplicate                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75EB98A10              		 offset:5198a10                       

void UAkSoundVolumeComponentBase::SetIsAttachmentReferenceReplicated(bool ShouldReplicate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetIsAttachmentReferenceReplicated"));

	UAkSoundVolumeComponentBase_SetIsAttachmentReferenceReplicated_Params params;
	params.ShouldReplicate = ShouldReplicate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetHiddenInGame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewHidden                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPropagateToChildren           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A162FE0              		 offset:762fe0                        

void UAkSoundVolumeComponentBase::SetHiddenInGame(bool NewHidden, bool bPropagateToChildren)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetHiddenInGame"));

	UAkSoundVolumeComponentBase_SetHiddenInGame_Params params;
	params.NewHidden = NewHidden;
	params.bPropagateToChildren = bPropagateToChildren;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.SetAbsolute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewAbsoluteLocation           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewAbsoluteRotation           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNewAbsoluteScale              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B6FC600              		 offset:1cfc600                       

void UAkSoundVolumeComponentBase::SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.SetAbsolute"));

	UAkSoundVolumeComponentBase_SetAbsolute_Params params;
	params.bNewAbsoluteLocation = bNewAbsoluteLocation;
	params.bNewAbsoluteRotation = bNewAbsoluteRotation;
	params.bNewAbsoluteScale = bNewAbsoluteScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.ResetRelativeTransform
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF75A7EA190              		 offset:dea190                        

void UAkSoundVolumeComponentBase::ResetRelativeTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.ResetRelativeTransform"));

	UAkSoundVolumeComponentBase_ResetRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_Visibility
// (Final, Native, Private)
// Parameters:
// bool                           OldValue                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75ADFC070              		 offset:13fc070                       

void UAkSoundVolumeComponentBase::OnRep_Visibility(bool OldValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_Visibility"));

	UAkSoundVolumeComponentBase_OnRep_Visibility_Params params;
	params.OldValue = OldValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_Transform
// (Final, Native, Private)
// FunctionAddress:0x00007FF75D53BDF0              		 offset:3b3bdf0                       

void UAkSoundVolumeComponentBase::OnRep_Transform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_Transform"));

	UAkSoundVolumeComponentBase_OnRep_Transform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_AttachSocketName
// (Final, Native, Private)
// FunctionAddress:0x00007FF75B01D1F0              		 offset:161d1f0                       

void UAkSoundVolumeComponentBase::OnRep_AttachSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_AttachSocketName"));

	UAkSoundVolumeComponentBase_OnRep_AttachSocketName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_AttachParent
// (Final, Native, Private)
// FunctionAddress:0x00007FF75B01D1F0              		 offset:161d1f0                       

void UAkSoundVolumeComponentBase::OnRep_AttachParent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_AttachParent"));

	UAkSoundVolumeComponentBase_OnRep_AttachParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.OnRep_AttachChildren
// (Final, Native, Private)
// FunctionAddress:0x00007FF75B6A8320              		 offset:1ca8320                       

void UAkSoundVolumeComponentBase::OnRep_AttachChildren()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.OnRep_AttachChildren"));

	UAkSoundVolumeComponentBase_OnRep_AttachChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.K2_SetWorldTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D15DFF0              		 offset:375dff0                       

void UAkSoundVolumeComponentBase::K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetWorldTransform"));

	UAkSoundVolumeComponentBase_K2_SetWorldTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetWorldRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B0E2220              		 offset:16e2220                       

void UAkSoundVolumeComponentBase::K2_SetWorldRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetWorldRotation"));

	UAkSoundVolumeComponentBase_K2_SetWorldRotation_Params params;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetWorldLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B365B50              		 offset:1965b50                       

void UAkSoundVolumeComponentBase::K2_SetWorldLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetWorldLocationAndRotation"));

	UAkSoundVolumeComponentBase_K2_SetWorldLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetWorldLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75EE7D140              		 offset:547d140                       

void UAkSoundVolumeComponentBase::K2_SetWorldLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetWorldLocation"));

	UAkSoundVolumeComponentBase_K2_SetWorldLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetRelativeTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              NewTransform                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D85A0A0              		 offset:3e5a0a0                       

void UAkSoundVolumeComponentBase::K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetRelativeTransform"));

	UAkSoundVolumeComponentBase_K2_SetRelativeTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetRelativeRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D5EC710              		 offset:3bec710                       

void UAkSoundVolumeComponentBase::K2_SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetRelativeRotation"));

	UAkSoundVolumeComponentBase_K2_SetRelativeRotation_Params params;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BBCD2A0              		 offset:21cd2a0                       

void UAkSoundVolumeComponentBase::K2_SetRelativeLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetRelativeLocationAndRotation"));

	UAkSoundVolumeComponentBase_K2_SetRelativeLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_SetRelativeLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 NewLocation                    (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75BB81720              		 offset:2181720                       

void UAkSoundVolumeComponentBase::K2_SetRelativeLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_SetRelativeLocation"));

	UAkSoundVolumeComponentBase_K2_SetRelativeLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_GetComponentToWorld
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E245280              		 offset:4845280                       

struct FTransform UAkSoundVolumeComponentBase::K2_GetComponentToWorld()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_GetComponentToWorld"));

	UAkSoundVolumeComponentBase_K2_GetComponentToWorld_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_GetComponentScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A0FE6D0              		 offset:6fe6d0                        

struct FVector UAkSoundVolumeComponentBase::K2_GetComponentScale()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_GetComponentScale"));

	UAkSoundVolumeComponentBase_K2_GetComponentScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_GetComponentRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CAB6CD0              		 offset:30b6cd0                       

struct FRotator UAkSoundVolumeComponentBase::K2_GetComponentRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_GetComponentRotation"));

	UAkSoundVolumeComponentBase_K2_GetComponentRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_GetComponentLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D712F00              		 offset:3d12f00                       

struct FVector UAkSoundVolumeComponentBase::K2_GetComponentLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_GetComponentLocation"));

	UAkSoundVolumeComponentBase_K2_GetComponentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_DetachFromComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EDetachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EDetachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallModify                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B4C4D70              		 offset:1ac4d70                       

void UAkSoundVolumeComponentBase::K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_DetachFromComponent"));

	UAkSoundVolumeComponentBase_K2_DetachFromComponent_Params params;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bCallModify = bCallModify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.SceneComponent.K2_AttachToComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         Parent                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                LocationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                RotationRule                   (Parm, ZeroConstructor, IsPlainOldData)
// EAttachmentRule                ScaleRule                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BB4F3A0              		 offset:214f3a0                       

bool UAkSoundVolumeComponentBase::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AttachToComponent"));

	UAkSoundVolumeComponentBase_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.LocationRule = LocationRule;
	params.RotationRule = RotationRule;
	params.ScaleRule = ScaleRule;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_AttachTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*         InParent                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWeldSimulatedBodies           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CF53BC0              		 offset:3553bc0                       

bool UAkSoundVolumeComponentBase::K2_AttachTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AttachTo"));

	UAkSoundVolumeComponentBase_K2_AttachTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachType = AttachType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.K2_AddWorldTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B51EFF0              		 offset:1b1eff0                       

void UAkSoundVolumeComponentBase::K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddWorldTransform"));

	UAkSoundVolumeComponentBase_K2_AddWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddWorldRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D46E7C0              		 offset:3a6e7c0                       

void UAkSoundVolumeComponentBase::K2_AddWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddWorldRotation"));

	UAkSoundVolumeComponentBase_K2_AddWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddWorldOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D39C550              		 offset:399c550                       

void UAkSoundVolumeComponentBase::K2_AddWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddWorldOffset"));

	UAkSoundVolumeComponentBase_K2_AddWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddRelativeRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759C632A0              		 offset:2632a0                        

void UAkSoundVolumeComponentBase::K2_AddRelativeRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddRelativeRotation"));

	UAkSoundVolumeComponentBase_K2_AddRelativeRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddRelativeLocation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DE323F0              		 offset:44323f0                       

void UAkSoundVolumeComponentBase::K2_AddRelativeLocation(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddRelativeLocation"));

	UAkSoundVolumeComponentBase_K2_AddRelativeLocation_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddLocalTransform
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              DeltaTransform                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75D928C70              		 offset:3f28c70                       

void UAkSoundVolumeComponentBase::K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddLocalTransform"));

	UAkSoundVolumeComponentBase_K2_AddLocalTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddLocalRotation
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                DeltaRotation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75AF7E1C0              		 offset:157e1c0                       

void UAkSoundVolumeComponentBase::K2_AddLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddLocalRotation"));

	UAkSoundVolumeComponentBase_K2_AddLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.K2_AddLocalOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 DeltaLocation                  (Parm, IsPlainOldData)
// bool                           bSweep                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepHitResult                 (Parm, OutParm, IsPlainOldData)
// bool                           bTeleport                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A0FE520              		 offset:6fe520                        

void UAkSoundVolumeComponentBase::K2_AddLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.K2_AddLocalOffset"));

	UAkSoundVolumeComponentBase_K2_AddLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.SceneComponent.IsVisible
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D1F1B60              		 offset:37f1b60                       

bool UAkSoundVolumeComponentBase::IsVisible()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.IsVisible"));

	UAkSoundVolumeComponentBase_IsVisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.IsSimulatingPhysics
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B0B03B0              		 offset:16b03b0                       

bool UAkSoundVolumeComponentBase::IsSimulatingPhysics(const struct FName& BoneName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.IsSimulatingPhysics"));

	UAkSoundVolumeComponentBase_IsSimulatingPhysics_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.IsAnySimulatingPhysics
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DE323C0              		 offset:44323c0                       

bool UAkSoundVolumeComponentBase::IsAnySimulatingPhysics()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.IsAnySimulatingPhysics"));

	UAkSoundVolumeComponentBase_IsAnySimulatingPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetUpVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B2B75C0              		 offset:18b75c0                       

struct FVector UAkSoundVolumeComponentBase::GetUpVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetUpVector"));

	UAkSoundVolumeComponentBase_GetUpVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSocketTransform
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AF97830              		 offset:1597830                       

struct FTransform UAkSoundVolumeComponentBase::GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSocketTransform"));

	UAkSoundVolumeComponentBase_GetSocketTransform_Params params;
	params.InSocketName = InSocketName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSocketRotation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D606C80              		 offset:3c06c80                       

struct FRotator UAkSoundVolumeComponentBase::GetSocketRotation(const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSocketRotation"));

	UAkSoundVolumeComponentBase_GetSocketRotation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSocketQuaternion
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FQuat                   ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A18ECE0              		 offset:78ece0                        

struct FQuat UAkSoundVolumeComponentBase::GetSocketQuaternion(const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSocketQuaternion"));

	UAkSoundVolumeComponentBase_GetSocketQuaternion_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetSocketLocation
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E767150              		 offset:4d67150                       

struct FVector UAkSoundVolumeComponentBase::GetSocketLocation(const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetSocketLocation"));

	UAkSoundVolumeComponentBase_GetSocketLocation_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetRightVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DEF42A0              		 offset:44f42a0                       

struct FVector UAkSoundVolumeComponentBase::GetRightVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetRightVector"));

	UAkSoundVolumeComponentBase_GetRightVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetRelativeTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BA24D90              		 offset:2024d90                       

struct FTransform UAkSoundVolumeComponentBase::GetRelativeTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetRelativeTransform"));

	UAkSoundVolumeComponentBase_GetRelativeTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetPhysicsVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APhysicsVolume*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E873FA0              		 offset:4e73fa0                       

class APhysicsVolume* UAkSoundVolumeComponentBase::GetPhysicsVolume()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetPhysicsVolume"));

	UAkSoundVolumeComponentBase_GetPhysicsVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetParentComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class USceneComponent*> Parents                        (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF759E40000              		 offset:440000                        

void UAkSoundVolumeComponentBase::GetParentComponents(TArray<class USceneComponent*>* Parents)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetParentComponents"));

	UAkSoundVolumeComponentBase_GetParentComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parents != nullptr)
		*Parents = params.Parents;
}


// Function Engine.SceneComponent.GetNumChildrenComponents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759AB2400              		 offset:b2400                         

int UAkSoundVolumeComponentBase::GetNumChildrenComponents()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetNumChildrenComponents"));

	UAkSoundVolumeComponentBase_GetNumChildrenComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetForwardVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D2338C0              		 offset:38338c0                       

struct FVector UAkSoundVolumeComponentBase::GetForwardVector()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetForwardVector"));

	UAkSoundVolumeComponentBase_GetForwardVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetComponentVelocity
// (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75BBE89E0              		 offset:21e89e0                       

struct FVector UAkSoundVolumeComponentBase::GetComponentVelocity()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetComponentVelocity"));

	UAkSoundVolumeComponentBase_GetComponentVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetChildrenComponents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bIncludeAllDescendants         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USceneComponent*> Children                       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF75A8660D0              		 offset:e660d0                        

void UAkSoundVolumeComponentBase::GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetChildrenComponents"));

	UAkSoundVolumeComponentBase_GetChildrenComponents_Params params;
	params.bIncludeAllDescendants = bIncludeAllDescendants;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Children != nullptr)
		*Children = params.Children;
}


// Function Engine.SceneComponent.GetChildComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ChildIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF75ECCA8C0              		 offset:52ca8c0                       

class USceneComponent* UAkSoundVolumeComponentBase::GetChildComponent(int ChildIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetChildComponent"));

	UAkSoundVolumeComponentBase_GetChildComponent_Params params;
	params.ChildIndex = ChildIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetAttachSocketName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AA44960              		 offset:1044960                       

struct FName UAkSoundVolumeComponentBase::GetAttachSocketName()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetAttachSocketName"));

	UAkSoundVolumeComponentBase_GetAttachSocketName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetAttachParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF759FE2C30              		 offset:5e2c30                        

class USceneComponent* UAkSoundVolumeComponentBase::GetAttachParent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetAttachParent"));

	UAkSoundVolumeComponentBase_GetAttachParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.GetAllSocketNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75AF977A0              		 offset:15977a0                       

TArray<struct FName> UAkSoundVolumeComponentBase::GetAllSocketNames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.GetAllSocketNames"));

	UAkSoundVolumeComponentBase_GetAllSocketNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.DoesSocketExist
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   InSocketName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75DBCA000              		 offset:41ca000                       

bool UAkSoundVolumeComponentBase::DoesSocketExist(const struct FName& InSocketName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.DoesSocketExist"));

	UAkSoundVolumeComponentBase_DoesSocketExist_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.SceneComponent.DetachFromParent
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bMaintainWorldPosition         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCallModify                    (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75A6874A0              		 offset:c874a0                        

void UAkSoundVolumeComponentBase::DetachFromParent(bool bMaintainWorldPosition, bool bCallModify)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function Engine.SceneComponent.DetachFromParent"));

	UAkSoundVolumeComponentBase_DetachFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;
	params.bCallModify = bCallModify;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
