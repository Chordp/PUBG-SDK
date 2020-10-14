// PUBG (8.3.5.39) SDK

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
// FunctionAddress:0x00007FF62B46E920              		 offset:299e920                       

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
// FunctionAddress:0x00007FF62B46E6C0              		 offset:299e6c0                       

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
// FunctionAddress:0x00007FF62B46CC10              		 offset:299cc10                       

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
// FunctionAddress:0x00007FF62B46ED40              		 offset:299ed40                       

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
// FunctionAddress:0x00007FF62B46EBF0              		 offset:299ebf0                       

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
// FunctionAddress:0x00007FF62B46EB60              		 offset:299eb60                       

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
// FunctionAddress:0x00007FF62B46E960              		 offset:299e960                       

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
// FunctionAddress:0x00007FF62B46E800              		 offset:299e800                       

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
// FunctionAddress:0x00007FF62B46E1A0              		 offset:299e1a0                       

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
// FunctionAddress:0x00007FF62B46E110              		 offset:299e110                       

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
// FunctionAddress:0x00007FF62B46DDB0              		 offset:299ddb0                       

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
// FunctionAddress:0x00007FF62B46DC70              		 offset:299dc70                       

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
// FunctionAddress:0x00007FF62B46DBF0              		 offset:299dbf0                       

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
// FunctionAddress:0x00007FF62B46DB70              		 offset:299db70                       

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
// FunctionAddress:0x00007FF62B46DAE0              		 offset:299dae0                       

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
// FunctionAddress:0x00007FF62B46D930              		 offset:299d930                       

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
// FunctionAddress:0x00007FF62B46D0A0              		 offset:299d0a0                       

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
// FunctionAddress:0x00007FF62B46CFF0              		 offset:299cff0                       

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
// FunctionAddress:0x00007FF62B46CF00              		 offset:299cf00                       

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
// FunctionAddress:0x00007FF62B46CC70              		 offset:299cc70                       

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
// FunctionAddress:0x00007FF62B46CC40              		 offset:299cc40                       

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
// FunctionAddress:0x00007FF62B46CBD0              		 offset:299cbd0                       

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
// FunctionAddress:0x00007FF62B46C9F0              		 offset:299c9f0                       

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


// Function AkAudio.AkGameplayStatics.UseReverbVolumes
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46EC80              		 offset:299ec80                       

void UAkGameplayStatics::STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UseReverbVolumes"));

	UAkGameplayStatics_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UnloadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B46EAD0              		 offset:299ead0                       

