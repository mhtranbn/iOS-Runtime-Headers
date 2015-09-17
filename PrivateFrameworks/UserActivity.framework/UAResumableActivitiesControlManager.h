/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAResumableActivitiesControlManager : NSObject {
    id _delegate;
    NSXPCConnection *connection;
}

@property (retain) NSXPCConnection *connection;
@property id delegate;

+ (id)resumableActivitiesControlManager;

- (id)advertisedItemUUID;
- (id)allUUIDsOfType:(unsigned int)arg1;
- (void)broadcastPing:(id /* block */)arg1;
- (void)callDidSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1;
- (void)callWillSaveDelegate:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connection;
- (id)currentAdvertisedItemUUID;
- (void)dealloc;
- (id)debuggingInfo;
- (id)delegate;
- (id)dynamicUserActivities;
- (id)enabledUUIDs;
- (void)getCurrentPeersAndClear:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)injectBTLEItem:(id)arg1 type:(unsigned int)arg2 identifier:(id)arg3 title:(id)arg4 activityPayload:(id)arg5 frameworkPayload:(id)arg6 payloadDelay:(double)arg7;
- (id)matchingUUIDForString:(id)arg1;
- (void)restartServer;
- (void)setConnection:(id)arg1;
- (void)setDebugOption:(id)arg1 value:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)startAdvertisingPingWithTimeInterval:(double)arg1;
- (id)status;
- (void)stopAdvertisingPing;
- (void)terminateServer;

@end
