// WidgetBlueprintGeneratedClass WBP_SkipTimer.WBP_SkipTimer_C
// Size: 0x2c5 (Inherited: 0x260)
struct UWBP_SkipTimer_C : UUserWidget {
	struct UWidgetAnimation* ButtonHold; // 0x260(0x08)
	struct UWBP_CircularProgressBar_C* ButtonHoldProgressBar; // 0x268(0x08)
	struct UWBP_RichTextLabel_C* HoldToSkipLabel; // 0x270(0x08)
	struct UImage* Image_80; // 0x278(0x08)
	struct UProgressBar* TimerLoader; // 0x280(0x08)
	struct FTimerHandle ProgressTimer; // 0x288(0x08)
	struct FTimerHandle MouseHeldPressedTimer; // 0x290(0x08)
	float ProgressStart; // 0x298(0x04)
	float ProgressDuration; // 0x29c(0x04)
	struct FMulticastInlineDelegate OnExpired; // 0x2a0(0x10)
	struct FMulticastInlineDelegate OnSkipped; // 0x2b0(0x10)
	float TimerStep; // 0x2c0(0x04)
	bool HasBeenSkipped; // 0x2c4(0x01)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SkipTimer.WBP_SkipTimer_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnMouseHeldPressed(); // Function WBP_SkipTimer.WBP_SkipTimer_C.OnMouseHeldPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function WBP_SkipTimer.WBP_SkipTimer_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void UpdateProgress(); // Function WBP_SkipTimer.WBP_SkipTimer_C.UpdateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Start Timer(float TimerDuration); // Function WBP_SkipTimer.WBP_SkipTimer_C.Start Timer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnSkipped__DelegateSignature(); // Function WBP_SkipTimer.WBP_SkipTimer_C.OnSkipped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void OnExpired__DelegateSignature(); // Function WBP_SkipTimer.WBP_SkipTimer_C.OnExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

