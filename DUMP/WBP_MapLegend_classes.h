// WidgetBlueprintGeneratedClass WBP_MapLegend.WBP_MapLegend_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_MapLegend_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UWBP_RichTextLabel_C* Name; // 0x278(0x08)
	struct FStruct_MapLegend LegendData; // 0x280(0x38)

	void PreConstruct(bool IsDesignTime); // Function WBP_MapLegend.WBP_MapLegend_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_MapLegend(int32_t EntryPoint); // Function WBP_MapLegend.WBP_MapLegend_C.ExecuteUbergraph_WBP_MapLegend // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

