#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AudioMixer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
struct USubmixEffectDynamicsProcessorPreset_SetSettings_Params
{
<<<<<<< HEAD
	struct FSubmixEffectDynamicsProcessorSettings*     InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FSubmixEffectDynamicsProcessorSettings      InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
struct UAudioMixerBlueprintLibrary_SetBypassSourceEffectChainEntry_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain**              PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bBypassed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBypassed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
struct UAudioMixerBlueprintLibrary_RemoveSourceEffectFromPresetChain_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain**              PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EntryIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_RemoveMasterSubmixEffect_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset**                   SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
struct UAudioMixerBlueprintLibrary_GetNumberOfEntriesInSourceEffectChain_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain**              PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
struct UAudioMixerBlueprintLibrary_ClearMasterSubmixEffects_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
struct UAudioMixerBlueprintLibrary_AddSourceEffectToPresetChain_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain**              PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSourceEffectChainEntry*                    Entry;                                                    // (Parm, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               PresetChain;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSourceEffectChainEntry                     Entry;                                                    // (Parm, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
struct UAudioMixerBlueprintLibrary_AddMasterSubmixEffect_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset**                   SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USoundEffectSubmixPreset*                    SubmixEffectPreset;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
struct USubmixEffectReverbPreset_SetSettingsWithReverbEffect_Params
{
<<<<<<< HEAD
	class UReverbEffect**                              InReverbEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             WetLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
=======
	class UReverbEffect*                               InReverbEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
struct USubmixEffectReverbPreset_SetSettings_Params
{
<<<<<<< HEAD
	struct FSubmixEffectReverbSettings*                InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FSubmixEffectReverbSettings                 InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
struct USubmixEffectSubmixEQPreset_SetSettings_Params
{
<<<<<<< HEAD
	struct FSubmixEffectSubmixEQSettings*              InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FSubmixEffectSubmixEQSettings               InSettings;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.SynthComponent.Stop
struct USynthComponent_Stop_Params
{
};

// Function AudioMixer.SynthComponent.Start
struct USynthComponent_Start_Params
{
};

// Function AudioMixer.SynthComponent.SetSubmixSend
struct USynthComponent_SetSubmixSend_Params
{
<<<<<<< HEAD
	class USoundSubmix**                               Submix;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             SendLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USoundSubmix*                                Submix;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SendLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AudioMixer.SynthComponent.IsPlaying
struct USynthComponent_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
