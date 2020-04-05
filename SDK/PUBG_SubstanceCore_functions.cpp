// PUBG (7.1.6.5) SDK

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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// struct FString*                Value                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C692AC0              		 offset:48c2ac0                       

void USubstanceGraphInstance::SetInputString(struct FString* Identifier, struct FString* Value)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAC85AB0              		 offset:42c5ab0                       

void USubstanceGraphInstance::SetInputString(const struct FString& Identifier, const struct FString& Value)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// TArray<int>*                   InputValues                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF71C692960              		 offset:48c2960                       

void USubstanceGraphInstance::SetInputInt(struct FString* Identifier, TArray<int>* InputValues)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// TArray<int>                    InputValues                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DAC85950              		 offset:42c5950                       

void USubstanceGraphInstance::SetInputInt(const struct FString& Identifier, TArray<int> InputValues)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                InputName                      (Parm, ZeroConstructor)
// class UObject**                Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C692870              		 offset:48c2870                       

bool USubstanceGraphInstance::SetInputImg(struct FString* InputName, class UObject** Value)
=======
// struct FString                 InputName                      (Parm, ZeroConstructor)
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC85860              		 offset:42c5860                       

bool USubstanceGraphInstance::SetInputImg(const struct FString& InputName, class UObject* Value)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// TArray<float>*                 InputValues                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF71C692710              		 offset:48c2710                       

void USubstanceGraphInstance::SetInputFloat(struct FString* Identifier, TArray<float>* InputValues)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// TArray<float>                  InputValues                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF6DAC85700              		 offset:42c5700                       

void USubstanceGraphInstance::SetInputFloat(const struct FString& Identifier, TArray<float> InputValues)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// struct FLinearColor*           Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C6925C0              		 offset:48c25c0                       

void USubstanceGraphInstance::SetInputColor(struct FString* Identifier, struct FLinearColor* Color)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FLinearColor            Color                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC855B0              		 offset:42c55b0                       

void USubstanceGraphInstance::SetInputColor(const struct FString& Identifier, const struct FLinearColor& Color)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// bool*                          Bool                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C692480              		 offset:48c2480                       

void USubstanceGraphInstance::SetInputBool(struct FString* Identifier, bool* Bool)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// bool                           Bool                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC85470              		 offset:42c5470                       

void USubstanceGraphInstance::SetInputBool(const struct FString& Identifier, bool Bool)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// struct FSubstanceIntInputDesc  ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C691E50              		 offset:48c1e50                       

struct FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(struct FString* Identifier)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FSubstanceIntInputDesc  ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6DAC84E40              		 offset:42c4e40                       

struct FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(const struct FString& Identifier)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C691D10              		 offset:48c1d10                       
=======
// FunctionAddress:0x00007FF6DAC84D00              		 offset:42c4d00                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// struct FString*                InputName                      (Parm, ZeroConstructor)
// TEnumAsByte<ESubstanceInputType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C691C10              		 offset:48c1c10                       

TEnumAsByte<ESubstanceInputType> USubstanceGraphInstance::GetInputType(struct FString* InputName)
=======
// struct FString                 InputName                      (Parm, ZeroConstructor)
// TEnumAsByte<ESubstanceInputType> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC84C00              		 offset:42c4c00                       

TEnumAsByte<ESubstanceInputType> USubstanceGraphInstance::GetInputType(const struct FString& InputName)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C691AD0              		 offset:48c1ad0                       

struct FString USubstanceGraphInstance::GetInputString(struct FString* Identifier)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAC84AC0              		 offset:42c4ac0                       

struct FString USubstanceGraphInstance::GetInputString(const struct FString& Identifier)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C6919E0              		 offset:48c19e0                       
=======
// FunctionAddress:0x00007FF6DAC849D0              		 offset:42c49d0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C6918A0              		 offset:48c18a0                       

TArray<int> USubstanceGraphInstance::GetInputInt(struct FString* Identifier)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAC84890              		 offset:42c4890                       

TArray<int> USubstanceGraphInstance::GetInputInt(const struct FString& Identifier)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C691760              		 offset:48c1760                       

TArray<float> USubstanceGraphInstance::GetInputFloat(struct FString* Identifier)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAC84750              		 offset:42c4750                       

