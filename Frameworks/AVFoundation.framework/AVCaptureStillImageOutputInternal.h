/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageOutputInternal : NSObject {
    BOOL EV0CaptureEnabled;
    int HDRCaptureMode;
    BOOL SISActive;
    BOOL SISEnabled;
    BOOL SISSupported;
    BOOL highResStillEnabled;
    unsigned long imageDataFormatType;
    BOOL isCapturingPhoto;
    float jpegQuality;
    BOOL jpegQualitySpecified;
    BOOL lensStabilizationDuringBracketedCaptureEnabled;
    BOOL lensStabilizationDuringBracketedCaptureSupported;
    unsigned int maxBracketedCaptureCount;
    BOOL noiseReductionEnabled;
    NSDictionary *outputSettings;
    NSMutableArray *prepareRequests;
    struct { 
        unsigned int imageCount; 
        int outputFormat; 
        unsigned int outputWidth; 
        unsigned int outputHeight; 
    } preparedBracket;
    struct CGSize { 
        float width; 
        float height; 
    } previewImageSize;
    BOOL rawCaptureEnabled;
    unsigned long shutterSoundID;
    BOOL squareCropEnabled;
    NSMutableArray *stillImageRequests;
    BOOL suspendsVideoProcessingDuringCapture;
    AVWeakReference *weakReference;
}

- (void)dealloc;
- (id)init;

@end
