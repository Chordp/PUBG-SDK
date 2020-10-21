// PUBG (9.1.5.3) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeapKar98k_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterTrail
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector                 SurfaceImpactPoint             (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 ShootDirection                 (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          TravelDistance                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DEFD390              		 offset:44fd390                       

void AWeapKar98k_C::SimulateUnderwaterTrail(const struct FVector& SurfaceImpactPoint, const struct FVector& ShootDirection, float TravelDistance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterTrail"));

	AWeapKar98k_C_SimulateUnderwaterTrail_Params params;
	params.SurfaceImpactPoint = SurfaceImpactPoint;
	params.ShootDirection = ShootDirection;
	params.TravelDistance = TravelDistance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterHit
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector                 UnderwaterImpactPoint          (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 ShootOrigin                    (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75D2BB920              		 offset:38bb920                       

void AWeapKar98k_C::SimulateUnderwaterHit(const struct FVector& UnderwaterImpactPoint, const struct FVector& ShootOrigin)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterHit"));

	AWeapKar98k_C_SimulateUnderwaterHit_Params params;
	params.UnderwaterImpactPoint = UnderwaterImpactPoint;
	params.ShootOrigin = ShootOrigin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable_AI
// (Net, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelLocation                    (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75EA800C0              		 offset:50800c0                       

void AWeapKar98k_C::SimulateHit_UnReliable_AI(const struct FHitResult& Impact, const struct FVector& RelLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable_AI"));

	AWeapKar98k_C_SimulateHit_UnReliable_AI_Params params;
	params.Impact = Impact;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable
// (Net, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelLocation                    (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75A1ECDA0              		 offset:7ecda0                        

void AWeapKar98k_C::SimulateHit_UnReliable(const struct FHitResult& Impact, const struct FVector& RelLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable"));

	AWeapKar98k_C_SimulateHit_UnReliable_Params params;
	params.Impact = Impact;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable_AI
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelLocation                    (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75BAEB2E0              		 offset:20eb2e0                       

void AWeapKar98k_C::SimulateHit_Reliable_AI(const struct FHitResult& Impact, const struct FVector& RelLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable_AI"));

	AWeapKar98k_C_SimulateHit_Reliable_AI_Params params;
	params.Impact = Impact;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FHitResult              Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelLocation                    (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75BB9F230              		 offset:219f230                       

void AWeapKar98k_C::SimulateHit_Reliable(const struct FHitResult& Impact, const struct FVector& RelLocation)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable"));

	AWeapKar98k_C_SimulateHit_Reliable_Params params;
	params.Impact = Impact;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.Simulate_CreateAmmoInstance
// (Net, NetReliable, Native, Event, NetMulticast, Protected, HasDefaults)
// Parameters:
// struct FVector                 ServerStartTrace               (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 Dir                            (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FAttackId               AttackId                       (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF75A078BD0              		 offset:678bd0                        

void AWeapKar98k_C::Simulate_CreateAmmoInstance(const struct FVector& ServerStartTrace, const struct FVector& Dir, const struct FAttackId& AttackId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.Simulate_CreateAmmoInstance"));

	AWeapKar98k_C_Simulate_CreateAmmoInstance_Params params;
	params.ServerStartTrace = ServerStartTrace;
	params.Dir = Dir;
	params.AttackId = AttackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SetCurrentRecoilValue
// (Final, Native, Protected)
// Parameters:
// float                          InCurrent_RecoilValue          (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CB16D40              		 offset:3116d40                       

void AWeapKar98k_C::SetCurrentRecoilValue(float InCurrent_RecoilValue)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.SetCurrentRecoilValue"));

	AWeapKar98k_C_SetCurrentRecoilValue_Params params;
	params.InCurrent_RecoilValue = InCurrent_RecoilValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SetCurrentBullet
// (Final, Native, Protected)
// Parameters:
// int                            InCurrent_Bullet               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B48E910              		 offset:1a8e910                       

void AWeapKar98k_C::SetCurrentBullet(int InCurrent_Bullet)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.SetCurrentBullet"));

	AWeapKar98k_C_SetCurrentBullet_Params params;
	params.InCurrent_Bullet = InCurrent_Bullet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerWallCheckTest
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 TraceStart                     (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CAD0350              		 offset:30d0350                       

void AWeapKar98k_C::ServerWallCheckTest(const struct FVector& TraceStart, const struct FVector& TraceEnd)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.ServerWallCheckTest"));

	AWeapKar98k_C_ServerWallCheckTest_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerTestBallistics
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 Origin                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 OriginDir                      (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E212E20              		 offset:4812e20                       

void AWeapKar98k_C::ServerTestBallistics(const struct FVector& Origin, const struct FVector& OriginDir)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.ServerTestBallistics"));

	AWeapKar98k_C_ServerTestBallistics_Params params;
	params.Origin = Origin;
	params.OriginDir = OriginDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyShoot_AI
// (Net, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class ATslCharacter*           TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75CE17BE0              		 offset:3417be0                       

void AWeapKar98k_C::ServerNotifyShoot_AI(class ATslCharacter* TargetCharacter)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.ServerNotifyShoot_AI"));

	AWeapKar98k_C_ServerNotifyShoot_AI_Params params;
	params.TargetCharacter = TargetCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyHit
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// TArray<int>                    Ints2                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// struct FVector                 vd                             (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          t1                             (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       uintr                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          t2                             (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       uinta                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       uintp                          (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       uintb                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          L3                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          L4                             (Parm, ZeroConstructor, IsPlainOldData)
// float                          CR_P                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          CR_Y                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Ints                           (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// unsigned char                  h0                             (Parm, ZeroConstructor, IsPlainOldData)
// uint64_t                       h1                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            h2                             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  uint1                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            chksum1                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            checksum_CD                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 SI                             (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 L1                             (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 L2                             (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// int                            LC                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// uint16_t                       Segment                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Dir0                           (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// unsigned char                  bUnder                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 E1                             (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          S1                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ClientImpactLocation           (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 RelativeImpact                 (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FHitResult              ImpactFromClient               (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// TArray<int>                    Ints3                          (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// struct FVector                 ClientOrigin                   (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 Origin                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 TraceStart                     (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (Parm)
// float                          TravelDistance                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            TT                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAttackId               AttackId                       (Parm)
// uint32_t                       HitSeq                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RelLocation                    (ConstParm, Parm, IsPlainOldData)
// float                          SpeedLoss                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OD                             (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          ts                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 IV                             (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 BaseMoveDelta                  (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// float                          InDevMultiplier                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InRecY                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          InCachedY                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bWasPenetration                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseSocket                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75DEE67B0              		 offset:44e67b0                       

void AWeapKar98k_C::ServerNotifyHit(TArray<int> Ints2, const struct FVector& vd, float t1, uint32_t uintr, float t2, uint32_t uinta, uint32_t uintp, uint32_t uintb, float L3, float L4, float CR_P, float CR_Y, TArray<int> Ints, unsigned char h0, uint64_t h1, int h2, unsigned char uint1, int chksum1, int checksum_CD, const struct FVector& SI, const struct FVector& L1, const struct FVector& L2, int LC, uint16_t Segment, const struct FVector& Dir0, unsigned char bUnder, const struct FVector& E1, float S1, const struct FVector& ClientImpactLocation, const struct FVector& RelativeImpact, const struct FHitResult& ImpactFromClient, TArray<int> Ints3, const struct FVector& ClientOrigin, const struct FVector& Origin, const struct FVector& TraceStart, const struct FVector_NetQuantizeNormal& ShootDir, float TravelDistance, int TT, const struct FAttackId& AttackId, uint32_t HitSeq, const struct FVector& RelLocation, float SpeedLoss, const struct FVector& OD, float ts, const struct FVector& IV, const struct FVector& BaseMoveDelta, float InDevMultiplier, float InRecY, float InCachedY, bool bWasPenetration, bool bUseSocket)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.ServerNotifyHit"));

	AWeapKar98k_C_ServerNotifyHit_Params params;
	params.Ints2 = Ints2;
	params.vd = vd;
	params.t1 = t1;
	params.uintr = uintr;
	params.t2 = t2;
	params.uinta = uinta;
	params.uintp = uintp;
	params.uintb = uintb;
	params.L3 = L3;
	params.L4 = L4;
	params.CR_P = CR_P;
	params.CR_Y = CR_Y;
	params.Ints = Ints;
	params.h0 = h0;
	params.h1 = h1;
	params.h2 = h2;
	params.uint1 = uint1;
	params.chksum1 = chksum1;
	params.checksum_CD = checksum_CD;
	params.SI = SI;
	params.L1 = L1;
	params.L2 = L2;
	params.LC = LC;
	params.Segment = Segment;
	params.Dir0 = Dir0;
	params.bUnder = bUnder;
	params.E1 = E1;
	params.S1 = S1;
	params.ClientImpactLocation = ClientImpactLocation;
	params.RelativeImpact = RelativeImpact;
	params.ImpactFromClient = ImpactFromClient;
	params.Ints3 = Ints3;
	params.ClientOrigin = ClientOrigin;
	params.Origin = Origin;
	params.TraceStart = TraceStart;
	params.ShootDir = ShootDir;
	params.TravelDistance = TravelDistance;
	params.TT = TT;
	params.AttackId = AttackId;
	params.HitSeq = HitSeq;
	params.RelLocation = RelLocation;
	params.SpeedLoss = SpeedLoss;
	params.OD = OD;
	params.ts = ts;
	params.IV = IV;
	params.BaseMoveDelta = BaseMoveDelta;
	params.InDevMultiplier = InDevMultiplier;
	params.InRecY = InRecY;
	params.InCachedY = InCachedY;
	params.bWasPenetration = bWasPenetration;
	params.bUseSocket = bUseSocket;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack
// (Net, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class ATslCharacter*           TargetCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector_NetQuantize     LocationRelative               (Parm)
// float                          BulletVelocity                 (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75B356CF0              		 offset:1956cf0                       

void AWeapKar98k_C::ServerNotifyCrack(class ATslCharacter* TargetCharacter, const struct FVector_NetQuantize& LocationRelative, float BulletVelocity)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack"));

	AWeapKar98k_C_ServerNotifyCrack_Params params;
	params.TargetCharacter = TargetCharacter;
	params.LocationRelative = LocationRelative;
	params.BulletVelocity = BulletVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyAmmoSpawned
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector                 ServerStartTrace               (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 Dir                            (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FAttackId               AttackId                       (ConstParm, Parm, ReferenceParm)
// FunctionAddress:0x00007FF75BB3DD10              		 offset:213dd10                       

void AWeapKar98k_C::ServerNotifyAmmoSpawned(const struct FVector& ServerStartTrace, const struct FVector& Dir, const struct FAttackId& AttackId)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.ServerNotifyAmmoSpawned"));

	AWeapKar98k_C_ServerNotifyAmmoSpawned_Params params;
	params.ServerStartTrace = ServerStartTrace;
	params.Dir = Dir;
	params.AttackId = AttackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerLogBodyPenetration
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// int                            AttackId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DamageZone                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageDiff                     (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF75EE51060              		 offset:5451060                       

void AWeapKar98k_C::ServerLogBodyPenetration(int AttackId, const struct FName& DamageZone, float DamageDiff)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.ServerLogBodyPenetration"));

	AWeapKar98k_C_ServerLogBodyPenetration_Params params;
	params.AttackId = AttackId;
	params.DamageZone = DamageZone;
	params.DamageDiff = DamageDiff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.OnWorldOriginShifted
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FVector                 InShiftVector                  (ConstParm, Parm, IsPlainOldData)
// FunctionAddress:0x00007FF75CFDF780              		 offset:35df780                       

void AWeapKar98k_C::OnWorldOriginShifted(const struct FVector& InShiftVector)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.OnWorldOriginShifted"));

	AWeapKar98k_C_OnWorldOriginShifted_Params params;
	params.InShiftVector = InShiftVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread
// (Final, Native, Protected)
// Parameters:
// float                          LastWeaponSpread               (Parm, ZeroConstructor, IsPlainOldData)
// FunctionAddress:0x00007FF759C4FE00              		 offset:24fe00                        

void AWeapKar98k_C::OnRep_WeaponSpread(float LastWeaponSpread)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread"));

	AWeapKar98k_C_OnRep_WeaponSpread_Params params;
	params.LastWeaponSpread = LastWeaponSpread;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.IsRecoilDebugEnabled_BP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A0A58A0              		 offset:6a58a0                        

bool AWeapKar98k_C::IsRecoilDebugEnabled_BP()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.IsRecoilDebugEnabled_BP"));

	AWeapKar98k_C_IsRecoilDebugEnabled_BP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.IsBulletInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B60B2A0              		 offset:1c0b2a0                       

bool AWeapKar98k_C::IsBulletInAir()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.IsBulletInAir"));

	AWeapKar98k_C_IsBulletInAir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryData
// (Final, Native, Public, Const)
// Parameters:
// class UWeaponTrajectoryData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CB55310              		 offset:3155310                       

class UWeaponTrajectoryData* AWeapKar98k_C::GetWeaponTrajectoryData()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryData"));

	AWeapKar98k_C_GetWeaponTrajectoryData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWeaponTrajectoryConfig ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF75CF77920              		 offset:3577920                       

struct FWeaponTrajectoryConfig AWeapKar98k_C::GetWeaponTrajectoryConfig()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryConfig"));

	AWeapKar98k_C_GetWeaponTrajectoryConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTrajectoryWeaponData   ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF75E7862A0              		 offset:4d862a0                       

struct FTrajectoryWeaponData AWeapKar98k_C::GetTrajectoryConfig()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig"));

	AWeapKar98k_C_GetTrajectoryConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetStanceSwayModifier
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EAnimStance                    Stance                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75B12BB50              		 offset:172bb50                       

float AWeapKar98k_C::GetStanceSwayModifier(EAnimStance Stance)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetStanceSwayModifier"));

	AWeapKar98k_C_GetStanceSwayModifier_Params params;
	params.Stance = Stance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilStartTime
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AB52A50              		 offset:1152a50                       

float AWeapKar98k_C::GetRecoilStartTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetRecoilStartTime"));

	AWeapKar98k_C_GetRecoilStartTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilDebugInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRecoilDebugInfo        ReturnValue                    (Parm, OutParm, ReturnParm)
// FunctionAddress:0x00007FF75E182800              		 offset:4782800                       

struct FRecoilDebugInfo AWeapKar98k_C::GetRecoilDebugInfo()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetRecoilDebugInfo"));

	AWeapKar98k_C_GetRecoilDebugInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilDebugCurrentBullet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF759BEEBF0              		 offset:1eebf0                        

int AWeapKar98k_C::GetRecoilDebugCurrentBullet()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetRecoilDebugCurrentBullet"));

	AWeapKar98k_C_GetRecoilDebugCurrentBullet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilConfig
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FWeaponRecoilConfig     ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
// FunctionAddress:0x00007FF75E08B2E0              		 offset:468b2e0                       

struct FWeaponRecoilConfig AWeapKar98k_C::GetRecoilConfig()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetRecoilConfig"));

	AWeapKar98k_C_GetRecoilConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilBlendInTime
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A0A6DC0              		 offset:6a6dc0                        

float AWeapKar98k_C::GetRecoilBlendInTime()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetRecoilBlendInTime"));

	AWeapKar98k_C_GetRecoilBlendInTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetInertiaPitchAdditive
// (Final, Native, Public, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A152B30              		 offset:752b30                        

float AWeapKar98k_C::GetInertiaPitchAdditive()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetInertiaPitchAdditive"));

	AWeapKar98k_C_GetInertiaPitchAdditive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CF900E0              		 offset:35900e0                       

float AWeapKar98k_C::GetCurrentStabilityVar()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar"));

	AWeapKar98k_C_GetCurrentStabilityVar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75E12C100              		 offset:472c100                       

float AWeapKar98k_C::GetCurrentReoveryTarget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget"));

	AWeapKar98k_C_GetCurrentReoveryTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A677A80              		 offset:c77a80                        

float AWeapKar98k_C::GetCurrentRecoilValue()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue"));

	AWeapKar98k_C_GetCurrentRecoilValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75CE2ABA0              		 offset:342aba0                       

struct FVector2D AWeapKar98k_C::GetCurrentRecoilTarget()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget"));

	AWeapKar98k_C_GetCurrentRecoilTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetBulletRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A677A40              		 offset:c77a40                        

struct FRotator AWeapKar98k_C::GetBulletRotation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetBulletRotation"));

	AWeapKar98k_C_GetBulletRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetBulletLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)
// FunctionAddress:0x00007FF75AD04E40              		 offset:1304e40                       

struct FVector AWeapKar98k_C::GetBulletLocation()
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.GetBulletLocation"));

	AWeapKar98k_C_GetBulletLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.ClientWallCheckFail
// (Final, Net, NetReliable, Native, Event, Private, HasDefaults, NetClient)
// Parameters:
// struct FVector                 TraceStart                     (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 TraceEnd                       (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FVector                 Impact                         (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// FunctionAddress:0x00007FF75A0C1B30              		 offset:6c1b30                        

void AWeapKar98k_C::ClientWallCheckFail(const struct FVector& TraceStart, const struct FVector& TraceEnd, const struct FVector& Impact)
{
	static UFunction* fn;

		if(!fn)
		fn = UObject::FindObject<UFunction>(_xor_("Function TslGame.TslWeapon_Trajectory.ClientWallCheckFail"));

	AWeapKar98k_C_ClientWallCheckFail_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
