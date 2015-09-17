/* Generated by RuntimeBrowser.
 */

@protocol CKDAccountInfoProvider <NSObject>

@required

- (BOOL)accountWantsPushRegistration;
- (NSBundle *)applicationBundle;
- (NSURL *)baseURLForServerType:(int)arg1 partitionType:(int)arg2;
- (NSString *)bundleID;
- (BOOL)canAccessAccount;
- (NSString *)cloudKitAuthToken;
- (CKDServerConfiguration *)config;
- (CKContainerID *)containerID;
- (NSString *)containerScopedUserID;
- (NSString *)deviceName;
- (NSString *)dsid;
- (NSArray *)enabledKeyboards;
- (void)fetchConfigurationUsingBackgroundSession:(void *)arg1 allowsCellularAccess:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: BOOL, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDServerConfiguration *, NSError *, void*
- (void)fetchContainerScopedUserIDUsingBackgroundSession:(void *)arg1 allowsCellularAccess:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: BOOL, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchDeviceIDUsingBackgroundSession:(void *)arg1 allowsCellularAccess:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: BOOL, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchPublicURLUsingBackgroundSession:(void *)arg1 allowsCellularAccess:(void *)arg2 serverType:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: BOOL, BOOL, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (NSString *)hardwareID;
- (NSString *)iCloudAuthToken;
- (BOOL)isAnonymousAccount;
- (BOOL)isUnitTestingAccount;
- (NSString *)languageCode;
- (CKDMescalSession *)mescalSession;
- (NSString *)regionCode;
- (void)renewAuthTokenWithReason:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)renewMescalSessionForRequest:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*
- (void)resetMescalSession;
- (NSString *)serverPreferredPushEnvironment;
- (BOOL)shouldFailAllTasks;
- (NSString *)trafficContainerIdentifier;

@optional

- (NSDictionary *)additionalHeaderValues;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;

@end
