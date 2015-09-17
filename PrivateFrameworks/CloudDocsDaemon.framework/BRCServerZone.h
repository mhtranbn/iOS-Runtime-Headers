/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerZone : NSObject <BRCContainer> {
    BRCServerChangeState *_changeState;
    NSString *_containerMetadataEtag;
    PQLConnection *_db;
    NSNumber *_dbRowID;
    BRCLocalContainer *_localContainer;
    BOOL _needsSave;
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    NSString *_zoneName;
}

@property (readonly) BRCServerChangeState *changeState;
@property (nonatomic, readonly) NSString *containerMetadataEtag;
@property (nonatomic, readonly) PQLConnection *db;
@property (nonatomic, retain) NSNumber *dbRowID;
@property (nonatomic, readonly) BOOL isPrivateContainer;
@property (nonatomic, readonly) BOOL isSharedContainer;
@property (nonatomic, readonly) BOOL isSyncingDownForTheFirstTime;
@property (nonatomic) BRCLocalContainer *localContainer;
@property (nonatomic) BOOL needsSave;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSMutableDictionary *plist;
@property (nonatomic, retain) BRCAccountSession *session;
@property (nonatomic, readonly) BRCSyncContext *syncContext;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, readonly) NSString *zoneName;

- (void).cxx_destruct;
- (void)_collectTombstoneForRank:(unsigned long long)arg1;
- (struct PQLResultSet { Class x1; }*)_enumeratePendingFetchDeletedRecordIDs;
- (BOOL)_markItemIDDead:(id)arg1 recordID:(id)arg2;
- (BOOL)_saveEditedAliasRecord:(id)arg1;
- (BOOL)_saveEditedContentRecords:(id)arg1 syncStatus:(int)arg2;
- (BOOL)_saveEditedDirOrDocStructureRecord:(id)arg1;
- (BOOL)_saveEditedDocumentContentRecord:(id)arg1;
- (BOOL)_saveEditedRecord:(id)arg1 syncStatus:(int)arg2;
- (BOOL)_saveEditedStructureRecords:(id)arg1 deletedRecordIDs:(id)arg2 syncStatus:(int)arg3;
- (BOOL)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3;
- (BOOL)_saveItemID:(id)arg1 stat:(id)arg2 record:(id)arg3 origName:(id)arg4 base:(id)arg5 no:(id)arg6 ext:(id)arg7;
- (BOOL)allocateRanks;
- (id)asPrivateZone;
- (id)asSharedZone;
- (id)changeState;
- (void)collectTombstoneRanks:(id)arg1;
- (id)containerMetadataEtag;
- (id)db;
- (id)dbRowID;
- (void)deleteAllContentsOnServerWithCompletionBlock:(id /* block */)arg1;
- (id)deleteAllContentsOperation;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
- (unsigned long long)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 editedRecords:(id)arg3 deletedRecordIDs:(id)arg4 syncStatus:(int)arg5;
- (BOOL)dumpStatusToContext:(id)arg1 error:(id*)arg2;
- (BOOL)dumpTablesToContext:(id)arg1 error:(id*)arg2;
- (void)handleBrokenStructure;
- (BOOL)hasXattrWithSignature:(id)arg1;
- (unsigned int)hash;
- (id)initWithZoneName:(id)arg1 dbRowID:(id)arg2 plist:(id)arg3 session:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPrivateContainer;
- (BOOL)isSharedContainer;
- (BOOL)isSyncingDownForTheFirstTime;
- (id)itemByItemID:(id)arg1;
- (struct PQLResultSet { Class x1; }*)itemsEnumeratorWithDB:(id)arg1;
- (id)localContainer;
- (BOOL)needsSave;
- (id)ownerName;
- (struct PQLResultSet { Class x1; }*)pendingFetchRecordsEnumerator;
- (id)plist;
- (BOOL)resetServerTruth;
- (id)session;
- (void)setDbRowID:(id)arg1;
- (void)setLocalContainer:(id)arg1;
- (void)setNeedsSave:(BOOL)arg1;
- (void)setSession:(id)arg1;
- (BOOL)storeXattr:(id)arg1;
- (id)syncContext;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (id)xattrForSignature:(id)arg1;
- (id)zoneID;
- (id)zoneName;

@end
