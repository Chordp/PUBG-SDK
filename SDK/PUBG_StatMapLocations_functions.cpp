// PUBG (8.3.5.39) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_StatMapLocations_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Column_Names_as_String         (Parm, ZeroConstructor)
// TArray<struct FString>*        Stat_Data                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>*        Array                          (ConstParm, Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::AppendStatDataToColumnNames(struct FString* Column_Names_as_String, TArray<struct FString>* Stat_Data, TArray<struct FString>* Array)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.AppendStatDataToColumnNames"));

	AStatMapLocations_C_AppendStatDataToColumnNames_Params params;
	params.Column_Names_as_String = Column_Names_as_String;
	params.Stat_Data = Stat_Data;
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::GetCurrentLevelLocations()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.GetCurrentLevelLocations"));

	AStatMapLocations_C_GetCurrentLevelLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatMapLocations.StatMapLocations_C.GetMapLocations
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                InSection                      (Parm, ZeroConstructor)
// TArray<struct FTransform>      MapTransformArray              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::GetMapLocations(struct FString* InSection, TArray<struct FTransform>* MapTransformArray)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.GetMapLocations"));

	AStatMapLocations_C_GetMapLocations_Params params;
	params.InSection = InSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapTransformArray != nullptr)
		*MapTransformArray = params.MapTransformArray;
}


// Function StatMapLocations.StatMapLocations_C.CreateStatWidget
// (Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::CreateStatWidget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.CreateStatWidget"));

	AStatMapLocations_C_CreateStatWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatMapLocations.StatMapLocations_C.GatherStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         Output                         (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::GatherStats(TArray<struct FString>* Output)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.GatherStats"));

	AStatMapLocations_C_GatherStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function StatMapLocations.StatMapLocations_C.SetCurrentTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::SetCurrentTransform()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.SetCurrentTransform"));

	AStatMapLocations_C_SetCurrentTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerHasNotMoved              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::CheckPlayerTransform(bool* PlayerHasNotMoved)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.CheckPlayerTransform"));

	AStatMapLocations_C_CheckPlayerTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerHasNotMoved != nullptr)
		*PlayerHasNotMoved = params.PlayerHasNotMoved;
}


// Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PointNumber                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OutMoveLocation                (Parm, OutParm, ZeroConstructor)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::MoveToDebugLocation(int* PointNumber, struct FString* OutMoveLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.MoveToDebugLocation"));

	AStatMapLocations_C_MoveToDebugLocation_Params params;
	params.PointNumber = PointNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMoveLocation != nullptr)
		*OutMoveLocation = params.OutMoveLocation;
}


// Function StatMapLocations.StatMapLocations_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::UserConstructionScript()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.UserConstructionScript"));

	AStatMapLocations_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::ReceiveBeginPlay()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.ReceiveBeginPlay"));

	AStatMapLocations_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatMapLocations.StatMapLocations_C.SetUp
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::SetUp()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.SetUp"));

	AStatMapLocations_C_SetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatMapLocations.StatMapLocations_C.StatMapLocations
// (BlueprintCallable, BlueprintEvent)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::StatMapLocations()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.StatMapLocations"));

	AStatMapLocations_C_StatMapLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF629EA4280              		 offset:13d4280                       

void AStatMapLocations_C::ExecuteUbergraph_StatMapLocations(int* EntryPoint)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function StatMapLocations.StatMapLocations_C.ExecuteUbergraph_StatMapLocations"));

	AStatMapLocations_C_ExecuteUbergraph_StatMapLocations_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
