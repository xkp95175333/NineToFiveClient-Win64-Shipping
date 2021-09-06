// WidgetBlueprintGeneratedClass WBP_Compass.WBP_Compass_C
// Size: 0x288 (Inherited: 0x268)
struct UWBP_Compass_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UImage* CompassCenter; // 0x270(0x08)
	struct UImage* CompassImage; // 0x278(0x08)
	struct UWBP_RichTextLabel_C* Location; // 0x280(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Compass.WBP_Compass_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Compass(int32_t EntryPoint); // Function WBP_Compass.WBP_Compass_C.ExecuteUbergraph_WBP_Compass // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

