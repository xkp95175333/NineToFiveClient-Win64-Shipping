// BlueprintGeneratedClass Mainmenu_Weapon.Mainmenu_Weapon_C
// Size: 0x308 (Inherited: 0x228)
struct AMainmenu_Weapon_C : AHWLevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct FTransform CurrentTransform; // 0x230(0x30)
	struct FTransform TargetTransform; // 0x260(0x30)
	struct AHWWeapon* CurrentWeapon; // 0x290(0x08)
	struct FVector CameraDirection; // 0x298(0x0c)
	float CameraFOV; // 0x2a4(0x04)
	struct FVector CameraDirection_FullWeapon; // 0x2a8(0x0c)
	struct FVector WeaponCenter; // 0x2b4(0x0c)
	struct FVector WeaponExtents; // 0x2c0(0x0c)
	float CameraAspect; // 0x2cc(0x04)
	struct TArray<struct FHWWeaponInfo> AllWeapons; // 0x2d0(0x10)
	int32_t WeaponIndex; // 0x2e0(0x04)
	struct FRotator TargetRotation; // 0x2e4(0x0c)
	struct FRotator CurrentRotation; // 0x2f0(0x0c)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct ACameraActor* Camera_Weapon_ExecuteUbergraph_Mainmenu_Weapon_RefProperty; // 0x300(0x08)

	void SpawnWeapon(struct FHWWeaponInfo WeaponInfo, struct AHWWeapon* Weapon); // Function Mainmenu_Weapon.Mainmenu_Weapon_C.SpawnWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToWeapon(bool Instant, float DistanceMultiplier); // Function Mainmenu_Weapon.Mainmenu_Weapon_C.ZoomToWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToPart(enum class EHWWeaponPartType PartType, bool Instant, float DistanceMultiplier); // Function Mainmenu_Weapon.Mainmenu_Weapon_C.ZoomToPart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(struct AActor* SetupActor); // Function Mainmenu_Weapon.Mainmenu_Weapon_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation, bool Instant); // Function Mainmenu_Weapon.Mainmenu_Weapon_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function Mainmenu_Weapon.Mainmenu_Weapon_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_Mainmenu_Weapon(int32_t EntryPoint); // Function Mainmenu_Weapon.Mainmenu_Weapon_C.ExecuteUbergraph_Mainmenu_Weapon // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

