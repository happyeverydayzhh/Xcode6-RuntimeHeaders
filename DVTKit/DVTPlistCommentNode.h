//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTPlistCommentNode : DVTPlistNode
{
    NSString *_comment;
    BOOL isMultiLine;
}

@property BOOL isMultiLine; // @synthesize isMultiLine;
- (void).cxx_destruct;
- (id)rawPlist;
- (id)xmlStringWithIndent:(id)arg1;
- (id)plistStringWithIndent:(id)arg1;
- (id)value;
- (void)setValueFromPlist:(id)arg1;
- (void)setValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isPlistCommentNode;

@end