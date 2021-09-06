// BlueprintGeneratedClass BPI_Weapon_Rendering.BPI_Weapon_Rendering_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_Weapon_Rendering_C : UInterface {

	void SetWeaponRotation(struct FRotator Rotation, bool Instant); // Function BPI_Weapon_Rendering.BPI_Weapon_Rendering_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(struct AActor* SetupActor); // Function BPI_Weapon_Rendering.BPI_Weapon_Rendering_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo WeaponInfo, struct AHWWeapon* Weapon); // Function BPI_Weapon_Rendering.BPI_Weapon_Rendering_C.SpawnWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToPart(enum class EHWWeaponPartType PartType, bool Instant, float DistanceMultiplier); // Function BPI_Weapon_Rendering.BPI_Weapon_Rendering_C.ZoomToPart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToWeapon(bool Instant, float DistanceMultiplier); // Function BPI_Weapon_Rendering.BPI_Weapon_Rendering_C.ZoomToWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

