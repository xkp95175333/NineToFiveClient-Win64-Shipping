// WidgetBlueprintGeneratedClass WBP_FriendlyNameTag.WBP_FriendlyNameTag_C
// Size: 0x2c0 (Inherited: 0x268)
struct UWBP_FriendlyNameTag_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* Arrow; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* DistanceLabel; // 0x278(0x08)
	struct UWBP_DownedPlayer_C* downed; // 0x280(0x08)
	struct UImage* Image_131; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* NameLabel; // 0x290(0x08)
	struct UImage* PlayerColor; // 0x298(0x08)
	struct UWBP_TeammateMarkers_C* WBP_TeammateMarkers; // 0x2a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x2a8(0x08)
	struct AHWPlayerState* TrackedPlayer; // 0x2b0(0x08)
	struct AHWCharacter* TrackedCharacter; // 0x2b8(0x08)

	void Filltestdata(); // Function WBP_FriendlyNameTag.WBP_FriendlyNameTag_C.Filltestdata // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetRowColumnRotation(enum class EHWDirection Direction, int32_t Row, int32_t Column, float Rotation); // Function WBP_FriendlyNameTag.WBP_FriendlyNameTag_C.GetRowColumnRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetArrow(bool Visible, enum class EHWDirection Direction); // Function WBP_FriendlyNameTag.WBP_FriendlyNameTag_C.SetArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateDistance(struct AActor* Target); // Function WBP_FriendlyNameTag.WBP_FriendlyNameTag_C.UpdateDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(struct AHWPlayerState* PlayerState, int32_t PlayerIndex); // Function WBP_FriendlyNameTag.WBP_FriendlyNameTag_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetColor(struct FLinearColor InColorAndOpacity); // Function WBP_FriendlyNameTag.WBP_FriendlyNameTag_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_FriendlyNameTag.WBP_FriendlyNameTag_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_FriendlyNameTag(int32_t EntryPoint); // Function WBP_FriendlyNameTag.WBP_FriendlyNameTag_C.ExecuteUbergraph_WBP_FriendlyNameTag // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

