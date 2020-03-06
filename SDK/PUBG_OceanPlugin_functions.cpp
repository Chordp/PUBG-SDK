// PUBG (7.1.6.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_OceanPlugin_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlugin.OceanManager.LoadLandscapeHeightmap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Tex2D                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92B80              		 offset:43d2b80                       

void AOceanManager::LoadLandscapeHeightmap(class UTexture2D* Tex2D)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanManager.LoadLandscapeHeightmap"));

	AOceanManager_LoadLandscapeHeightmap_Params params;
	params.Tex2D = Tex2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanManager.GetWaveHeightValue
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HeightOnly                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TwoIterations                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InClientOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD927D0              		 offset:43d27d0                       

struct FVector AOceanManager::GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations, bool InClientOnly)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanManager.GetWaveHeightValue"));

	AOceanManager_GetWaveHeightValue_Params params;
	params.Location = Location;
	params.World = World;
	params.HeightOnly = HeightOnly;
	params.TwoIterations = TwoIterations;
	params.InClientOnly = InClientOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.OceanManager.GetHeightmapPixel
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          U                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD925B0              		 offset:43d25b0                       

struct FLinearColor AOceanManager::GetHeightmapPixel(float U, float V)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanManager.GetHeightmapPixel"));

	AOceanManager_GetHeightmapPixel_Params params;
	params.U = U;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 A                              (Parm, IsPlainOldData)
// struct FVector                 B                              (Parm, IsPlainOldData)
// struct FVector                 C                              (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD933E0              		 offset:43d33e0                       

float UAdvancedBuoyancyComponent::TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.TriangleArea"));

	UAdvancedBuoyancyComponent_TriangleArea_Params params;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBuoyancyVertex         H                              (Parm)
// struct FBuoyancyVertex         M                              (Parm)
// struct FBuoyancyVertex         L                              (Parm)
// struct FVector                 InArrow                        (Parm, IsPlainOldData)
// TArray<struct FForceTriangle>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAD931C0              		 offset:43d31c0                       

TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.SplitTriangle"));

	UAdvancedBuoyancyComponent_SplitTriangle_Params params;
	params.H = H;
	params.M = M;
	params.L = L;
	params.InArrow = InArrow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewDensity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewWaterDensity                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD93100              		 offset:43d3100                       

