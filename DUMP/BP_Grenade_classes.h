// BlueprintGeneratedClass BP_Grenade.BP_Grenade_C
// Size: 0x3a8 (Inherited: 0x380)
struct ABP_Grenade_C : ABP_ExplosiveThrowable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct URadialForceComponent* RadialForce; // 0x388(0x08)
	float DamageMinDestructibles; // 0x390(0x04)
	float DamageMaxDestructibles; // 0x394(0x04)
	float MinRange; // 0x398(0x04)
	float MaxRange; // 0x39c(0x04)
	float DamageMax; // 0x3a0(0x04)
	float DamageMin; // 0x3a4(0x04)

	void GetDamageOrigin(struct FVector Origin); // Function BP_Grenade.BP_Grenade_C.GetDamageOrigin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetItemId(struct FName ID); // Function BP_Grenade.BP_Grenade_C.GetItemId // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHandleDestructables(struct TArray<struct UHWDestructibleComponent*> Destructables); // Function BP_Grenade.BP_Grenade_C.OnHandleDestructables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnHandleCharacters(struct TArray<struct AActor*> Actors); // Function BP_Grenade.BP_Grenade_C.OnHandleCharacters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleCharacters(struct TArray<struct AActor*> Characters); // Function BP_Grenade.BP_Grenade_C.HandleCharacters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HandleDestructables(struct TArray<struct UHWDestructibleComponent*> Actors); // Function BP_Grenade.BP_Grenade_C.HandleDestructables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClientDebug(struct FVector Start, struct FVector End); // Function BP_Grenade.BP_Grenade_C.ClientDebug // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_Grenade(int32_t EntryPoint); // Function BP_Grenade.BP_Grenade_C.ExecuteUbergraph_BP_Grenade // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

