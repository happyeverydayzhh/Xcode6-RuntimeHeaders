//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBAutoLayoutView : NSView
{
    long long blocks;
}

- (void)layout;
- (void)triggerLayout;
- (BOOL)isLayoutEnabled;
- (void)disableLayout;
- (void)enableLayout;

@end