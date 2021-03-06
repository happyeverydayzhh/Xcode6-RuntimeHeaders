//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEPlaygroundTextView : DVTSourceTextView
{
    struct CGSize _origTextContainerInset;
    struct _IDEPlaygroundTextViewFlags _ptvFlags;
    NSMapTable *_toyToToyHostingViewControllerMap;
    NSMapTable *_accessoryViewAnnotationToToyHostingViewControllerMap;
    NSMapTable *_toyHostingViewControllerToObserverTokenMap;
    NSMapTable *_accessoryViewAnnotationToAssociatedToyObserverMap;
    IDEToybox *_toybox;
}

+ (id)keyPathsForValuesAffectingSidebarWidth;
+ (BOOL)_shouldEnableResponsiveScrolling;
+ (void)initialize;
@property(retain, nonatomic) IDEToybox *toybox; // @synthesize toybox=_toybox;
- (void).cxx_destruct;
- (void)dvt_shouldDeallocate;
@property(readonly, nonatomic) double sidebarWidth;
- (void)layout;
- (void)layoutManager:(id)arg1 didUnfoldRange:(struct _NSRange)arg2;
- (void)layoutManager:(id)arg1 didFoldRange:(struct _NSRange)arg2;
- (struct CGSize)_maximumViewSizeForToyHostingViewControllers;
- (void)_layoutToyViewControllers;
- (void)_updateLayoutForAccessoryViewAnnotation:(id)arg1;
- (void)_removeFrameObserverForToyHostingViewController:(id)arg1;
- (void)_addFrameObserverForToyHostingViewController:(id)arg1;
- (void)_updateCharacterRangeToInvalidateWithRange:(struct _NSRange)arg1;
- (void)_removeToyHostingViewController:(id)arg1;
- (void)_removeToyHostingViewControllerForAccessoryViewAnnotation:(id)arg1;
- (void)_addToyHostingViewControllerForAccessoryViewAnnotation:(id)arg1;
- (void)_updateToyHostingViewControllerForAccessoryViewAnnotation:(id)arg1;
- (void)_removeAssociatedToyObserverForAccessoryViewAnnotation:(id)arg1;
- (void)_addAssociatedToyObserverForAccessoryViewAnnotation:(id)arg1;
- (BOOL)_textContainerContainsAccessoryViewAnnotation:(id)arg1;
- (struct _NSRange)_characterRangeAssociatedWithToy:(id)arg1;
- (struct _NSRange)_characterRangeAssociatedWithToys:(id)arg1;
- (id)_sectionAccessoryViewAnnotationForToy:(id)arg1;
- (void)setToysVisibleForSelection:(BOOL)arg1;
- (long long)menuInfoForSelectedToys;
- (id)toyAnnotationsForCharacterRange:(struct _NSRange)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(copy, nonatomic) NSDate *resultDisplayDate;
- (void)setAccessoryAnnotationWidth:(double)arg1;
- (void)deleteBackward:(id)arg1;
- (void)didChangeText;
- (void)viewDidEndLiveResize;
- (void)didRemoveAnnotations:(id)arg1;
- (void)didAddAnnotations:(id)arg1;
- (void)_centeredScrollRectToVisible:(struct CGRect)arg1 forceCenter:(BOOL)arg2;
- (void)setWrapsLines:(BOOL)arg1;
- (id)description;
- (id)completionController;
- (void)_loadColorsFromCurrentTheme;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
@property BOOL hasMultipleSections;
- (void)_adjustTextContainerInset;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)setTextContainerInset:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

// Remaining properties
@property(readonly) IDEPlaygroundLayoutManager *layoutManager; // @dynamic layoutManager;
@property IDEPlaygroundTextContainer *textContainer; // @dynamic textContainer;

@end