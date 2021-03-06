/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordVersionsRequest : CKDURLRequest {
    NSArray *_desiredKeys;
    BOOL _isDeleted;
    NSString *_minimumVersionETag;
    NSMutableDictionary *_recordIDByRequestID;
    NSArray *_recordIDs;
    id /* block */ _recordVersionsFetchedBlock;
    BOOL _shouldFetchAssetContent;
}

@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic, retain) NSString *minimumVersionETag;
@property (nonatomic, retain) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, copy) id /* block */ recordVersionsFetchedBlock;
@property (nonatomic) BOOL shouldFetchAssetContent;

- (void).cxx_destruct;
- (id)desiredKeys;
- (id)initWithRecordIDs:(id)arg1 desiredKeys:(id)arg2 minimumVersionETag:(id)arg3;
- (BOOL)isDeleted;
- (id)minimumVersionETag;
- (int)operationType;
- (id)recordIDByRequestID;
- (id)recordIDs;
- (id /* block */)recordVersionsFetchedBlock;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setDesiredKeys:(id)arg1;
- (void)setIsDeleted:(BOOL)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordIDByRequestID:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordVersionsFetchedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (BOOL)shouldFetchAssetContent;
- (id)zoneIDsToLock;

@end
