// WidgetBlueprintGeneratedClass WBP_ScrollingFeed.WBP_ScrollingFeed_C
// Size: 0x2c9 (Inherited: 0x268)
struct UWBP_ScrollingFeed_C : UHWWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCanvasPanel* FeedEntries; // 0x270(0x08)
	int32_t Counter; // 0x278(0x04)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct TArray<struct UWidget*> FeedItems; // 0x280(0x10)
	int32_t MaxItems; // 0x290(0x04)
	float ScrollingSpeed; // 0x294(0x04)
	float SlideInSpeed; // 0x298(0x04)
	int32_t HistoryLength; // 0x29c(0x04)
	bool Scroll; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float YAdjustment; // 0x2a4(0x04)
	float FeedItemHeight; // 0x2a8(0x04)
	float FeedItemWidth; // 0x2ac(0x04)
	float HoldTime; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<float> ItemDelays; // 0x2b8(0x10)
	bool ItemsAligned; // 0x2c8(0x01)

	void ClearFeed(); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.ClearFeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void TestTick(); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.TestTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool IsItemDelayed(); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.IsItemDelayed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateFeed(float DeltaTime); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.UpdateFeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	float GetNewItemStartY(); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.GetNewItemStartY // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateItems(struct UWidget* NewItem); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.UpdateItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	bool AreAllItemsAligned(); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.AreAllItemsAligned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void DeleteHiddenItems(struct UWidget* Widget); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.DeleteHiddenItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	float GetYChange(struct UWidget* Widget); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.GetYChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetYPosition(struct UWidget* Widget, float DeltaTime, bool ShouldUpdate); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.GetYPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	float GetXPosition(struct UWidget* Widget, float DeltaTime); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.GetXPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x13c4ca0
	void UpdateItemPositions(float DeltaTime); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.UpdateItemPositions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void AddNewFeedItem(struct UWidget* AddedItem); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.AddNewFeedItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x13c4ca0
	void ExecuteUbergraph_WBP_ScrollingFeed(int32_t EntryPoint); // Function WBP_ScrollingFeed.WBP_ScrollingFeed_C.ExecuteUbergraph_WBP_ScrollingFeed // (Final|UbergraphFunction|HasDefaults) // @ game+0x13c4ca0
};

