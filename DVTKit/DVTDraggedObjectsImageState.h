//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTDraggedObjectsImageState : DVTDraggedImageState
{
    NSMutableDictionary *_places;
    NSMutableDictionary *_views;
    NSMutableDictionary *_images;
    NSMutableArray *_identifiers;
    NSImage *_image;
    NSString *_name;
    struct CGPoint _frameOffset;
    BOOL _forcesImageScaling;
}

+ (id)draggedObjectStateWithIdentifiers:(id)arg1 views:(id)arg2 name:(id)arg3;
+ (id)draggedObjectStateWithIdentifiers:(id)arg1 images:(id)arg2 frames:(id)arg3 name:(id)arg4;
+ (id)draggedObjectStateWithImage:(id)arg1;
+ (id)draggedObjectStateWithIdentifier:(id)arg1 view:(id)arg2 name:(id)arg3;
+ (id)draggedObjectStateWithIdentifier:(id)arg1 image:(id)arg2 name:(id)arg3;
@property BOOL forcesImageScaling; // @synthesize forcesImageScaling=_forcesImageScaling;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)synthesizedAnchorPoint:(struct CGPoint *)arg1 forSubiquentState:(id)arg2;
- (id)identifierForPoint:(struct CGPoint)arg1;
- (BOOL)containsIdentifier:(id)arg1;
- (id)image;
- (id)views;
- (id)imageForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (struct CGRect)frameForIdentifier:(id)arg1;
- (struct CGRect)originalFrameForIdentifier:(id)arg1;
- (void)remapIdentifiers:(id)arg1;
- (id)initWithIdentifiers:(id)arg1 views:(id)arg2 name:(id)arg3;
- (id)initWithIdentifiers:(id)arg1 images:(id)arg2 frames:(id)arg3 name:(id)arg4;

@end