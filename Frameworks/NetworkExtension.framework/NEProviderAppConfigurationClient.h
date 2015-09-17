/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate> {
    NSXPCConnection *_connection;
    NSMutableArray *_createdManagers;
    NEVPNManager *_currentManager;
    NSMutableArray *_currentManagers;
    BOOL _isServerMode;
    NSXPCListener *_listener;
    <NEConfigurationCommandHandling> *_remoteObject;
    NSString *_targetAppBundleID;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableArray *createdManagers;
@property (retain) NEVPNManager *currentManager;
@property (retain) NSMutableArray *currentManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL isServerMode;
@property (readonly) NSXPCListener *listener;
@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) <NEConfigurationCommandHandling> *remoteObject;
@property (readonly) Class superclass;
@property (retain) NSString *targetAppBundleID;

- (void).cxx_destruct;
- (id)connection;
- (BOOL)createConfigurationWithParameters:(id)arg1 errorStr:(id*)arg2;
- (id)createdManagers;
- (id)currentManager;
- (id)currentManagers;
- (long)deleteKeychainItemWithPersistentReference:(id)arg1;
- (BOOL)enabled;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleConfigChanged:(id)arg1;
- (id)initForServerMode;
- (id)initWithClientName:(id)arg1;
- (BOOL)isAlwaysOn;
- (BOOL)isServerMode;
- (id)listener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (void)loadAllWithCompletionHandler:(id /* block */)arg1;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)onDemandEnabled;
- (id)onDemandRules;
- (id)protocolForParameters:(id)arg1;
- (id)remoteObject;
- (void)setConnection:(id)arg1;
- (void)setCreatedManagers:(id)arg1;
- (void)setCurrentManager:(id)arg1;
- (void)setCurrentManagers:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)setFilterPluginWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setIsServerMode:(BOOL)arg1;
- (long)setKeychainItemData:(id)arg1 withName:(id)arg2 persistentReference:(id*)arg3;
- (void)setOnDemandEnabled:(BOOL)arg1;
- (void)setOnDemandRules:(id)arg1;
- (BOOL)setPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setProtocolWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)setProviderTypeWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setRemoteObject:(id)arg1;
- (BOOL)setSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;
- (void)setTargetAppBundleID:(id)arg1;
- (id)targetAppBundleID;
- (BOOL)unsetPasswordWithParameters:(id)arg1 errorStr:(id*)arg2;
- (BOOL)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id*)arg2;

@end