void UAkGameplayStatics::STATIC_UnloadBankByName(const struct FString& BankName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UnloadBankByName"));

	UAkGameplayStatics_UnloadBankByName_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.UnloadBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B46EA00              		 offset:299ea00                       

void UAkGameplayStatics::STATIC_UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.UnloadBank"));

	UAkGameplayStatics_UnloadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF62B46E9E0              		 offset:299e9e0                       

void UAkGameplayStatics::STATIC_StopProfilerCapture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopProfilerCapture"));

	UAkGameplayStatics_StopProfilerCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF62B46E940              		 offset:299e940                       

void UAkGameplayStatics::STATIC_StopOutputCapture()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopOutputCapture"));

	UAkGameplayStatics_StopOutputCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46E8B0              		 offset:299e8b0                       

void UAkGameplayStatics::STATIC_StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds"));

	UAkGameplayStatics_StopAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopAll
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF62B46E890              		 offset:299e890                       

void UAkGameplayStatics::STATIC_StopAll()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopAll"));

	UAkGameplayStatics_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StopActor
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46E820              		 offset:299e820                       

void UAkGameplayStatics::STATIC_StopActor(class AActor* Actor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StopActor"));

	UAkGameplayStatics_StopActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartProfilerCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B46E770              		 offset:299e770                       

void UAkGameplayStatics::STATIC_StartProfilerCapture(const struct FString& Filename)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartProfilerCapture"));

	UAkGameplayStatics_StartProfilerCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartOutputCapture
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B46E6E0              		 offset:299e6e0                       

void UAkGameplayStatics::STATIC_StartOutputCapture(const struct FString& Filename)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartOutputCapture"));

	UAkGameplayStatics_StartOutputCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46E650              		 offset:299e650                       

void UAkGameplayStatics::STATIC_StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds"));

	UAkGameplayStatics_StartAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// bool                           AutoPost                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// bool                           AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF62B46E420              		 offset:299e420                       

class UAkComponent* UAkGameplayStatics::STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation"));

	UAkGameplayStatics_SpawnAkComponentAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.AutoPost = AutoPost;
	params.EventName = EventName;
	params.AutoDestroy = AutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.SetSwitch
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SwitchState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46E330              		 offset:299e330                       

void UAkGameplayStatics::STATIC_SetSwitch(const struct FName& SwitchGroup, const struct FName& SwitchState, class AActor* Actor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetSwitch"));

	UAkGameplayStatics_SetSwitch_Params params;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetState
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   StateGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   State                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46E060              		 offset:299e060                       

void UAkGameplayStatics::STATIC_SetState(const struct FName& StateGroup, const struct FName& State)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetState"));

	UAkGameplayStatics_SetState_Params params;
	params.StateGroup = StateGroup;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetRTPCValue
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   RTPC                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46DF20              		 offset:299df20                       

void UAkGameplayStatics::STATIC_SetRTPCValue(const struct FName& RTPC, float Value, int InterpolationTimeMs, class AActor* Actor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetRTPCValue"));

	UAkGameplayStatics_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46DCF0              		 offset:299dcf0                       

void UAkGameplayStatics::STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.SetOutputBusVolume"));

	UAkGameplayStatics_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostTrigger
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FName                   Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46DA30              		 offset:299da30                       

void UAkGameplayStatics::STATIC_PostTrigger(const struct FName& Trigger, class AActor* Actor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostTrigger"));

	UAkGameplayStatics_PostTrigger_Params params;
	params.Trigger = Trigger;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46D810              		 offset:299d810                       

void UAkGameplayStatics::STATIC_PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventByName"));

	UAkGameplayStatics_PostEventByName_Params params;
	params.EventName = EventName;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventAttached
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B46D620              		 offset:299d620                       

int UAkGameplayStatics::STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAttached"));

	UAkGameplayStatics_PostEventAttached_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.AttachPointName = AttachPointName;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseReverb                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46D470              		 offset:299d470                       

void UAkGameplayStatics::STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject, bool UseReverb)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName"));

	UAkGameplayStatics_PostEventAtLocationByName_Params params;
	params.EventName = EventName;
	params.Location = Location;
	params.Orientation = Orientation;
	params.WorldContextObject = WorldContextObject;
	params.UseReverb = UseReverb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.PostEventAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Orientation                    (Parm, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseReverb                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B46D280              		 offset:299d280                       

int UAkGameplayStatics::STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject, bool UseReverb)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEventAtLocation"));

	UAkGameplayStatics_PostEventAtLocation_Params params;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;
	params.UseReverb = UseReverb;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.PostEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*           AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B46D0D0              		 offset:299d0d0                       

int UAkGameplayStatics::STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.PostEvent"));

	UAkGameplayStatics_PostEvent_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.LoadInitBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF62B46CEE0              		 offset:299cee0                       

void UAkGameplayStatics::STATIC_LoadInitBank()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadInitBank"));

	UAkGameplayStatics_LoadInitBank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBanks
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class UAkAudioBank*>    SoundBanks                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           SynchronizeSoundBanks          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B46CDF0              		 offset:299cdf0                       

void UAkGameplayStatics::STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBanks"));

	UAkGameplayStatics_LoadBanks_Params params;
	params.SoundBanks = SoundBanks;
	params.SynchronizeSoundBanks = SynchronizeSoundBanks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBankByName
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 BankName                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B46CD60              		 offset:299cd60                       

void UAkGameplayStatics::STATIC_LoadBankByName(const struct FString& BankName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBankByName"));

	UAkGameplayStatics_LoadBankByName_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.LoadBank
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkAudioBank*            Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 BankName                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B46CC90              		 offset:299cc90                       

void UAkGameplayStatics::STATIC_LoadBank(class UAkAudioBank* Bank, const struct FString& BankName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.LoadBank"));

	UAkGameplayStatics_LoadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.GetAkComponent
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class USceneComponent*         AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>   LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF62B46CA90              		 offset:299ca90                       

class UAkComponent* UAkGameplayStatics::STATIC_GetAkComponent(class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<EAttachLocation> LocationType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.GetAkComponent"));

	UAkGameplayStatics_GetAkComponent_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkGameplayStatics.ClearBanks
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// FunctionAddress:0x00007FF62B46CA70              		 offset:299ca70                       

void UAkGameplayStatics::STATIC_ClearBanks()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.ClearBanks"));

	UAkGameplayStatics_ClearBanks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 MarkerText                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B46C960              		 offset:299c960                       

void UAkGameplayStatics::STATIC_AddOutputCaptureMarker(const struct FString& MarkerText)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker"));

	UAkGameplayStatics_AddOutputCaptureMarker_Params params;
	params.MarkerText = MarkerText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
