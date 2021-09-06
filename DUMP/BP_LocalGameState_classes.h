// BlueprintGeneratedClass BP_LocalGameState.BP_LocalGameState_C
// Size: 0xa8 (Inherited: 0x28)
struct UBP_LocalGameState_C : USaveGame {
	int32_t HUB_Active_Tab_Index; // 0x28(0x04)
	struct FName Active_Tab_Id; // 0x2c(0x08)
	bool PrivacyAccepted?; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TMap<struct FString, struct FDateTime> CampaignsSeen; // 0x38(0x50)
	struct TArray<struct FString> NewShopItemsSeen; // 0x88(0x10)
	struct TArray<enum class BPE_FTUESoundViews> FTUE_VoiceOvers; // 0x98(0x10)

	void GetHubTabState(int32_t TabIndex, struct FName ID); // Function BP_LocalGameState.BP_LocalGameState_C.GetHubTabState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void SetHubTabState(int32_t Index, struct FName ID); // Function BP_LocalGameState.BP_LocalGameState_C.SetHubTabState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

