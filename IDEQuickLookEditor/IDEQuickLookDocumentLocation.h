//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEQuickLookDocumentLocation : DVTDocumentLocation <NSCoding>
{
    IDEQuickLookPage *_page;
}

@property(readonly) IDEQuickLookPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDocumentURL:(id)arg1 page:(id)arg2;

@end