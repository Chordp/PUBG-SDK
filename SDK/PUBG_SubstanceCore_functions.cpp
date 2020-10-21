// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SubstanceCore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SubstanceCore.SubstanceGraphInstance.SetInputString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF75C5516D0              		 offset:2b516d0                       

void USubstanceGraphInstance::SetInputString(const struct FString& Identifier, const struct FString& Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.SetInputString"));

	USubstanceGraphInstance_SetInputString_Params params;
	params.Identifier = Identifier;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// TArray<int>                    InputValues                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF75C551570              		 offset:2b51570                       

void USubstanceGraphInstance::SetInputInt(const struct FString& Identifier, TArray<int> InputValues)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.SetInputInt"));

	USubstanceGraphInstance_SetInputInt_Params params;
	params.Identifier = Identifier;
	params.InputValues = InputValues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InputName                      (Parm, ZeroConstructor)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C551480              		 offset:2b51480                       

bool USubstanceGraphInstance::SetInputImg(const struct FString& InputName, class UObject* Value)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.SetInputImg"));

	USubstanceGraphInstance_SetInputImg_Params params;
	params.InputName = InputName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// TArray<float>                  InputValues                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF75C551320              		 offset:2b51320                       

void USubstanceGraphInstance::SetInputFloat(const struct FString& Identifier, TArray<float> InputValues)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.SetInputFloat"));

	USubstanceGraphInstance_SetInputFloat_Params params;
	params.Identifier = Identifier;
	params.InputValues = InputValues;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C5511D0              		 offset:2b511d0                       

void USubstanceGraphInstance::SetInputColor(const struct FString& Identifier, const struct FLinearColor& Color)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.SetInputColor"));

	USubstanceGraphInstance_SetInputColor_Params params;
	params.Identifier = Identifier;
	params.Color = Color;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// bool                           Bool                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75C551090              		 offset:2b51090                       

void USubstanceGraphInstance::SetInputBool(const struct FString& Identifier, bool Bool)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.SetInputBool"));

	USubstanceGraphInstance_SetInputBool_Params params;
	params.Identifier = Identifier;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FSubstanceIntInputDesc  ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF75C550A60              		 offset:2b50a60                       

struct FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(const struct FString& Identifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc"));

	USubstanceGraphInstance_GetIntInputDesc_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSubstanceInstanceDesc  ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF75C550920              		 offset:2b50920                       

struct FSubstanceInstanceDesc USubstanceGraphInstance::GetInstanceDesc()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc"));

	USubstanceGraphInstance_GetInstanceDesc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InputName                      (Parm, ZeroConstructor)
// TEnumAsByte<ESubstanceInputType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C550820              		 offset:2b50820                       

TEnumAsByte<ESubstanceInputType> USubstanceGraphInstance::GetInputType(const struct FString& InputName)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetInputType"));

	USubstanceGraphInstance_GetInputType_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75C5506E0              		 offset:2b506e0                       

struct FString USubstanceGraphInstance::GetInputString(const struct FString& Identifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetInputString"));

	USubstanceGraphInstance_GetInputString_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75C5505F0              		 offset:2b505f0                       

TArray<struct FString> USubstanceGraphInstance::GetInputNames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetInputNames"));

	USubstanceGraphInstance_GetInputNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75C5504B0              		 offset:2b504b0                       

TArray<int> USubstanceGraphInstance::GetInputInt(const struct FString& Identifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetInputInt"));

	USubstanceGraphInstance_GetInputInt_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF75C550370              		 offset:2b50370                       

TArray<float> USubstanceGraphInstance::GetInputFloat(const struct FString& Identifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetInputFloat"));

	USubstanceGraphInstance_GetInputFloat_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C550260              		 offset:2b50260                       

struct FLinearColor USubstanceGraphInstance::GetInputColor(const struct FString& Identifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetInputColor"));

	USubstanceGraphInstance_GetInputColor_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C550160              		 offset:2b50160                       

bool USubstanceGraphInstance::GetInputBool(const struct FString& Identifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetInputBool"));

	USubstanceGraphInstance_GetInputBool_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FSubstanceFloatInputDesc ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF75C54FE80              		 offset:2b4fe80                       

struct FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(const struct FString& Identifier)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc"));

	USubstanceGraphInstance_GetFloatInputDesc_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceTexture2D.GetChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ESubChannelType>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75C54FD80              		 offset:2b4fd80                       

TEnumAsByte<ESubChannelType> USubstanceTexture2D::GetChannel()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceTexture2D.GetChannel"));

	USubstanceTexture2D_GetChannel_Params params;

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
