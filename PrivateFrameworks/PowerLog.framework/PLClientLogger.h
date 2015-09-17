/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

@interface PLClientLogger : NSObject {
    BOOL _batchDropMessages;
    NSObject<OS_dispatch_queue> *_batchFlushQueue;
    int _batchedDropMessageCount;
    NSMutableArray *_batchedTaskCache;
    BOOL _batchedTimerInFlight;
    NSSet *_batchingClientWhitelist;
    BOOL _clientDebug;
    BOOL _forceBatching;
    NSMutableDictionary *_pendingTaskCache;
    NSMutableDictionary *_permissionCache;
    NSObject<OS_dispatch_queue> *_permissionQueue;
    NSString *_processName;
    BOOL _talkToPowerlogHelper;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_xpc_object> *_xpcConnectionHelper;
    NSObject<OS_dispatch_queue> *_xpcConnectionHelperQueue;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

@property BOOL batchDropMessages;
@property (retain) NSObject<OS_dispatch_queue> *batchFlushQueue;
@property int batchedDropMessageCount;
@property (retain) NSMutableArray *batchedTaskCache;
@property BOOL batchedTimerInFlight;
@property (readonly) NSSet *batchingClientWhitelist;
@property BOOL clientDebug;
@property BOOL forceBatching;
@property (retain) NSMutableDictionary *pendingTaskCache;
@property (retain) NSMutableDictionary *permissionCache;
@property (retain) NSObject<OS_dispatch_queue> *permissionQueue;
@property (retain) NSString *processName;
@property BOOL talkToPowerlogHelper;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnectionHelper;
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionHelperQueue;
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue;

+ (BOOL)isAppleTV;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addToBatchedTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4;
- (void)addToPendingTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4;
- (BOOL)batchDropMessages;
- (id)batchFlushQueue;
- (void)batchTasksCacheFlush;
- (int)batchedDropMessageCount;
- (id)batchedTaskCache;
- (BOOL)batchedTimerInFlight;
- (id)batchingClientWhitelist;
- (id)buildMessageForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (short)cachedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3;
- (BOOL)clientDebug;
- (BOOL)forceBatching;
- (id)init;
- (void)logForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)logStateCaches;
- (id)pendingTaskCache;
- (id)pendingTasksForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3;
- (id)permissionCache;
- (short)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3;
- (id)permissionQueue;
- (void)powerlogStateChanged;
- (id)processName;
- (id)queryForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)setBatchDropMessages:(BOOL)arg1;
- (void)setBatchFlushQueue:(id)arg1;
- (void)setBatchedDropMessageCount:(int)arg1;
- (void)setBatchedTaskCache:(id)arg1;
- (void)setBatchedTimerInFlight:(BOOL)arg1;
- (void)setCachePermission:(short)arg1 ForClientID:(short)arg2 withKey:(id)arg3 withType:(id)arg4;
- (void)setClientDebug:(BOOL)arg1;
- (void)setForceBatching:(BOOL)arg1;
- (void)setPendingTaskCache:(id)arg1;
- (void)setPermissionCache:(id)arg1;
- (void)setPermissionQueue:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setTalkToPowerlogHelper:(BOOL)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcConnectionHelper:(id)arg1;
- (void)setXpcConnectionHelperQueue:(id)arg1;
- (void)setXpcConnectionQueue:(id)arg1;
- (BOOL)talkToPowerlogHelper;
- (id)workQueue;
- (id)xpcConnection;
- (id)xpcConnectionHelper;
- (id)xpcConnectionHelperQueue;
- (id)xpcConnectionQueue;
- (id)xpcConnectionWithClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)xpcSendMessage:(id)arg1 withClientID:(short)arg2 withKey:(id)arg3 withPayload:(id)arg4;
- (void)xpcSendMessageWithRateLimitingforClient:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (id)xpcSendMessageWithReply:(id)arg1 withClientID:(short)arg2 withKey:(id)arg3 withPayload:(id)arg4;

@end
