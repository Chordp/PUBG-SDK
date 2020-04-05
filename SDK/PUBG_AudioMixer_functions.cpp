// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AudioMixer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDynamicsProcessorSettings* InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71A7BC870              		 offset:29ec870                       

void USubmixEffectDynamicsProcessorPreset::SetSettings(struct FSubmixEffectDynamicsProcessorSettings* InSettings)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings"));

	USubmixEffectDynamicsProcessorPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain** PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bBypassed                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BC740              		 offset:29ec740                       

void UAudioMixerBlueprintLibrary::STATIC_SetBypassSourceEffectChainEntry(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, int* EntryIndex, bool* bBypassed)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry"));

	UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;
	params.bBypassed = bBypassed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain** PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           EntryIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BC650              		 offset:29ec650                       

void UAudioMixerBlueprintLibrary::STATIC_RemoveSourceEffectFromPresetChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, int* EntryIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain"));

	UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset** SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BC5A0              		 offset:29ec5a0                       

void UAudioMixerBlueprintLibrary::STATIC_RemoveMasterSubmixEffect(class UObject** WorldContextObject, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect"));

	UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain** PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BC4B0              		 offset:29ec4b0                       

int UAudioMixerBlueprintLibrary::STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain"));

	UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BC440              		 offset:29ec440                       

void UAudioMixerBlueprintLibrary::STATIC_ClearMasterSubmixEffects(class UObject** WorldContextObject)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects"));

	UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSourcePresetChain** PresetChain                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSourceEffectChainEntry* Entry                          (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BC340              		 offset:29ec340                       

void UAudioMixerBlueprintLibrary::STATIC_AddSourceEffectToPresetChain(class UObject** WorldContextObject, class USoundEffectSourcePresetChain** PresetChain, struct FSourceEffectChainEntry* Entry)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain"));

	UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PresetChain = PresetChain;
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class USoundEffectSubmixPreset** SubmixEffectPreset             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BC290              		 offset:29ec290                       

void UAudioMixerBlueprintLibrary::STATIC_AddMasterSubmixEffect(class UObject** WorldContextObject, class USoundEffectSubmixPreset** SubmixEffectPreset)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect"));

	UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SubmixEffectPreset = SubmixEffectPreset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UReverbEffect**          InReverbEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float*                         WetLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BCA90              		 offset:29eca90                       

void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(class UReverbEffect** InReverbEffect, float* WetLevel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect"));

	USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params params;
	params.InReverbEffect = InReverbEffect;
	params.WetLevel = WetLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectReverbSettings* InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71A7BC920              		 offset:29ec920                       

void USubmixEffectReverbPreset::SetSettings(struct FSubmixEffectReverbSettings* InSettings)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectReverbPreset.SetSettings"));

	USubmixEffectReverbPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSubmixEffectSubmixEQSettings* InSettings                     (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71A7BC9E0              		 offset:29ec9e0                       

void USubmixEffectSubmixEQPreset::SetSettings(struct FSubmixEffectSubmixEQSettings* InSettings)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings"));

	USubmixEffectSubmixEQPreset_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71A7BCC50              		 offset:29ecc50                       

void USynthComponent::Stop()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.Stop"));

	USynthComponent_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.Start
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71A7BCC30              		 offset:29ecc30                       

void USynthComponent::Start()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.Start"));

	USynthComponent_Start_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.SetSubmixSend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix**           Submix                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         SendLevel                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BCB60              		 offset:29ecb60                       

void USynthComponent::SetSubmixSend(class USoundSubmix** Submix, float* SendLevel)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.SetSubmixSend"));

	USynthComponent_SetSubmixSend_Params params;
	params.Submix = Submix;
	params.SendLevel = SendLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AudioMixer.SynthComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71A7BC570              		 offset:29ec570                       

bool USynthComponent::IsPlaying()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function AudioMixer.SynthComponent.IsPlaying"));

	USynthComponent_IsPlaying_Params params;

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
