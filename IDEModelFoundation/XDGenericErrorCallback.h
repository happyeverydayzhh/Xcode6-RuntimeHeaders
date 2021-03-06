//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XDGenericErrorCallback : NSObject <XDErrorWarningCallback>
{
    NSDictionary *_compilerFlags;
    BOOL _success;
}

+ (id)stringForErrorCategory:(int)arg1;
- (void).cxx_destruct;
- (BOOL)didSucceed;
- (BOOL)shouldContinue;
- (id)iOSTargetVersion;
- (id)macOSTargetVersion;
- (id)compilerFlags;
- (id)descriptionForElement:(id)arg1;
- (void)createWarningForElement:(id)arg1 withFormat:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createWarningForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createErrorForElement:(id)arg1 withFormat:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)createErrorForElement:(id)arg1 withMessage:(id)arg2 category:(int)arg3 documentURL:(id)arg4;
- (void)dealloc;
- (id)initWithCompilerFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end