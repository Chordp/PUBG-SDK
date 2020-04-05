// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GameplayTags_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag*           TagToCheck                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430DB0              		 offset:660db0                        

bool UGameplayTagAssetInterface::HasMatchingGameplayTag(struct FGameplayTag* TagToCheck)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag"));

	UGameplayTagAssetInterface_HasMatchingGameplayTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer*  TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430B40              		 offset:660b40                        

bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags"));

	UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer*  TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184307A0              		 offset:6607a0                        

bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags"));

	UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm)
// FunctionAddress:0x00007FF718430630              		 offset:660630                        

void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags"));

	UGameplayTagAssetInterface_GetOwnedGameplayTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm, ReferenceParm)
// struct FGameplayTag*           Tag                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718431BC0              		 offset:661bc0                        

bool UBlueprintGameplayTagLibrary::STATIC_RemoveGameplayTag(struct FGameplayTag* Tag, struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag"));

	UBlueprintGameplayTagLibrary_RemoveGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           A                              (Parm)
// struct FString*                B                              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718431A90              		 offset:661a90                        

bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_TagTag(struct FGameplayTag* A, struct FString* B)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag"));

	UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  A                              (Parm)
// struct FString*                B                              (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718431910              		 offset:661910                        

bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_TagContainerTagContainer(struct FGameplayTagContainer* A, struct FString* B)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer"));

	UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer*  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184317C0              		 offset:6617c0                        

bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTagContainer(struct FGameplayTagContainer* A, struct FGameplayTagContainer* B)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer"));

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           A                              (Parm)
// struct FGameplayTag*           B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718431700              		 offset:661700                        

bool UBlueprintGameplayTagLibrary::STATIC_NotEqual_GameplayTag(struct FGameplayTag* A, struct FGameplayTag* B)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag"));

	UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           TagOne                         (Parm)
// struct FGameplayTag*           TagTwo                         (Parm)
// bool*                          bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718431610              		 offset:661610                        

bool UBlueprintGameplayTagLibrary::STATIC_MatchesTag(struct FGameplayTag* TagOne, struct FGameplayTag* TagTwo, bool* bExactMatch)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag"));

	UBlueprintGameplayTagLibrary_MatchesTag_Params params;
	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           TagOne                         (Parm)
// struct FGameplayTagContainer*  OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184314C0              		 offset:6614c0                        

bool UBlueprintGameplayTagLibrary::STATIC_MatchesAnyTags(struct FGameplayTag* TagOne, struct FGameplayTagContainer* OtherContainer, bool* bExactMatch)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags"));

	UBlueprintGameplayTagLibrary_MatchesAnyTags_Params params;
	params.TagOne = TagOne;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  Value                          (Parm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF7184313A0              		 offset:6613a0                        

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTagContainer(struct FGameplayTagContainer* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           Value                          (Parm)
// struct FGameplayTag            ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718431310              		 offset:661310                        

struct FGameplayTag UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTag(struct FGameplayTag* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag"));

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagQuery*      TagQuery                       (Parm)
// struct FGameplayTagQuery       ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF7184311D0              		 offset:6611d0                        

struct FGameplayTagQuery UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagQuery(struct FGameplayTagQuery* TagQuery)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           SingleTag                      (Parm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718431110              		 offset:661110                        

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromTag(struct FGameplayTag* SingleTag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params params;
	params.SingleTag = SingleTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FGameplayTag>*   GameplayTags                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGameplayTagContainer   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF718431030              		 offset:661030                        

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag>* GameplayTags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray"));

	UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params params;
	params.GameplayTags = GameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430FB0              		 offset:660fb0                        

bool UBlueprintGameplayTagLibrary::STATIC_IsGameplayTagValid(struct FGameplayTag* GameplayTag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid"));

	UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag*           Tag                            (Parm)
// bool*                          bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430E50              		 offset:660e50                        

bool UBlueprintGameplayTagLibrary::STATIC_HasTag(struct FGameplayTagContainer* TagContainer, struct FGameplayTag* Tag, bool* bExactMatch)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasTag"));

	UBlueprintGameplayTagLibrary_HasTag_Params params;
	params.TagContainer = TagContainer;
	params.Tag = Tag;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer*  OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430C20              		 offset:660c20                        

bool UBlueprintGameplayTagLibrary::STATIC_HasAnyTags(struct FGameplayTagContainer* TagContainer, struct FGameplayTagContainer* OtherContainer, bool* bExactMatch)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags"));

	UBlueprintGameplayTagLibrary_HasAnyTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer*  OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          bExactMatch                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF7184309B0              		 offset:6609b0                        

bool UBlueprintGameplayTagLibrary::STATIC_HasAllTags(struct FGameplayTagContainer* TagContainer, struct FGameplayTagContainer* OtherContainer, bool* bExactMatch)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags"));

	UBlueprintGameplayTagLibrary_HasAllTags_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bExactMatch = bExactMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface>* TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  OtherContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430880              		 offset:660880                        

bool UBlueprintGameplayTagLibrary::STATIC_HasAllMatchingGameplayTags(TScriptInterface<class UGameplayTagAssetInterface>* TagContainerInterface, struct FGameplayTagContainer* OtherContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags"));

	UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430700              		 offset:660700                        

struct FName UBlueprintGameplayTagLibrary::STATIC_GetTagName(struct FGameplayTag* GameplayTag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName"));

	UBlueprintGameplayTagLibrary_GetTagName_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430570              		 offset:660570                        

int UBlueprintGameplayTagLibrary::STATIC_GetNumGameplayTagsInContainer(struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer"));

	UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF718430460              		 offset:660460                        

struct FString UBlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           GameplayTag                    (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF718430390              		 offset:660390                        

struct FString UBlueprintGameplayTagLibrary::STATIC_GetDebugStringFromGameplayTag(struct FGameplayTag* GameplayTag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag"));

	UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 ActorClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagQuery*      GameplayTagQuery               (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF7184301B0              		 offset:6601b0                        

void UBlueprintGameplayTagLibrary::STATIC_GetAllActorsOfClassMatchingTagQuery(class UObject** WorldContextObject, class UClass** ActorClass, struct FGameplayTagQuery* GameplayTagQuery, TArray<class AActor*>* OutActors)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery"));

	UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActorClass = ActorClass;
	params.GameplayTagQuery = GameplayTagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer*  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF718430060              		 offset:660060                        

bool UBlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTagContainer(struct FGameplayTagContainer* A, struct FGameplayTagContainer* B)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer"));

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTag*           A                              (Parm)
// struct FGameplayTag*           B                              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71842FFA0              		 offset:65ffa0                        

bool UBlueprintGameplayTagLibrary::STATIC_EqualEqual_GameplayTag(struct FGameplayTag* A, struct FGameplayTag* B)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag"));

	UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface>* TagContainerInterface          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag*           Tag                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71842FEC0              		 offset:65fec0                        

bool UBlueprintGameplayTagLibrary::STATIC_DoesTagAssetInterfaceHaveTag(TScriptInterface<class UGameplayTagAssetInterface>* TagContainerInterface, struct FGameplayTag* Tag)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag"));

	UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params;
	params.TagContainerInterface = TagContainerInterface;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  TagContainer                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagQuery*      TagQuery                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71842FD50              		 offset:65fd50                        

bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchTagQuery(struct FGameplayTagContainer* TagContainer, struct FGameplayTagQuery* TagQuery)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery"));

	UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params;
	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer*  GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FGameplayTag>    GameplayTags                   (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF71842FC20              		 offset:65fc20                        

void UBlueprintGameplayTagLibrary::STATIC_BreakGameplayTagContainer(struct FGameplayTagContainer* GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer"));

	UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params params;
	params.GameplayTagContainer = GameplayTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayTags != nullptr)
		*GameplayTags = params.GameplayTags;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   InOutTagContainer              (Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer*  InTagContainer                 (ConstParm, Parm, OutParm, ReferenceParm)
// FunctionAddress:0x00007FF71842FAE0              		 offset:65fae0                        

void UBlueprintGameplayTagLibrary::STATIC_AppendGameplayTagContainers(struct FGameplayTagContainer* InTagContainer, struct FGameplayTagContainer* InOutTagContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers"));

	UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params;
	params.InTagContainer = InTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;
}


// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (Parm, OutParm, ReferenceParm)
// struct FGameplayTag*           Tag                            (Parm)
// FunctionAddress:0x00007FF71842F9E0              		 offset:65f9e0                        

void UBlueprintGameplayTagLibrary::STATIC_AddGameplayTag(struct FGameplayTag* Tag, struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag"));

	UBlueprintGameplayTagLibrary_AddGameplayTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
