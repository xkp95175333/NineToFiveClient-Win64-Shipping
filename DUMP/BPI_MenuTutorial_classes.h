// BlueprintGeneratedClass BPI_MenuTutorial.BPI_MenuTutorial_C
// Size: 0x28 (Inherited: 0x28)
struct UBPI_MenuTutorial_C : UInterface {

	void GetTutorialDebugStatus(struct FString Status); // Function BPI_MenuTutorial.BPI_MenuTutorial_C.GetTutorialDebugStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void StartTutorial(enum class BPE_MenuTutorialPart Part, bool Forced); // Function BPI_MenuTutorial.BPI_MenuTutorial_C.StartTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void RefreshTutorial(); // Function BPI_MenuTutorial.BPI_MenuTutorial_C.RefreshTutorial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void Initialize(struct UUserWidget* MainWidget); // Function BPI_MenuTutorial.BPI_MenuTutorial_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void NotifyTutorialEvent(enum class BPE_TutorialEventType EventType); // Function BPI_MenuTutorial.BPI_MenuTutorial_C.NotifyTutorialEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
	void GetCurrentSequence(struct TScriptInterface<None> Sequence); // Function BPI_MenuTutorial.BPI_MenuTutorial_C.GetCurrentSequence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x13c4ca0
};

