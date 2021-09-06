// WidgetBlueprintGeneratedClass WBP_Label.WBP_Label_C
// Size: 0x2d3 (Inherited: 0x268)
struct UWBP_Label_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UHWVerticalTextBlock* Labeltext; // 0x270(0x08)
	bool IsButtonSelected; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct FText Text; // 0x280(0x18)
	struct UBP_UIStyle_Label_C* Style; // 0x298(0x08)
	bool UseCustomColor; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FSlateColor CustomColor; // 0x2a8(0x28)
	enum class ETextJustify Justification; // 0x2d0(0x01)
	bool WordWrap; // 0x2d1(0x01)
	enum class EHWVerticalTextBoxRotation Rotation; // 0x2d2(0x01)

	void SetRotation(enum class EHWVerticalTextBoxRotation Rotation); // Function WBP_Label.WBP_Label_C.SetRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetRotation(enum class EHWVerticalTextBoxRotation Rotation); // Function WBP_Label.WBP_Label_C.GetRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetWordWrap(bool Enabled); // Function WBP_Label.WBP_Label_C.SetWordWrap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetWordWrap(bool Result); // Function WBP_Label.WBP_Label_C.GetWordWrap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetJustification(enum class ETextJustify Value); // Function WBP_Label.WBP_Label_C.SetJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetJustification(enum class ETextJustify Result); // Function WBP_Label.WBP_Label_C.GetJustification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetStyle(struct UBP_UIStyle_Label_C* Style); // Function WBP_Label.WBP_Label_C.SetStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetStyle(struct UBP_UIStyle_Label_C* Style); // Function WBP_Label.WBP_Label_C.GetStyle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Get Font Size(float Size); // Function WBP_Label.WBP_Label_C.Get Font Size // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetCustomColor(struct FSlateColor NewColor); // Function WBP_Label.WBP_Label_C.SetCustomColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCustomColor(struct FSlateColor Result); // Function WBP_Label.WBP_Label_C.GetCustomColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void Set Default Color(); // Function WBP_Label.WBP_Label_C.Set Default Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(struct FText InText); // Function WBP_Label.WBP_Label_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetText(struct FText Text); // Function WBP_Label.WBP_Label_C.GetText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Label.WBP_Label_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Label(int32_t EntryPoint); // Function WBP_Label.WBP_Label_C.ExecuteUbergraph_WBP_Label // (Final|UbergraphFunction) // @ game+0x13c4ca0
};

