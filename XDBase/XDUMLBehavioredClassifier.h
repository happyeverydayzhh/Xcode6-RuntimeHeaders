//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol XDUMLBehavioredClassifier <XDUMLClassInterfaceCommons>
- (id <XDUMLImplementation>)newImplementationOf:(id <XDUMLInterface>)arg1;
- (void)implementationRemoved:(id <XDUMLImplementation>)arg1;
- (void)implementationAdded:(id <XDUMLImplementation>)arg1;
- (NSArray *)implementations;
@end