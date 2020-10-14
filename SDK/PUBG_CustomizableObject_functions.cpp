// PUBG (8.3.5.39) SDK

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
// bool                           bNeverSkipUpdate               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D6D70              		 offset:2a06d70                       

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate)
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
// bool                           bIgnoreCloseDist               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForceHighPriority             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D6CA0              		 offset:2a06ca0                       

void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority)
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
// struct FString                 VectorParamName                (Parm, ZeroConstructor)
// struct FLinearColor            VectorValue                    (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D6290              		 offset:2a06290                       

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(const struct FString& VectorParamName, const struct FLinearColor& VectorValue)
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
// FunctionAddress:0x00007FF62B4D6C60              		 offset:2a06c60                       

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
// struct FString                 ProjectorParamName             (Parm, ZeroConstructor)
// float                          posX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          posY                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          posZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          dirX                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          dirY                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          dirZ                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          upX                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          upY                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          upZ                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleX                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleY                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleZ                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// ECustomizableObjectProjectorType ProjectionType                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            RangeIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D67B0              		 offset:2a067b0                       

void UCustomizableObjectInstance::SetProjectorValue(const struct FString& ProjectorParamName, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float upX, float upY, float upZ, float ScaleX, float ScaleY, float ScaleZ, float Angle, ECustomizableObjectProjectorType ProjectionType, int RangeIndex)
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
	params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            RangeIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// ECustomizableObjectProjectorType Type                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D6690              		 offset:2a06690                       

void UCustomizableObjectInstance::SetProjectorParameterType(const struct FString& ParamName, int RangeIndex, ECustomizableObjectProjectorType Type)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType"));

	UCustomizableObjectInstance_SetProjectorParameterType_Params params;
	params.ParamName = ParamName;
	params.RangeIndex = RangeIndex;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// struct FString                 SelectedOptionName             (Parm, ZeroConstructor)
// int                            RangeIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D6550              		 offset:2a06550                       

