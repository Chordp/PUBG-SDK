#pragma once

// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               TagToCheck;                                               // (Parm)
=======
	struct FGameplayTag                                TagToCheck;                                               // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (Parm, OutParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
struct UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (Parm, OutParm, ReferenceParm)
<<<<<<< HEAD
	struct FGameplayTag*                               Tag;                                                      // (Parm)
=======
	struct FGameplayTag                                Tag;                                                      // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               A;                                                        // (Parm)
	struct FString*                                    B;                                                        // (Parm, ZeroConstructor)
=======
	struct FGameplayTag                                A;                                                        // (Parm)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      A;                                                        // (Parm)
	struct FString*                                    B;                                                        // (Parm, ZeroConstructor)
=======
	struct FGameplayTagContainer                       A;                                                        // (Parm)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer*                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               A;                                                        // (Parm)
	struct FGameplayTag*                               B;                                                        // (Parm)
=======
	struct FGameplayTag                                A;                                                        // (Parm)
	struct FGameplayTag                                B;                                                        // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
struct UBlueprintGameplayTagLibrary_MatchesTag_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               TagOne;                                                   // (Parm)
	struct FGameplayTag*                               TagTwo;                                                   // (Parm)
	bool*                                              bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FGameplayTag                                TagOne;                                                   // (Parm)
	struct FGameplayTag                                TagTwo;                                                   // (Parm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
struct UBlueprintGameplayTagLibrary_MatchesAnyTags_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               TagOne;                                                   // (Parm)
	struct FGameplayTagContainer*                      OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FGameplayTag                                TagOne;                                                   // (Parm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      Value;                                                    // (Parm)
=======
	struct FGameplayTagContainer                       Value;                                                    // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               Value;                                                    // (Parm)
=======
	struct FGameplayTag                                Value;                                                    // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
<<<<<<< HEAD
	struct FGameplayTagQuery*                          TagQuery;                                                 // (Parm)
=======
	struct FGameplayTagQuery                           TagQuery;                                                 // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FGameplayTagQuery                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               SingleTag;                                                // (Parm)
=======
	struct FGameplayTag                                SingleTag;                                                // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
{
<<<<<<< HEAD
	TArray<struct FGameplayTag>*                       GameplayTags;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
=======
	TArray<struct FGameplayTag>                        GameplayTags;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               GameplayTag;                                              // (Parm)
=======
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
struct UBlueprintGameplayTagLibrary_HasTag_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag*                               Tag;                                                      // (Parm)
	bool*                                              bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
struct UBlueprintGameplayTagLibrary_HasAnyTags_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer*                      OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
struct UBlueprintGameplayTagLibrary_HasAllTags_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer*                      OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool*                                              bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
=======
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bExactMatch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
<<<<<<< HEAD
	TScriptInterface<class UGameplayTagAssetInterface>* TagContainerInterface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OtherContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
struct UBlueprintGameplayTagLibrary_GetTagName_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               GameplayTag;                                              // (Parm)
=======
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
struct UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
{
<<<<<<< HEAD
	class UObject**                                    WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery*                          GameplayTagQuery;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           GameplayTagQuery;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer*                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
{
<<<<<<< HEAD
	struct FGameplayTag*                               A;                                                        // (Parm)
	struct FGameplayTag*                               B;                                                        // (Parm)
=======
	struct FGameplayTag                                A;                                                        // (Parm)
	struct FGameplayTag                                B;                                                        // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
<<<<<<< HEAD
	TScriptInterface<class UGameplayTagAssetInterface>* TagContainerInterface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag*                               Tag;                                                      // (Parm)
=======
	TScriptInterface<class UGameplayTagAssetInterface> TagContainerInterface;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagQuery*                          TagQuery;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagQuery                           TagQuery;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
struct UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
{
<<<<<<< HEAD
	struct FGameplayTagContainer*                      GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
	TArray<struct FGameplayTag>                        GameplayTags;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
	struct FGameplayTagContainer                       InOutTagContainer;                                        // (Parm, OutParm, ReferenceParm)
<<<<<<< HEAD
	struct FGameplayTagContainer*                      InTagContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
=======
	struct FGameplayTagContainer                       InTagContainer;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
struct UBlueprintGameplayTagLibrary_AddGameplayTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (Parm, OutParm, ReferenceParm)
<<<<<<< HEAD
	struct FGameplayTag*                               Tag;                                                      // (Parm)
=======
	struct FGameplayTag                                Tag;                                                      // (Parm)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
