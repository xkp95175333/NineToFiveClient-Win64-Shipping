// WidgetBlueprintGeneratedClass WBP_LoadingScreenOverlay.WBP_LoadingScreenOverlay_C
// Size: 0x3c0 (Inherited: 0x260)
struct UWBP_LoadingScreenOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWBP_RichTextLabel_C* Description; // 0x268(0x08)
	struct UImage* LeftFader; // 0x270(0x08)
	struct UImage* Lines; // 0x278(0x08)
	struct UImage* LoadingAnim; // 0x280(0x08)
	struct UVerticalBox* MapAndDescription; // 0x288(0x08)
	struct UWBP_RichTextLabel_C* MapName; // 0x290(0x08)
	struct UImage* RightFader; // 0x298(0x08)
	struct UImage* TextureOverlay; // 0x2a0(0x08)
	struct TMap<struct FString, struct FString> MapLocKeys; // 0x2a8(0x50)
	struct TMap<struct FString, struct FString> DescLocKeys; // 0x2f8(0x50)
	struct FString Current Map; // 0x348(0x10)
	struct FString Current Flow; // 0x358(0x10)
	struct TMap<struct FString, struct UAkAudioEvent*> FlowVOs; // 0x368(0x50)
	struct UAkAudioEvent* TutorialVO; // 0x3b8(0x08)

	void Construct(); // Function WBP_LoadingScreenOverlay.WBP_LoadingScreenOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_LoadingScreenOverlay(int32_t EntryPoint); // Function WBP_LoadingScreenOverlay.WBP_LoadingScreenOverlay_C.ExecuteUbergraph_WBP_LoadingScreenOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

