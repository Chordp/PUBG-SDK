#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AkAudio_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AkAudio.AkAmbientSound.StopAmbientSound
struct AAkAmbientSound_StopAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.StartAmbientSound
struct AAkAmbientSound_StartAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.IsCurrentlyPlaying
struct AAkAmbientSound_IsCurrentlyPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.UseVolumesForRTPCs
struct UAkComponent_UseVolumesForRTPCs_Params
{
<<<<<<< HEAD
	bool*                                              inUseVolumesForRTPCs;                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               inUseVolumesForRTPCs;                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
<<<<<<< HEAD
	bool*                                              inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.UseIndoorCheck
struct UAkComponent_UseIndoorCheck_Params
{
<<<<<<< HEAD
	bool*                                              inUseIndoorCheck;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               inUseIndoorCheck;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.StopPlayingID
struct UAkComponent_StopPlayingID_Params
{
<<<<<<< HEAD
	int*                                               PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                PlayingID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.Stop
struct UAkComponent_Stop_Params
{
};

// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
<<<<<<< HEAD
	struct FString*                                    SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString*                                    SwitchState;                                              // (Parm, ZeroConstructor)
=======
	struct FString                                     SwitchGroup;                                              // (Parm, ZeroConstructor)
	struct FString                                     SwitchState;                                              // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
<<<<<<< HEAD
	bool*                                              bStopWhenOwnerDestroyed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               bStopWhenOwnerDestroyed;                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.SetRTPCValue
struct UAkComponent_SetRTPCValue_Params
{
<<<<<<< HEAD
	struct FString*                                    RTPC;                                                     // (Parm, ZeroConstructor)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     RTPC;                                                     // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
<<<<<<< HEAD
	float*                                             BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.SetMinVolumeRTPCUpdateInterval
struct UAkComponent_SetMinVolumeRTPCUpdateInterval_Params
{
<<<<<<< HEAD
	float*                                             Interval;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Interval;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
<<<<<<< HEAD
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.SetActiveListeners
struct UAkComponent_SetActiveListeners_Params
{
<<<<<<< HEAD
	int*                                               in_uListenerMask;                                         // (Parm, ZeroConstructor, IsPlainOldData)
=======
	int                                                in_uListenerMask;                                         // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
<<<<<<< HEAD
	struct FString*                                    Trigger;                                                  // (Parm, ZeroConstructor)
=======
	struct FString                                     Trigger;                                                  // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkComponent.PostAssociatedAkEvent
struct UAkComponent_PostAssociatedAkEvent_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEventByName
struct UAkComponent_PostAkEventByName_Params
{
<<<<<<< HEAD
	struct FString*                                    in_EventName;                                             // (Parm, ZeroConstructor)
=======
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.PostAkEvent
struct UAkComponent_PostAkEvent_Params
{
<<<<<<< HEAD
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    in_EventName;                                             // (Parm, ZeroConstructor)
=======
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     in_EventName;                                             // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.IsUsingVolumesForRTPCs
struct UAkComponent_IsUsingVolumesForRTPCs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.IsCurrentlyPlaying
struct UAkComponent_IsCurrentlyPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkComponent.CalculateRelativeSpeed
struct UAkComponent_CalculateRelativeSpeed_Params
{
<<<<<<< HEAD
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.UseReverbVolumes
struct UAkGameplayStatics_UseReverbVolumes_Params
{
<<<<<<< HEAD
	bool*                                              inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               inUseReverbVolumes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.UnloadBankByName
struct UAkGameplayStatics_UnloadBankByName_Params
{
<<<<<<< HEAD
	struct FString*                                    BankName;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.UnloadBank
struct UAkGameplayStatics_UnloadBank_Params
{
<<<<<<< HEAD
	class UAkAudioBank**                               Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    BankName;                                                 // (Parm, ZeroConstructor)
=======
	class UAkAudioBank*                                Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.StopProfilerCapture
struct UAkGameplayStatics_StopProfilerCapture_Params
{
};

// Function AkAudio.AkGameplayStatics.StopOutputCapture
struct UAkGameplayStatics_StopOutputCapture_Params
{
};

// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
struct UAkGameplayStatics_StopAllAmbientSounds_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.StopAll
struct UAkGameplayStatics_StopAll_Params
{
};

// Function AkAudio.AkGameplayStatics.StopActor
struct UAkGameplayStatics_StopActor_Params
{
<<<<<<< HEAD
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.StartProfilerCapture
struct UAkGameplayStatics_StartProfilerCapture_Params
{
<<<<<<< HEAD
	struct FString*                                    Filename;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.StartOutputCapture
struct UAkGameplayStatics_StartOutputCapture_Params
{
<<<<<<< HEAD
	struct FString*                                    Filename;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
struct UAkGameplayStatics_StartAllAmbientSounds_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
struct UAkGameplayStatics_SpawnAkComponentAtLocation_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (Parm, IsPlainOldData)
	bool*                                              AutoPost;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
	bool*                                              AutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	bool                                               AutoPost;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	bool                                               AutoDestroy;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UAkComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.SetSwitch
struct UAkGameplayStatics_SetSwitch_Params
{
<<<<<<< HEAD
	struct FName*                                      SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SwitchState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FName                                       SwitchGroup;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwitchState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.SetState
struct UAkGameplayStatics_SetState_Params
{
<<<<<<< HEAD
	struct FName*                                      StateGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FName                                       StateGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.SetRTPCValue
struct UAkGameplayStatics_SetRTPCValue_Params
{
<<<<<<< HEAD
	struct FName*                                      RTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FName                                       RTPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
struct UAkGameplayStatics_SetOutputBusVolume_Params
{
<<<<<<< HEAD
	float*                                             BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	float                                              BusVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.PostTrigger
struct UAkGameplayStatics_PostTrigger_Params
{
<<<<<<< HEAD
	struct FName*                                      Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FName                                       Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.PostEventByName
struct UAkGameplayStatics_PostEventByName_Params
{
<<<<<<< HEAD
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.PostEventAttached
struct UAkGameplayStatics_PostEventAttached_Params
{
<<<<<<< HEAD
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
=======
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
struct UAkGameplayStatics_PostEventAtLocationByName_Params
{
<<<<<<< HEAD
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (Parm, IsPlainOldData)
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseReverb;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseReverb;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.PostEventAtLocation
struct UAkGameplayStatics_PostEventAtLocation_Params
{
<<<<<<< HEAD
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator*                                   Orientation;                                              // (Parm, IsPlainOldData)
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              UseReverb;                                                // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseReverb;                                                // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.PostEvent
struct UAkGameplayStatics_PostEvent_Params
{
<<<<<<< HEAD
	class UAkAudioEvent**                              AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    EventName;                                                // (Parm, ZeroConstructor)
=======
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAttachedToDestroyed;                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.LoadInitBank
struct UAkGameplayStatics_LoadInitBank_Params
{
};

// Function AkAudio.AkGameplayStatics.LoadBanks
struct UAkGameplayStatics_LoadBanks_Params
{
<<<<<<< HEAD
	TArray<class UAkAudioBank*>*                       SoundBanks;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              SynchronizeSoundBanks;                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	TArray<class UAkAudioBank*>                        SoundBanks;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               SynchronizeSoundBanks;                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.LoadBankByName
struct UAkGameplayStatics_LoadBankByName_Params
{
<<<<<<< HEAD
	struct FString*                                    BankName;                                                 // (Parm, ZeroConstructor)
=======
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.LoadBank
struct UAkGameplayStatics_LoadBank_Params
{
<<<<<<< HEAD
	class UAkAudioBank**                               Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    BankName;                                                 // (Parm, ZeroConstructor)
=======
	class UAkAudioBank*                                Bank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     BankName;                                                 // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function AkAudio.AkGameplayStatics.GetAkComponent
struct UAkGameplayStatics_GetAkComponent_Params
{
<<<<<<< HEAD
	class USceneComponent**                            AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>*                      LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class USceneComponent*                             AttachToComponent;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       AttachPointName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       LocationType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class UAkComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AkAudio.AkGameplayStatics.ClearBanks
struct UAkGameplayStatics_ClearBanks_Params
{
};

// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
struct UAkGameplayStatics_AddOutputCaptureMarker_Params
{
<<<<<<< HEAD
	struct FString*                                    MarkerText;                                               // (Parm, ZeroConstructor)
=======
	struct FString                                     MarkerText;                                               // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
