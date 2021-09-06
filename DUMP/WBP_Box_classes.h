// WidgetBlueprintGeneratedClass WBP_Box.WBP_Box_C
// Size: 0x281 (Inherited: 0x260)
struct UWBP_Box_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Fill; // 0x268(0x08)
	struct UImage* Pattern; // 0x270(0x08)
	struct UImage* Stroke; // 0x278(0x08)
	enum class BPE_Box_Style Style; // 0x280(0x01)

	void GetStrokeColor(float Alpha, struct FLinearColor Color); // Function WBP_Box.WBP_Box_C.GetStrokeColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void MakePatternBrush(struct FLinearColor Color, struct UTexture2D* Texture, struct FSlateBrush Brush); // Function WBP_Box.WBP_Box_C.MakePatternBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void MakeStrokeBrush(struct FLinearColor Color, struct UTexture2D* Texture, struct FSlateBrush Brush); // Function WBP_Box.WBP_Box_C.MakeStrokeBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void MakeFillBrush(struct FLinearColor Color, struct UTexture2D* Texture, struct FSlateBrush Brush); // Function WBP_Box.WBP_Box_C.MakeFillBrush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetMainColor(float Alpha, struct FLinearColor Color); // Function WBP_Box.WBP_Box_C.GetMainColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Box.WBP_Box_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void SetProperties(struct FLinearColor FillColor, struct UTexture2D* FillTexture, struct FLinearColor StrokeColor, struct UTexture2D* StrokeTexture, struct FLinearColor PatternColor, struct UTexture2D* PatternTexture); // Function WBP_Box.WBP_Box_C.SetProperties // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Set Style(enum class BPE_Box_Style Style); // Function WBP_Box.WBP_Box_C.Set Style // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetContentBoxHighlightColor(struct FLinearColor Color); // Function WBP_Box.WBP_Box_C.SetContentBoxHighlightColor // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Box(int32_t EntryPoint); // Function WBP_Box.WBP_Box_C.ExecuteUbergraph_WBP_Box // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

