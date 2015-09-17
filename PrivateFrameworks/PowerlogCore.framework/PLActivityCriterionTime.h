/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLActivityCriterionTime : PLActivityCriterion {
    double _interval;
    double _rescheduleDelay;
    PLMonotonicTimer *_timer;
}

@property double interval;
@property (nonatomic) double rescheduleDelay;
@property (retain) PLMonotonicTimer *timer;

+ (double)minTimeInterval;
+ (id)timeCriterionWithInterval:(double)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)didCompleteActivity:(id)arg1;
- (void)didDisableActivity:(id)arg1;
- (void)didEnableActivity:(id)arg1;
- (void)didInterruptActivity:(id)arg1;
- (id)initWithInterval:(double)arg1;
- (double)interval;
- (double)rescheduleDelay;
- (void)setInterval:(double)arg1;
- (void)setRescheduleDelay:(double)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
