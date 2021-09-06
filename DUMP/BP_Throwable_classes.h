// BlueprintGeneratedClass BP_Throwable.BP_Throwable_C
// Size: 0x305 (Inherited: 0x220)
struct ABP_Throwable_C : AHWThrowable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* Audio; // 0x228(0x08)
	struct UStaticMeshComponent* ThrowableMesh; // 0x230(0x08)
	struct FVector Scale; // 0x238(0x0c)
	struct FVector ThrowForce; // 0x244(0x0c)
	bool StickY; // 0x250(0x01)
	bool Stuck; // 0x251(0x01)
	char pad_252[0x6]; // 0x252(0x06)
	struct FHWItemData Data; // 0x258(0x78)
	int32_t TeamNumber; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UAkAudioEvent* HitSound; // 0x2d8(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x2e0(0x08)
	struct FString OwnerSessionId; // 0x2e8(0x10)
	int32_t ItemAnalyticsID; // 0x2f8(0x04)
	bool HasBeenThrown; // 0x2fc(0x01)
	bool IsFirstBounceDone; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
	float MyThrowerPitch; // 0x300(0x04)
	bool StopHitSound; // 0x304(0x01)

	void GetDamageOrigin(struct FVector Origin); // Function BP_Throwable.BP_Throwable_C.GetDamageOrigin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetItemAnalyticsId(int32_t AnalyticsId); // Function BP_Throwable.BP_Throwable_C.GetItemAnalyticsId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetItemId(struct FName ID); // Function BP_Throwable.BP_Throwable_C.GetItemId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetOwnerSessionId(struct FString SessionId); // Function BP_Throwable.BP_Throwable_C.GetOwnerSessionId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleVelocityOnBounce(struct FVector ImpactNormal); // Function BP_Throwable.BP_Throwable_C.HandleVelocityOnBounce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleMotionSensorException(struct UObject* Object, bool IsSensorException); // Function BP_Throwable.BP_Throwable_C.HandleMotionSensorException // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Kill(struct AActor* NewParam); // Function BP_Throwable.BP_Throwable_C.Kill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SendExplodeAnalytics(); // Function BP_Throwable.BP_Throwable_C.SendExplodeAnalytics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCommonAnalyticsData(struct ABP_Throwable_C* Object, struct FHWItemData Data, struct FString SessionId, int32_t AnalyticsId); // Function BP_Throwable.BP_Throwable_C.GetCommonAnalyticsData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void HandleSticking(struct AActor* HitActor, struct USceneComponent* Parent, struct FVector HitLocation, struct UPhysicalMaterial* HitPhysMat); // Function BP_Throwable.BP_Throwable_C.HandleSticking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ThrowableStuck(); // Function BP_Throwable.BP_Throwable_C.ThrowableStuck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetDataParameters(struct FHWItemData Data); // Function BP_Throwable.BP_Throwable_C.SetDataParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideDespawnThrowable(); // Function BP_Throwable.BP_Throwable_C.HideDespawnThrowable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetItemAnalyticsId(int32_t ID); // Function BP_Throwable.BP_Throwable_C.SetItemAnalyticsId // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetOwnerSessionId(struct FString ID); // Function BP_Throwable.BP_Throwable_C.SetOwnerSessionId // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_Throwable.BP_Throwable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Throwable.BP_Throwable_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetHidden(bool NewHidden); // Function BP_Throwable.BP_Throwable_C.SetHidden // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSpawnTrailVFX(struct UNiagaraSystem* TrailSystem); // Function BP_Throwable.BP_Throwable_C.OnSpawnTrailVFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Throwable(int32_t EntryPoint); // Function BP_Throwable.BP_Throwable_C.ExecuteUbergraph_BP_Throwable // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

