/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderProxy : NSObject <BBRemoteDataProviderClientProxy> {
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    BOOL _connected;
    <BBRemoteDataProvider> *_dataProvider;
    BOOL _dataProviderDidLoad;
    BBDataProviderIdentity *_identity;
    NSObject<OS_dispatch_queue> *_proxyQueue;
    NSObject<OS_dispatch_queue> *_queue;
    <BBRemoteDataProviderServerProxy> *_serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) BBDataProviderIdentity *identity;
@property (readonly) Class superclass;

- (void)_makeClientRequest:(id /* block */)arg1;
- (void)_makeServerRequest:(id /* block */)arg1;
- (void)addBulletin:(id)arg1 forDestinations:(unsigned int)arg2;
- (void)addBulletin:(id)arg1 interrupt:(BOOL)arg2;
- (void)attachmentAspectRatioForRecordID:(id)arg1 completion:(id /* block */)arg2;
- (void)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2 completion:(id /* block */)arg3;
- (void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(id /* block */)arg3;
- (void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (void)deliverBulletinActionResponse:(id)arg1;
- (void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2;
- (id)description;
- (id)identity;
- (id)initWithDataProvider:(id)arg1 clientReplyQueue:(id)arg2;
- (void)invalidateBulletins;
- (void)modifyBulletin:(id)arg1;
- (void)noteSectionInfoDidChange:(id)arg1;
- (void)primaryAttachmentDataForRecordID:(id)arg1 completion:(id /* block */)arg2;
- (void)reloadDefaultSectionInfo;
- (void)reloadSectionParameters;
- (void)setIdentity:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)updateClearedInfoWithHandler:(id /* block */)arg1;
- (void)updateIdentity:(id /* block */)arg1;
- (void)updateSectionInfoWithHandler:(id /* block */)arg1;
- (void)updateSectionInfoWithHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)withdrawBulletinWithPublisherBulletinID:(id)arg1;
- (void)withdrawBulletinsWithRecordID:(id)arg1;

@end
