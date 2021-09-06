// BlueprintGeneratedClass BP_HWViewportClient.BP_HWViewportClient_C
// Size: 0x3b0 (Inherited: 0x3a0)
struct UBP_HWViewportClient_C : UHWGameViewportClient {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UWBP_LoadingScreen_C* LoadingScreenInstance; // 0x3a8(0x08)

	void SetLoadingScreenVisible(bool Visible); // Function BP_HWViewportClient.BP_HWViewportClient_C.SetLoadingScreenVisible // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void OnControllerConnectionChanged(bool bIsConnection); // Function BP_HWViewportClient.BP_HWViewportClient_C.OnControllerConnectionChanged // (Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_HWViewportClient(int32_t EntryPoint); // Function BP_HWViewportClient.BP_HWViewportClient_C.ExecuteUbergraph_BP_HWViewportClient // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

