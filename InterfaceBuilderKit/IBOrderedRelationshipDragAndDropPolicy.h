//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBOrderedRelationshipDragAndDropPolicy : NSObject
{
    IBEditor *editor;
    NSString *relationKeyPath;
    NSSet *pasteboardTypes;
    long long dragInsertionIndex;
    long long growthDirection;
}

- (void)failToAcceptDragInfo:(id)arg1;
- (void)finishAcceptingDragInfo:(id)arg1;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (BOOL)customizesDragInsertionIndicatorForDragInfo:(id)arg1;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (BOOL)isDraggingInfoForUs:(id)arg1;
- (void)drawDragAndDropInsertionHints;
- (struct CGRect)dragInsertionIndicatorRect;
- (id)dragInsertionIndicatorPath;
- (long long)insertionIndexForPoint:(struct CGPoint)arg1;
- (unsigned long long)insertionEdge;
- (struct CGRect)confinementRect;
- (struct CGRect)rectForRelatedObject:(id)arg1;
- (struct CGRect)rectForEditedObject;
- (long long)growthDirection;
- (long long)dragInsertionIndex;
- (void)setDragInsertionIndex:(long long)arg1;
- (void)setGrowthDirection:(long long)arg1;
- (id)pasteboardTypes;
- (id)relation;
- (id)editedObject;
- (id)editor;
- (void)dealloc;
- (id)initWithEditor:(id)arg1 toManyRelation:(id)arg2 pasteboardType:(id)arg3 andGrowthDirection:(long long)arg4;
- (id)initWithEditor:(id)arg1 toManyRelation:(id)arg2 pasteboardTypes:(id)arg3 andGrowthDirection:(long long)arg4;

@end