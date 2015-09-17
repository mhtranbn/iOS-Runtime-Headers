/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PUConnection : NSObject <PUUnlockClient> {
    NSXPCConnection *_connection;
    <PUConnectionDelegate> *_delegate;
    id /* block */ _getRemoteDevicePasscodeStateHandler;
    BOOL _invalidated;
    id /* block */ _remoteDeviceRemoveLockoutHandler;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL invalidated;
@property (nonatomic, readonly) BOOL isInvalid;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didGetRemoteDeviceHasPasscode:(BOOL)arg1 isLocked:(BOOL)arg2 isUnlockOnly:(BOOL)arg3 error:(id)arg4;
- (void)didPairForUnlock:(BOOL)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(BOOL)arg1 error:(id)arg2;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1;
- (void)getRemoteDeviceState:(id /* block */)arg1;
- (id)init;
- (BOOL)invalidated;
- (BOOL)isInvalid;
- (void)pairForUnlockWithPasscode:(id)arg1;
- (void)remoteDeviceDidCompletePasscodeAction:(BOOL)arg1 error:(id)arg2;
- (void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(id)arg2;
- (void)remoteDeviceDidUnlock;
- (void)requestRemoteDevicePasscodeAction:(int)arg1 type:(int)arg2;
- (void)requestRemoteDeviceRemoveLockout:(id /* block */)arg1;
- (void)requestRemoteDeviceUnlockNotification;
- (void)setDelegate:(id)arg1;
- (void)setInvalidated:(BOOL)arg1;
- (void)unpairForUnlock;

@end
