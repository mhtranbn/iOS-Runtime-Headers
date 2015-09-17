/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCCachedItemManager : NSObject {
    NSMutableDictionary *_items;
    NSOperationQueue *_operationQueue;
    NSOperationQueue *_presentedItemOperationQueue;
    NSURL *_presentedItemURL;
    NSString *_purposeIdentifier;
    DCService *_service;
}

@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (nonatomic, retain) DCService *service;

+ (id)cachedItemManagerForService:(id)arg1;
+ (id)directoryAtRelativePath:(id)arg1;
+ (id)fileAtRelativePath:(id)arg1;
+ (id)fileResourceTypeAtRelativePath:(id)arg1;
+ (id)itemAtRelativePath:(id)arg1;
+ (id)itemWithDocumentIdentifier:(id)arg1 parent:(id)arg2;
+ (id)itemsWithDocumentIdentifier:(id)arg1 forService:(id)arg2;
+ (void)removeCachedItemManagerForService:(id)arg1;
+ (id)thumbnailForUnderlyingItem:(id)arg1;

- (void).cxx_destruct;
- (id)_fileCoordinator;
- (id)_fileResourceTypeAtRelativePath:(id)arg1;
- (id)_initWithService:(id)arg1;
- (id)_itemAtRelativePath:(id)arg1 itemClass:(Class)arg2 itemType:(id)arg3;
- (id)_parentFromChildRelativePath:(id)arg1;
- (id)_thumbnailForUnderlyingItem:(id)arg1;
- (void)coordinateReadingForUploadingItem:(id)arg1 error:(id*)arg2 byAccessor:(id /* block */)arg3;
- (void)coordinateReadingItemAtURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3 byAccessor:(id /* block */)arg4;
- (void)coordinateWritingItemAtURL:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3 byAccessor:(id /* block */)arg4;
- (void)evictItem:(id)arg1;
- (id)fileForUploadTaskIdentifier:(id)arg1 sessionIdentifier:(id)arg2;
- (void)moveItem:(id)arg1 withDocumentIdentifier:(id)arg2 versionIdentifier:(id)arg3 toRelativePath:(id)arg4;
- (id)parentOfItem:(id)arg1;
- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)removeItem:(id)arg1;
- (id)root;
- (id)service;
- (void)setPurposeIdentifier:(id)arg1;
- (void)setService:(id)arg1;

@end
