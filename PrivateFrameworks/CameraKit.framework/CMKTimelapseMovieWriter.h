/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKTimelapseMovieWriter : NSObject <CMKTimelapseMovieWriterProtocol> {
    NSMutableDictionary *__availableImageData;
    NSMutableDictionary *__availablePixelBuffers;
    id /* block */ __completion;
    int __currentOutputFrameIndex;
    NSArray *__frameFilePaths;
    int __framesPerSecond;
    NSOperationQueue *__imageDecodeQueue;
    NSOperationQueue *__imageReadQueue;
    NSMutableSet *__inFlightReadFrameIndexes;
    NSObject<OS_dispatch_queue> *__movieWritingQueue;
    int __nextReadFileIndex;
    int __nextWriteFileIndex;
    AVAssetWriterInputPixelBufferAdaptor *__pixelBufferAdaptor;
    int __residentImageDataCount;
    int __residentPixelBufferCount;
    NSObject<OS_dispatch_queue> *__synchronizationQueue;
    AVAssetWriterInput *__videoInput;
    AVAssetWriter *__writer;
}

@property (nonatomic, readonly) NSMutableDictionary *_availableImageData;
@property (nonatomic, readonly) NSMutableDictionary *_availablePixelBuffers;
@property (nonatomic, readonly, copy) id /* block */ _completion;
@property (nonatomic, readonly) int _currentOutputFrameIndex;
@property (nonatomic, readonly) NSArray *_frameFilePaths;
@property (nonatomic, readonly) int _framesPerSecond;
@property (nonatomic, readonly) NSOperationQueue *_imageDecodeQueue;
@property (nonatomic, readonly) NSOperationQueue *_imageReadQueue;
@property (nonatomic, readonly) NSMutableSet *_inFlightReadFrameIndexes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (nonatomic, readonly) int _nextReadFileIndex;
@property (nonatomic, readonly) int _nextWriteFileIndex;
@property (nonatomic, readonly) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (nonatomic, readonly) int _residentImageDataCount;
@property (nonatomic, readonly) int _residentPixelBufferCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_synchronizationQueue;
@property (nonatomic, readonly) AVAssetWriterInput *_videoInput;
@property (nonatomic, readonly) AVAssetWriter *_writer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_appendPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)_availableImageData;
- (id)_availablePixelBuffers;
- (id /* block */)_completion;
- (int)_currentOutputFrameIndex;
- (struct CGSize { float x1; float x2; })_desiredOutputSizeForFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_enqueueNextDecode;
- (void)_enqueueNextRead;
- (void)_enqueueNextWrite;
- (void)_finishMovieWithCompletionHandler:(id /* block */)arg1;
- (id)_frameFilePaths;
- (int)_framesPerSecond;
- (id)_imageDecodeQueue;
- (id)_imageReadQueue;
- (id)_inFlightReadFrameIndexes;
- (id)_movieWritingQueue;
- (int)_nextReadFileIndex;
- (int)_nextWriteFileIndex;
- (id)_pixelBufferAdaptor;
- (void)_reset;
- (int)_residentImageDataCount;
- (int)_residentPixelBufferCount;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (BOOL)_startWritingWithOutputPath:(id)arg1 width:(int)arg2 height:(int)arg3 videoFormatDescription:(struct opaqueCMFormatDescription { }*)arg4 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 framesPerSecond:(int)arg6 frameCount:(int)arg7 videoMetadata:(id)arg8;
- (id)_synchronizationQueue;
- (id)_videoInput;
- (id)_writer;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg6 framesPerSecond:(int)arg7 completionHandler:(id /* block */)arg8;

@end
