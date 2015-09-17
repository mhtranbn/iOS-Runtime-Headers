/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingEngine : NSObject <PLAccountingCorrectionManagerDelegate, PLAccountingDistributionManagerDelegate, PLAccountingQualificationManagerDelegate> {
    PLEntryNotificationOperatorComposition *_batteryListener;
    PLActivity *_chunkActivity;
    PLAccountingCorrectionManager *_correctionManager;
    PLAccountingDistributionManager *_distributionManager;
    BOOL _pluggedIn;
    PLAccountingQualificationManager *_qualificationManager;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryListener;
@property (retain) PLActivity *chunkActivity;
@property (nonatomic, retain) PLAccountingCorrectionManager *correctionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PLAccountingDistributionManager *distributionManager;
@property (readonly) unsigned int hash;
@property BOOL pluggedIn;
@property (nonatomic, retain) PLAccountingQualificationManager *qualificationManager;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (BOOL)accountingDebugEnabled;
+ (id)allBBRootNodeIDs;
+ (id)allDistributionIDs;
+ (id)allQualificationIDs;
+ (id)allSoCRootNodeIDs;
+ (void)clearWithEntryKey:(id)arg1;
+ (id)debugInstance;
+ (id)deviceBBRootNodeIDs;
+ (id)deviceRootNodeIDs;
+ (id)deviceSoCRootNodeIDs;
+ (id)distributionIDForDistributionName:(id)arg1;
+ (id)gasGaugeEntryKey;
+ (double)maxPowerEventChunkInterval;
+ (double)minEnergy;
+ (id)normalizeWeights:(id)arg1;
+ (id)qualificationIDForQualificationName:(id)arg1;
+ (id)sharedInstance;
+ (id)workQueue;

- (void).cxx_destruct;
- (void)addDistributionEventInterval:(id)arg1;
- (void)addDistributionEventIntervalWithLastDistributionEventBackward:(id)arg1 withDistributionEventBackward:(id)arg2;
- (void)addDistributionEventIntervalWithLastDistributionEventForward:(id)arg1 withDistributionEventForward:(id)arg2;
- (void)addDistributionEventPoint:(id)arg1;
- (void)addEnergyMeasurementWithRootNodeID:(int)arg1 withEnergy:(double)arg2 withRange:(id)arg3;
- (void)addPowerMeasurementEventIntervalWithPower:(double)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3;
- (void)addQualificationEventInterval:(id)arg1;
- (void)addQualificationEventIntervalWithLastQualificationEventBackward:(id)arg1 withQualificationEventBackward:(id)arg2;
- (void)addQualificationEventIntervalWithLastQualificationEventForward:(id)arg1 withQualificationEventForward:(id)arg2;
- (void)addQualificationEventPoint:(id)arg1;
- (id)batteryListener;
- (id)chunkActivity;
- (void)chunkWithLastChunkDate:(id)arg1 withNow:(id)arg2;
- (id)correctionManager;
- (void)createAggregateRootNodeEnergyEntryWithEnergyEstimate:(id)arg1;
- (void)createDistributionEventBackwardWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withEndDate:(id)arg3;
- (void)createDistributionEventForwardWithDistributionID:(int)arg1 withAddingChildNodeName:(id)arg2 withStartDate:(id)arg3;
- (void)createDistributionEventForwardWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3;
- (void)createDistributionEventForwardWithDistributionID:(int)arg1 withRemovingChildNodeName:(id)arg2 withStartDate:(id)arg3;
- (void)createDistributionEventIntervalWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (void)createDistributionEventPointWithDistributionID:(int)arg1 withChildNodeNameToWeight:(id)arg2 withStartDate:(id)arg3;
- (void)createEventWithEvent:(id)arg1 withActionBlock:(id /* block */)arg2;
- (void)createPowerEventBackwardWithRootNodeID:(int)arg1 withPower:(double)arg2 withEndDate:(id)arg3;
- (void)createPowerEventForwardWithRootNodeID:(int)arg1 withPower:(double)arg2 withStartDate:(id)arg3;
- (void)createPowerEventIntervalWithRootNodeID:(int)arg1 withPower:(double)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (void)createQualificationEventBackwardWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withEndDate:(id)arg3;
- (void)createQualificationEventForwardWithQualificationID:(int)arg1 withAddingChildNodeName:(id)arg2 withStartDate:(id)arg3;
- (void)createQualificationEventForwardWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3;
- (void)createQualificationEventForwardWithQualificationID:(int)arg1 withRemovingChildNodeName:(id)arg2 withStartDate:(id)arg3;
- (void)createQualificationEventIntervalWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3 withEndDate:(id)arg4;
- (void)createQualificationEventPointWithQualificationID:(int)arg1 withChildNodeNames:(id)arg2 withStartDate:(id)arg3;
- (void)didCorrectEnergyEstimate:(id)arg1;
- (void)didCreateChildEnergyEstimate:(id)arg1 withParentEnergyEstimate:(id)arg2;
- (void)didDistributeEnergyEstimate:(id)arg1;
- (void)didQualifyEnergyEvent:(id)arg1 withRootNodeID:(id)arg2 withQualificationID:(id)arg3;
- (id)distributionManager;
- (id)init;
- (double)oldestTimeInterval;
- (BOOL)pluggedIn;
- (id)qualificationManager;
- (void)reload;
- (void)reloadLastDistributionEventsWithLastDeviceBootDate:(id)arg1;
- (void)reloadLastPowerEventsWithLastDeviceBootDate:(id)arg1;
- (void)reloadLastQualificationEventsWithLastDeviceBootDate:(id)arg1;
- (void)reloadUnfinishedEnergyEventsWithLastDeviceBootDate:(id)arg1;
- (void)reset;
- (void)setBatteryListener:(id)arg1;
- (void)setChunkActivity:(id)arg1;
- (void)setCorrectionManager:(id)arg1;
- (void)setDistributionManager:(id)arg1;
- (void)setPluggedIn:(BOOL)arg1;
- (void)setQualificationManager:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
