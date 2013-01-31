/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSString, BBSectionSubtypeParameters, NSSet, NSNumber;

@interface BBSectionSubtypeParameters : NSObject  {
    BBSectionSubtypeParameters *_fallbackParameters;
    NSString *_topic;
    NSString *_missedBannerDescriptionFormat;
    NSString *_fullUnlockActionLabel;
    NSString *_unlockActionLabel;
    NSSet *_alertSuppressionAppIDs;
    NSNumber *_boxedCoalescesWhenLocked;
    NSNumber *_boxedSuppressesMessageForPrivacy;
    NSNumber *_boxedRealertCount;
    NSNumber *_boxedInertWhenLocked;
    NSNumber *_boxedPreservesUnlockActionCase;
    NSNumber *_boxedBannerShowsSubtitle;
    NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;
    NSNumber *_boxedSubtypePriority;
    NSNumber *_boxedIPodOutAlertType;
}

@property(copy) NSString * topic;
@property(copy) NSString * missedBannerDescriptionFormat;
@property(copy) NSString * fullUnlockActionLabel;
@property(copy) NSString * unlockActionLabel;
@property(copy) NSSet * alertSuppressionAppIDs;
@property BOOL coalescesWhenLocked;
@property BOOL suppressesMessageForPrivacy;
@property unsigned int realertCount;
@property BOOL inertWhenLocked;
@property BOOL preservesUnlockActionCase;
@property BOOL bannerShowsSubtitle;
@property unsigned int subtypePriority;
@property int iPodOutAlertType;
@property BOOL visuallyIndicatesWhenDateIsInFuture;
@property BBSectionSubtypeParameters * fallbackParameters;
@property(retain) NSNumber * boxedCoalescesWhenLocked;
@property(retain) NSNumber * boxedSuppressesMessageForPrivacy;
@property(retain) NSNumber * boxedRealertCount;
@property(retain) NSNumber * boxedInertWhenLocked;
@property(retain) NSNumber * boxedPreservesUnlockActionCase;
@property(retain) NSNumber * boxedBannerShowsSubtitle;
@property(retain) NSNumber * boxedVisuallyIndicatesWhenDateIsInFuture;
@property(retain) NSNumber * boxedSubtypePriority;
@property(retain) NSNumber * boxedIPodOutAlertType;


- (void)dealloc;
- (id)topic;
- (void)setTopic:(id)arg1;
- (void)setIPodOutAlertType:(int)arg1;
- (void)setSubtypePriority:(unsigned int)arg1;
- (void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)arg1;
- (void)setBannerShowsSubtitle:(BOOL)arg1;
- (void)setPreservesUnlockActionCase:(BOOL)arg1;
- (void)setInertWhenLocked:(BOOL)arg1;
- (void)setSuppressesMessageForPrivacy:(BOOL)arg1;
- (void)setCoalescesWhenLocked:(BOOL)arg1;
- (id)boxedIPodOutAlertType;
- (id)boxedSubtypePriority;
- (id)boxedVisuallyIndicatesWhenDateIsInFuture;
- (id)boxedBannerShowsSubtitle;
- (id)boxedPreservesUnlockActionCase;
- (id)boxedInertWhenLocked;
- (id)boxedRealertCount;
- (id)boxedSuppressesMessageForPrivacy;
- (id)boxedCoalescesWhenLocked;
- (id)fallbackParameters;
- (void)setAlertSuppressionAppIDs:(id)arg1;
- (void)setFullUnlockActionLabel:(id)arg1;
- (void)setMissedBannerDescriptionFormat:(id)arg1;
- (void)setBoxedIPodOutAlertType:(id)arg1;
- (void)setBoxedSubtypePriority:(id)arg1;
- (void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)arg1;
- (void)setBoxedBannerShowsSubtitle:(id)arg1;
- (void)setBoxedPreservesUnlockActionCase:(id)arg1;
- (void)setBoxedInertWhenLocked:(id)arg1;
- (void)setBoxedRealertCount:(id)arg1;
- (void)setBoxedSuppressesMessageForPrivacy:(id)arg1;
- (void)setBoxedCoalescesWhenLocked:(id)arg1;
- (int)iPodOutAlertType;
- (unsigned int)subtypePriority;
- (BOOL)visuallyIndicatesWhenDateIsInFuture;
- (BOOL)bannerShowsSubtitle;
- (BOOL)preservesUnlockActionCase;
- (BOOL)inertWhenLocked;
- (BOOL)suppressesMessageForPrivacy;
- (BOOL)coalescesWhenLocked;
- (id)alertSuppressionAppIDs;
- (id)unlockActionLabel;
- (id)fullUnlockActionLabel;
- (id)missedBannerDescriptionFormat;
- (void)setFallbackParameters:(id)arg1;
- (id)initWithFallbackParameters:(id)arg1;
- (void)setRealertCount:(unsigned int)arg1;
- (unsigned int)realertCount;
- (void)setUnlockActionLabel:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end