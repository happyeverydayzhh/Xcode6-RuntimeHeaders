//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HFBTreeByteArray : HFByteArray
{
    HFBTree *btree;
}

- (id)subarrayWithRange:(CDStruct_91ee6ea3)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)insertByteSlice:(id)arg1 inRange:(CDStruct_91ee6ea3)arg2;
- (void)deleteBytesInRange:(CDStruct_91ee6ea3)arg1;
- (void)insertByteSlice:(id)arg1 atOffset:(unsigned long long)arg2;
- (BOOL)fastPathInsertByteSlice:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)copyBytes:(char *)arg1 range:(CDStruct_91ee6ea3)arg2;
- (id)description;
- (id)byteSliceEnumerator;
- (id)byteSlices;
- (unsigned long long)length;
- (void)dealloc;
- (id)init;

@end