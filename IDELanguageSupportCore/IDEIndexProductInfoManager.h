//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEIndexProductInfoManager : NSObject
{
    DVTDispatchLock *_lock;
    NSMutableDictionary *_productInfos;
    id _productInfoRegisteredObserver;
    id _productInfoUpdatedObserver;
    id _productInfoUnregisteredObserver;
}

+ (id)sharedManager;
+ (void)initialize;
- (void).cxx_destruct;
- (void)informSourceKit:(struct sourcekitd_uid_s *)arg1 productInfo:(id)arg2 productBlock:(CDUnknownBlockType)arg3;
- (void)reregisterProductInfo:(id)arg1 settings:(id)arg2;
- (void)reregisterAllProductInfos;
- (void)unregisterProductInfo:(id)arg1;
- (void)updateProductInfo:(id)arg1;
- (void)registerProductInfo:(id)arg1;
- (void)requestBuildSettingsForProduct:(id)arg1;
- (void)dealloc;
- (id)init;

@end