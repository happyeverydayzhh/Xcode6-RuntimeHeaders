//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DSAArrayResultSource : DSAResultSource
{
    NSArray *_theResults;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)nextResultsInTime:(double)arg1;
- (id)remainingResults;
- (BOOL)hasMoreResults;
- (id)initWithResults:(id)arg1 withSortDescriptor:(id)arg2;

@end