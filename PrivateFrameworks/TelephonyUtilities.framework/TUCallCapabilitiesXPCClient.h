/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions> {
    NSObject<OS_dispatch_queue> *_queue;
    <TUCallCapabilitiesXPCServer> *_server;
    TUCallCapabilitiesState *_state;
    NSObject<OS_dispatch_semaphore> *_stateSemaphore;
    int _token;
    NSXPCConnection *_xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <TUCallCapabilitiesXPCServer> *server;
@property (nonatomic, retain) TUCallCapabilitiesState *state;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *stateSemaphore;
@property (readonly) Class superclass;
@property (nonatomic) int token;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)_retrieveStateForInitialUpdate:(BOOL)arg1;
- (void)_updateState:(id)arg1;
- (void)cancelPinRequestFromPrimaryDevice;
- (void)capabilityStateUpdated:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithServer:(id)arg1;
- (void)invalidateAndRefreshThumperCallingProvisioningURL;
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (void)invalidateXPCConnection;
- (id)queue;
- (void)requestPinFromPrimaryDevice;
- (id)server;
- (id)serverWithErrorHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setRelayCallingEnabled:(BOOL)arg1;
- (void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2;
- (void)setServer:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStateSemaphore:(id)arg1;
- (void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2;
- (void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1;
- (void)setThumperCallingEnabled:(BOOL)arg1;
- (void)setToken:(int)arg1;
- (void)setVoLTECallingEnabled:(BOOL)arg1;
- (void)setWiFiCallingEnabled:(BOOL)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)state;
- (id)stateSemaphore;
- (int)token;
- (id)xpcConnection;

@end
