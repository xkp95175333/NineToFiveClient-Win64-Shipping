// BlueprintGeneratedClass BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C
// Size: 0x2a5 (Inherited: 0x220)
struct ABP_LoadoutItemDisplay_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UChildActorComponent* SecondaryWeaponPreview; // 0x228(0x08)
	struct USkeletalMeshComponent* BackpackCharm; // 0x230(0x08)
	struct USkeletalMeshComponent* Backpack; // 0x238(0x08)
	struct UHWVisualArmorComponent* HWVisualArmor; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct AActor* SecondaryWeapon; // 0x250(0x08)
	char pad_258[0x8]; // 0x258(0x08)
	struct FTransform SecondaryWeaponTransform; // 0x260(0x30)
	struct FLinearColor RandomColor; // 0x290(0x10)
	float Size; // 0x2a0(0x04)
	char Index; // 0x2a4(0x01)

	void GetSpawnedWeapon(struct AHWWeapon* Weapon); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.GetSpawnedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponCameraComponent(struct UBP_WeaponCameraComponent_C* Component); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.GetWeaponCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCustomizationSlot(enum class BPE_Customization_Slot_Type Slot, struct FVector2D ScreenPosition); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.GetScreenPositionForCustomizationSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCharacter(int32_t CharacterIndex, struct FVector2D ScreenPosition); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.GetScreenPositionForCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct UMeshComponent* GetArmorMeshComponent(enum class EHWArmorType Type, bool FirstPerson); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.GetArmorMeshComponent // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x13c4ca0
	void GetAdjustedWeaponTransform(struct AHWWeapon* Weapon, struct FTransform Result); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.GetAdjustedWeaponTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UserConstructionScript(); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCraftingAnimation(); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.PlayCraftingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo Info, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.SpawnWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveView(enum class BPE_MenuRenderView NewView); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.SetActiveView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMyTeam(); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.ShowMyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOnlyMyCharacter(); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.ShowOnlyMyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.EquipLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ArmorSetUpdated(); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.ArmorSetUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ArmorMeshComponentUpdated(enum class EHWArmorType Type, bool FirstPerson); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.ArmorMeshComponentUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVisible(bool Visible); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeaponItem(enum class EHWWeaponPartType ItemType, struct FName PartId); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.RenderShopWeaponItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmorItem(enum class EHWArmorType ItemType, struct FName ArmorId); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.RenderShopArmorItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmor(struct FName ArmorSetId, struct FName CharacterId); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.RenderShopArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeapon(struct FName AssembledWeaponId); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.RenderShopWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutVisible(bool Visible, enum class ELoadoutCharacterSelection Affects); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.SetLoadoutVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartyMemberVisible(int32_t CharIndex, bool IsVisible); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.SetPartyMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeapon(); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.ClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_LoadoutItemDisplay(int32_t EntryPoint); // Function BP_LoadoutItemDisplay.BP_LoadoutItemDisplay_C.ExecuteUbergraph_BP_LoadoutItemDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

