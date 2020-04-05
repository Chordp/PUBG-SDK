// PUBG (7.1.6.5) SDK

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
// FunctionAddress:0x00007FF71C731F30              		 offset:4961f30                       

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
// FunctionAddress:0x00007FF71C731CD0              		 offset:4961cd0                       

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
// FunctionAddress:0x00007FF71C730220              		 offset:4960220                       

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
// bool*                          inUseVolumesForRTPCs           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C732350              		 offset:4962350                       

void UAkComponent::UseVolumesForRTPCs(bool* inUseVolumesForRTPCs)
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
// bool*                          inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C732200              		 offset:4962200                       

void UAkComponent::UseReverbVolumes(bool* inUseReverbVolumes)
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
// bool*                          inUseIndoorCheck               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C732170              		 offset:4962170                       

void UAkComponent::UseIndoorCheck(bool* inUseIndoorCheck)
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
// int*                           PlayingID                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731F70              		 offset:4961f70                       

void UAkComponent::StopPlayingID(int* PlayingID)
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
// FunctionAddress:0x00007FF71C731E10              		 offset:4961e10                       

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
// struct FString*                SwitchGroup                    (Parm, ZeroConstructor)
// struct FString*                SwitchState                    (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C7317B0              		 offset:49617b0                       

void UAkComponent::SetSwitch(struct FString* SwitchGroup, struct FString* SwitchState)
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
// bool*                          bStopWhenOwnerDestroyed        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731720              		 offset:4961720                       

void UAkComponent::SetStopWhenOwnerDestroyed(bool* bStopWhenOwnerDestroyed)
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
// struct FString*                RTPC                           (Parm, ZeroConstructor)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C7313C0              		 offset:49613c0                       

void UAkComponent::SetRTPCValue(struct FString* RTPC, float* Value, int* InterpolationTimeMs)
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
// float*                         BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731280              		 offset:4961280                       

void UAkComponent::SetOutputBusVolume(float* BusVolume)
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
// float*                         Interval                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731200              		 offset:4961200                       

void UAkComponent::SetMinVolumeRTPCUpdateInterval(float* Interval)
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
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731180              		 offset:4961180                       

void UAkComponent::SetAttenuationScalingFactor(float* Value)
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
// int*                           in_uListenerMask               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C7310F0              		 offset:49610f0                       

void UAkComponent::SetActiveListeners(int* in_uListenerMask)
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
// struct FString*                Trigger                        (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C730F40              		 offset:4960f40                       

void UAkComponent::PostTrigger(struct FString* Trigger)
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
// FunctionAddress:0x00007FF71C7306B0              		 offset:49606b0                       

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
// struct FString*                in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C730600              		 offset:4960600                       

int UAkComponent::PostAkEventByName(struct FString* in_EventName)
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
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                in_EventName                   (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C730510              		 offset:4960510                       

int UAkComponent::PostAkEvent(class UAkAudioEvent** AkEvent, struct FString* in_EventName)
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
// FunctionAddress:0x00007FF71C730280              		 offset:4960280                       

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
// FunctionAddress:0x00007FF71C730250              		 offset:4960250                       

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
// FunctionAddress:0x00007FF71C7301E0              		 offset:49601e0                       

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
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C730000              		 offset:4960000                       

void UAkComponent::CalculateRelativeSpeed(float* DeltaTime)
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
// bool*                          inUseReverbVolumes             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C732290              		 offset:4962290                       

void UAkGameplayStatics::STATIC_UseReverbVolumes(bool* inUseReverbVolumes, class AActor** Actor)
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
// struct FString*                BankName                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C7320E0              		 offset:49620e0                       

void UAkGameplayStatics::STATIC_UnloadBankByName(struct FString* BankName)
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
// class UAkAudioBank**           Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                BankName                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C732010              		 offset:4962010                       

void UAkGameplayStatics::STATIC_UnloadBank(class UAkAudioBank** Bank, struct FString* BankName)
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
// FunctionAddress:0x00007FF71C731FF0              		 offset:4961ff0                       

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
// FunctionAddress:0x00007FF71C731F50              		 offset:4961f50                       

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
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731EC0              		 offset:4961ec0                       

void UAkGameplayStatics::STATIC_StopAllAmbientSounds(class UObject** WorldContextObject)
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
// FunctionAddress:0x00007FF71C731EA0              		 offset:4961ea0                       

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
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731E30              		 offset:4961e30                       

void UAkGameplayStatics::STATIC_StopActor(class AActor** Actor)
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
// struct FString*                Filename                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C731D80              		 offset:4961d80                       

void UAkGameplayStatics::STATIC_StartProfilerCapture(struct FString* Filename)
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
// struct FString*                Filename                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C731CF0              		 offset:4961cf0                       

void UAkGameplayStatics::STATIC_StartOutputCapture(struct FString* Filename)
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
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731C60              		 offset:4961c60                       

void UAkGameplayStatics::STATIC_StartAllAmbientSounds(class UObject** WorldContextObject)
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
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, IsPlainOldData)
// struct FRotator*               Orientation                    (Parm, IsPlainOldData)
// bool*                          AutoPost                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                EventName                      (Parm, ZeroConstructor)
// bool*                          AutoDestroy                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71C731A30              		 offset:4961a30                       

