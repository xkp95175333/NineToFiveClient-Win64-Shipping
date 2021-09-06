// WidgetBlueprintGeneratedClass WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C
// Size: 0x2d8 (Inherited: 0x260)
struct UWBP_Animated_Letters_Label_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* WBP_RichTextLabel; // 0x268(0x08)
	struct FText Text; // 0x270(0x18)
	struct FDataTableRowHandle Style; // 0x288(0x10)
	enum class BPE_UIColors Color; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	float Progress; // 0x29c(0x04)
	float AnimationFPS; // 0x2a0(0x04)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct FText OriginalText; // 0x2a8(0x18)
	int32_t FontSize; // 0x2c0(0x04)
	enum class BPE_Animated_Letters_Mode AnimationType; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	int32_t OriginalValue; // 0x2c8(0x04)
	enum class ETextJustify Justification; // 0x2cc(0x01)
	char pad_2CD[0x3]; // 0x2cd(0x03)
	float StartValue; // 0x2d0(0x04)
	float EndValue; // 0x2d4(0x04)

	void Update Value to Value(); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.Update Value to Value // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateAnimation(); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.UpdateAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateCount(bool CountUp); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.UpdateCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateRandomLetters(); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.UpdateRandomLetters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void PreConstruct(bool IsDesignTime); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Construct(); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void Update(); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetText(struct FText InText); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetValue(int32_t Value); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.SetValue // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_Animated_Letters_Label(int32_t EntryPoint); // Function WBP_Animated_Letters_Label.WBP_Animated_Letters_Label_C.ExecuteUbergraph_WBP_Animated_Letters_Label // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

