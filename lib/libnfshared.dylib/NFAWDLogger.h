/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDLogger : NSObject {
    NSData *_activeAID;
    AWDServerConnection *_awdServer;
    NSData *_deviceExceptionUuid;
    unsigned int _previousTransactionState;
    unsigned int _previousVASTransactionState;
    NSData *_tsmUuid;
    unsigned long long _tsmUuidRefTimestamp;
    NSUserDefaults *_userDefault;
    NSObject<OS_dispatch_queue> *_userDefaultUpdateQueue;
    NSData *_uuid;
    unsigned long long _uuidRefTimestamp;
    NFAWDVersionInfo *_versionInfo;
}

@property (copy) NSData *activeAID;
@property (nonatomic, retain) AWDServerConnection *awdServer;
@property (nonatomic, retain) NSData *deviceExceptionUuid;
@property (nonatomic) unsigned int previousTransactionState;
@property (nonatomic) unsigned int previousVASTransactionState;
@property (nonatomic, retain) NSData *tsmUuid;
@property (nonatomic) unsigned long long tsmUuidRefTimestamp;
@property (nonatomic, retain) NSUserDefaults *userDefault;
@property (nonatomic) NSObject<OS_dispatch_queue> *userDefaultUpdateQueue;
@property (nonatomic, retain) NSData *uuid;
@property (nonatomic) unsigned long long uuidRefTimestamp;
@property (nonatomic, retain) NFAWDVersionInfo *versionInfo;

+ (id)sharedAWDLogger;

- (id)activeAID;
- (id)awdServer;
- (void)dealloc;
- (id)deviceExceptionUuid;
- (void)enableQueryMetricsListener;
- (id)generateUUID;
- (unsigned long long)getTimestamp;
- (id)init;
- (void)postAWDAPNReceived;
- (void)postAWDCRSActivationTimerExpiredWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDCRSAuthECommerceWithParameters:(id)arg1;
- (void)postAWDCRSAuthInitEventWithStatus:(unsigned int)arg1;
- (void)postAWDCRSAuthWithStatus:(unsigned int)arg1 withMethod:(unsigned int)arg2;
- (void)postAWDCRSDeAuthWithStatus:(unsigned int)arg1;
- (void)postAWDEvent:(id)arg1;
- (void)postAWDFieldEventWithFieldOn:(BOOL)arg1 withTechnology:(unsigned int)arg2;
- (void)postAWDHCIEndOfTransactionEventWithParameters:(id)arg1;
- (void)postAWDHCIStartOfTransactionEventWithVersion:(unsigned int)arg1 withStatus:(unsigned int)arg2;
- (void)postAWDPLLUnlockEvent:(BOOL)arg1;
- (void)postAWDRestrictedModeFromContactlessMode:(BOOL)arg1;
- (void)postAWDSESelectEventWithAID:(id)arg1;
- (void)postAWDTSMConnectivityException:(unsigned int)arg1;
- (void)postAWDTSMEndOfSession;
- (void)postAWDTSMEndWithParameters:(id)arg1;
- (void)postAWDTSMStartWithParameters:(id)arg1;
- (void)postAWDTransactionEndOfOperation;
- (void)postAWDTransactionLastRAPDU;
- (void)postAWDVASGetData:(id)arg1;
- (void)postAWDVASSelectOSE:(id)arg1;
- (void)postAWDVASTransactionException:(unsigned int)arg1 withSWStatus:(unsigned int)arg2;
- (void)postAWDVersionInfo:(id)arg1;
- (unsigned int)previousTransactionState;
- (unsigned int)previousVASTransactionState;
- (void)setActiveAID:(id)arg1;
- (void)setAwdServer:(id)arg1;
- (void)setDeviceExceptionUuid:(id)arg1;
- (void)setPreviousTransactionState:(unsigned int)arg1;
- (void)setPreviousVASTransactionState:(unsigned int)arg1;
- (void)setTsmUuid:(id)arg1;
- (void)setTsmUuidRefTimestamp:(unsigned long long)arg1;
- (void)setUserDefault:(id)arg1;
- (void)setUserDefaultUpdateQueue:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setUuidRefTimestamp:(unsigned long long)arg1;
- (void)setVersionInfo:(id)arg1;
- (id)tsmUuid;
- (unsigned long long)tsmUuidRefTimestamp;
- (void)updateStats:(id)arg1 reset:(BOOL)arg2;
- (id)userDefault;
- (id)userDefaultUpdateQueue;
- (id)uuid;
- (unsigned long long)uuidRefTimestamp;
- (id)versionInfo;

@end
