// BlueprintGeneratedClass BP_ArmoryView.BP_ArmoryView_C
// Size: 0x2e0 (Inherited: 0x220)
struct ABP_ArmoryView_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* PS_HoveringDust_Armory; // 0x228(0x08)
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
	float Animated_Crafting_PostProcessOutline_F94A2B0C47F2D697C8AD3393663DEF24; // 0x288(0x04)
	float Animated_Crafting_CraftingProgress_F94A2B0C47F2D697C8AD3393663DEF24; // 0x28c(0x04)
	enum class ETimelineDirection Animated_Crafting__Direction_F94A2B0C47F2D697C8AD3393663DEF24; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct UTimelineComponent* Animated_Crafting; // 0x298(0x08)
	struct ACameraActor* CameraRef; // 0x2a0(0x08)
	struct ACameraActor* CameraActor; // 0x2a8(0x08)
	struct AHWWeapon* CurrentWeaponInstance; // 0x2b0(0x08)
	struct UMaterialInterface* WeaponBlueprintMaterial; // 0x2b8(0x08)
	struct APostProcessVolume* NormalPostProcessVolumeRef; // 0x2c0(0x08)
	struct APostProcessVolume* OutlinePostProcessVolumeRef; // 0x2c8(0x08)
	struct UBP_ThumbnailCaptureComponent_Color_C* ThumbnailCapture_Color; // 0x2d0(0x08)
	struct UBP_ThumbnailCaptureComponent_Alpha_C* ThumbnailCapture_Alpha; // 0x2d8(0x08)

	void GetScreenPositionForCharacter(int32_t CharacterIndex, struct FVector2D ScreenPosition); // Function BP_ArmoryView.BP_ArmoryView_C.GetScreenPositionForCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnedWeapon(struct AHWWeapon* Weapon); // Function BP_ArmoryView.BP_ArmoryView_C.GetSpawnedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponCameraComponent(struct UBP_WeaponCameraComponent_C* Component); // Function BP_ArmoryView.BP_ArmoryView_C.GetWeaponCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCustomizationSlot(enum class BPE_Customization_Slot_Type Slot, struct FVector2D ScreenPosition); // Function BP_ArmoryView.BP_ArmoryView_C.GetScreenPositionForCustomizationSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoClearWeapon(); // Function BP_ArmoryView.BP_ArmoryView_C.DoClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AssignMaterialsToWeaponBlueprint(struct AHWWeapon* Weapon); // Function BP_ArmoryView.BP_ArmoryView_C.AssignMaterialsToWeaponBlueprint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DoSpawnWeapon(struct FHWWeaponInfo WeaponInfo, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function BP_ArmoryView.BP_ArmoryView_C.DoSpawnWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CopyCameraProperties(); // Function BP_ArmoryView.BP_ArmoryView_C.CopyCameraProperties // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Animated_Crafting__FinishedFunc(); // Function BP_ArmoryView.BP_ArmoryView_C.Animated_Crafting__FinishedFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void Animated_Crafting__UpdateFunc(); // Function BP_ArmoryView.BP_ArmoryView_C.Animated_Crafting__UpdateFunc // (BlueprintEvent) // @ game+0x13c4ca0
	void EquipLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview); // Function BP_ArmoryView.BP_ArmoryView_C.EquipLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOnlyMyCharacter(); // Function BP_ArmoryView.BP_ArmoryView_C.ShowOnlyMyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMyTeam(); // Function BP_ArmoryView.BP_ArmoryView_C.ShowMyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartyMemberVisible(int32_t CharIndex, bool IsVisible); // Function BP_ArmoryView.BP_ArmoryView_C.SetPartyMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutVisible(bool Visible, enum class ELoadoutCharacterSelection Affects); // Function BP_ArmoryView.BP_ArmoryView_C.SetLoadoutVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeapon(struct FName AssembledWeaponId); // Function BP_ArmoryView.BP_ArmoryView_C.RenderShopWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmor(struct FName ArmorSetId, struct FName CharacterId); // Function BP_ArmoryView.BP_ArmoryView_C.RenderShopArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmorItem(enum class EHWArmorType ItemType, struct FName ArmorId); // Function BP_ArmoryView.BP_ArmoryView_C.RenderShopArmorItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeaponItem(enum class EHWWeaponPartType ItemType, struct FName PartId); // Function BP_ArmoryView.BP_ArmoryView_C.RenderShopWeaponItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveView(enum class BPE_MenuRenderView NewView); // Function BP_ArmoryView.BP_ArmoryView_C.SetActiveView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo Info, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function BP_ArmoryView.BP_ArmoryView_C.SpawnWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeapon(); // Function BP_ArmoryView.BP_ArmoryView_C.ClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation); // Function BP_ArmoryView.BP_ArmoryView_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCraftingAnimation(); // Function BP_ArmoryView.BP_ArmoryView_C.PlayCraftingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_ArmoryView.BP_ArmoryView_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void CaptureThumbnail(); // Function BP_ArmoryView.BP_ArmoryView_C.CaptureThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVisible(bool Visible); // Function BP_ArmoryView.BP_ArmoryView_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_ArmoryView(int32_t EntryPoint); // Function BP_ArmoryView.BP_ArmoryView_C.ExecuteUbergraph_BP_ArmoryView // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

