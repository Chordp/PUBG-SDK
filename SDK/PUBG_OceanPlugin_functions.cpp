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
<<<<<<< HEAD
// class UTexture2D**             Tex2D                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C79FC80              		 offset:49cfc80                       

void AOceanManager::LoadLandscapeHeightmap(class UTexture2D** Tex2D)
=======
// class UTexture2D*              Tex2D                          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92B80              		 offset:43d2b80                       

void AOceanManager::LoadLandscapeHeightmap(class UTexture2D* Tex2D)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UWorld**                 World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HeightOnly                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TwoIterations                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InClientOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F8D0              		 offset:49cf8d0                       

struct FVector AOceanManager::GetWaveHeightValue(struct FVector* Location, class UWorld** World, bool* HeightOnly, bool* TwoIterations, bool* InClientOnly)
=======
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UWorld*                  World                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HeightOnly                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TwoIterations                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InClientOnly                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD927D0              		 offset:43d27d0                       

struct FVector AOceanManager::GetWaveHeightValue(const struct FVector& Location, class UWorld* World, bool HeightOnly, bool TwoIterations, bool InClientOnly)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// float*                         U                              (Parm, ZeroConstructor, IsPlainOldData)
// float*                         V                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F6B0              		 offset:49cf6b0                       

struct FLinearColor AOceanManager::GetHeightmapPixel(float* U, float* V)
=======
// float                          U                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          V                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD925B0              		 offset:43d25b0                       

struct FLinearColor AOceanManager::GetHeightmapPixel(float U, float V)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FVector*                A                              (Parm, IsPlainOldData)
// struct FVector*                B                              (Parm, IsPlainOldData)
// struct FVector*                C                              (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C7A04E0              		 offset:49d04e0                       

float UAdvancedBuoyancyComponent::TriangleArea(struct FVector* A, struct FVector* B, struct FVector* C)
=======
// struct FVector                 A                              (Parm, IsPlainOldData)
// struct FVector                 B                              (Parm, IsPlainOldData)
// struct FVector                 C                              (Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD933E0              		 offset:43d33e0                       

float UAdvancedBuoyancyComponent::TriangleArea(const struct FVector& A, const struct FVector& B, const struct FVector& C)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FBuoyancyVertex*        H                              (Parm)
// struct FBuoyancyVertex*        M                              (Parm)
// struct FBuoyancyVertex*        L                              (Parm)
// struct FVector*                InArrow                        (Parm, IsPlainOldData)
// TArray<struct FForceTriangle>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF71C7A02C0              		 offset:49d02c0                       

TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(struct FBuoyancyVertex* H, struct FBuoyancyVertex* M, struct FBuoyancyVertex* L, struct FVector* InArrow)
=======
// struct FBuoyancyVertex         H                              (Parm)
// struct FBuoyancyVertex         M                              (Parm)
// struct FBuoyancyVertex         L                              (Parm)
// struct FVector                 InArrow                        (Parm, IsPlainOldData)
// TArray<struct FForceTriangle>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)
// FunctionAddress:0x00007FF6DAD931C0              		 offset:43d31c0                       

TArray<struct FForceTriangle> UAdvancedBuoyancyComponent::SplitTriangle(const struct FBuoyancyVertex& H, const struct FBuoyancyVertex& M, const struct FBuoyancyVertex& L, const struct FVector& InArrow)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// float*                         NewDensity                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewWaterDensity                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C7A0200              		 offset:49d0200                       

void UAdvancedBuoyancyComponent::SetMeshDensity(float* NewDensity, float* NewWaterDensity)
=======
// float                          NewDensity                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewWaterDensity                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD93100              		 offset:43d3100                       

void UAdvancedBuoyancyComponent::SetMeshDensity(float NewDensity, float NewWaterDensity)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FVector*                Position                       (Parm, IsPlainOldData)
// bool*                          bJustGetHeightAtLocation       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F7E0              		 offset:49cf7e0                       

float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(struct FVector* Position, bool* bJustGetHeightAtLocation)
=======
// struct FVector                 Position                       (Parm, IsPlainOldData)
// bool                           bJustGetHeightAtLocation       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD926E0              		 offset:43d26e0                       

float UAdvancedBuoyancyComponent::GetOceanDepthFromGrid(const struct FVector& Position, bool bJustGetHeightAtLocation)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F7C0              		 offset:49cf7c0                       
=======
// FunctionAddress:0x00007FF6DAD926C0              		 offset:43d26c0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// struct FForceTriangle*         TriForce                       (Parm)
// struct FColor*                 DebugColor                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F240              		 offset:49cf240                       

void UAdvancedBuoyancyComponent::DrawDebugStuff(struct FForceTriangle* TriForce, struct FColor* DebugColor)
=======
// struct FForceTriangle          TriForce                       (Parm)
// struct FColor                  DebugColor                     (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92140              		 offset:43d2140                       

void UAdvancedBuoyancyComponent::DrawDebugStuff(const struct FForceTriangle& TriForce, const struct FColor& DebugColor)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FVector*                SlamForce                      (Parm, IsPlainOldData)
// struct FVector*                TriCenter                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F090              		 offset:49cf090                       

void UAdvancedBuoyancyComponent::ApplySlamForce(struct FVector* SlamForce, struct FVector* TriCenter)
=======
// struct FVector                 SlamForce                      (Parm, IsPlainOldData)
// struct FVector                 TriCenter                      (Parm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD91F90              		 offset:43d1f90                       

void UAdvancedBuoyancyComponent::ApplySlamForce(const struct FVector& SlamForce, const struct FVector& TriCenter)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FForceTriangle*         TriForce                       (Parm)
// FunctionAddress:0x00007FF71C79EF70              		 offset:49cef70                       

