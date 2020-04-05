// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CustomizableObject_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bNeverSkipUpdate               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C781330              		 offset:49b1330                       

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool* bNeverSkipUpdate)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync"));

	UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params params;
	params.bNeverSkipUpdate = bNeverSkipUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bIgnoreCloseDist               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceHighPriority             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C781260              		 offset:49b1260                       

void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(bool* bIgnoreCloseDist, bool* bForceHighPriority)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync"));

	UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params params;
	params.bIgnoreCloseDist = bIgnoreCloseDist;
	params.bForceHighPriority = bForceHighPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString*                VectorParamName                (Parm, ZeroConstructor)
// struct FLinearColor*           VectorValue                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71C781170              		 offset:49b1170                       

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(struct FString* VectorParamName, struct FLinearColor* VectorValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption"));

	UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params params;
	params.VectorParamName = VectorParamName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF71C781150              		 offset:49b1150                       

void UCustomizableObjectInstance::SetRandomValues()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetRandomValues"));

	UCustomizableObjectInstance_SetRandomValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                ProjectorParamName             (Parm, ZeroConstructor)
// float*                         posX                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         posY                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         posZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dirX                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dirY                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         dirZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         upX                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         upY                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         upZ                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleZ                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// ECustomizableObjectProjectorType* ProjectionType                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C780CE0              		 offset:49b0ce0                       

void UCustomizableObjectInstance::SetProjectorValue(struct FString* ProjectorParamName, float* posX, float* posY, float* posZ, float* dirX, float* dirY, float* dirZ, float* upX, float* upY, float* upZ, float* ScaleX, float* ScaleY, float* ScaleZ, float* Angle, ECustomizableObjectProjectorType* ProjectionType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue"));

	UCustomizableObjectInstance_SetProjectorValue_Params params;
	params.ProjectorParamName = ProjectorParamName;
	params.posX = posX;
	params.posY = posY;
	params.posZ = posZ;
	params.dirX = dirX;
	params.dirY = dirY;
	params.dirZ = dirZ;
	params.upX = upX;
	params.upY = upY;
	params.upZ = upZ;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;
	params.ScaleZ = ScaleZ;
	params.Angle = Angle;
	params.ProjectionType = ProjectionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// ECustomizableObjectProjectorType* Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C780BF0              		 offset:49b0bf0                       

void UCustomizableObjectInstance::SetProjectorParameterType(struct FString* ParamName, ECustomizableObjectProjectorType* Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType"));

	UCustomizableObjectInstance_SetProjectorParameterType_Params params;
	params.ParamName = ParamName;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// struct FString*                SelectedOptionName             (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C780AF0              		 offset:49b0af0                       

void UCustomizableObjectInstance::SetIntParameterSelectedOption(struct FString* ParamName, struct FString* SelectedOptionName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption"));

	UCustomizableObjectInstance_SetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;
	params.SelectedOptionName = SelectedOptionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                FloatParamName                 (Parm, ZeroConstructor)
// float*                         FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C780A00              		 offset:49b0a00                       

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(struct FString* FloatParamName, float* FloatValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption"));

	UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                StateName                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C780960              		 offset:49b0960                       

void UCustomizableObjectInstance::SetCurrentState(struct FString* StateName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetCurrentState"));

	UCustomizableObjectInstance_SetCurrentState_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                BoolParamName                  (Parm, ZeroConstructor)
// bool*                          BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C780870              		 offset:49b0870                       

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(struct FString* BoolParamName, bool* BoolValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption"));

	UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params params;
	params.BoolParamName = BoolParamName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C7807C0              		 offset:49b07c0                       

bool UCustomizableObjectInstance::IsParameterRelevant(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant"));

	UCustomizableObjectInstance_IsParameterRelevant_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// ECustomizableObjectProjectorType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C780220              		 offset:49b0220                       

ECustomizableObjectProjectorType UCustomizableObjectInstance::GetProjectorParameterType(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType"));

	UCustomizableObjectInstance_GetProjectorParameterType_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// int*                           DescIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77FC60              		 offset:49afc60                       

class UTexture2D* UCustomizableObjectInstance::GetParameterDescription(struct FString* ParamName, int* DescIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription"));

	UCustomizableObjectInstance_GetParameterDescription_Params params;
	params.ParamName = ParamName;
	params.DescIndex = DescIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C77FB40              		 offset:49afb40                       

struct FString UCustomizableObjectInstance::GetIntParameterSelectedOption(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption"));

	UCustomizableObjectInstance_GetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                FloatParamName                 (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77F8F0              		 offset:49af8f0                       

float UCustomizableObjectInstance::GetFloatParameterSelectedOption(struct FString* FloatParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption"));

	UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C77F860              		 offset:49af860                       

struct FString UCustomizableObjectInstance::GetCurrentState()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetCurrentState"));

	UCustomizableObjectInstance_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                BoolParamName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77F7B0              		 offset:49af7b0                       

bool UCustomizableObjectInstance::GetBoolParameterSelectedOption(struct FString* BoolParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption"));

	UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params params;
	params.BoolParamName = BoolParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77F700              		 offset:49af700                       

int UCustomizableObjectInstance::FindVectorParameterNameIndex(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex"));

	UCustomizableObjectInstance_FindVectorParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77F650              		 offset:49af650                       

int UCustomizableObjectInstance::FindProjectorParameterNameIndex(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex"));

	UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77F4F0              		 offset:49af4f0                       

int UCustomizableObjectInstance::FindIntParameterNameIndex(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex"));

	UCustomizableObjectInstance_FindIntParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77F440              		 offset:49af440                       

int UCustomizableObjectInstance::FindFloatParameterNameIndex(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex"));

	UCustomizableObjectInstance_FindFloatParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77F390              		 offset:49af390                       

int UCustomizableObjectInstance::FindBoolParameterNameIndex(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex"));

	UCustomizableObjectInstance_FindBoolParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C7806D0              		 offset:49b06d0                       

struct FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex"));

	UCustomizableObject_GetStateUIMetadataFromIndex_Params params;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                StateName                      (Parm, ZeroConstructor)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C7805C0              		 offset:49b05c0                       

struct FParameterUIData UCustomizableObject::GetStateUIMetadata(struct FString* StateName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetStateUIMetadata"));

	UCustomizableObject_GetStateUIMetadata_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateParameterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                StateName                      (Parm, ZeroConstructor)
// int*                           ParameterIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C780490              		 offset:49b0490                       

struct FString UCustomizableObject::GetStateParameterName(struct FString* StateName, int* ParameterIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetStateParameterName"));

	UCustomizableObject_GetStateParameterName_Params params;
	params.StateName = StateName;
	params.ParameterIndex = ParameterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateParameterCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                StateName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C7803E0              		 offset:49b03e0                       

int UCustomizableObject::GetStateParameterCount(struct FString* StateName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetStateParameterCount"));

	UCustomizableObject_GetStateParameterCount_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C780300              		 offset:49b0300                       

struct FString UCustomizableObject::GetStateName(int* StateIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetStateName"));

	UCustomizableObject_GetStateName_Params params;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C7802D0              		 offset:49b02d0                       

int UCustomizableObject::GetStateCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetStateCount"));

	UCustomizableObject_GetStateCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C780130              		 offset:49b0130                       

struct FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int* ParamIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex"));

	UCustomizableObject_GetParameterUIMetadataFromIndex_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C780020              		 offset:49b0020                       

struct FParameterUIData UCustomizableObject::GetParameterUIMetadata(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetParameterUIMetadata"));

	UCustomizableObject_GetParameterUIMetadata_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// EMutableParameterType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77FF70              		 offset:49aff70                       

EMutableParameterType UCustomizableObject::GetParameterTypeByName(struct FString* Name)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetParameterTypeByName"));

	UCustomizableObject_GetParameterTypeByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// EMutableParameterType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77FEE0              		 offset:49afee0                       

EMutableParameterType UCustomizableObject::GetParameterType(int* ParamIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetParameterType"));

	UCustomizableObject_GetParameterType_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C77FE00              		 offset:49afe00                       

struct FString UCustomizableObject::GetParameterName(int* ParamIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetParameterName"));

	UCustomizableObject_GetParameterName_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77FD50              		 offset:49afd50                       

int UCustomizableObject::GetParameterDescriptionCount(struct FString* ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount"));

	UCustomizableObject_GetParameterDescriptionCount_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77FC30              		 offset:49afc30                       

int UCustomizableObject::GetParameterCount()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetParameterCount"));

	UCustomizableObject_GetParameterCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77FAB0              		 offset:49afab0                       

int UCustomizableObject::GetIntParameterNumOptions(int* ParamIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions"));

	UCustomizableObject_GetIntParameterNumOptions_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           K                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C77F9A0              		 offset:49af9a0                       

struct FString UCustomizableObject::GetIntParameterAvailableOption(int* ParamIndex, int* K)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption"));

	UCustomizableObject_GetIntParameterAvailableOption_Params params;
	params.ParamIndex = ParamIndex;
	params.K = K;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.FindParameter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C77F5A0              		 offset:49af5a0                       

int UCustomizableObject::FindParameter(struct FString* Name)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.FindParameter"));

	UCustomizableObject_FindParameter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.InstanceUpdatedHelper.DelegatedCallback
// (Final, Native, Public)
// FunctionAddress:0x00007FF71C77F370              		 offset:49af370                       

void UInstanceUpdatedHelper::DelegatedCallback()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.InstanceUpdatedHelper.DelegatedCallback"));

	UInstanceUpdatedHelper_DelegatedCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
