//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCCachedFileManager : TSFileManager
{
}

+ (void)_registerStandardFileInfoDerivationFunctionsIfNeeded;
+ (CDUnknownFunctionPointerType)_fileInfoDerivationFunctionForKeyNamed:(id)arg1;
+ (void)registerFileInfoDerivationFunction:(CDUnknownFunctionPointerType)arg1 forKeyName:(id)arg2;
+ (id)defaultFileManager;
+ (id)defaultManager;
+ (void)initialize;
- (void)discardCachedInfoForAllFiles;
- (void)discardCachedInfoForFileAtPath:(id)arg1;
- (void)discardCachedInfoForFileAtPath:(id)arg1 andParentDirectory:(BOOL)arg2;
- (id)cachedValueForKey:(id)arg1 forFileAtPath:(id)arg2;
- (void)incrementCacheGeneration;
- (unsigned long long)currentCacheGeneration;
- (BOOL)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id *)arg3;
- (BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (BOOL)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (BOOL)cachedFileExistsAtPath:(id)arg1;
- (BOOL)cachedIsDeletableFileAtPath:(id)arg1;
- (BOOL)cachedIsWritableFileAtPath:(id)arg1;
- (id)cachedSortedDirectoryContentsForPath:(id)arg1;
- (id)cachedDirectoryContentsForPath:(id)arg1;
- (id)cachedFileTypeForPath:(id)arg1 traverseLink:(BOOL)arg2;
- (id)cachedFileTypeForPath:(id)arg1;
- (id)cachedFileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2;
- (id)cachedFileAttributesAtPath:(id)arg1;
- (id)cachedModificationDateForPath:(id)arg1;
- (id)cachedCanonicalPathForPath:(id)arg1 relativeToPath:(id)arg2;

@end