TArray<float> USubstanceGraphInstance::GetInputFloat(const struct FString& Identifier)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C691650              		 offset:48c1650                       

struct FLinearColor USubstanceGraphInstance::GetInputColor(struct FString* Identifier)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC84640              		 offset:42c4640                       

struct FLinearColor USubstanceGraphInstance::GetInputColor(const struct FString& Identifier)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C691550              		 offset:48c1550                       

bool USubstanceGraphInstance::GetInputBool(struct FString* Identifier)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC84540              		 offset:42c4540                       

bool USubstanceGraphInstance::GetInputBool(const struct FString& Identifier)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FString*                Identifier                     (Parm, ZeroConstructor)
// struct FSubstanceFloatInputDesc ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF71C691270              		 offset:48c1270                       

struct FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(struct FString* Identifier)
=======
// struct FString                 Identifier                     (Parm, ZeroConstructor)
// struct FSubstanceFloatInputDesc ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF6DAC84260              		 offset:42c4260                       

struct FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(const struct FString& Identifier)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C691170              		 offset:48c1170                       
=======
// FunctionAddress:0x00007FF6DAC84160              		 offset:42c4160                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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


// Function SubstanceCore.SubstanceUtility.SyncRendering
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** InstancesToRender              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C692C00              		 offset:48c2c00                       

void USubstanceUtility::STATIC_SyncRendering(class USubstanceGraphInstance** InstancesToRender)
=======
// class USubstanceGraphInstance* InstancesToRender              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC85BF0              		 offset:42c5bf0                       

void USubstanceUtility::STATIC_SyncRendering(class USubstanceGraphInstance* InstancesToRender)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.SyncRendering"));

	USubstanceUtility_SyncRendering_Params params;
	params.InstancesToRender = InstancesToRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C692390              		 offset:48c2390                       

void USubstanceUtility::STATIC_SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance** GraphInstance, int* Width, int* Height)
=======
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC85380              		 offset:42c5380                       

void USubstanceUtility::STATIC_SetGraphInstanceOutputSizeInt(class USubstanceGraphInstance* GraphInstance, int Width, int Height)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt"));

	USubstanceUtility_SetGraphInstanceOutputSizeInt_Params params;
	params.GraphInstance = GraphInstance;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESubstanceTextureSize>* Width                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESubstanceTextureSize>* Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C6922A0              		 offset:48c22a0                       

