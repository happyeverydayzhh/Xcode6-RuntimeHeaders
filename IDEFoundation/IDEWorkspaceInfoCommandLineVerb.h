//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEWorkspaceInfoCommandLineVerb : IDEWorkspaceBasedCommandLineVerb
{
}

+ (void)_printBlueprintProviderInfo:(id)arg1 withEnvironment:(id)arg2 showAllProjects:(BOOL)arg3 showTargets:(BOOL)arg4 showSchemes:(BOOL)arg5 showConfigurations:(BOOL)arg6 indentationLevel:(unsigned long long)arg7;
+ (void)_printSchemesForContainer:(id)arg1 withEnvironment:(id)arg2 indentationLevel:(unsigned long long)arg3;
+ (void)_indentToLevel:(unsigned long long)arg1 withEnvironment:(id)arg2;
+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;

@end