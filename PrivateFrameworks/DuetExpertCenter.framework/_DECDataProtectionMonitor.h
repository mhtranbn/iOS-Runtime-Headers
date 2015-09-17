/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECDataProtectionMonitor : NSObject {
    int _dataProtectionStatus;
    <_DECDataProtectionMonitorDelegate> *_delegate;
    int _encryptedDataAvailability;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _unlockedSinceBoot;
}

@property (nonatomic, readonly) int dataProtectionStatus;
@property (nonatomic) <_DECDataProtectionMonitorDelegate> *delegate;
@property (nonatomic, readonly) int encryptedDataAvailability;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) BOOL unlockedSinceBoot;

+ (id)_DECDataProtectionMonitorDataProtectionStatus:(int)arg1;
+ (id)_DECDataProtectionMonitorEncryptedDataAvailabilityToString:(int)arg1;
+ (id)_DECDataProtectionMonitorLockStateToString:(int)arg1;

- (void).cxx_destruct;
- (void)_registerForKeyBagNotifications;
- (BOOL)dataProtectionEnabled;
- (int)dataProtectionStatus;
- (void)dealloc;
- (id)delegate;
- (int)encryptedDataAvailability;
- (void)handkeKeybagLockStatusChange:(int)arg1;
- (void)handleUnlockedSinceBoot;
- (id)init;
- (id)queue;
- (void)setDataProtectionStatus:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncryptedDataAvailability:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnlockedSinceBoot:(BOOL)arg1;
- (BOOL)unlockedSinceBoot;

@end
