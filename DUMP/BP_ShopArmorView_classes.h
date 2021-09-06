// BlueprintGeneratedClass BP_ShopArmorView.BP_ShopArmorView_C
// Size: 0x290 (Inherited: 0x220)
struct ABP_ShopArmorView_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* DustHanging; // 0x228(0x08)
	struct UCameraComponent* ArmorBadgeCamComp; // 0x230(0x08)
	struct UCameraComponent* BackpackCamComp; // 0x238(0x08)
	struct UStaticMeshComponent* Background; // 0x240(0x08)
	struct UChildActorComponent* PostProcessVolume; // 0x248(0x08)
	struct UCameraComponent* ArmorSetCamComp; // 0x250(0x08)
	struct UChildActorComponent* LocalCharacter; // 0x258(0x08)
	struct UStaticMeshComponent* CurvedBackground; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)
	struct ACameraActor* ArmorSetCamera; // 0x270(0x08)
	struct UCameraComponent* CurrentCameraComponent; // 0x278(0x08)
	struct ACameraActor* ArmorBadgeCamera; // 0x280(0x08)
	struct ACameraActor* BackpackCamera; // 0x288(0x08)

	void GetScreenPositionForCharacter(int32_t CharacterIndex, struct FVector2D ScreenPosition); // Function BP_ShopArmorView.BP_ShopArmorView_C.GetScreenPositionForCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetSpawnedWeapon(struct AHWWeapon* Weapon); // Function BP_ShopArmorView.BP_ShopArmorView_C.GetSpawnedWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWeaponCameraComponent(struct UBP_WeaponCameraComponent_C* Component); // Function BP_ShopArmorView.BP_ShopArmorView_C.GetWeaponCameraComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetScreenPositionForCustomizationSlot(enum class BPE_Customization_Slot_Type Slot, struct FVector2D ScreenPosition); // Function BP_ShopArmorView.BP_ShopArmorView_C.GetScreenPositionForCustomizationSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopItem(); // Function BP_ShopArmorView.BP_ShopArmorView_C.RenderShopItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetViewCameraComponent(int32_t Index); // Function BP_ShopArmorView.BP_ShopArmorView_C.GetViewCameraComponent // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	struct ACameraActor* SpawnCamera(struct UCameraComponent* Camera Component); // Function BP_ShopArmorView.BP_ShopArmorView_C.SpawnCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponRotation(struct FRotator Rotation); // Function BP_ShopArmorView.BP_ShopArmorView_C.SetWeaponRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PlayCraftingAnimation(); // Function BP_ShopArmorView.BP_ShopArmorView_C.PlayCraftingAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartyMemberVisible(int32_t CharIndex, bool IsVisible); // Function BP_ShopArmorView.BP_ShopArmorView_C.SetPartyMemberVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeapon(struct FName AssembledWeaponId); // Function BP_ShopArmorView.BP_ShopArmorView_C.RenderShopWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopWeaponItem(enum class EHWWeaponPartType ItemType, struct FName PartId); // Function BP_ShopArmorView.BP_ShopArmorView_C.RenderShopWeaponItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVisible(bool Visible); // Function BP_ShopArmorView.BP_ShopArmorView_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActiveView(enum class BPE_MenuRenderView NewView); // Function BP_ShopArmorView.BP_ShopArmorView_C.SetActiveView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ReceiveBeginPlay(); // Function BP_ShopArmorView.BP_ShopArmorView_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x13c4ca0
	void ClearWeapon(); // Function BP_ShopArmorView.BP_ShopArmorView_C.ClearWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnWeapon(struct FHWWeaponInfo Info, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function BP_ShopArmorView.BP_ShopArmorView_C.SpawnWeapon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SpawnCameraActors(); // Function BP_ShopArmorView.BP_ShopArmorView_C.SpawnCameraActors // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowMyTeam(); // Function BP_ShopArmorView.BP_ShopArmorView_C.ShowMyTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void EquipLoadout(int32_t CharIndex, struct FHWPlayerPublicProfile PublicProfile, struct FString BackendPlayerId, bool Preview); // Function BP_ShopArmorView.BP_ShopArmorView_C.EquipLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowOnlyMyCharacter(); // Function BP_ShopArmorView.BP_ShopArmorView_C.ShowOnlyMyCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetLoadoutVisible(bool Visible, enum class ELoadoutCharacterSelection Affects); // Function BP_ShopArmorView.BP_ShopArmorView_C.SetLoadoutVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmor(struct FName ArmorSetId, struct FName CharacterId); // Function BP_ShopArmorView.BP_ShopArmorView_C.RenderShopArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderShopArmorItem(enum class EHWArmorType ItemType, struct FName ArmorId); // Function BP_ShopArmorView.BP_ShopArmorView_C.RenderShopArmorItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_ShopArmorView(int32_t EntryPoint); // Function BP_ShopArmorView.BP_ShopArmorView_C.ExecuteUbergraph_BP_ShopArmorView // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

