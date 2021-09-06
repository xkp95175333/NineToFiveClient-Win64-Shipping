// BlueprintGeneratedClass BPI_MenuRenderer.BPI_MenuRenderer_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_MenuRenderer_C : UInterface {

	void SetWeaponVisible(bool Visible); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCharacter(int32_t CharacterIndex, struct FVector2D ScreenPosition); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.GetScreenPositionForCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeaponItem(enum class EHWWeaponPartType ItemType, struct FName PartId); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.RenderShopWeaponItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmorItem(enum class EHWArmorType ItemType, struct FName ArmorId); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.RenderShopArmorItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmor(struct FName ArmorSetId, struct FName CharacterId); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.RenderShopArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeapon(struct FName AssembledWeaponId); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.RenderShopWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutVisible(bool Visible, enum class ELoadoutCharacterSelection Affects); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.SetLoadoutVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCustomizationSlot(enum class BPE_Customization_Slot_Type Slot, struct FVector2D ScreenPosition); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.GetScreenPositionForCustomizationSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartyMemberVisible(int32_t CharIndex, bool IsVisible); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.SetPartyMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCraftingAnimation(); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.PlayCraftingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponCameraComponent(struct UBP_WeaponCameraComponent_C* Component); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.GetWeaponCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnedWeapon(struct AHWWeapon* Weapon); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.GetSpawnedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeapon(); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.ClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo Info, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.SpawnWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveView(enum class BPE_MenuRenderView NewView); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.SetActiveView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMyTeam(); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.ShowMyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOnlyMyCharacter(); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.ShowOnlyMyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview); // Function BPI_MenuRenderer.BPI_MenuRenderer_C.EquipLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

