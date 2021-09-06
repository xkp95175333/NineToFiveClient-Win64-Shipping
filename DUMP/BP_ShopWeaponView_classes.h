// BlueprintGeneratedClass BP_ShopWeaponView.BP_ShopWeaponView_C
// Size: 0x2b0 (Inherited: 0x220)
struct ABP_ShopWeaponView_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* DustHanging; // 0x228(0x08)
	struct URectLightComponent* RectLight3; // 0x230(0x08)
	struct URectLightComponent* RectLight2; // 0x238(0x08)
	struct URectLightComponent* RectLight1; // 0x240(0x08)
	struct URectLightComponent* RectLight; // 0x248(0x08)
	struct USceneComponent* WeaponRoot; // 0x250(0x08)
	struct UChildActorComponent* AddHoloElementsToWeapon; // 0x258(0x08)
	struct UPostProcessComponent* NormalWeaponPostProcess; // 0x260(0x08)
	struct UCameraComponent* CameraComp; // 0x268(0x08)
	struct UBoxComponent* Constraints; // 0x270(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x278(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x280(0x08)
	struct ACameraActor* CameraRef; // 0x288(0x08)
	struct ACameraActor* CameraActor; // 0x290(0x08)
	struct AHWWeapon* CurrentWeaponInstance; // 0x298(0x08)
	struct UMaterialInterface* WeaponBlueprintMaterial; // 0x2a0(0x08)
	struct APostProcessVolume* NormalPostProcessVolumeRef; // 0x2a8(0x08)

	void GetScreenPositionForCharacter(int32_t CharacterIndex, struct FVector2D ScreenPosition); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.GetScreenPositionForCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnedWeapon(struct AHWWeapon* Weapon); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.GetSpawnedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponCameraComponent(struct UBP_WeaponCameraComponent_C* Component); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.GetWeaponCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCustomizationSlot(enum class BPE_Customization_Slot_Type Slot, struct FVector2D ScreenPosition); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.GetScreenPositionForCustomizationSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoClearWeapon(); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.DoClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AssignMaterialsToWeaponBlueprint(struct AHWWeapon* Weapon); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.AssignMaterialsToWeaponBlueprint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoSpawnWeapon(struct FHWWeaponParts Parts); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.DoSpawnWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CopyCameraProperties(); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.CopyCameraProperties // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeapon(); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.ClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCraftingAnimation(); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.PlayCraftingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartyMemberVisible(int32_t CharIndex, bool IsVisible); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.SetPartyMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutVisible(bool Visible, enum class ELoadoutCharacterSelection Affects); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.SetLoadoutVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmor(struct FName ArmorSetId, struct FName CharacterId); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.RenderShopArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmorItem(enum class EHWArmorType ItemType, struct FName ArmorId); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.RenderShopArmorItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVisible(bool Visible); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveView(enum class BPE_MenuRenderView NewView); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.SetActiveView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo Info, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.SpawnWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMyTeam(); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.ShowMyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOnlyMyCharacter(); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.ShowOnlyMyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.EquipLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeapon(struct FName AssembledWeaponId); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.RenderShopWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeaponItem(enum class EHWWeaponPartType ItemType, struct FName PartId); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.RenderShopWeaponItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_ShopWeaponView(int32_t EntryPoint); // Function BP_ShopWeaponView.BP_ShopWeaponView_C.ExecuteUbergraph_BP_ShopWeaponView // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

