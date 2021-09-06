// WidgetBlueprintGeneratedClass WBP_BriefingMap_Annotation.WBP_BriefingMap_Annotation_C
// Size: 0x2b8 (Inherited: 0x260)
struct UWBP_BriefingMap_Annotation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Container; // 0x268(0x08)
	struct UImage* Container_2; // 0x270(0x08)
	struct UImage* Image_47; // 0x278(0x08)
	struct UImage* InfoContainer; // 0x280(0x08)
	struct UWBP_RichTextLabel_C* InfoLabel; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* Label; // 0x290(0x08)
	struct UWBP_RichTextLabel_C* Label_2; // 0x298(0x08)
	struct UOverlay* NormalAnnotation; // 0x2a0(0x08)
	struct UOverlay* ObjectiveAnnotation; // 0x2a8(0x08)
	struct UWidgetSwitcher* Type; // 0x2b0(0x08)

	void SetText(struct FText Text, bool IsObjective); // Function WBP_BriefingMap_Annotation.WBP_BriefingMap_Annotation_C.SetText // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_BriefingMap_Annotation(int32_t EntryPoint); // Function WBP_BriefingMap_Annotation.WBP_BriefingMap_Annotation_C.ExecuteUbergraph_WBP_BriefingMap_Annotation // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

