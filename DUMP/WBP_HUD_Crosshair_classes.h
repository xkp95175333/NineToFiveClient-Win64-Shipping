// WidgetBlueprintGeneratedClass WBP_HUD_Crosshair.WBP_HUD_Crosshair_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_HUD_Crosshair_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUniformGridPanel* Gun; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct UImage* Image_2; // 0x278(0x08)
	struct UImage* Image_3; // 0x280(0x08)
	struct UImage* Image_4; // 0x288(0x08)
	struct UImage* Image_65; // 0x290(0x08)
	struct UImage* Image_132; // 0x298(0x08)
	struct UImage* Image_218; // 0x2a0(0x08)
	struct UImage* Image_287; // 0x2a8(0x08)
	struct UImage* Image_352; // 0x2b0(0x08)
	struct UScaleBox* Reticle; // 0x2b8(0x08)
	struct UUniformGridPanel* Shotgun; // 0x2c0(0x08)
	struct USizeBox* Sizeadjustment; // 0x2c8(0x08)
	struct UWidgetSwitcher* SpreadSwitcher; // 0x2d0(0x08)

	void SetToMelee(); // Function WBP_HUD_Crosshair.WBP_HUD_Crosshair_C.SetToMelee // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetToGun(); // Function WBP_HUD_Crosshair.WBP_HUD_Crosshair_C.SetToGun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetToShotgun(); // Function WBP_HUD_Crosshair.WBP_HUD_Crosshair_C.SetToShotgun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetCenterSize(float EmptyCenter); // Function WBP_HUD_Crosshair.WBP_HUD_Crosshair_C.SetCenterSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_HUD_Crosshair.WBP_HUD_Crosshair_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_HUD_Crosshair(int32_t EntryPoint); // Function WBP_HUD_Crosshair.WBP_HUD_Crosshair_C.ExecuteUbergraph_WBP_HUD_Crosshair // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