class UAkComponent* UAkGameplayStatics::STATIC_SpawnAkComponentAtLocation(class UObject** WorldContextObject, class UAkAudioEvent** AkEvent, struct FVector* Location, struct FRotator* Orientation, bool* AutoPost, struct FString* EventName, bool* AutoDestroy)
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
// struct FName*                  SwitchGroup                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SwitchState                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731940              		 offset:4961940                       

void UAkGameplayStatics::STATIC_SetSwitch(struct FName* SwitchGroup, struct FName* SwitchState, class AActor** Actor)
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
// struct FName*                  StateGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  State                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731670              		 offset:4961670                       

void UAkGameplayStatics::STATIC_SetState(struct FName* StateGroup, struct FName* State)
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
// struct FName*                  RTPC                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InterpolationTimeMs            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731530              		 offset:4961530                       

void UAkGameplayStatics::STATIC_SetRTPCValue(struct FName* RTPC, float* Value, int* InterpolationTimeMs, class AActor** Actor)
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
// float*                         BusVolume                      (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731300              		 offset:4961300                       

void UAkGameplayStatics::STATIC_SetOutputBusVolume(float* BusVolume, class AActor** Actor)
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
// struct FName*                  Trigger                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C731040              		 offset:4961040                       

void UAkGameplayStatics::STATIC_PostTrigger(struct FName* Trigger, class AActor** Actor)
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
// struct FString*                EventName                      (Parm, ZeroConstructor)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C730E20              		 offset:4960e20                       

void UAkGameplayStatics::STATIC_PostEventByName(struct FString* EventName, class AActor** Actor, bool* bStopWhenAttachedToDestroyed)
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
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C730C30              		 offset:4960c30                       

int UAkGameplayStatics::STATIC_PostEventAttached(class UAkAudioEvent** AkEvent, class AActor** Actor, struct FName* AttachPointName, bool* bStopWhenAttachedToDestroyed, struct FString* EventName)
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
// struct FString*                EventName                      (Parm, ZeroConstructor)
// struct FVector*                Location                       (Parm, IsPlainOldData)
// struct FRotator*               Orientation                    (Parm, IsPlainOldData)
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseReverb                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C730A80              		 offset:4960a80                       

void UAkGameplayStatics::STATIC_PostEventAtLocationByName(struct FString* EventName, struct FVector* Location, struct FRotator* Orientation, class UObject** WorldContextObject, bool* UseReverb)
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
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, IsPlainOldData)
// struct FRotator*               Orientation                    (Parm, IsPlainOldData)
// struct FString*                EventName                      (Parm, ZeroConstructor)
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UseReverb                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C730890              		 offset:4960890                       

int UAkGameplayStatics::STATIC_PostEventAtLocation(class UAkAudioEvent** AkEvent, struct FVector* Location, struct FRotator* Orientation, struct FString* EventName, class UObject** WorldContextObject, bool* UseReverb)
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
// class UAkAudioEvent**          AkEvent                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bStopWhenAttachedToDestroyed   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                EventName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C7306E0              		 offset:49606e0                       

int UAkGameplayStatics::STATIC_PostEvent(class UAkAudioEvent** AkEvent, class AActor** Actor, bool* bStopWhenAttachedToDestroyed, struct FString* EventName)
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
// FunctionAddress:0x00007FF71C7304F0              		 offset:49604f0                       

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
// TArray<class UAkAudioBank*>*   SoundBanks                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          SynchronizeSoundBanks          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C730400              		 offset:4960400                       

void UAkGameplayStatics::STATIC_LoadBanks(TArray<class UAkAudioBank*>* SoundBanks, bool* SynchronizeSoundBanks)
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
// struct FString*                BankName                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C730370              		 offset:4960370                       

void UAkGameplayStatics::STATIC_LoadBankByName(struct FString* BankName)
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
// class UAkAudioBank**           Bank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                BankName                       (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C7302A0              		 offset:49602a0                       

void UAkGameplayStatics::STATIC_LoadBank(class UAkAudioBank** Bank, struct FString* BankName)
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
// class USceneComponent**        AttachToComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  AttachPointName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (Parm, IsPlainOldData)
// TEnumAsByte<EAttachLocation>*  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAkComponent*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
// FunctionAddress:0x00007FF71C7300A0              		 offset:49600a0                       

class UAkComponent* UAkGameplayStatics::STATIC_GetAkComponent(class USceneComponent** AttachToComponent, struct FName* AttachPointName, struct FVector* Location, TEnumAsByte<EAttachLocation>* LocationType)
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
// FunctionAddress:0x00007FF71C730080              		 offset:4960080                       

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
// struct FString*                MarkerText                     (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C72FF70              		 offset:495ff70                       

void UAkGameplayStatics::STATIC_AddOutputCaptureMarker(struct FString* MarkerText)
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