void UAdvancedBuoyancyComponent::SetMeshDensity(float NewDensity, float NewWaterDensity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.SetMeshDensity"));

	UAdvancedBuoyancyComponent_SetMeshDensity_Params params;
	params.NewDensity = NewDensity;
	params.NewWaterDensity = NewWaterDensity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (Parm, IsPlainOldData)
// bool                           bJustGetHeightAtLocation       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD926E0              		 offset:43d26e0                       

float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.GetOceanDepthFromGrid"));

	UAdvancedBuoyancyComponent_GetOceanDepthFromGrid_Params params;
	params.Position = Position;
	params.bJustGetHeightAtLocation = bJustGetHeightAtLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean
// (Final, Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DAD926C0              		 offset:43d26c0                       

void UAdvancedBuoyancyComponent::GetOcean()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.GetOcean"));

	UAdvancedBuoyancyComponent_GetOcean_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FForceTriangle          TriForce                       (Parm)
// struct FColor                  DebugColor                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92140              		 offset:43d2140                       

void UAdvancedBuoyancyComponent::DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.DrawDebugStuff"));

	UAdvancedBuoyancyComponent_DrawDebugStuff_Params params;
	params.TriForce = TriForce;
	params.DebugColor = DebugColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 SlamForce                      (Parm, IsPlainOldData)
// struct FVector                 TriCenter                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD91F90              		 offset:43d1f90                       

void UAdvancedBuoyancyComponent::ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.ApplySlamForce"));

	UAdvancedBuoyancyComponent_ApplySlamForce_Params params;
	params.SlamForce = SlamForce;
	params.TriCenter = TriCenter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FForceTriangle          TriForce                       (Parm)
// FunctionAddress:0x00007FF6DAD91E70              		 offset:43d1e70                       

void UAdvancedBuoyancyComponent::ApplyForce(const struct FForceTriangle& TriForce)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.AdvancedBuoyancyComponent.ApplyForce"));

	UAdvancedBuoyancyComponent_ApplyForce_Params params;
	params.TriForce = TriForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.GetIsDriving
// (Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92690              		 offset:43d2690                       

bool ACustomVehicleController::GetIsDriving()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.GetIsDriving"));

	ACustomVehicleController_GetIsDriving_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.CustomVehicleController.ExitVehicle
// (Native, Public, BlueprintCallable)
// FunctionAddress:0x00007FF6DAD92340              		 offset:43d2340                       

void ACustomVehicleController::ExitVehicle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.ExitVehicle"));

	ACustomVehicleController_ExitVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.EnterVehicle
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD922B0              		 offset:43d22b0                       

void ACustomVehicleController::EnterVehicle(class APawn* Vehicle)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.EnterVehicle"));

	ACustomVehicleController_EnterVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.EnableBuoyancy
// (Exec, Native, Public)
// FunctionAddress:0x00007FF6DAD92290              		 offset:43d2290                       

void ACustomVehicleController::EnableBuoyancy()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.EnableBuoyancy"));

	ACustomVehicleController_EnableBuoyancy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints
// (Exec, Native, Public)
// FunctionAddress:0x00007FF6DAD92120              		 offset:43d2120                       

void ACustomVehicleController::DrawBuoyancyPoints()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.CustomVehicleController.DrawBuoyancyPoints"));

	ACustomVehicleController_DrawBuoyancyPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnEndOverlap
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92DF0              		 offset:43d2df0                       

void AFlockFish::OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.FlockFish.OnEndOverlap"));

	AFlockFish_OnEndOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.FlockFish.OnBeginOverlap
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92C00              		 offset:43d2c00                       

void AFlockFish::OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.FlockFish.OnBeginOverlap"));

	AFlockFish_OnBeginOverlap_Params params;
	params.activatedComp = activatedComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanMeshComponent.SetLODTransitionRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InLODTransitionStart           (Parm, ZeroConstructor, IsPlainOldData)
// float                          InLODTransitionEnd             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD93040              		 offset:43d3040                       

void UOceanMeshComponent::SetLODTransitionRange(float InLODTransitionStart, float InLODTransitionEnd)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanMeshComponent.SetLODTransitionRange"));

	UOceanMeshComponent_SetLODTransitionRange_Params params;
	params.InLODTransitionStart = InLODTransitionStart;
	params.InLODTransitionEnd = InLODTransitionEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.OceanMeshComponent.SetBoundsExtent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Extent                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92F30              		 offset:43d2f30                       

void UOceanMeshComponent::SetBoundsExtent(const struct FVector& Extent)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.OceanMeshComponent.SetBoundsExtent"));

	UOceanMeshComponent_SetBoundsExtent_Params params;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.SetCurrentLocalTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92FC0              		 offset:43d2fc0                       

void ATimeManager::SetCurrentLocalTime(float Time)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.SetCurrentLocalTime"));

	ATimeManager_SetCurrentLocalTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IsLeapYear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92AF0              		 offset:43d2af0                       

bool ATimeManager::IsLeapYear(int Year)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.IsLeapYear"));

	ATimeManager_IsLeapYear_Params params;
	params.Year = Year;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.InitializeCalendar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTimeDate               Time                           (Parm)
// FunctionAddress:0x00007FF6DAD92A60              		 offset:43d2a60                       

void ATimeManager::InitializeCalendar(const struct FTimeDate& Time)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.InitializeCalendar"));

	ATimeManager_InitializeCalendar_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.IncrementTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD929E0              		 offset:43d29e0                       

void ATimeManager::IncrementTime(float DeltaSeconds)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.IncrementTime"));

	ATimeManager_IncrementTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlugin.TimeManager.GetYearPhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD929B0              		 offset:43d29b0                       

float ATimeManager::GetYearPhase()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetYearPhase"));

	ATimeManager_GetYearPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetElapsedDayInMinutes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92580              		 offset:43d2580                       

float ATimeManager::GetElapsedDayInMinutes()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetElapsedDayInMinutes"));

	ATimeManager_GetElapsedDayInMinutes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInYear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD924F0              		 offset:43d24f0                       

int ATimeManager::GetDaysInYear(int Year)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetDaysInYear"));

	ATimeManager_GetDaysInYear_Params params;
	params.Year = Year;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDaysInMonth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92430              		 offset:43d2430                       

int ATimeManager::GetDaysInMonth(int Year, int Month)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetDaysInMonth"));

	ATimeManager_GetDaysInMonth_Params params;
	params.Year = Year;
	params.Month = Month;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayPhase
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92400              		 offset:43d2400                       

float ATimeManager::GetDayPhase()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetDayPhase"));

	ATimeManager_GetDayPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.GetDayOfYear
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTimeDate               Time                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92360              		 offset:43d2360                       

int ATimeManager::GetDayOfYear(const struct FTimeDate& Time)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.GetDayOfYear"));

	ATimeManager_GetDayOfYear_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateSunAngle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD920E0              		 offset:43d20e0                       

struct FRotator ATimeManager::CalculateSunAngle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.CalculateSunAngle"));

	ATimeManager_CalculateSunAngle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD920B0              		 offset:43d20b0                       

float ATimeManager::CalculateMoonPhase()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.CalculateMoonPhase"));

	ATimeManager_CalculateMoonPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OceanPlugin.TimeManager.CalculateMoonAngle
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92070              		 offset:43d2070                       

struct FRotator ATimeManager::CalculateMoonAngle()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function OceanPlugin.TimeManager.CalculateMoonAngle"));

	ATimeManager_CalculateMoonAngle_Params params;

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
