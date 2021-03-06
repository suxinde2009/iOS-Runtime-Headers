/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString, SASportsTeam;

@interface SASportsAthlete : SASportsEntity {
}

@property(retain) SASportsTeam * activeTeam;
@property(copy) NSArray * athleteMetadata;
@property(copy) NSArray * careerStatistics;
@property(copy) NSString * firstName;
@property(copy) NSArray * formattedMetadata;
@property(copy) NSArray * formattedMetadataTypes;
@property(copy) NSString * gender;
@property(copy) NSString * height;
@property(copy) NSNumber * injured;
@property(copy) NSString * jerseyNumber;
@property(copy) NSArray * lastGameStatistics;
@property(copy) NSString * lastName;
@property(copy) NSString * nickname;
@property(copy) NSString * position;
@property(copy) NSArray * previousTeams;
@property(copy) NSArray * statistics;
@property(copy) NSString * weight;

+ (id)athlete;
+ (id)athleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)activeTeam;
- (id)athleteMetadata;
- (id)careerStatistics;
- (id)encodedClassName;
- (id)firstName;
- (id)formattedMetadata;
- (id)formattedMetadataTypes;
- (id)gender;
- (id)groupIdentifier;
- (id)height;
- (id)injured;
- (id)jerseyNumber;
- (id)lastGameStatistics;
- (id)lastName;
- (id)nickname;
- (id)position;
- (id)previousTeams;
- (void)setActiveTeam:(id)arg1;
- (void)setAthleteMetadata:(id)arg1;
- (void)setCareerStatistics:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFormattedMetadata:(id)arg1;
- (void)setFormattedMetadataTypes:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setInjured:(id)arg1;
- (void)setJerseyNumber:(id)arg1;
- (void)setLastGameStatistics:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setPreviousTeams:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setWeight:(id)arg1;
- (id)statistics;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)weight;

@end
