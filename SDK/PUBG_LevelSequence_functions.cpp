// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LevelSequence_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence**         LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings* Settings                       (Parm)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71A337850              		 offset:2567850                       

class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject** WorldContextObject, class ULevelSequence** LevelSequence, struct FMovieSceneSequencePlaybackSettings* Settings)
=======
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          LevelSequence                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FMovieSceneSequencePlaybackSettings Settings                       (Parm)
// class ULevelSequencePlayer*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D9EDE9F0              		 offset:351e9f0                       

class ULevelSequencePlayer* ULevelSequencePlayer::STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer"));

	ULevelSequencePlayer_CreateLevelSequencePlayer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelSequence = LevelSequence;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class ULevelSequence**         InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A337FA0              		 offset:2567fa0                       

void ALevelSequenceActor::SetSequence(class ULevelSequence** InSequence)
=======
// class ULevelSequence*          InSequence                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D9EDF140              		 offset:351f140                       

void ALevelSequenceActor::SetSequence(class ULevelSequence* InSequence)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.SetSequence"));

	ALevelSequenceActor_SetSequence_Params params;
	params.InSequence = InSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetEventReceivers
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// TArray<class AActor*>*         AdditionalReceivers            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71A337EA0              		 offset:2567ea0                       

void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*>* AdditionalReceivers)
=======
// TArray<class AActor*>          AdditionalReceivers            (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6D9EDF040              		 offset:351f040                       

void ALevelSequenceActor::SetEventReceivers(TArray<class AActor*> AdditionalReceivers)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.SetEventReceivers"));

	ALevelSequenceActor_SetEventReceivers_Params params;
	params.AdditionalReceivers = AdditionalReceivers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.SetBinding
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FMovieSceneObjectBindingID* Binding                        (Parm)
// TArray<class AActor*>*         Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A337CA0              		 offset:2567ca0                       

void ALevelSequenceActor::SetBinding(struct FMovieSceneObjectBindingID* Binding, TArray<class AActor*>* Actors, bool* bAllowBindingsFromAsset)
=======
// struct FMovieSceneObjectBindingID Binding                        (Parm)
// TArray<class AActor*>          Actors                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D9EDEE40              		 offset:351ee40                       

void ALevelSequenceActor::SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.SetBinding"));

	ALevelSequenceActor_SetBinding_Params params;
	params.Binding = Binding;
	params.Actors = Actors;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ResetBindings
// (Final, Native, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71A337C50              		 offset:2567c50                       
=======
// FunctionAddress:0x00007FF6D9EDEDF0              		 offset:351edf0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void ALevelSequenceActor::ResetBindings()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.ResetBindings"));

	ALevelSequenceActor_ResetBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.ResetBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FMovieSceneObjectBindingID* Binding                        (Parm)
// FunctionAddress:0x00007FF71A337B60              		 offset:2567b60                       

void ALevelSequenceActor::ResetBinding(struct FMovieSceneObjectBindingID* Binding)
=======
// struct FMovieSceneObjectBindingID Binding                        (Parm)
// FunctionAddress:0x00007FF6D9EDED00              		 offset:351ed00                       

void ALevelSequenceActor::ResetBinding(const struct FMovieSceneObjectBindingID& Binding)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.ResetBinding"));

	ALevelSequenceActor_ResetBinding_Params params;
	params.Binding = Binding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.RemoveBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FMovieSceneObjectBindingID* Binding                        (Parm)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A337A50              		 offset:2567a50                       

void ALevelSequenceActor::RemoveBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor)
=======
// struct FMovieSceneObjectBindingID Binding                        (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D9EDEBF0              		 offset:351ebf0                       

void ALevelSequenceActor::RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.RemoveBinding"));

	ALevelSequenceActor_RemoveBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceActor.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
<<<<<<< HEAD
// bool*                          Load                           (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71A3379B0              		 offset:25679b0                       

class ULevelSequence* ALevelSequenceActor::GetSequence(bool* Load)
=======
// bool                           Load                           (Parm, ZeroConstructor, IsPlainOldData)
// class ULevelSequence*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D9EDEB50              		 offset:351eb50                       

class ULevelSequence* ALevelSequenceActor::GetSequence(bool Load)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.GetSequence"));

	ALevelSequenceActor_GetSequence_Params params;
	params.Load = Load;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LevelSequence.LevelSequenceActor.AddBinding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// struct FMovieSceneObjectBindingID* Binding                        (Parm)
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71A337700              		 offset:2567700                       

void ALevelSequenceActor::AddBinding(struct FMovieSceneObjectBindingID* Binding, class AActor** Actor, bool* bAllowBindingsFromAsset)
=======
// struct FMovieSceneObjectBindingID Binding                        (Parm)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowBindingsFromAsset        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D9EDE8A0              		 offset:351e8a0                       

void ALevelSequenceActor::AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceActor.AddBinding"));

	ALevelSequenceActor_AddBinding_Params params;
	params.Binding = Binding;
	params.Actor = Actor;
	params.bAllowBindingsFromAsset = bAllowBindingsFromAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceBurnIn.SetSettings
// (Event, Public, BlueprintEvent)
// Parameters:
<<<<<<< HEAD
// class UObject**                InSettings                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71BF88F00              		 offset:41b8f00                       

void ULevelSequenceBurnIn::SetSettings(class UObject** InSettings)
=======
// class UObject*                 InSettings                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void ULevelSequenceBurnIn::SetSettings(class UObject* InSettings)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceBurnIn.SetSettings"));

	ULevelSequenceBurnIn_SetSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF719A6AE80              		 offset:1c9ae80                       
=======
// FunctionAddress:0x00007FF6D83BD080              		 offset:19fd080                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

class UClass* ULevelSequenceBurnIn::GetSettingsClass()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass"));

	ULevelSequenceBurnIn_GetSettingsClass_Params params;

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
