/* Generated by RuntimeBrowser.
 */

@protocol PRSPredictionSupport <NSObject>

@required

- (unsigned int)alternateNameMatchScore;
- (NSString *)categoryForCP;
- (unsigned int)contentMatchScore;
- (unsigned int)displayNameMatchScore;
- (BOOL)doesContentMatch;
- (unsigned int)engagementScore;
- (NSString *)groupName;
- (unsigned int)interestingTimeScore;
- (BOOL)isAlternateNameMatch;
- (BOOL)isDisplayNameMatch;
- (BOOL)isEngagedWith;
- (BOOL)isMostRecentlyUsed;
- (BOOL)isParsec;
- (BOOL)isParsecTopHit;
- (BOOL)isPredictedTopHit;
- (BOOL)isPremium;
- (BOOL)isStaticTopHit;
- (BOOL)isUsed;
- (BOOL)keyWordMatch;
- (double)lastUsedTime;
- (unsigned int)predicted;
- (BOOL)queryEverLaunched;
- (unsigned int)queryIndependentScore;
- (BOOL)queryLastLaunched;
- (unsigned int)resultEngagementScore;
- (BOOL)resultLocationInteresting;
- (void)setAlternateNameMatchScore:(unsigned int)arg1;
- (void)setCategoryForCP:(NSString *)arg1;
- (void)setContentMatchScore:(unsigned int)arg1;
- (void)setDisplayNameMatchScore:(unsigned int)arg1;
- (void)setDoesContentMatch:(BOOL)arg1;
- (void)setEngagementScore:(unsigned int)arg1;
- (void)setGroupName:(NSString *)arg1;
- (void)setInterestingTimeScore:(unsigned int)arg1;
- (void)setIsAlternateNameMatch:(BOOL)arg1;
- (void)setIsDisplayNameMatch:(BOOL)arg1;
- (void)setIsEngagedWith:(BOOL)arg1;
- (void)setIsMostRecentlyUsed:(BOOL)arg1;
- (void)setIsParsec:(BOOL)arg1;
- (void)setIsParsecTopHit:(BOOL)arg1;
- (void)setIsPredictedTopHit:(BOOL)arg1;
- (void)setIsPremium:(BOOL)arg1;
- (void)setIsStaticTopHit:(BOOL)arg1;
- (void)setIsUsed:(BOOL)arg1;
- (void)setKeyWordMatch:(BOOL)arg1;
- (void)setLastUsedTime:(double)arg1;
- (void)setPredicted:(unsigned int)arg1;
- (void)setQueryEverLaunched:(BOOL)arg1;
- (void)setQueryIndependentScore:(unsigned int)arg1;
- (void)setQueryLastLaunched:(BOOL)arg1;
- (void)setResultEngagementScore:(unsigned int)arg1;
- (void)setResultLocationInteresting:(BOOL)arg1;
- (void)setTitle:(NSString *)arg1;
- (void)setTopHit:(unsigned int)arg1;
- (void)setType:(NSString *)arg1;
- (void)setUsedCount:(unsigned int)arg1;
- (NSString *)title;
- (unsigned int)topHit;
- (NSString *)type;
- (unsigned int)usedCount;

@end
