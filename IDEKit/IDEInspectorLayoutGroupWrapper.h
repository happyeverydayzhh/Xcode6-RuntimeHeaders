//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEInspectorLayoutGroupWrapper : IDEInspectorLayoutGroup
{
    CDStruct_bf6d4a14 _subgroupInset;
}

@property CDStruct_bf6d4a14 subgroupInset; // @synthesize subgroupInset=_subgroupInset;
- (void)layoutGroupsBottomUp;
- (void)layoutGroupsTopDown;
- (id)subgroup;
- (void)insertSubgroup:(id)arg1 atIndex:(long long)arg2;
- (id)attributeDescription;
- (id)initWithSubgroupInset:(CDStruct_bf6d4a14)arg1;

@end