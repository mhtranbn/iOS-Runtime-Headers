/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailAddition : NSObject {
    GSAddition *_addition;
    NSURL *_additionURL;
    long long _additionURLSandboxToken;
    NSDictionary *_metadata;
    NSDictionary *_thumbnailDataDictionary;
    QLThumbnailVersion *_thumbnailVersion;
}

@property (retain) NSURL *additionURL;
@property (readonly) GSAddition *genStoreAddition;
@property (retain) NSDictionary *metadata;
@property (retain) NSDictionary *thumbnailDataDictionary;
@property (readonly) QLThumbnailVersion *thumbnailVersion;

+ (id)_additionCreationInfo;
+ (BOOL)_hitAdditionsOnURL:(id)arg1 error:(id*)arg2;
+ (BOOL)_hitAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
+ (BOOL)_removeAdditionsOnURLDirectly:(id)arg1 error:(id*)arg2;
+ (BOOL)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
+ (BOOL)_removedAdditionsOnURL:(id)arg1;
+ (BOOL)_removedAdditionsOnURLUsingDaemon:(id)arg1;
+ (BOOL)associateImage:(struct CGImage { }*)arg1 metadata:(id)arg2 automaticallyGenerated:(BOOL)arg3 withURL:(id)arg4 error:(id*)arg5;
+ (BOOL)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id*)arg4;
+ (BOOL)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withImmutableDocument:(BOOL)arg3 atURL:(id)arg4 error:(id*)arg5;
+ (BOOL)associateThumbnailsForDocumentAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id*)arg3;
+ (BOOL)associateThumbnailsForDocumentAtURL:(id)arg1 withImmutableDocument:(BOOL)arg2 atURL:(id)arg3 error:(id*)arg4;
+ (void)downloadOrGenerateThumbnailAtPhysicalURL:(id)arg1;
+ (BOOL)hasThumbnailOnImmutableDocumentAtURL:(id)arg1;
+ (Class)imageClassWithError:(id*)arg1;
+ (BOOL)imageContainsAlpha:(struct CGImage { }*)arg1;
+ (BOOL)imageContainsAlphaForOtherImages:(struct CGImage { }*)arg1;
+ (id)imageNameFor1024ThumbnailAtURL:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameFor1024ThumbnailData:(id)arg1 metadataDictionary:(id)arg2;
+ (id)imageNameFor1024ThumbnailInMetadataDictionary:(id)arg1;
+ (id)imageNameForThumbnailInImageSource:(struct CGImageSource { }*)arg1;
+ (BOOL)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id*)arg4;
+ (id)metadataForGeneratedThumbnailAtURL:(id)arg1 maximumDimension:(float)arg2;
+ (void)noteCloudDocsDownloadedFileAtURL:(id)arg1;
+ (void)noteCloudDocsDownloadedFileAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)plistInExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4;
+ (BOOL)removeAdditionsOnURL:(id)arg1 error:(id*)arg2;
+ (BOOL)removeExtendedAttributeNamed:(const char *)arg1 flags:(unsigned long long)arg2 onFileDescriptor:(int)arg3 error:(id*)arg4;
+ (BOOL)removeThumbnailsStoredInExtendedAttributesOnURL:(id)arg1 error:(id*)arg2;
+ (BOOL)setPropertyList:(id)arg1 forExtendedAttributeNamed:(const char *)arg2 flags:(unsigned long long)arg3 onFileDescriptor:(int)arg4 error:(id*)arg5;
+ (BOOL)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id*)arg3;
+ (BOOL)storeThumbnailDataDictionary:(id)arg1 metadata:(id)arg2 asExtendedAttributeOnURL:(id)arg3 error:(id*)arg4;
+ (id)thumbnailsDictionaryForURL:(id)arg1 error:(id*)arg2;

- (BOOL)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id*)arg2;
- (BOOL)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id*)arg2;
- (BOOL)_initWithXattrsPresentOnURL:(id)arg1 error:(id*)arg2;
- (id)additionURL;
- (void)dealloc;
- (id)genStoreAddition;
- (id)initWithAdditionsPresentOnURL:(id)arg1 error:(id*)arg2;
- (id)metadata;
- (void)setAdditionURL:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setThumbnailDataDictionary:(id)arg1;
- (id)thumbnailDataDictionary;
- (id)thumbnailDataForKey:(id)arg1;
- (id)thumbnailURLForKey:(id)arg1;
- (id)thumbnailVersion;
- (struct CGImage { }*)thumbnailWithMaximumDimension:(float)arg1 properties:(id*)arg2 flavor:(int*)arg3 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)thumbnailsDictionaryWithError:(id*)arg1;

@end
