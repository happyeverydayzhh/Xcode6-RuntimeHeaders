//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBSnapSet : NSObject
{
    unsigned char count;
    double *values;
}

+ (void)initialize;
@property(readonly) unsigned char count; // @synthesize count;
- (id)description;
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;
- (double)maxValue;
- (void)setValue:(double)arg1 atIndex:(unsigned char)arg2;
- (double)valueAtIndex:(unsigned char)arg1;
- (void)dealloc;
- (id)initWithCount:(unsigned long long)arg1;
- (id)init;

@end