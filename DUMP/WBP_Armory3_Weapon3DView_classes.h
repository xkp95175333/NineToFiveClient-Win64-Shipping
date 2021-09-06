// WidgetBlueprintGeneratedClass WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C
// Size: 0x5a0 (Inherited: 0x268)
struct UWBP_Armory3_Weapon3DView_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UWidgetAnimation* ShowParts; // 0x270(0x08)
	struct UWidgetAnimation* HideParts; // 0x278(0x08)
	struct UCanvasPanel* WeaponPartsCanvas; // 0x280(0x08)
	bool ManualRotationMode; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	struct FVector2D DragStartPosition; // 0x28c(0x08)
	struct FRotator CurrentRotation; // 0x294(0x0c)
	struct FRotator DefaultRotation; // 0x2a0(0x0c)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct FMulticastInlineDelegate WeaponPartHovered; // 0x2b0(0x10)
	struct UBP_WeaponCameraComponent_C* WeaponCameraComponent; // 0x2c0(0x08)
	struct AHWWeapon* WeaponInstance; // 0x2c8(0x08)
	struct TScriptInterface<None> WeaponView; // 0x2d0(0x10)
	struct UHWArmoryWeaponModel* WeaponModel; // 0x2e0(0x08)
	struct UHWArmoryWeaponVariation* WeaponVariation; // 0x2e8(0x08)
	struct FHWWeaponInfo WeaponInfo; // 0x2f0(0xb0)
	struct FMulticastInlineDelegate WeaponPartClicked; // 0x3a0(0x10)
	struct TMap<enum class EHWWeaponPartType, struct UWBP_Armory3_WeaponPartSlot_C*> TypeToSlotWidgets; // 0x3b0(0x50)
	struct FMulticastInlineDelegate ManualRotationModeChanged; // 0x400(0x10)
	struct TArray<struct FString> ThumbnailRenderQueue; // 0x410(0x10)
	struct FTimerHandle ThumbnailRenderTimer; // 0x420(0x08)
	int32_t ThumbnailRenderStep; // 0x428(0x04)
	enum class EHWWeaponPartType ZoomedPart; // 0x42c(0x01)
	char pad_42D[0x3]; // 0x42d(0x03)
	struct TArray<struct FName> PreviouslyActivePartSets; // 0x430(0x10)
	struct TArray<struct FName> CurrentlyActivePartSets; // 0x440(0x10)
	bool WasFullSetPreviously; // 0x450(0x01)
	bool IsFullSetCurrently; // 0x451(0x01)
	char pad_452[0x6]; // 0x452(0x06)
	struct TSet<struct FString> ThumbnailRender_Processed; // 0x458(0x50)
	struct TArray<enum class EHWWeaponPartType> PartTypes; // 0x4a8(0x10)
	struct FMulticastInlineDelegate ThumbnailRenderStateChanged; // 0x4b8(0x10)
	struct FHWWeaponInfo StoredInfo; // 0x4c8(0xb0)
	struct UHWArmoryWeaponModel* StoredModel; // 0x578(0x08)
	struct UHWArmoryWeaponVariation* StoredVariation; // 0x580(0x08)
	int32_t FallbackPositionIndex; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct TArray<struct FVector2D> FallbackPositions; // 0x590(0x10)

	void SequenceEvent__ENTRYPOINTWBP_Armory3_Weapon3DView_2(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.SequenceEvent__ENTRYPOINTWBP_Armory3_Weapon3DView_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SequenceEvent__ENTRYPOINTWBP_Armory3_Weapon3DView_1(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.SequenceEvent__ENTRYPOINTWBP_Armory3_Weapon3DView_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetNextFallback2DPosition(struct FVector2D Position); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.GetNextFallback2DPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void IsRenderingThumbnails(bool Result); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.IsRenderingThumbnails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetInfoForPart(enum class EHWWeaponPartType PartType, struct FName PartId, struct FName SetId, bool Found); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.GetInfoForPart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void ShowPartPreview(struct FHWWeaponInfo WeaponInfo, enum class EHWWeaponPartType PreviewPart, struct FName PreviewPartId, struct FName PreviewCosmeticId); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.ShowPartPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateSlotLocations(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.UpdateSlotLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetPartsVisible(bool Visible, bool Instant); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.SetPartsVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DequeueThumbnail(bool Found, struct FString Entry); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.DequeueThumbnail // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponVisible(bool Visible); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.SetWeaponVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ShowAllWeaponParts(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.ShowAllWeaponParts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void HideOtherWeaponParts(enum class EHWWeaponPartType PartType); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.HideOtherWeaponParts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToWeaponPart(enum class EHWWeaponPartType PartType); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.ZoomToWeaponPart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ZoomToWeapon(bool Instant); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.ZoomToWeapon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPartSlotHovered(enum class EHWWeaponPartType Type, bool IsHovered); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnPartSlotHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPartSlotClicked(enum class EHWWeaponPartType Type, struct UWBP_Armory3_WeaponPartSlot_C* Slot); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnPartSlotClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Content(struct FHWWeaponInfo WeaponInfo, struct UHWArmoryWeaponModel* WeaponModel, struct UHWArmoryWeaponVariation* WeaponVariation, bool IsRenderingThumbnail); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.Set Content // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetManualRotation(bool Enabled); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.SetManualRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnWeaponPartHovered(bool IsHovered, struct UWBP_Shop_AssembledWeaponPart_C* Widget); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnWeaponPartHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FVector2D Get2DPosition(struct FVector WorldPosition); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.Get2DPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Widget Location on Canvas(struct FVector2D Location, struct UCanvasPanelSlot* Slot); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.Set Widget Location on Canvas // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CreateSlotWidget(struct FName ID, enum class EHWWeaponPartType Type, struct FName SetId); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.CreateSlotWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IsWeapon(struct FHWShopItem Item, bool Result); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.IsWeapon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void OnPlayerDetailsChanged(struct FHWPlayerDetails Data); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnPlayerDetailsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerMissionChanged(struct FHWPlayerMission Data); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnPlayerMissionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerProgressionChanged(struct FHWPlayerProgression Data); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnPlayerProgressionChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerStatsChanged(struct FHWPlayerStats Data); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnPlayerStatsChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void SetWeaponPartsVisibility(enum class ESlateVisibility Visibility); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.SetWeaponPartsVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void InitializeWeaponParts(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.InitializeWeaponParts // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ResetView(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.ResetView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderThumbnail(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.RenderThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartThumbnailRender(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.StartThumbnailRender // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RenderThumbnails_Timer(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.RenderThumbnails_Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SaveThumbnailImage(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.SaveThumbnailImage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void IncrementThumbnailStep(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.IncrementThumbnailStep // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetActivePartSetsInfo(struct UHWArmoryWeaponVariation* WeaponVariation); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.SetActivePartSetsInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnPlayerInventoryChanged(struct FHWPlayerInventory Data); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.OnPlayerInventoryChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x13c4ca0
	void EnqueueThumbnail(struct FString ID); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.EnqueueThumbnail // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StorePendingView(struct FHWWeaponInfo Info, struct UHWArmoryWeaponModel* Model, struct UHWArmoryWeaponVariation* Variation); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.StorePendingView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RestorePendingView(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.RestorePendingView // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CaptureAndSaveThumbnailImage(); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.CaptureAndSaveThumbnailImage // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Armory3_Weapon3DView(int32_t EntryPoint); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.ExecuteUbergraph_WBP_Armory3_Weapon3DView // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void ThumbnailRenderStateChanged__DelegateSignature(bool IsRendering); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.ThumbnailRenderStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ManualRotationModeChanged__DelegateSignature(bool IsRotating); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.ManualRotationModeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponPartClicked__DelegateSignature(enum class EHWWeaponPartType WeaponPart); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.WeaponPartClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void WeaponPartHovered__DelegateSignature(bool IsHovered, struct UWBP_Shop_AssembledWeaponPart_C* WeaponPart); // Function WBP_Armory3_Weapon3DView.WBP_Armory3_Weapon3DView_C.WeaponPartHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

