//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface XCSCMReferenceDictionary : NSObject <NSCopying>
{
    NSMutableDictionary *_referenceDictionary;
}

+ (BOOL)verifySingleParentFolderForPaths:(id)arg1;
+ (id)parentFolderOfPaths:(id)arg1;
+ (id)dictionaryForReferences:(id)arg1;
- (unsigned long long)_countOfType:(id)arg1;
- (BOOL)includesReferenceAtPath:(id)arg1;
- (BOOL)areAllFolders;
- (BOOL)areAllFiles;
- (BOOL)areAllValid;
- (BOOL)areAllInSameFolder;
- (void)_removeObjectsWithType:(id)arg1;
- (void)removeReferencesForKeys:(id)arg1;
- (void)removeReferenceWithPath:(id)arg1;
- (void)removeReferencesWithInvalidPaths;
- (void)removeAllFolderReferences;
- (void)removeAllFileReferences;
- (void)addReferencesFromArray:(id)arg1;
- (void)addReference:(id)arg1;
- (id)_pathListsBasedOn:(id)arg1 withListSizeLimitedTo:(unsigned long long)arg2;
- (id)pathListsDividedByParentFolder;
- (id)pathListsDividedWithListSizeLimitedTo:(long long)arg1;
- (id)pathListsDividedByParentFolderWithListSizeLimitedTo:(long long)arg1;
- (id)_dictionary;
- (void)_setDictionary:(id)arg1;
- (unsigned long long)count;
- (id)arrayOfReferences;
- (id)arrayOfAbsolutePaths;
- (id)referenceForPath:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReferences:(id)arg1;
- (id)init;

@end