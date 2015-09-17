/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDoctor : NSObject <HDAchievementEngineDelegate> {
    NSCalendar *_calendar;
    HKActivityCache *_currentActivityCache;
    <HDHealthDaemon> *_healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_workoutEndDates;
    NSArray *_workouts;
    HKActivityCache *_yesterdayActivityCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_achievementsInSet:(id)arg1 missingFromSet:(id)arg2;

- (void).cxx_destruct;
- (id)_achievementsGroupedByActivityCacheIndex:(id)arg1;
- (id)_fetchAchievementsWithError:(id*)arg1;
- (id)_fetchActivityCachesOrderedByCacheIndexWithError:(id*)arg1;
- (id)_fetchAppleWatchSourcePersistentIDs;
- (id)_fetchWorkoutsSortedByEndDateWithError:(id*)arg1;
- (BOOL)_isActivityCache:(id)arg1 oneDayAfterActivityCache:(id)arg2;
- (id)_newEmptyActivityCacheWithStartDate:(id)arg1 startDateComponents:(id)arg2 calorieGoal:(id)arg3;
- (id)_queue_detectAchievementsForActivityCaches:(id)arg1 workouts:(id)arg2;
- (id)_queue_detectMissingAchievementsWithError:(id*)arg1;
- (id)_queue_findExpectedAchievements:(id)arg1 missingFromAchievements:(id)arg2;
- (BOOL)_queue_saveMissingAchievements:(id)arg1 error:(id*)arg2;
- (long long)activityCacheIndexToday;
- (double)briskMinutesToday;
- (double)briskMinutesYesterday;
- (double)caloriesBurnedToday;
- (double)caloriesBurnedYesterday;
- (id)currentDate;
- (id)energyBurnedGoalToday;
- (id)energyBurnedGoalYesterday;
- (id)init;
- (id)initWithHealthDaemon:(id)arg1 targetQueue:(id)arg2;
- (unsigned int)numberOfSessionsCompletedAfterDate:(id)arg1 beforeDate:(id)arg2 minimumSessionDuration:(double)arg3;
- (void)runAchievementsFixupAsDryRun:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)sessionsEndingAfterDate:(id)arg1;
- (unsigned int)standingHoursToday;
- (unsigned int)standingHoursYesterday;
- (unsigned int)stepsTakenToday;
- (unsigned int)stepsTakenYesterday;

@end
