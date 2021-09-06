// WidgetBlueprintGeneratedClass WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C
// Size: 0x318 (Inherited: 0x260)
struct UWBP_ShopItem_3DItemView_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* WeaponPartsCanvas; // 0x268(0x08)
	struct ABP_ShopWeaponView_C* ShopWeaponView; // 0x270(0x08)
	struct ABP_ShopArmorView_C* ShopArmorView; // 0x278(0x08)
	bool ManualRotationMode; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	struct FVector2D DragStartPosition; // 0x284(0x08)
	struct FRotator CurrentRotation; // 0x28c(0x0c)
	struct FRotator DefaultRotation; // 0x298(0x0c)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FMulticastInlineDelegate WeaponPartHovered; // 0x2a8(0x10)
	struct TMap<enum class EHWWeaponPartType, struct FVector2D> FixedPartLocations; // 0x2b8(0x50)
	struct FName ItemId; // 0x308(0x08)
	struct FName ReceiverId; // 0x310(0x08)

	void GetInstalledPartsBySetId(struct FName SetId, int32_t InstalledParts); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.GetInstalledPartsBySetId // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetContent(struct FHWShopItem Item, int32_t Index); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetManualRotation(bool Enabled); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.SetManualRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponPartHovered(bool IsHovered, struct UWBP_Shop_AssembledWeaponPart_C* Widget); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.OnWeaponPartHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FVector2D Get2DPosition(struct FVector WorldPosition); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.Get2DPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Set Widget Location on Canvas(struct FVector2D Location, struct UCanvasPanelSlot* Slot); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.Set Widget Location on Canvas // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateWeaponPartWidget(struct FName ID, enum class EHWWeaponPartType Type, enum class EHWRarity Rarity, int32_t Index, struct FName SetId); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.CreateWeaponPartWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsWeapon(struct FHWShopItem Item, bool Result); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.IsWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Construct(); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeWeaponParts(); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.InitializeWeaponParts // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetView(); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.ResetView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ShopItem_3DItemView(int32_t EntryPoint); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.ExecuteUbergraph_WBP_ShopItem_3DItemView // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void WeaponPartHovered__DelegateSignature(bool IsHovered, struct UWBP_Shop_AssembledWeaponPart_C* WeaponPart); // Function WBP_ShopItem_3DItemView.WBP_ShopItem_3DItemView_C.WeaponPartHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

