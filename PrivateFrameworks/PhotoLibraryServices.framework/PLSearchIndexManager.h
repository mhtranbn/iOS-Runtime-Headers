/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSearchIndexManager : NSObject {
    BOOL __indexing;
    id /* block */ __inqAfterIndexingDidIterate;
    NSCountedSet *__pauseReasons;
    PLSearchIndexDateFormatter *_dateFormatter;
    PSIDatabase *_db;
    BOOL _hasScheduledCloseIndex;
    BOOL _hasValidSearchIndex;
    PLKeywordManager *_keywordManager;
    PLPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _receivedUpdatesWhileIndexing;
    NSString *_searchIndexDirectory;
    NSDictionary *_searchMetadata;
    PLClientServerTransaction *_serverTransaction;
    PLThrottleTimer *_throttleTimer;
    NSDictionary *_uuidsToProcess;
}

@property (getter=_isIndexing, setter=_setIndexing:) BOOL _indexing;
@property (setter=_setInqAfterIndexingDidIterate:, nonatomic, copy) id /* block */ _inqAfterIndexingDidIterate;
@property (nonatomic, readonly, copy) NSCountedSet *_pauseReasons;
@property (readonly) unsigned int enqueuedUUIDsCount;
@property (getter=isIndexingPaused, readonly) BOOL indexingPaused;

+ (id)_databasePathInDirectory:(id)arg1;
+ (id)_defaultDatabaseDirectory;
+ (id)defaultDatabasePath;
+ (id)sharedInstance;

- (id)_cxindexProgressPath;
- (id)_dbMetadataPath;
- (id)_dbPath;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
- (void)_inqAddUpdatesWithUUIDsArray:(id)arg1 forKey:(id)arg2;
- (id /* block */)_inqAfterIndexingDidIterate;
- (void)_inqCloseIndexIfAbleOrForce:(BOOL)arg1 isDelete:(BOOL)arg2;
- (void)_inqCloseSearchIndexAndDelete:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_inqDropClientServerTransactionIfNeeded;
- (unsigned int)_inqEnqueuedUUIDsCountForceLoad:(BOOL)arg1;
- (void)_inqEnsurePhotoLibraryExists;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqEnsureSearchMetadataExists;
- (void)_inqEnsureSearchProgressExists;
- (BOOL)_inqHasValidSearchIndex;
- (BOOL)_inqIsIndexingPaused;
- (void)_inqResumeIndexingIfNeeded;
- (void)_inqScheduleCloseIndexIfNeeded;
- (void)_inqSetIndexingPaused:(BOOL)arg1 reason:(id)arg2;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (BOOL)_inqUpdateLocale;
- (BOOL)_isIndexing;
- (void)_localeDidChange:(id)arg1;
- (id)_moc:(id)arg1 fetchAlbumsWithUUIDs:(id)arg2;
- (id)_moc:(id)arg1 fetchAssetsWithUUIDs:(id)arg2;
- (id)_oldDbPath;
- (void)_onQueueAsync:(id /* block */)arg1;
- (void)_onQueueAsyncWithDelay:(double)arg1 perform:(id /* block */)arg2;
- (void)_onQueueSync:(id /* block */)arg1;
- (id)_pauseReasons;
- (BOOL)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (void)_setIndexing:(BOOL)arg1;
- (void)_setIndexingPaused:(BOOL)arg1 synchronously:(BOOL)arg2 reason:(id)arg3;
- (void)_setInqAfterIndexingDidIterate:(id /* block */)arg1;
- (void)_throttleTimerFire:(id)arg1;
- (void)applyUpdates:(id)arg1 completion:(id /* block */)arg2;
- (void)closeSearchIndexWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)dropSearchIndexWithCompletion:(id /* block */)arg1;
- (unsigned int)enqueuedUUIDsCount;
- (void)ensureSearchIndexExists;
- (id)initWithSearchIndexDirectory:(id)arg1;
- (BOOL)isIndexingPaused;
- (void)pauseIndexingWithReason:(id)arg1;
- (void)resetSearchIndex;
- (void)unpauseIndexingWithReason:(id)arg1;

@end
