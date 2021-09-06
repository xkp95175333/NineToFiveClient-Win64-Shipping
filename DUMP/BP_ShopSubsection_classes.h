// BlueprintGeneratedClass BP_ShopSubsection.BP_ShopSubsection_C
// Size: 0xc0 (Inherited: 0x28)
struct UBP_ShopSubsection_C : UObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x28(0x08)
	struct FBP_ShopSubsectionWithCampaignId SubsectionData; // 0x30(0x68)
	struct FMulticastInlineDelegate CampaignExpired; // 0x98(0x10)
	struct FMulticastInlineDelegate CampaignStarted; // 0xa8(0x10)
	struct FDateTime ExpiryDateTime; // 0xb8(0x08)

	void RunExpiryTimer(float Seconds); // Function BP_ShopSubsection.BP_ShopSubsection_C.RunExpiryTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void FireCampaignExpired(); // Function BP_ShopSubsection.BP_ShopSubsection_C.FireCampaignExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RunBeginTimer(float Seconds); // Function BP_ShopSubsection.BP_ShopSubsection_C.RunBeginTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddCampaignToShop(); // Function BP_ShopSubsection.BP_ShopSubsection_C.AddCampaignToShop // (BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_BP_ShopSubsection(int32_t EntryPoint); // Function BP_ShopSubsection.BP_ShopSubsection_C.ExecuteUbergraph_BP_ShopSubsection // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
	void CampaignStarted__DelegateSignature(struct FString CampaignId, struct FString Category, struct UBP_ShopSubsection_C* Subsection); // Function BP_ShopSubsection.BP_ShopSubsection_C.CampaignStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void CampaignExpired__DelegateSignature(struct FString CampaignId, struct FString Category); // Function BP_ShopSubsection.BP_ShopSubsection_C.CampaignExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

