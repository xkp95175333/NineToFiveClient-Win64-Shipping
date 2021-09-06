// BlueprintGeneratedClass BP_ItemBase_Throwable.BP_ItemBase_Throwable_C
// Size: 0x378 (Inherited: 0x338)
struct ABP_ItemBase_Throwable_C : AHWItemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x340(0x08)
	struct ABP_Throwable_C* ThrowableClass; // 0x348(0x08)
	float ThrowStartTime; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct ABP_Throwable_C* SpawnedThrowable; // 0x358(0x08)
	float MinimumThrowTime; // 0x360(0x04)
	float ThrowVelocity; // 0x364(0x04)
	float ThrowVelocityModifier; // 0x368(0x04)
	float BaseThrowVelocity; // 0x36c(0x04)
	struct UNiagaraSystem* TrailSystem; // 0x370(0x08)

	void SetThrowVelocity(struct APawn* Instigator); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.SetThrowVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Throw(); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.Throw // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnLocation(struct AActor* Thrower, struct FVector OutSpawnLocation); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.GetSpawnLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void BeginThrow(struct APawn* Thrower); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.BeginThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnItem(struct ACharacter* Character); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.SpawnItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SendAnalytics(); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.SendAnalytics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemThrown(struct AHWCharacter* Thrower); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.OnItemThrown // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemThrowBegin(struct AHWCharacter* User); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.OnItemThrowBegin // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnItemThrowAborted(struct AHWCharacter* User); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.OnItemThrowAborted // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void DelayedThrow(); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.DelayedThrow // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCookSound(struct ABP_Throwable_C* ThrowableActor, bool IsOn); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.PlayCookSound // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_ItemBase_Throwable(int32_t EntryPoint); // Function BP_ItemBase_Throwable.BP_ItemBase_Throwable_C.ExecuteUbergraph_BP_ItemBase_Throwable // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

