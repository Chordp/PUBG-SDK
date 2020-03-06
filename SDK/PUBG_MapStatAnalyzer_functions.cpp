// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapStatAnalyzer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                  NewParam                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  NewParam1                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float*                         NewParam2                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam3                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::EqualsFloatArray(float* NewParam2, TArray<float>* NewParam, TArray<float>* NewParam1, bool* NewParam3)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray"));

	AMapStatAnalyzer_C_EqualsFloatArray_Params params;
	params.NewParam2 = NewParam2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
	if (NewParam3 != nullptr)
		*NewParam3 = params.NewParam3;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

int AMapStatAnalyzer_C::DelayTimeToDelayFrames()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames"));

	AMapStatAnalyzer_C_DelayTimeToDelayFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FString AMapStatAnalyzer_C::GetAltSharedPresetDir()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir"));

	AMapStatAnalyzer_C_GetAltSharedPresetDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::GetCurrentLevelSize(float* NewParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize"));

	AMapStatAnalyzer_C_GetCurrentLevelSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         MapStride                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::GetExpectedMapSize(float* MapStride, float* NewParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize"));

	AMapStatAnalyzer_C_GetExpectedMapSize_Params params;
	params.MapStride = MapStride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FString AMapStatAnalyzer_C::GetSharedPresetDir()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir"));

	AMapStatAnalyzer_C_GetSharedPresetDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

struct FString AMapStatAnalyzer_C::GetSavedDir()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir"));

	AMapStatAnalyzer_C_GetSavedDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                FullFilePath                   (Parm, ZeroConstructor)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 NewVar                         (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::LoadStringFromFile(struct FString* FullFilePath, bool* bSuccess, struct FString* NewVar)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile"));

	AMapStatAnalyzer_C_LoadStringFromFile_Params params;
	params.FullFilePath = FullFilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (NewVar != nullptr)
		*NewVar = params.NewVar;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString*                PresetDir                      (Parm, ZeroConstructor)
// struct FString                 NewParam                       (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::GetCurrentLevelMinimapURL(struct FString* PresetDir, struct FString* NewParam)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL"));

	AMapStatAnalyzer_C_GetCurrentLevelMinimapURL_Params params;
	params.PresetDir = PresetDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                  Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString*                NewLinedString                 (Parm, ZeroConstructor)
// struct FString                 NewVar                         (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::FloatArrayToNewlinedString(struct FString* NewLinedString, TArray<float>* Array, struct FString* NewVar)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString"));

	AMapStatAnalyzer_C_FloatArrayToNewlinedString_Params params;
	params.NewLinedString = NewLinedString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (NewVar != nullptr)
		*NewVar = params.NewVar;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString*                NewLinedString                 (Parm, ZeroConstructor)
// struct FString                 NewVar                         (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::StingArrayToNewlinedString(struct FString* NewLinedString, TArray<struct FString>* Array, struct FString* NewVar)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString"));

	AMapStatAnalyzer_C_StingArrayToNewlinedString_Params params;
	params.NewLinedString = NewLinedString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (NewVar != nullptr)
		*NewVar = params.NewVar;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

TArray<float> AMapStatAnalyzer_C::HitchFrameStatsThreshold()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold"));

	AMapStatAnalyzer_C_HitchFrameStatsThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<float>                  NewParam                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          OutAvg                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutMin                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutMax                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::GetAvgOnArray(TArray<float>* NewParam, float* OutAvg, float* OutMin, float* OutMax)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray"));

	AMapStatAnalyzer_C_GetAvgOnArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (OutAvg != nullptr)
		*OutAvg = params.OutAvg;
	if (OutMin != nullptr)
		*OutMin = params.OutMin;
	if (OutMax != nullptr)
		*OutMax = params.OutMax;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime*              NewParam                       (Parm)
// struct FString                 NewParam1                      (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::DateTimeToString(struct FDateTime* NewParam, struct FString* NewParam1)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString"));

	AMapStatAnalyzer_C_DateTimeToString_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Min                            (Parm, IsPlainOldData)
// struct FVector*                Max                            (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::ComputeWorldSize(struct FVector* Min, struct FVector* Max)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize"));

	AMapStatAnalyzer_C_ComputeWorldSize_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript"));

	AMapStatAnalyzer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay"));

	AMapStatAnalyzer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay"));

	AMapStatAnalyzer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer
// (HasDefaults)
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6D718D9B0              		 offset:7cd9b0                        

void AMapStatAnalyzer_C::ExecuteUbergraph_MapStatAnalyzer(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer"));

	AMapStatAnalyzer_C_ExecuteUbergraph_MapStatAnalyzer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
