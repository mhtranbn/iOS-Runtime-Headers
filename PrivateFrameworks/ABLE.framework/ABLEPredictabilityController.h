/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@class ABLECoreDuetController, NSArray, NSDictionary;

@interface ABLEPredictabilityController : NSObject {
    ABLECoreDuetController *_coreDuetController;
    NSDictionary *_currentData;
    NSArray *_dayOffsets;
    double _rejectionThresholdForMissingData;
    bool_approximateMissingData;
}

@property bool approximateMissingData;
@property(readonly) ABLECoreDuetController * coreDuetController;
@property(retain) NSDictionary * currentData;
@property(retain) NSArray * dayOffsets;
@property double rejectionThresholdForMissingData;

- (void).cxx_destruct;
- (bool)approximateMissingData;
- (id)calculateCorrelationForDay:(id)arg1 andDayOffsets:(id)arg2;
- (id)calculateCorrelationForDefaultDayOffsets;
- (double)calculateCorrelationForOneDay;
- (id)calculateCorrelationForYesterdayAndDayOffsets:(id)arg1;
- (id)coreDuetController;
- (id)currentData;
- (id)dayOffsets;
- (id)initWithCoreDuetController:(id)arg1;
- (double)rejectionThresholdForMissingData;
- (void)setApproximateMissingData:(bool)arg1;
- (void)setCurrentData:(id)arg1;
- (void)setDayOffsets:(id)arg1;
- (void)setRejectionThresholdForMissingData:(double)arg1;

@end