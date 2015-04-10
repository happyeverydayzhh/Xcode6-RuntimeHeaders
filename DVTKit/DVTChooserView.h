//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTChooserView : DVTBorderedView
{
    NSMatrix *_buttonMatrix;
    NSIndexSet *_selectionIndexes;
    NSMutableArray *_choices;
    id <DVTChooserViewDelegate> _delegate;
    int _justification;
    int _gradientStyle;
    BOOL _allowsMultipleSelection;
    BOOL _allowsEmptySelection;
    BOOL _choicesFillWidth;
    NSNumber *_explicitImageScaling;
}

+ (id)keyPathsForValuesAffectingSelectedChoices;
+ (id)keyPathsForValuesAffectingSelectedChoice;
+ (id)keyPathsForValuesAffectingSelectedIndex;
+ (struct CGSize)defaultMinimumButtonSize;
+ (struct CGSize)defaultButtonSize;
+ (void)initialize;
@property(copy, nonatomic) NSNumber *explicitImageScaling; // @synthesize explicitImageScaling=_explicitImageScaling;
@property(retain) id <DVTChooserViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property(nonatomic) BOOL choicesFillWidth; // @synthesize choicesFillWidth=_choicesFillWidth;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(nonatomic) int justification; // @synthesize justification=_justification;
@property(retain) NSMatrix *_buttonMatrix; // @synthesize _buttonMatrix;
- (void).cxx_destruct;
@property(readonly) NSArray *grabRects;
@property(readonly) struct CGRect grabRect;
@property(readonly, copy) NSMutableArray *mutableChoices;
- (void)updateBoundContent;
@property(copy) NSArray *choices;
- (void)updateBoundSelectedObjects;
- (void)updateBoundSelectionIndexes;
@property(copy) NSArray *selectedChoices;
@property(retain) DVTChoice *selectedChoice;
@property unsigned long long selectedIndex;
@property(copy) NSIndexSet *selectionIndexes; // @synthesize selectionIndexes=_selectionIndexes;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderSides:(int)arg1;
- (void)layoutTopDown;
- (void)_chooserButtonClicked:(id)arg1;
- (void)drawBorderInRect:(struct CGRect)arg1;
- (struct CGRect)_exposedRectLeft;
- (struct CGRect)_exposedRect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dvtExtraBindings;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (void)_configureButtonMatrix;

@end