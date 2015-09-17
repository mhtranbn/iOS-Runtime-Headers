/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLJPEGPreheatItem : PLPreheatItem {
    UIImage *_cachedImage;
    BOOL _cachedImageCancelled;
    unsigned int _cancelled;
    BOOL _dataIsLoading;
    unsigned int _hasCachedImage;
    NSString *_imagePath;
    unsigned int _loadingOptions;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_requestGroup;
    unsigned long _requestID;
    NSObject<OS_dispatch_group> *_waitGroup;
}

@property (setter=_setHasCachedImage:) BOOL _hasCachedImage;
@property (nonatomic, readonly, copy) NSString *imagePath;
@property (nonatomic, readonly) unsigned int options;

+ (id)jpegDataLoadSemaphore;

- (void)_cacheImage;
- (void)_cancel;
- (BOOL)_hasCachedImage;
- (void)_leaveWaitGroupIfNeeded;
- (void)_setHasCachedImage:(BOOL)arg1;
- (void)_uncancel;
- (BOOL)addImageHandler:(id /* block */)arg1;
- (id)cachedImage:(BOOL*)arg1;
- (id)cachedImageIfAvailable:(BOOL*)arg1;
- (void)cancelPreheatRequestWithCompletionHandler:(id /* block */)arg1;
- (id)createDecodedImage:(struct CGImage { }*)arg1 data:(id)arg2;
- (void)dealloc;
- (struct __CFDictionary { }*)decodeSessionOptions;
- (id)imagePath;
- (id)initWithImagePath:(id)arg1 format:(int)arg2 imageType:(int)arg3 optimalSourcePixelSize:(struct CGSize { float x1; float x2; })arg4 options:(unsigned int)arg5;
- (id)initialDecodeSessionOptions;
- (BOOL)isCancelled;
- (void)loadPreheatDataWithHandler:(id /* block */)arg1;
- (unsigned int)options;
- (BOOL)originalIsJpeg;
- (id)preheatData;
- (void)startPreheatRequestWithCompletionHandler:(id /* block */)arg1;

@end
