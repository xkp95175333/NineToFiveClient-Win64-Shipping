// WidgetBlueprintGeneratedClass WBP_SliderElement.WBP_SliderElement_C
// Size: 0x274 (Inherited: 0x260)
struct UWBP_SliderElement_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UNamedSlot* Content; // 0x268(0x08)
	float Percent; // 0x270(0x04)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_SliderElement.WBP_SliderElement_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_SliderElement(int32_t EntryPoint); // Function WBP_SliderElement.WBP_SliderElement_C.ExecuteUbergraph_WBP_SliderElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

