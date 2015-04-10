//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DVTSourceControlSystem : NSObject <NSSecureCoding>
{
    BOOL _supportsMultipleRemoteRepositories;
    BOOL _hasLocalRepository;
    BOOL _repositoriesAreBrowsable;
    BOOL _supportsPartialWorkingCopies;
    BOOL _requiresLocationsForBranchesAndTags;
    BOOL _isLegacyPlugIn;
    NSString *_name;
    NSString *_version;
    NSString *_workingCopyFolderIdentifier;
    NSString *_plugInIdentifier;
    NSString *_nonLegacyIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)sourceControlSystemsWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)cachedSourceControlSystems;
+ (id)systemWithIdentifier:(id)arg1;
@property(copy) NSString *nonLegacyIdentifier; // @synthesize nonLegacyIdentifier=_nonLegacyIdentifier;
@property(readonly) BOOL isLegacyPlugIn; // @synthesize isLegacyPlugIn=_isLegacyPlugIn;
@property(copy) NSString *plugInIdentifier; // @synthesize plugInIdentifier=_plugInIdentifier;
@property BOOL requiresLocationsForBranchesAndTags; // @synthesize requiresLocationsForBranchesAndTags=_requiresLocationsForBranchesAndTags;
@property BOOL supportsPartialWorkingCopies; // @synthesize supportsPartialWorkingCopies=_supportsPartialWorkingCopies;
@property BOOL repositoriesAreBrowsable; // @synthesize repositoriesAreBrowsable=_repositoriesAreBrowsable;
@property BOOL hasLocalRepository; // @synthesize hasLocalRepository=_hasLocalRepository;
@property BOOL supportsMultipleRemoteRepositories; // @synthesize supportsMultipleRemoteRepositories=_supportsMultipleRemoteRepositories;
@property(retain) NSString *workingCopyFolderIdentifier; // @synthesize workingCopyFolderIdentifier=_workingCopyFolderIdentifier;
@property(retain) NSString *version; // @synthesize version=_version;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, getter=isUsable) BOOL usable;
- (BOOL)isIsLegacyPlugIn;
- (id)initWithName:(id)arg1 plugInIdentifier:(id)arg2 version:(id)arg3 legacyPlugInForIdentifier:(id)arg4 workingCopyFolderIdentifier:(id)arg5 supportsMultipleRemoteRepositories:(BOOL)arg6 hasLocalRepository:(BOOL)arg7 repositoriesAreBrowsable:(BOOL)arg8 supportsPartialWorkingCopies:(BOOL)arg9 requiresLocationsForBranchesAndTags:(BOOL)arg10;
- (id)initWithName:(id)arg1 plugInIdentifier:(id)arg2 version:(id)arg3 workingCopyFolderIdentifier:(id)arg4 supportsMultipleRemoteRepositories:(BOOL)arg5 hasLocalRepository:(BOOL)arg6 repositoriesAreBrowsable:(BOOL)arg7 supportsPartialWorkingCopies:(BOOL)arg8 requiresLocationsForBranchesAndTags:(BOOL)arg9;
- (id)_init;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly) NSString *pluginIdentifier;

@end