//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTPlistNode : NSObject <NSCopying>
{
    DVTPlistNode *_parent;
}

+ (id)plistfromPropertyList:(id)arg1 withParent:(id)arg2;
@property DVTPlistNode *parent; // @synthesize parent=_parent;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 startingAt:(id)arg3 document:(id)arg4;
- (id)stringForSearch;
- (id)keyPath;
- (id)keyForChild:(id)arg1;
- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (void)setValueFromPlist:(id)arg1;
@property(retain) id value;
- (BOOL)isPlistCommentNode;
- (unsigned long long)indexOfKey:(id)arg1;
- (unsigned long long)indexOfChild:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)children;
- (unsigned long long)numberOfChildren;
@property(readonly, getter=isLeaf) BOOL leaf;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParentNode:(id)arg1;

@end