//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEProductsUtilityPane : IDEViewController
{
    DVTBorderedView *_borderedView;
    id <IDEProductsInspectable> _inspectable;
}

@property(readonly) id <IDEProductsInspectable> inspectable; // @synthesize inspectable=_inspectable;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithInspectable:(id)arg1;
- (id)initUsingDefaultNib;

@end