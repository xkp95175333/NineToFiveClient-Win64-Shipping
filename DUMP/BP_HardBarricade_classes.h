// BlueprintGeneratedClass BP_HardBarricade.BP_HardBarricade_C
// Size: 0x370 (Inherited: 0x2d0)
struct ABP_HardBarricade_C : AHWPlaceable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_TempStatusLight; // 0x2d8(0x08)
	struct UAkComponent* Akhardbarricade_place; // 0x2e0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2e8(0x08)
	struct USceneComponent* FireSpot; // 0x2f0(0x08)
	struct USceneComponent* TriggerSpot; // 0x2f8(0x08)
	struct UBoxComponent* Box; // 0x300(0x08)
	struct UHWDestructibleComponent* HWDestructible; // 0x308(0x08)
	struct UHWBarricadeComponent* HWBarricade; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	float SpawnAnim_Progress_F_4DFE4B584491FC5278393E934124207C; // 0x320(0x04)
	enum class ETimelineDirection SpawnAnim__Direction_4DFE4B584491FC5278393E934124207C; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* SpawnAnim; // 0x328(0x08)
	float Thickness; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct ABP_HardBarricadeExplosive_Placeable_C* ExplosiveDevice; // 0x338(0x08)
	float ExtentX; // 0x340(0x04)
	float ExtentZ; // 0x344(0x04)
	float XSegmentLength; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x350(0x08)
	struct FTimerHandle ExplosiveCheckTimer; // 0x358(0x08)
	float InitialHitpoints; // 0x360(0x04)
	int32_t Damage; // 0x364(0x04)
	float Width; // 0x368(0x04)
	float Height; // 0x36c(0x04)

	void Choose Spawn Points(struct FVector MeshSpawnLocation, struct FVector FireSpawnLocation); // Function BP_HardBarricade.BP_HardBarricade_C.Choose Spawn Points // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetDimensions(struct FVector2D Dimensions); // Function BP_HardBarricade.BP_HardBarricade_C.SetDimensions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnAnim__FinishedFunc(); // Function BP_HardBarricade.BP_HardBarricade_C.SpawnAnim__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void SpawnAnim__UpdateFunc(); // Function BP_HardBarricade.BP_HardBarricade_C.SpawnAnim__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWBarricade_K2Node_ComponentBoundEvent_0_HWBarricadeDimensionsDelegate__DelegateSignature(struct UHWBarricadeComponent* Component, struct FVector2D Dimension); // Function BP_HardBarricade.BP_HardBarricade_C.BndEvt__HWBarricade_K2Node_ComponentBoundEvent_0_HWBarricadeDimensionsDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void BndEvt__HWDestructible_K2Node_ComponentBoundEvent_1_HWDestructibleHitDelegate__DelegateSignature(struct AActor* Instigator, struct FHitResult Hit, struct AActor* DamageDealer, bool Destroyed, int32_t Damage, enum class EHWDamageType DamageType); // Function BP_HardBarricade.BP_HardBarricade_C.BndEvt__HWDestructible_K2Node_ComponentBoundEvent_1_HWDestructibleHitDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveDestroyed(); // Function BP_HardBarricade.BP_HardBarricade_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ChangeLightColor(); // Function BP_HardBarricade.BP_HardBarricade_C.ChangeLightColor // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_HardBarricade.BP_HardBarricade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void CheckExplosiveState(); // Function BP_HardBarricade.BP_HardBarricade_C.CheckExplosiveState // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHitpointsChanged(float HitpointRatio); // Function BP_HardBarricade.BP_HardBarricade_C.OnHitpointsChanged // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_HardBarricade(int32_t EntryPoint); // Function BP_HardBarricade.BP_HardBarricade_C.ExecuteUbergraph_BP_HardBarricade // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