void USubstanceUtility::STATIC_SetGraphInstanceOutputSize(class USubstanceGraphInstance** GraphInstance, TEnumAsByte<ESubstanceTextureSize>* Width, TEnumAsByte<ESubstanceTextureSize>* Height)
=======
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESubstanceTextureSize> Width                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESubstanceTextureSize> Height                         (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC85290              		 offset:42c5290                       

void USubstanceUtility::STATIC_SetGraphInstanceOutputSize(class USubstanceGraphInstance* GraphInstance, TEnumAsByte<ESubstanceTextureSize> Width, TEnumAsByte<ESubstanceTextureSize> Height)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize"));

	USubstanceUtility_SetGraphInstanceOutputSize_Params params;
	params.GraphInstance = GraphInstance;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.ResetInputParameters
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C692230              		 offset:48c2230                       

void USubstanceUtility::STATIC_ResetInputParameters(class USubstanceGraphInstance** GraphInstance)
=======
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC85220              		 offset:42c5220                       

void USubstanceUtility::STATIC_ResetInputParameters(class USubstanceGraphInstance* GraphInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.ResetInputParameters"));

	USubstanceUtility_ResetInputParameters_Params params;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USubstanceTexture2D*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C692090              		 offset:48c2090                       

TArray<class USubstanceTexture2D*> USubstanceUtility::STATIC_GetSubstanceTextures(class USubstanceGraphInstance** GraphInstance)
=======
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USubstanceTexture2D*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAC85080              		 offset:42c5080                       

TArray<class USubstanceTexture2D*> USubstanceUtility::STATIC_GetSubstanceTextures(class USubstanceGraphInstance* GraphInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.GetSubstanceTextures"));

	USubstanceUtility_GetSubstanceTextures_Params params;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.GetSubstances
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UMaterialInterface**     Material                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USubstanceGraphInstance*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C692160              		 offset:48c2160                       

TArray<class USubstanceGraphInstance*> USubstanceUtility::STATIC_GetSubstances(class UMaterialInterface** Material)
=======
// class UMaterialInterface*      Material                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USubstanceGraphInstance*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAC85150              		 offset:42c5150                       

TArray<class USubstanceGraphInstance*> USubstanceUtility::STATIC_GetSubstances(class UMaterialInterface* Material)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.GetSubstances"));

	USubstanceUtility_GetSubstances_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C692060              		 offset:48c2060                       
=======
// FunctionAddress:0x00007FF6DAC85050              		 offset:42c5050                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

float USubstanceUtility::STATIC_GetSubstanceLoadingProgress()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress"));

	USubstanceUtility_GetSubstanceLoadingProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.GetGraphName
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C691480              		 offset:48c1480                       

struct FString USubstanceUtility::STATIC_GetGraphName(class USubstanceGraphInstance** GraphInstance)
=======
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAC84470              		 offset:42c4470                       

struct FString USubstanceUtility::STATIC_GetGraphName(class USubstanceGraphInstance* GraphInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.GetGraphName"));

	USubstanceUtility_GetGraphName_Params params;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.GetFactoryName
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C6911A0              		 offset:48c11a0                       

struct FString USubstanceUtility::STATIC_GetFactoryName(class USubstanceGraphInstance** GraphInstance)
=======
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAC84190              		 offset:42c4190                       

struct FString USubstanceUtility::STATIC_GetFactoryName(class USubstanceGraphInstance* GraphInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.GetFactoryName"));

	USubstanceUtility_GetFactoryName_Params params;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   OutputIndices                  (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C691020              		 offset:48c1020                       

void USubstanceUtility::STATIC_EnableInstanceOutputs(class UObject** WorldContextObject, class USubstanceGraphInstance** GraphInstance, TArray<int>* OutputIndices)
=======
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutputIndices                  (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAC84010              		 offset:42c4010                       

void USubstanceUtility::STATIC_EnableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int> OutputIndices)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs"));

	USubstanceUtility_EnableInstanceOutputs_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GraphInstance = GraphInstance;
	params.OutputIndices = OutputIndices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C690F60              		 offset:48c0f60                       

class USubstanceGraphInstance* USubstanceUtility::STATIC_DuplicateGraphInstance(class UObject** WorldContextObject, class USubstanceGraphInstance** GraphInstance)
=======
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC83F50              		 offset:42c3f50                       

class USubstanceGraphInstance* USubstanceUtility::STATIC_DuplicateGraphInstance(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance"));

	USubstanceUtility_DuplicateGraphInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GraphInstance = GraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance** GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   OutputIndices                  (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF71C690E10              		 offset:48c0e10                       

void USubstanceUtility::STATIC_DisableInstanceOutputs(class UObject** WorldContextObject, class USubstanceGraphInstance** GraphInstance, TArray<int>* OutputIndices)
=======
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* GraphInstance                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    OutputIndices                  (Parm, ZeroConstructor)
// FunctionAddress:0x00007FF6DAC83E00              		 offset:42c3e00                       

void USubstanceUtility::STATIC_DisableInstanceOutputs(class UObject* WorldContextObject, class USubstanceGraphInstance* GraphInstance, TArray<int> OutputIndices)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs"));

	USubstanceUtility_DisableInstanceOutputs_Params params;
	params.WorldContextObject = WorldContextObject;
	params.GraphInstance = GraphInstance;
	params.OutputIndices = OutputIndices;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.CreateGraphInstance
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceInstanceFactory** Factory                        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           GraphDescIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                InstanceName                   (Parm, ZeroConstructor)
// class USubstanceGraphInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C690C80              		 offset:48c0c80                       

class USubstanceGraphInstance* USubstanceUtility::STATIC_CreateGraphInstance(class UObject** WorldContextObject, class USubstanceInstanceFactory** Factory, int* GraphDescIndex, struct FString* InstanceName)
=======
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceInstanceFactory* Factory                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            GraphDescIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InstanceName                   (Parm, ZeroConstructor)
// class USubstanceGraphInstance* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC83C70              		 offset:42c3c70                       

class USubstanceGraphInstance* USubstanceUtility::STATIC_CreateGraphInstance(class UObject* WorldContextObject, class USubstanceInstanceFactory* Factory, int GraphDescIndex, const struct FString& InstanceName)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.CreateGraphInstance"));

	USubstanceUtility_CreateGraphInstance_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Factory = Factory;
	params.GraphDescIndex = GraphDescIndex;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory
// (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceInstanceFactory** OutputFactory                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OutputFactoryGraphIndex        (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceInstanceFactory** InputFactory                   (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InputFactoryGraphIndex         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSubstanceConnection>* Connections                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USubstanceInstanceFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C690AB0              		 offset:48c0ab0                       

class USubstanceInstanceFactory* USubstanceUtility::STATIC_CreateAggregateSubstanceFactory(class USubstanceInstanceFactory** OutputFactory, int* OutputFactoryGraphIndex, class USubstanceInstanceFactory** InputFactory, int* InputFactoryGraphIndex, TArray<struct FSubstanceConnection>* Connections)
=======
// class USubstanceInstanceFactory* OutputFactory                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutputFactoryGraphIndex        (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceInstanceFactory* InputFactory                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            InputFactoryGraphIndex         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FSubstanceConnection> Connections                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class USubstanceInstanceFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC83AA0              		 offset:42c3aa0                       

class USubstanceInstanceFactory* USubstanceUtility::STATIC_CreateAggregateSubstanceFactory(class USubstanceInstanceFactory* OutputFactory, int OutputFactoryGraphIndex, class USubstanceInstanceFactory* InputFactory, int InputFactoryGraphIndex, TArray<struct FSubstanceConnection> Connections)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.CreateAggregateSubstanceFactory"));

	USubstanceUtility_CreateAggregateSubstanceFactory_Params params;
	params.OutputFactory = OutputFactory;
	params.OutputFactoryGraphIndex = OutputFactoryGraphIndex;
	params.InputFactory = InputFactory;
	params.InputFactoryGraphIndex = InputFactoryGraphIndex;
	params.Connections = Connections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceUtility.CopyInputParameters
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** SourceGraphInstance            (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance** DestGraphInstance              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C690A00              		 offset:48c0a00                       

void USubstanceUtility::STATIC_CopyInputParameters(class USubstanceGraphInstance** SourceGraphInstance, class USubstanceGraphInstance** DestGraphInstance)
=======
// class USubstanceGraphInstance* SourceGraphInstance            (Parm, ZeroConstructor, IsPlainOldData)
// class USubstanceGraphInstance* DestGraphInstance              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC839F0              		 offset:42c39f0                       

void USubstanceUtility::STATIC_CopyInputParameters(class USubstanceGraphInstance* SourceGraphInstance, class USubstanceGraphInstance* DestGraphInstance)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.CopyInputParameters"));

	USubstanceUtility_CopyInputParameters_Params params;
	params.SourceGraphInstance = SourceGraphInstance;
	params.DestGraphInstance = DestGraphInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.ClearCache
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C6909E0              		 offset:48c09e0                       
=======
// FunctionAddress:0x00007FF6DAC839D0              		 offset:42c39d0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

void USubstanceUtility::STATIC_ClearCache()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.ClearCache"));

	USubstanceUtility_ClearCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceUtility.AsyncRendering
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
<<<<<<< HEAD
// class USubstanceGraphInstance** InstancesToRender              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C690970              		 offset:48c0970                       

void USubstanceUtility::STATIC_AsyncRendering(class USubstanceGraphInstance** InstancesToRender)
=======
// class USubstanceGraphInstance* InstancesToRender              (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAC83960              		 offset:42c3960                       

void USubstanceUtility::STATIC_AsyncRendering(class USubstanceGraphInstance* InstancesToRender)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function SubstanceCore.SubstanceUtility.AsyncRendering"));

	USubstanceUtility_AsyncRendering_Params params;
	params.InstancesToRender = InstancesToRender;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
