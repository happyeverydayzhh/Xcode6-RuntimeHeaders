//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DBGInstructionPointerAnnotationProvider : DVTAnnotationProvider
{
    IDEAnnotationContext *_context;
    DVTMapTable *_annotationForLocation;
    NSMutableSet *_nonSelectedPCAnnotations;
    DVTObservingToken *_ipLocationObserver;
    DVTObservingToken *_ipLocationForDisasObserver;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)providerWillUninstall;
- (BOOL)_doesURLResolveToContextURL:(id)arg1;
- (BOOL)_shouldCreateAnnotationForLocation:(id)arg1;
- (void)_removeAnnotationForLocation:(id)arg1;
- (void)_invalidateAnnotation:(id)arg1;
- (void)_createAnnotationForInstructionPointerLocation:(id)arg1;
- (void)_removeAndInvalidateAllNonSelectedPCAnnocations;
- (void)_handleInstructionPointerLocationChanged:(id)arg1;
- (void)_updateNonPrimaryPCs:(id)arg1;
- (id)_initWithContext:(id)arg1;
- (id)init;

@end