//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPackageInstallerViewController : NSViewController <DVTPackageInstallerHelperDelegate, NSTextViewDelegate>
{
    NSView *_packagesToBeInstalledView;
    NSButton *_quitButton;
    NSButton *_actionButton;
    NSArrayController *_packagesToInstallArrayController;
    NSProgressIndicator *_progressBar;
    NSTextView *_errorTextView;
    NSScrollView *_errorTextScrollView;
    NSTextField *_needToRestartXcodeLabel;
    NSWindow *_appsToQuitSheet;
    NSButton *_quitAllButton;
    NSTextField *_descriptionLabel;
    NSTextField *_titleLabel;
    NSTimer *_alertAllAppTimer;
    NSTimer *_appsToQuitTimer;
    double _progress;
    IDEPackageInstallerHelper *_packageInstallerHelper;
    CDUnknownBlockType _continueButtonTitleProvider;
    CDUnknownBlockType _installationCompleteButtonHandler;
    NSArray *_appsThatNeedToBeQuitBeforeInstallCanProceed;
    CDUnknownBlockType installationCompleteHandler;
    NSArray *_packagesToInstall;
    NSImageView *_imageView;
}

+ (void)initialize;
@property __weak NSImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly) NSArray *packagesToInstall; // @synthesize packagesToInstall=_packagesToInstall;
@property(copy) NSArray *appsThatNeedToBeQuitBeforeInstallCanProceed; // @synthesize appsThatNeedToBeQuitBeforeInstallCanProceed=_appsThatNeedToBeQuitBeforeInstallCanProceed;
@property(copy) CDUnknownBlockType installationCompleteButtonHandler; // @synthesize installationCompleteButtonHandler=_installationCompleteButtonHandler;
@property(copy) CDUnknownBlockType installationCompleteHandler; // @synthesize installationCompleteHandler;
- (void).cxx_destruct;
- (void)cancelQuitAppsThatNeedToBeQuitBeforeInstallationStarts:(id)arg1;
- (void)quitAppsThatNeedToBeQuitBeforeInstallationStarts:(id)arg1;
- (void)continueAfterSuccessfulInstallation:(id)arg1;
- (void)_doneWithQuitSheet;
- (void)_checkAllAppsThatNeedToBeQuitArentRunning;
- (void)_ensureAllAppsThatNeedToBeQuitArentRunning;
- (void)startInstall:(id)arg1;
- (void)quit:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)installationFailed:(id)arg1;
- (void)installationSucceeded;
- (void)installationProgressChanged:(long long)arg1;
- (void)installationStarted;
- (void)showRestartDescriptionLabel;
- (void)setInstallationCompleteButtonTitle:(id)arg1;
- (id)packagesToDisplay;
- (BOOL)backgroundDownloadInProgress;
- (BOOL)needToInstallPackages;
- (void)_checkForAlertAllApp;
- (void)loadView;
- (id)_localizedString:(id)arg1;
- (id)initWithDefaultNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end