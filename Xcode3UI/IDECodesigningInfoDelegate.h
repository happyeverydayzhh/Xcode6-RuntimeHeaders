//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@protocol IDECodesigningInfoDelegate <NSObject>
@property(retain, nonatomic) DVTDeveloperAccount *selectedAccount;
@property(retain, nonatomic) DVTTeamRecord *selectedTeamRecord;
@property(readonly) NSString *provisioningProfileUUID;
@property(readonly) NSString *codesignIdentity;
@property(readonly) BOOL isUsingTeamBasedSigning;
- (void)useTeamBasedSigningWithTeam:(DVTTeamRecord *)arg1 account:(DVTDeveloperAccount *)arg2;
@end