void UCustomizableObjectInstance::SetIntParameterSelectedOption(const struct FString& ParamName, const struct FString& SelectedOptionName, int RangeIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption"));

	UCustomizableObjectInstance_SetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;
	params.SelectedOptionName = SelectedOptionName;
	params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FloatParamName                 (Parm, ZeroConstructor)
// float                          FloatValue                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            RangeIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D6420              		 offset:2a06420                       

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(const struct FString& FloatParamName, float FloatValue, int RangeIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption"));

	UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;
	params.FloatValue = FloatValue;
	params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StateName                      (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF62B4D6380              		 offset:2a06380                       

void UCustomizableObjectInstance::SetCurrentState(const struct FString& StateName)
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


// Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 ColorParamName                 (Parm, ZeroConstructor)
// struct FLinearColor            ColorValue                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D6290              		 offset:2a06290                       

void UCustomizableObjectInstance::SetColorParameterSelectedOption(const struct FString& ColorParamName, const struct FLinearColor& ColorValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.SetColorParameterSelectedOption"));

	UCustomizableObjectInstance_SetColorParameterSelectedOption_Params params;
	params.ColorParamName = ColorParamName;
	params.ColorValue = ColorValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BoolParamName                  (Parm, ZeroConstructor)
// bool                           BoolValue                      (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D61A0              		 offset:2a061a0                       

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(const struct FString& BoolParamName, bool BoolValue)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D60D0              		 offset:2a060d0                       

bool UCustomizableObjectInstance::IsParameterRelevant(const struct FString& ParamName)
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


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 ProjectorParamName             (Parm, ZeroConstructor)
// struct FVector                 OutPos                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutDir                         (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutUp                          (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutScale                       (Parm, OutParm, IsPlainOldData)
// float                          OutAngle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// ECustomizableObjectProjectorType OutType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            RangeIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D58B0              		 offset:2a058b0                       

bool UCustomizableObjectInstance::GetProjectorValue(const struct FString& ProjectorParamName, int RangeIndex, struct FVector* OutPos, struct FVector* OutDir, struct FVector* OutUp, struct FVector* OutScale, float* OutAngle, ECustomizableObjectProjectorType* OutType)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetProjectorValue"));

	UCustomizableObjectInstance_GetProjectorValue_Params params;
	params.ProjectorParamName = ProjectorParamName;
	params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPos != nullptr)
		*OutPos = params.OutPos;
	if (OutDir != nullptr)
		*OutDir = params.OutDir;
	if (OutUp != nullptr)
		*OutUp = params.OutUp;
	if (OutScale != nullptr)
		*OutScale = params.OutScale;
	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
	if (OutType != nullptr)
		*OutType = params.OutType;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D57F0              		 offset:2a057f0                       

struct FVector UCustomizableObjectInstance::GetProjectorUp(const struct FString& ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetProjectorUp"));

	UCustomizableObjectInstance_GetProjectorUp_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D5730              		 offset:2a05730                       

struct FVector UCustomizableObjectInstance::GetProjectorScale(const struct FString& ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetProjectorScale"));

	UCustomizableObjectInstance_GetProjectorScale_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D5670              		 offset:2a05670                       

struct FVector UCustomizableObjectInstance::GetProjectorPosition(const struct FString& ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetProjectorPosition"));

	UCustomizableObjectInstance_GetProjectorPosition_Params params;
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            RangeIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// ECustomizableObjectProjectorType ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D5580              		 offset:2a05580                       

ECustomizableObjectProjectorType UCustomizableObjectInstance::GetProjectorParameterType(const struct FString& ParamName, int RangeIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType"));

	UCustomizableObjectInstance_GetProjectorParameterType_Params params;
	params.ParamName = ParamName;
	params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D54C0              		 offset:2a054c0                       

struct FVector UCustomizableObjectInstance::GetProjectorDirection(const struct FString& ParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetProjectorDirection"));

	UCustomizableObjectInstance_GetProjectorDirection_Params params;
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            DescIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4EB0              		 offset:2a04eb0                       

class UTexture2D* UCustomizableObjectInstance::GetParameterDescription(const struct FString& ParamName, int DescIndex)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            RangeIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF62B4D4D20              		 offset:2a04d20                       

struct FString UCustomizableObjectInstance::GetIntParameterSelectedOption(const struct FString& ParamName, int RangeIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption"));

	UCustomizableObjectInstance_GetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;
	params.RangeIndex = RangeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 FloatParamName                 (Parm, ZeroConstructor)
// int                            RangeIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4AA0              		 offset:2a04aa0                       

float UCustomizableObjectInstance::GetFloatParameterSelectedOption(const struct FString& FloatParamName, int RangeIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption"));

	UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;
	params.RangeIndex = RangeIndex;

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
// FunctionAddress:0x00007FF62B4D4A10              		 offset:2a04a10                       

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


// Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ColorParamName                 (Parm, ZeroConstructor)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4950              		 offset:2a04950                       

struct FLinearColor UCustomizableObjectInstance::GetColorParameterSelectedOption(const struct FString& ColorParamName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.GetColorParameterSelectedOption"));

	UCustomizableObjectInstance_GetColorParameterSelectedOption_Params params;
	params.ColorParamName = ColorParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 BoolParamName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D48A0              		 offset:2a048a0                       

bool UCustomizableObjectInstance::GetBoolParameterSelectedOption(const struct FString& BoolParamName)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D47C0              		 offset:2a047c0                       

int UCustomizableObjectInstance::FindVectorParameterNameIndex(const struct FString& ParamName)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4710              		 offset:2a04710                       

int UCustomizableObjectInstance::FindProjectorParameterNameIndex(const struct FString& ParamName)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D45B0              		 offset:2a045b0                       

int UCustomizableObjectInstance::FindIntParameterNameIndex(const struct FString& ParamName)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4500              		 offset:2a04500                       

int UCustomizableObjectInstance::FindFloatParameterNameIndex(const struct FString& ParamName)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4450              		 offset:2a04450                       

int UCustomizableObjectInstance::FindBoolParameterNameIndex(const struct FString& ParamName)
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


// Function CustomizableObject.CustomizableObjectInstance.Clone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomizableObjectInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4370              		 offset:2a04370                       

class UCustomizableObjectInstance* UCustomizableObjectInstance::Clone()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectInstance.Clone"));

	UCustomizableObjectInstance_Clone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.UnloadMaskOutCache
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF62B4D6C80              		 offset:2a06c80                       

void UCustomizableObject::UnloadMaskOutCache()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.UnloadMaskOutCache"));

	UCustomizableObject_UnloadMaskOutCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObject.LoadMaskOutCache
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF62B4D6180              		 offset:2a06180                       

void UCustomizableObject::LoadMaskOutCache()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.LoadMaskOutCache"));

	UCustomizableObject_LoadMaskOutCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B4D5F80              		 offset:2a05f80                       

struct FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int StateIndex)
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
// struct FString                 StateName                      (Parm, ZeroConstructor)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B4D5E70              		 offset:2a05e70                       

struct FParameterUIData UCustomizableObject::GetStateUIMetadata(const struct FString& StateName)
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
// struct FString                 StateName                      (Parm, ZeroConstructor)
// int                            ParameterIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF62B4D5D40              		 offset:2a05d40                       

struct FString UCustomizableObject::GetStateParameterName(const struct FString& StateName, int ParameterIndex)
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
// struct FString                 StateName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D5C90              		 offset:2a05c90                       

int UCustomizableObject::GetStateParameterCount(const struct FString& StateName)
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
// int                            StateIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF62B4D5BB0              		 offset:2a05bb0                       

struct FString UCustomizableObject::GetStateName(int StateIndex)
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
// FunctionAddress:0x00007FF62B4D5B80              		 offset:2a05b80                       

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
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B4D5340              		 offset:2a05340                       

struct FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int ParamIndex)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// struct FParameterUIData        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF62B4D5230              		 offset:2a05230                       

struct FParameterUIData UCustomizableObject::GetParameterUIMetadata(const struct FString& ParamName)
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
// struct FString                 Name                           (Parm, ZeroConstructor)
// EMutableParameterType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D5180              		 offset:2a05180                       

EMutableParameterType UCustomizableObject::GetParameterTypeByName(const struct FString& Name)
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
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// EMutableParameterType          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D50F0              		 offset:2a050f0                       

EMutableParameterType UCustomizableObject::GetParameterType(int ParamIndex)
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
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF62B4D5050              		 offset:2a05050                       

struct FString UCustomizableObject::GetParameterName(int ParamIndex)
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
// struct FString                 ParamName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4FA0              		 offset:2a04fa0                       

int UCustomizableObject::GetParameterDescriptionCount(const struct FString& ParamName)
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
// FunctionAddress:0x00007FF62B4D4E80              		 offset:2a04e80                       

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
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4C90              		 offset:2a04c90                       

int UCustomizableObject::GetIntParameterNumOptions(int ParamIndex)
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
// int                            ParamIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            K                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF62B4D4BC0              		 offset:2a04bc0                       

struct FString UCustomizableObject::GetIntParameterAvailableOption(int ParamIndex, int K)
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
// struct FString                 Name                           (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4660              		 offset:2a04660                       

int UCustomizableObject::FindParameter(const struct FString& Name)
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


// Function CustomizableObject.CustomizableObject.CreateInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCustomizableObjectInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D43A0              		 offset:2a043a0                       

class UCustomizableObjectInstance* UCustomizableObject::CreateInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObject.CreateInstance"));

	UCustomizableObject_CreateInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D60A0              		 offset:2a060a0                       

int UCustomizableObjectSystem::GetTotalInstances()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectSystem.GetTotalInstances"));

	UCustomizableObjectSystem_GetTotalInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D6070              		 offset:2a06070                       

int UCustomizableObjectSystem::GetTextureMemoryUsed()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectSystem.GetTextureMemoryUsed"));

	UCustomizableObjectSystem_GetTextureMemoryUsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF62B4D5430              		 offset:2a05430                       

struct FString UCustomizableObjectSystem::GetPluginVersion()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectSystem.GetPluginVersion"));

	UCustomizableObjectSystem_GetPluginVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4E50              		 offset:2a04e50                       

int UCustomizableObjectSystem::GetNumPendingInstances()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectSystem.GetNumPendingInstances"));

	UCustomizableObjectSystem_GetNumPendingInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectSystem.GetNumInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4E20              		 offset:2a04e20                       

int UCustomizableObjectSystem::GetNumInstances()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectSystem.GetNumInstances"));

	UCustomizableObjectSystem_GetNumInstances_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectSystem.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCustomizableObjectSystem* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4B90              		 offset:2a04b90                       

class UCustomizableObjectSystem* UCustomizableObjectSystem::STATIC_GetInstance()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectSystem.GetInstance"));

	UCustomizableObjectSystem_GetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4870              		 offset:2a04870                       

int UCustomizableObjectSystem::GetAverageBuildTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectSystem.GetAverageBuildTime"));

	UCustomizableObjectSystem_GetAverageBuildTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D4340              		 offset:2a04340                       

bool UCustomizableObjectSystem::AreEnginePatchesPresent()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.CustomizableObjectSystem.AreEnginePatchesPresent"));

	UCustomizableObjectSystem_AreEnginePatchesPresent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.InstanceUpdatedHelper.DelegatedCallback
// (Final, Native, Public)
// Parameters:
// class UCustomizableObjectInstance* Instance                       (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF62B4D43D0              		 offset:2a043d0                       

void UInstanceUpdatedHelper::DelegatedCallback(class UCustomizableObjectInstance* Instance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function CustomizableObject.InstanceUpdatedHelper.DelegatedCallback"));

	UInstanceUpdatedHelper_DelegatedCallback_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
