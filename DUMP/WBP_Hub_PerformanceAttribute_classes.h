// WidgetBlueprintGeneratedClass WBP_Hub_PerformanceAttribute.WBP_Hub_PerformanceAttribute_C
// Size: 0x289 (Inherited: 0x260)
struct UWBP_Hub_PerformanceAttribute_C : UUserWidget {
	struct UWBP_RichTextLabel_C* AttributeName; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* AttributeValue; // 0x268(0x08)
	struct UImage* Image_66; // 0x270(0x08)
	struct UOverlay* Overlay_1; // 0x278(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x280(0x08)
	enum class EHW_PerformanceAttribute PerformanceAttribute; // 0x288(0x01)

	struct UWidget* GetToolTipWidget_1(); // Function WBP_Hub_PerformanceAttribute.WBP_Hub_PerformanceAttribute_C.GetToolTipWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void GetToolTipHeaderAndBodyText(struct FText Header, struct FText Body); // Function WBP_Hub_PerformanceAttribute.WBP_Hub_PerformanceAttribute_C.GetToolTipHeaderAndBodyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void SetInfo(struct FText Title, struct FText Value, struct UTexture* Image, enum class EHW_PerformanceAttribute PerformanceAttriubte); // Function WBP_Hub_PerformanceAttribute.WBP_Hub_PerformanceAttribute_C.SetInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

