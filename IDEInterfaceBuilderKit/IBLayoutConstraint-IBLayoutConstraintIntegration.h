//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBLayoutConstraint (IBLayoutConstraintIntegration)
+ (id)unarchivedConstant:(id)arg1;
+ (id)unarchivedFirstItem:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)keyPathsForValuesAffectingIbInspectedAttributeInspectionType;
+ (id)keyPathsForValuesAffectingIbInspectedAutomaticallyLayoutBasedOnLanguage;
+ (id)keyPathsForValuesAffectingIbInspectedCanEditSecondItem;
+ (id)keyPathsForValuesAffectingIbInspectedSecondAttribute;
+ (id)keyPathsForValuesAffectingIbInspectedFirstAttribute;
+ (id)keyPathsForValuesAffectingIbInspectedPriority;
+ (id)keyPathsForValuesAffectingIbInspectedMultiplier;
+ (id)keyPathsForValuesAffectingIbInspectedCanEditMultiplier;
+ (id)keyPathsForValuesAffectingIbInspectedRelation;
+ (id)keyPathsForValuesAffectingIbInspectedCanEditRelation;
+ (id)keyPathsForValuesAffectingIbInspectedMinimumConstant;
+ (id)keyPathsForValuesAffectingIbInspectedConstant;
+ (id)keyPathsForValuesAffectingIbInspectedNonNilConstantValue;
+ (id)keyPathsForValuesAffectingIbInspectedCanChangeLayoutDirection;
+ (id)keyPathsForValuesAffectingIbInspectedCanEditConstantSymbolically;
+ (id)keyPathsForValuesAffectingIbInspectedCanEditConstant;
+ (id)keyPathsForValuesAffectingIbInspectedConstantInspectionType;
+ (id)keyPathsForValuesAffectingIbInspectedInspectorHeaderTitle;
+ (id)ibDefaultImageForInstance:(id)arg1;
+ (id)keyPathsForValuesAffectingIbTypeLabel;
+ (id)keyPathsForValuesAffectingIbInspectedUserInterfaceDirection;
+ (id)ibConstantAttributeName;
+ (id)keyPathsForValuesAffectingIbInspectedFirstAttributeName;
- (void)ibPopulateObjectsToRetainInCompiledTraitStorage:(id)arg1;
- (id)ibDesignTimeConfigurableKeyPathForCompiledKeyPath:(id)arg1;
- (id)ibCompiledKeyPathForDesignTimeConfigurableKeyPath:(id)arg1;
- (id)ibRuntimeConfigurableConstantKeyPath;
- (void)ibEnumerateDerivedInspectedConfigurablePropertyDefinitions:(CDUnknownBlockType)arg1;
- (id)ibAllConfigurationsWithValuesForInspectedConfigurableProperty:(id)arg1;
- (void)ibTakeValue:(id)arg1 forInspectedConfigurableProperty:(id)arg2 inConfiguration:(id)arg3;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (BOOL)ibBothItemsAreTurnedOnAndInstalledInConfiguration:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)ibIsCompatibleWithBasaltAndEarlierPopulatingCapabilities:(id)arg1 returningReason:(id *)arg2;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (void)ibArchiveConstantForConfiguration:(id)arg1 withArchiver:(id)arg2;
- (void)ibPopulateRequiredDocumentCapabilities:(id)arg1;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (void)unarchiveScoringType:(id)arg1;
- (void)archiveScoringType:(id)arg1;
- (long long)archivedScoringType;
- (void)unarchiveContainingView:(id)arg1;
- (void)archiveContainingView:(id)arg1;
- (void)archiveFirstItem:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (void)ibDocument:(id)arg1 didAddConnection:(id)arg2;
@property(readonly, nonatomic) unsigned long long ibInspectedAttributeInspectionType;
@property(nonatomic) BOOL ibInspectedAutomaticallyLayoutBasedOnLanguage;
- (BOOL)ibInspectedCanEditSizeAttributes;
- (BOOL)ibInspectedCanEditHorizontalAttributes;
- (BOOL)ibInspectedCanEditVerticalAttributes;
- (BOOL)ibInspectedCanEditSecondItem;
@property(nonatomic) unsigned long long ibInspectedSecondAttribute;
@property(nonatomic) unsigned long long ibInspectedFirstAttribute;
- (void)ibClearSymbolicConstantIfAttributeIsMarginRelative:(unsigned long long)arg1;
@property(nonatomic) double ibInspectedPriority;
@property(copy, nonatomic) NSString *ibInspectedMultiplier;
- (BOOL)ibInspectedCanEditMultiplier;
- (void)setIbInspectedRelation:(long long)arg1;
- (long long)ibInspectedRelation;
- (BOOL)ibInspectedCanEditRelation;
@property(readonly, nonatomic) double ibInspectedMinimumConstant;
- (void)setIbInspectedConstant:(id)arg1 document:(id)arg2 frameDecideAfterSettingConstant:(BOOL)arg3;
- (id)ibInspectedConstantToSetForConstantValue:(id)arg1 document:(id)arg2;
@property(copy, nonatomic) NSNumber *ibInspectedConstant; // @dynamic ibInspectedConstant;
- (id)ibInspectedNonNilConstantValue;
- (BOOL)ibInspectedCanChangeLayoutDirection;
- (BOOL)ibInspectedCanEditConstantSymbolically;
- (BOOL)ibInspectedCanEditConstant;
- (unsigned long long)ibInspectedConstantInspectionTypeReturningReasonForNonSymbolicType:(id *)arg1;
- (id)ibInspectedNonSymbolicConstantReason;
@property(readonly, nonatomic) unsigned long long ibInspectedConstantInspectionType;
- (void)ibModifyPropertyOfConstraintWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibInspectedInspectorHeaderTitle;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibWantsVerboseDefaultLabel;
- (id)ibTypeLabel;
- (void)ibPromoteToUserConstraint;
- (id)ibRuntimeClassName;
- (BOOL)ibAvoidsEditing;
- (id)ibLocalAdditionalIbtoolDescriptionKeyPaths;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (BOOL)ibIsCopyableGivenSelection:(id)arg1;
- (id)ibInspectedFirstAttributeName;
- (id)ibLoggingDescription;
- (id)ibDefaultSubtreeDescription;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *ideContainingView;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *ideSecondItem;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *ideFirstItem;
@end