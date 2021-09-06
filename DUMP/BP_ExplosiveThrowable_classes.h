// BlueprintGeneratedClass BP_ExplosiveThrowable.BP_ExplosiveThrowable_C
// Size: 0x380 (Inherited: 0x305)
struct ABP_ExplosiveThrowable_C : ABP_Throwable_C {
	char pad_305[0x3]; // 0x305(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	float GrenadeHUDBlinkyThing_Multipler_CC2107BB466073F819F979B9893CAE3E; // 0x310(0x04)
	enum class ETimelineDirection GrenadeHUDBlinkyThing__Direction_CC2107BB466073F819F979B9893CAE3E; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct UTimelineComponent* GrenadeHUDBlinkyThing; // 0x318(0x08)
	struct AActor* DetonationEffect; // 0x320(0x08)
	float DetonationTime; // 0x328(0x04)
	float CharacterAffectRadius; // 0x32c(0x04)
	float DestructableAffectRadius; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct TArray<struct AActor*> CharactersToIgnore; // 0x338(0x10)
	struct TArray<struct AActor*> DestructablesToIgnore; // 0x348(0x10)
	bool IndicatorVisible; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	struct FTimerHandle BlinkTimerRef; // 0x360(0x08)
	struct TArray<struct AActor*> ElectronicsToIgnore; // 0x368(0x10)
	float ElectronicsAffectRadius; // 0x378(0x04)
	bool HasDirectImpact; // 0x37c(0x01)
	bool FriendlyFireOn; // 0x37d(0x01)
	bool DetonateWhenStationary; // 0x37e(0x01)
	bool HasDetonated; // 0x37f(0x01)

	void CheckIfStationary(); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.CheckIfStationary // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CanDamageTeam(struct AActor* Actor, bool CanDamage); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.CanDamageTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SendImpactAnalytics(struct TArray<struct AActor*> Victims); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.SendImpactAnalytics // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleElectronics(struct TArray<struct UHWElectronicsComponent*> Electronics); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.HandleElectronics // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetElectronics(float Radius, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UHWElectronicsComponent*> Results); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.GetElectronics // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ChangeIndicatorVisible(); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.ChangeIndicatorVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SendAnalytics(struct TArray<struct UHWDestructibleComponent*> Destructables, struct TArray<struct AActor*> Actors); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.SendAnalytics // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnDetonationEffect(); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.SpawnDetonationEffect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleDestructables(struct TArray<struct UHWDestructibleComponent*> Actors); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.HandleDestructables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetDestructables(float SphereRadius, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct UHWDestructibleComponent*> Destructables); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.GetDestructables // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleCharacters(struct TArray<struct AActor*> Characters); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.HandleCharacters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCharacters(float SphereRadius, struct TArray<struct AActor*> ActorsToIgnore, struct TArray<struct AActor*> Actors); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.GetCharacters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GrenadeHUDBlinkyThing__FinishedFunc(); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.GrenadeHUDBlinkyThing__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void GrenadeHUDBlinkyThing__UpdateFunc(); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.GrenadeHUDBlinkyThing__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveTick(float DeltaSeconds); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Detonate(); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.Detonate // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnChangeHUDIndicatorVisibility(); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.OnChangeHUDIndicatorVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_ExplosiveThrowable(int32_t EntryPoint); // Function BP_ExplosiveThrowable.BP_ExplosiveThrowable_C.ExecuteUbergraph_BP_ExplosiveThrowable // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

