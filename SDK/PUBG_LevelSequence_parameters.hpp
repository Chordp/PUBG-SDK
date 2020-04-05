#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LevelSequence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
struct ULevelSequencePlayer_CreateLevelSequencePlayer_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence**                             LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings*        Settings;                                                 // (Parm)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovieSceneSequencePlaybackSettings         Settings;                                                 // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class ULevelSequencePlayer*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.SetSequence
struct ALevelSequenceActor_SetSequence_Params
{
<<<<<<< HEAD
	class ULevelSequence**                             InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class ULevelSequence*                              InSequence;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function LevelSequence.LevelSequenceActor.SetEventReceivers
struct ALevelSequenceActor_SetEventReceivers_Params
{
<<<<<<< HEAD
	TArray<class AActor*>*                             AdditionalReceivers;                                      // (Parm, ZeroConstructor)
=======
	TArray<class AActor*>                              AdditionalReceivers;                                      // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function LevelSequence.LevelSequenceActor.SetBinding
struct ALevelSequenceActor_SetBinding_Params
{
<<<<<<< HEAD
	struct FMovieSceneObjectBindingID*                 Binding;                                                  // (Parm)
	TArray<class AActor*>*                             Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool*                                              bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FMovieSceneObjectBindingID                  Binding;                                                  // (Parm)
	TArray<class AActor*>                              Actors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function LevelSequence.LevelSequenceActor.ResetBindings
struct ALevelSequenceActor_ResetBindings_Params
{
};

// Function LevelSequence.LevelSequenceActor.ResetBinding
struct ALevelSequenceActor_ResetBinding_Params
{
<<<<<<< HEAD
	struct FMovieSceneObjectBindingID*                 Binding;                                                  // (Parm)
=======
	struct FMovieSceneObjectBindingID                  Binding;                                                  // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function LevelSequence.LevelSequenceActor.RemoveBinding
struct ALevelSequenceActor_RemoveBinding_Params
{
<<<<<<< HEAD
	struct FMovieSceneObjectBindingID*                 Binding;                                                  // (Parm)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FMovieSceneObjectBindingID                  Binding;                                                  // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function LevelSequence.LevelSequenceActor.GetSequence
struct ALevelSequenceActor_GetSequence_Params
{
<<<<<<< HEAD
	bool*                                              Load;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
=======
	bool                                               Load;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	class ULevelSequence*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LevelSequence.LevelSequenceActor.AddBinding
struct ALevelSequenceActor_AddBinding_Params
{
<<<<<<< HEAD
	struct FMovieSceneObjectBindingID*                 Binding;                                                  // (Parm)
	class AActor**                                     Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FMovieSceneObjectBindingID                  Binding;                                                  // (Parm)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowBindingsFromAsset;                                  // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function LevelSequence.LevelSequenceBurnIn.SetSettings
struct ULevelSequenceBurnIn_SetSettings_Params
{
<<<<<<< HEAD
	class UObject**                                    InSettings;                                               // (Parm, ZeroConstructor, IsPlainOldData)
=======
	class UObject*                                     InSettings;                                               // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
struct ULevelSequenceBurnIn_GetSettingsClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
