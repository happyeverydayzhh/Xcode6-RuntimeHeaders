//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBTaskBasedParser : IBSourceCodeParser
{
}

- (id)parseData:(id)arg1 fromFile:(id)arg2 errors:(id *)arg3;
- (id)taskForParsingData:(id)arg1 fromFile:(id)arg2 input:(id *)arg3 output:(id *)arg4;
- (id)processParserOutput:(id)arg1 fromFile:(id)arg2 errors:(id *)arg3;
- (id)parserLaunchArgumentsForFile:(id)arg1;
- (id)parserLaunchPathForFile:(id)arg1;

@end