void UAdvancedBuoyancyComponent::ApplyForce(struct FForceTriangle* TriForce)
=======
// struct FForceTriangle          TriForce                       (Parm)
// FunctionAddress:0x00007FF6DAD91E70              		 offset:43d1e70                       

void UAdvancedBuoyancyComponent::ApplyForce(const struct FForceTriangle& TriForce)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F790              		 offset:49cf790                       
=======
// FunctionAddress:0x00007FF6DAD92690              		 offset:43d2690                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F440              		 offset:49cf440                       
=======
// FunctionAddress:0x00007FF6DAD92340              		 offset:43d2340                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// class APawn**                  Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F3B0              		 offset:49cf3b0                       

void ACustomVehicleController::EnterVehicle(class APawn** Vehicle)
=======
// class APawn*                   Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD922B0              		 offset:43d22b0                       

void ACustomVehicleController::EnterVehicle(class APawn* Vehicle)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F390              		 offset:49cf390                       
=======
// FunctionAddress:0x00007FF6DAD92290              		 offset:43d2290                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F220              		 offset:49cf220                       
=======
// FunctionAddress:0x00007FF6DAD92120              		 offset:43d2120                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// class UPrimitiveComponent**    activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C79FEF0              		 offset:49cfef0                       

void AFlockFish::OnEndOverlap(class UPrimitiveComponent** activatedComp, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
=======
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92DF0              		 offset:43d2df0                       

void AFlockFish::OnEndOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// class UPrimitiveComponent**    activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79FD00              		 offset:49cfd00                       

void AFlockFish::OnBeginOverlap(class UPrimitiveComponent** activatedComp, class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
=======
// class UPrimitiveComponent*     activatedComp                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92C00              		 offset:43d2c00                       

void AFlockFish::OnBeginOverlap(class UPrimitiveComponent* activatedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// float*                         InLODTransitionStart           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InLODTransitionEnd             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C7A0140              		 offset:49d0140                       

void UOceanMeshComponent::SetLODTransitionRange(float* InLODTransitionStart, float* InLODTransitionEnd)
=======
// float                          InLODTransitionStart           (Parm, ZeroConstructor, IsPlainOldData)
// float                          InLODTransitionEnd             (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD93040              		 offset:43d3040                       

void UOceanMeshComponent::SetLODTransitionRange(float InLODTransitionStart, float InLODTransitionEnd)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FVector*                Extent                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C7A0030              		 offset:49d0030                       

void UOceanMeshComponent::SetBoundsExtent(struct FVector* Extent)
=======
// struct FVector                 Extent                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92F30              		 offset:43d2f30                       

void UOceanMeshComponent::SetBoundsExtent(const struct FVector& Extent)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C7A00C0              		 offset:49d00c0                       

void ATimeManager::SetCurrentLocalTime(float* Time)
=======
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92FC0              		 offset:43d2fc0                       

void ATimeManager::SetCurrentLocalTime(float Time)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// int*                           Year                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79FBF0              		 offset:49cfbf0                       

bool ATimeManager::IsLeapYear(int* Year)
=======
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92AF0              		 offset:43d2af0                       

bool ATimeManager::IsLeapYear(int Year)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// struct FTimeDate*              Time                           (Parm)
// FunctionAddress:0x00007FF71C79FB60              		 offset:49cfb60                       

void ATimeManager::InitializeCalendar(struct FTimeDate* Time)
=======
// struct FTimeDate               Time                           (Parm)
// FunctionAddress:0x00007FF6DAD92A60              		 offset:43d2a60                       

void ATimeManager::InitializeCalendar(const struct FTimeDate& Time)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF71C79FAE0              		 offset:49cfae0                       

void ATimeManager::IncrementTime(float* DeltaSeconds)
=======
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD929E0              		 offset:43d29e0                       

void ATimeManager::IncrementTime(float DeltaSeconds)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79FAB0              		 offset:49cfab0                       
=======
// FunctionAddress:0x00007FF6DAD929B0              		 offset:43d29b0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F680              		 offset:49cf680                       
=======
// FunctionAddress:0x00007FF6DAD92580              		 offset:43d2580                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// int*                           Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F5F0              		 offset:49cf5f0                       

int ATimeManager::GetDaysInYear(int* Year)
=======
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD924F0              		 offset:43d24f0                       

int ATimeManager::GetDaysInYear(int Year)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// int*                           Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F530              		 offset:49cf530                       

int ATimeManager::GetDaysInMonth(int* Year, int* Month)
=======
// int                            Year                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Month                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92430              		 offset:43d2430                       

int ATimeManager::GetDaysInMonth(int Year, int Month)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F500              		 offset:49cf500                       
=======
// FunctionAddress:0x00007FF6DAD92400              		 offset:43d2400                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// struct FTimeDate*              Time                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF71C79F460              		 offset:49cf460                       

int ATimeManager::GetDayOfYear(struct FTimeDate* Time)
=======
// struct FTimeDate               Time                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF6DAD92360              		 offset:43d2360                       

int ATimeManager::GetDayOfYear(const struct FTimeDate& Time)
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3
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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F1E0              		 offset:49cf1e0                       
=======
// FunctionAddress:0x00007FF6DAD920E0              		 offset:43d20e0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F1B0              		 offset:49cf1b0                       
=======
// FunctionAddress:0x00007FF6DAD920B0              		 offset:43d20b0                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
<<<<<<< HEAD
// FunctionAddress:0x00007FF71C79F170              		 offset:49cf170                       
=======
// FunctionAddress:0x00007FF6DAD92070              		 offset:43d2070                       
>>>>>>> 365df962e7a70abd9703cbaa62487bbf1539bbf3

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
