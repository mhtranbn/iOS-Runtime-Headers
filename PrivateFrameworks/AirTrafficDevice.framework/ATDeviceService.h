/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceService : ATConcreteService <ATEnvironmentMonitorObserver, ATIDSServiceListener, ATMessageLinkListenerDelegate, ATMessageLinkRequestHandler, ATSyncClientDelegate, ATWorkspaceObserverDelegate, ATXPCInterfaceProtocol> {
    int _atcRunningToken;
    ATDeviceSyncManager *_deviceSyncManager;
    ATRemoteFileManagerLinkHandler *_driveHandler;
    ATEnvironmentMonitor *_environmentMonitor;
    ATIDSService *_idsService;
    ATLegacyDeviceSyncManager *_legacyDeviceSyncManager;
    ATLockdownListener *_legacyLockdownListener;
    ATLockdownListener *_lockdownListener;
    NSMapTable *_messageLinkProxyListeners;
    ATNetServiceListener *_netServiceListener;
    ATDevicePairedSyncManager *_pairedSyncManager;
    ATServiceProxyListener *_proxyListener;
    NSObject<OS_dispatch_queue> *_queue;
    ATDeviceSettings *_settings;
    ATStatusObserverListener *_statusObserverListener;
    ATWorkspaceObserver *_workspaceObserver;
    ATXPCListener *_xpcListener;
    MSVXPCTransaction *_xpcTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addObserversToMessageLink:(id)arg1;
- (void)_cancelSyncForMessageLink:(id)arg1;
- (id)_deviceMessageLink;
- (void)_removeObserversFromMessageLink:(id)arg1;
- (void)_requestSyncForLibrary:(id)arg1 onMessageLink:(id)arg2;
- (void)_scheduleNewSyncIfNeeded;
- (void)addMessageLink:(id)arg1;
- (id)allMessageLinkProxyListeners;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)cancelSyncWithCompletion:(id /* block */)arg1;
- (void)clearSyncDataWithCompletion:(id /* block */)arg1;
- (void)dataMigrationFinishedWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangePower:(id)arg1;
- (void)getAssetMetricswithCompletion:(id /* block */)arg1;
- (void)getSyncStateWithCompletion:(id /* block */)arg1;
- (void)idsServiceDevicesDidChange:(id)arg1;
- (id)init;
- (void)keepATCAlive:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)listener:(id)arg1 didReceiveMessageLinkRequest:(id)arg2;
- (void)lowBatteryNotificationWithCompletion:(id /* block */)arg1;
- (void)messageLink:(id)arg1 didReceiveRequest:(id)arg2;
- (void)messageLinkWasClosed:(id)arg1;
- (void)openDeviceMessageLinkWithPriority:(int)arg1 withCompletion:(id /* block */)arg2;
- (void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)proxyListenerForMessageLink:(id)arg1;
- (void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)registerForStatusOfDataclasses:(id)arg1 enabled:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)removeMessageLink:(id)arg1;
- (void)requestSyncForLibrary:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestSyncForPairedDeviceWithPriority:(int)arg1 withCompletion:(id /* block */)arg2;
- (void)restoreFromDeviceWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)run;
- (BOOL)stop;
- (void)syncClient:(id)arg1 hasChangesWithPriority:(int)arg2;

@end
