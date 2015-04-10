//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCRefactoringSetUpModule : PBXProjectModule
{
    NSView *_preControlView;
    NSView *_resizableViewContainer;
    NSView *_row2ViewContainer;
    XCRefactoringTransformationSetUpModule *_transformationSetUpModule;
    XCRefactoringTransformationSetUpRow2Module *_transformationSetUpRow2Module;
    NSView *_actionViewContainer;
    XCRefactoringModule *_module;
    XCRefactoringControlModule *_controlModule;
    XCRefactoringActionModule *_actionModule;
    NSString *_transformKey;
}

- (void)dealloc;
- (id)initWithModule:(id)arg1 controlModule:(id)arg2;
- (void)viewWasInstalled;
- (void)restoreTransformationSnapshot;
- (BOOL)transformationAllowedToChange:(id *)arg1;
- (void)transformationChanged;
- (void)restoreUserInputSnapshot;
- (void)userInputValuesAllowedToChange;
- (void)userInputValuesChanged;
- (void)displayError:(id)arg1;
- (BOOL)postInitialFile:(id *)arg1;
- (void)setPreviewEnabledRule:(int)arg1;
- (BOOL)switchToTransformationSetUpModule:(id)arg1 row2SetUpModule:(id)arg2 transformKey:(id)arg3 error:(id *)arg4;
- (id)userInput;
- (id)actionModule;
- (id)transformKey;
- (void)_replaceOldModule:(id)arg1 withNewModule:(id)arg2 container:(id)arg3 collapseEmptyContainer:(BOOL)arg4;
- (void)_installActionModule;
- (void)_resizeControlModule;
- (void)_installControlModule;

@end