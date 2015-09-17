/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKCaptureController : NSObject <AVCaptureFileOutputRecordingDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, BKSAccelerometerDelegate, PLCameraEffectsRendererDelegate> {
    BOOL _HDRDetectionEnabled;
    BOOL __atomicEffectsAvailable;
    BOOL __atomicModeChangeWaitingForConfigureSession;
    BOOL __atomicModeChangeWaitingForPreviewStarted;
    CMKAvalancheCaptureService *__avalancheCaptureService;
    NSObject<OS_dispatch_queue> *__captureIsolationQueue;
    BOOL __configuringCamera;
    NSMutableArray *__currentFaceMetadata;
    CMKDebugCaptureService *__debugCaptureService;
    NSMutableArray *__deferredVideoCaptureRequests;
    int __deviceLockCount;
    NSObject<OS_dispatch_queue> *__effectFilterIndexQueue;
    NSDictionary *__effectFilterIndices;
    NSObject<OS_dispatch_queue> *__effectRenderingQueue;
    BOOL __ignoreSubjectAreaChanges;
    double __ignoreSubjectAreaChangesUntilTime;
    NSMutableArray *__inflightPanoramaCaptureRequests;
    NSMutableArray *__inflightStillImageCaptureRequests;
    NSMutableArray *__inflightVideoCaptureResponses;
    BOOL __locationAcquiredForTimelapseCapture;
    BOOL __lockExposureAfterExposeFinishes;
    BOOL __lockFocusAfterFocusFinishes;
    id /* block */ __lockLensPositionCompletionBlock;
    float __lockLensPositionTarget;
    BOOL __panoramaProcessorReadyForSampleBuffers;
    BOOL __previewLayerEnabledForRenderer;
    BOOL __previewPaused;
    NSMutableArray *__processingPanoramaCaptureRequests;
    BOOL __rebuildingSession;
    NSMutableDictionary *__servicesByType;
    BOOL __sessionReady;
    BOOL __videoDataOutputEnabledForRenderer;
    BOOL __wasStillImageStabilzationOnBeforeTimedCapture;
    BKSAccelerometer *_accelerometer;
    AVCaptureDevice *_avCaptureDeviceAudio;
    AVCaptureDevice *_avCaptureDeviceBack;
    AVCaptureDevice *_avCaptureDeviceFront;
    AVCaptureDeviceInput *_avCaptureInputAudio;
    AVCaptureDeviceInput *_avCaptureInputBack;
    AVCaptureDeviceInput *_avCaptureInputFront;
    AVCaptureVideoDataOutput *_avCaptureOutputEffectPreview;
    AVCaptureMetadataOutput *_avCaptureOutputMetadata;
    NSObject<OS_dispatch_queue> *_avCaptureOutputMetadataQueue;
    AVCaptureVideoDataOutput *_avCaptureOutputPanorama;
    AVCaptureStillImageOutput *_avCaptureOutputPhoto;
    AVCaptureMovieFileOutput *_avCaptureOutputVideo;
    AVCaptureSession *_avCaptureSession;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    int _cameraDevice;
    struct { 
        unsigned int supportsVideo : 1; 
        unsigned int supportsHDRRear : 1; 
        unsigned int supportsHDRFront : 1; 
        unsigned int supportsSuggestedHDRRear : 1; 
        unsigned int supportsSuggestedHDRFront : 1; 
        unsigned int supportsAvalancheAnalysisRear : 1; 
        unsigned int supportsAvalancheAnalysisFront : 1; 
        unsigned int supportsMogulRear : 1; 
        unsigned int supportsMogulFront : 1; 
        unsigned int supportsLiveEffects : 1; 
        unsigned int supportsPanorama : 1; 
        unsigned int supportsVideoStillCapture : 1; 
        unsigned int supportsPreviewDuringHDR : 1; 
        unsigned int supportsTimelapse : 1; 
        unsigned int hasFlash : 1; 
        unsigned int hasBackCamera : 1; 
        unsigned int hasFrontCamera : 1; 
        unsigned int deferStartVideoCapture : 1; 
        unsigned int inCall : 1; 
        unsigned int isCapturingPanorama : 1; 
        unsigned int isProcessingPanorama : 1; 
        unsigned int focusDisabled : 1; 
        unsigned int serverDied : 1; 
        unsigned int didGetDeviceUnavailableInBackground : 1; 
        unsigned int didSetLocationData : 1; 
        unsigned int isChangingMode : 1; 
        unsigned int flashWillFireAutomatically : 1; 
        unsigned int torchWillFireAutomatically : 1; 
        unsigned int isCameraApp : 1; 
        unsigned int didSendPreviewStartedCallbackToEmptyDelegate : 1; 
        unsigned int didGetPreviewStartedCallbackAfterResume : 1; 
        unsigned int logFocusInfo : 1; 
        unsigned int logPreviewInfo : 1; 
        unsigned int logCaptureInfo : 1; 
        unsigned int logFlashInfo : 1; 
        unsigned int logDebugInfo : 1; 
        unsigned int logPanoInfo : 1; 
        unsigned int enable720p60Recording : 1; 
        unsigned int isInternalInstall : 1; 
        unsigned int shouldTearDownPano : 1; 
        unsigned int convertSampleBufferToJPEG : 1; 
        unsigned int delegateDidStartSession : 1; 
        unsigned int delegateWillStartPreview : 1; 
        unsigned int delegatePreviewDidStart : 1; 
        unsigned int delegateSessionDidStart : 1; 
        unsigned int delegateDidStopSession : 1; 
        unsigned int delegateWillStopSession : 1; 
        unsigned int delegateSessionDidStop : 1; 
        unsigned int delegateSessionWasInterrupted : 1; 
        unsigned int delegateSessionInterruptionEnded : 1; 
        unsigned int delegateServerError : 1; 
        unsigned int delegateCleanApertureDidChange : 1; 
        unsigned int delegateModeWillChange : 1; 
        unsigned int delegateModeDidChange : 1; 
        unsigned int delegateWillTakePhoto : 1; 
        unsigned int delegateDidTakePhoto : 1; 
        unsigned int delegateCapturedPhoto : 1; 
        unsigned int delegateDidChangeCaptureAbility : 1; 
        unsigned int delegateDidChangePanoramaConfiguration : 1; 
        unsigned int delegateDidUpdatePanoramaPreview : 1; 
        unsigned int delegateDidReceivePanoramaIssue : 1; 
        unsigned int delegateDidStartPanoramaCapture : 1; 
        unsigned int delegateWillStopPanoramaCapture : 1; 
        unsigned int delegatePanoramaWillStartProcessing : 1; 
        unsigned int delegatePanoramaDidStopProcessing : 1; 
        unsigned int delegateCapturedPanorama : 1; 
        unsigned int delegateVideoCaptureDidStart : 1; 
        unsigned int delegateDidStopVideoCapture : 1; 
        unsigned int delegateVideoCaptureDidStop : 1; 
        unsigned int delegateDidChangeFocusMode : 1; 
        unsigned int delegateDidChangeExposureMode : 1; 
        unsigned int delegateFocusDidStart : 1; 
        unsigned int delegateFocusDidEnd : 1; 
        unsigned int delegateExposureDidStart : 1; 
        unsigned int delegateExposureDidEnd : 1; 
        unsigned int delegateWillResetFocusExposure : 1; 
        unsigned int delegateDidChangeUserLockedFocus : 1; 
        unsigned int delegateDidChangeUserLockedExposure : 1; 
        unsigned int delegateDidChangeExposureTargetBias : 1; 
        unsigned int delegateFaceMetadataDidChange : 1; 
        unsigned int delegateVideoZoomFactorDidChange : 1; 
        unsigned int delegateFlashWillFireChanged : 1; 
        unsigned int delegateTorchActiveChanged : 1; 
        unsigned int delegateTorchAvailabilityChanged : 1; 
        unsigned int delegateHDRSuggestionChanged : 1; 
        unsigned int delegateRemoteShutterPressed : 1; 
        unsigned int delegateRemoteShutterCanceled : 1; 
        unsigned int delegateRemoteFocusTapped : 1; 
        unsigned int delegateRemoteShutterStartVideoCapture : 1; 
        unsigned int delegateRemoteShutterStopVideoCapture : 1; 
        unsigned int delegateRemoteShutterSetFlashMode : 1; 
        unsigned int delegateRemoteShutterToggleCameraDevice : 1; 
        unsigned int delegateDidStartVideoRequest : 1; 
        unsigned int delegateDidStopVideoRequest : 1; 
        unsigned int delegateDidFinishVideoRequest : 1; 
        unsigned int delegateDidStartCapturingPanoramaRequest : 1; 
        unsigned int delegateDidStopCapturingPanoramaRequest : 1; 
        unsigned int delegateDidStartProcessingPanoramaRequest : 1; 
        unsigned int delegateDidStopProcessingPanoramaRequest : 1; 
        unsigned int delegateDidFinishPanoramaRequest : 1; 
        unsigned int delegatePanoramaConfigurationChanged : 1; 
        unsigned int delegateDidOutputPanoramaParameters : 1; 
    } _cameraFlags;
    int _cameraMode;
    int _cameraOrientation;
    BOOL _canCapturePhotoFromVideoModeWhenNotRecording;
    int _captureOrientation;
    BOOL _capturingTimelapse;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cleanAperture;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    BOOL _delaySuspend;
    NSTimer *_delaySuspendTimer;
    <PLCameraControllerDelegate> *_delegate;
    BOOL _disableAllPreviewSuspensionDuringCapture;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    NSObject<OS_dispatch_queue> *_dispatchTimerQueue;
    CMKEffectsRenderer *_effectsRenderer;
    int _flashMode;
    BOOL _hdrCaptureIncludesEV0Image;
    int _hdrEV0PhotoCaptureCount;
    NSTimer *_idleTimerTimer;
    BOOL _imageWriterQueueIsAvailable;
    unsigned int _ioSurfaceCounter;
    BOOL _isFocusingOnFace;
    unsigned int _keepAliveCounter;
    NSTimer *_keepAliveFailsafeTimer;
    NSTimer *_keepAliveTimer;
    struct CGImage { } *_lastVideoPreviewFrameImageRef;
    float _maxVideoZoomFactorFront;
    float _maxVideoZoomFactorRear;
    double _maximumCaptureDuration;
    AVCaptureDeviceFormat *_mogulFormatBack;
    BOOL _mogulFormatBackSupportsAlternate;
    AVCaptureDeviceFormat *_mogulFormatFront;
    BOOL _mogulFormatFrontSupportsAlternate;
    struct _CAImageQueue { } *_panoramaImageQueue;
    float _panoramaPreviewScale;
    struct CGSize { 
        float width; 
        float height; 
    } _panoramaPreviewSize;
    struct OpaqueFigSampleBufferProcessor { } *_panoramaProcessor;
    BOOL _performingAvalancheCapture;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CCCameraConnection *_remoteShutterConnection;
    BOOL _resetExposureWhenSubjectAreaChanged;
    BOOL _resetFocusWhenSubjectAreaChanged;
    BOOL _shouldBeStopped;
    NSArray *_supportedCameraModes;
    BOOL _use60FPSVideo;
    BOOL _useAlternateSlomoFront;
    BOOL _useAlternateSlomoRear;
    BOOL _userLockedExposure;
    BOOL _userLockedFocus;
    NSString *_videoCapturePath;
    int _videoCaptureQuality;
    id /* block */ postSessionSetupBlock;
}

@property (getter=isHDRDetectionEnabled, nonatomic) BOOL HDRDetectionEnabled;
@property (getter=isHDRSuggested, nonatomic, readonly) BOOL HDRSuggested;
@property (setter=_setAtomicEffectsAvailable:) BOOL _atomicEffectsAvailable;
@property (getter=_isAtomicModeChangeWaitingForConfigureSession, setter=_setAtomicModeChangeWaitingForConfigureSession:) BOOL _atomicModeChangeWaitingForConfigureSession;
@property (getter=_isAtomicModeChangeWaitingForPreviewStarted, setter=_setAtomicModeChangeWaitingForPreviewStarted:) BOOL _atomicModeChangeWaitingForPreviewStarted;
@property (nonatomic, readonly) CMKAvalancheCaptureService *_avalancheCaptureService;
@property (readonly, retain) NSObject<OS_dispatch_queue> *_captureIsolationQueue;
@property (getter=_isConfiguringCamera, setter=_setConfiguringCamera:) BOOL _configuringCamera;
@property (nonatomic, readonly) NSMutableArray *_currentFaceMetadata;
@property (nonatomic, readonly) CMKDebugCaptureService *_debugCaptureService;
@property (nonatomic, readonly) NSMutableArray *_deferredVideoCaptureRequests;
@property (setter=_setDeviceLockCount:) int _deviceLockCount;
@property (readonly, retain) NSObject<OS_dispatch_queue> *_effectFilterIndexQueue;
@property (setter=_setEffectFilterIndices:, nonatomic, retain) NSDictionary *_effectFilterIndices;
@property (readonly, retain) NSObject<OS_dispatch_queue> *_effectRenderingQueue;
@property (setter=_setEffectsAvailable:, nonatomic) BOOL _effectsAvailable;
@property (nonatomic, readonly) BOOL _ignoreSubjectAreaChanges;
@property (nonatomic, readonly) double _ignoreSubjectAreaChangesUntilTime;
@property (nonatomic, readonly) NSMutableArray *_inflightPanoramaCaptureRequests;
@property (nonatomic, readonly) NSMutableArray *_inflightStillImageCaptureRequests;
@property (nonatomic, readonly) NSMutableArray *_inflightVideoCaptureResponses;
@property (nonatomic, readonly) BOOL _locationAcquiredForTimelapseCapture;
@property (nonatomic, readonly) BOOL _lockExposureAfterExposeFinishes;
@property (nonatomic, readonly) BOOL _lockFocusAfterFocusFinishes;
@property (setter=_setLockLensPositionCompletionBlock:, nonatomic, copy) id /* block */ _lockLensPositionCompletionBlock;
@property (setter=_setLockLensPositionTarget:, nonatomic) float _lockLensPositionTarget;
@property (getter=_isModeChangeWaitingForConfigureSession, setter=_setModeChangeWaitingForConfigureSession:, nonatomic) BOOL _modeChangeWaitingForConfigureSession;
@property (getter=_isModeChangeWaitingForPreviewStarted, setter=_setModeChangeWaitingForPreviewStarted:, nonatomic) BOOL _modeChangeWaitingForPreviewStarted;
@property (nonatomic, readonly) BOOL _panoramaProcessorReadyForSampleBuffers;
@property (setter=_setPreviewLayerEnabledForRenderer:, nonatomic) BOOL _previewLayerEnabledForRenderer;
@property (getter=_isPreviewPaused, setter=_setPreviewPaused:, nonatomic) BOOL _previewPaused;
@property (nonatomic, readonly) NSMutableArray *_processingPanoramaCaptureRequests;
@property (nonatomic) BOOL _rebuildingSession;
@property (nonatomic, readonly) NSMutableDictionary *_servicesByType;
@property (getter=_isSessionReady, setter=_setSessionReady:, nonatomic) BOOL _sessionReady;
@property (setter=_setVideoDataOutputEnabledForRenderer:, nonatomic) BOOL _videoDataOutputEnabledForRenderer;
@property (nonatomic, readonly) BOOL _wasStillImageStabilzationOnBeforeTimedCapture;
@property (nonatomic, readonly, retain) CIFilter *activeFilter;
@property (nonatomic, readonly) BOOL allowsAlternateSlomoFront;
@property (nonatomic, readonly) BOOL allowsAlternateSlomoRear;
@property (nonatomic) int cameraDevice;
@property (nonatomic) int cameraMode;
@property (nonatomic, readonly) int cameraOrientation;
@property (nonatomic) BOOL canCapturePhotoFromVideoModeWhenNotRecording;
@property (nonatomic) int captureOrientation;
@property (getter=isCapturingTimelapse, nonatomic) BOOL capturingTimelapse;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cleanAperture;
@property (nonatomic) BOOL convertSampleBufferToJPEG;
@property (nonatomic) AVCaptureDevice *currentDevice;
@property (nonatomic) AVCaptureDeviceInput *currentInput;
@property (nonatomic) AVCaptureOutput *currentOutput;
@property (nonatomic, readonly) AVCaptureSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAllPreviewSuspensionDuringCapture;
@property (retain) CMKEffectsRenderer *effectsRenderer;
@property (nonatomic) struct CGPoint { float x1; float x2; } exposurePointOfInterest;
@property (nonatomic) float exposureTargetBias;
@property (nonatomic, readonly) float exposureTargetBiasDefault;
@property (nonatomic, readonly) float exposureTargetBiasMax;
@property (nonatomic, readonly) float exposureTargetBiasMin;
@property (nonatomic) int flashMode;
@property (nonatomic) struct CGPoint { float x1; float x2; } focusPointOfInterest;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) AVCaptureStillImageOutput *imageOutput;
@property (nonatomic) BOOL isCameraApp;
@property (nonatomic, readonly) BOOL isStillImageStabilizationActive;
@property (nonatomic, readonly) float panoramaPreviewScale;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } panoramaPreviewSize;
@property (nonatomic) BOOL performingAvalancheCapture;
@property (nonatomic, copy) id /* block */ postSessionSetupBlock;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *previewLayer;
@property (nonatomic) int previewOrientation;
@property (nonatomic, readonly) CCCameraConnection *remoteShutterConnection;
@property (nonatomic) BOOL resetExposureWhenSubjectAreaChanged;
@property (nonatomic) BOOL resetFocusWhenSubjectAreaChanged;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedCameraModes;
@property (nonatomic, readonly) BOOL supportsHDR;
@property (nonatomic, readonly) BOOL supportsHDRSuggestion;
@property (nonatomic) BOOL use60FPSVideo;
@property (nonatomic) BOOL useAlternateSlomoFront;
@property (nonatomic) BOOL useAlternateSlomoRear;
@property (nonatomic) BOOL userLockedExposure;
@property (nonatomic) BOOL userLockedFocus;
@property (nonatomic) float videoZoomFactor;

+ (id)_dateFormatterForVideoMetadata;
+ (BOOL)_shouldExtractDiagnostics;
+ (float)focusLensPositionCurrentSentinel;
+ (BOOL)isStillImageMode:(int)arg1;
+ (BOOL)isVideoMode:(int)arg1;
+ (float)panoramaPreviewHorizontalInset;
+ (struct CGSize { float x1; float x2; })panoramaPreviewSize;
+ (id)sharedInstance;
+ (id)videoMetadataArrayWithLocation:(id)arg1 date:(id)arg2 didSetLocationData:(BOOL*)arg3;

- (void).cxx_destruct;
- (int)_AVExposureModeForCMKExposureMode:(int)arg1;
- (int)_AVFocusModeForCMKFocusMode:(int)arg1;
- (int)_CMKExposureModeForAVExposureMode:(int)arg1;
- (int)_CMKFocusModeForAVFocusMode:(int)arg1;
- (unsigned int)_activeFilterIndex;
- (int)_addOrientationMetadataToResponse:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applyAudioSettingsFromRequest:(id)arg1;
- (void)_applyCaptureSettingsFromStillImageRequest:(id)arg1 withConnection:(id)arg2;
- (void)_applyCaptureSettingsFromVideoRequest:(id)arg1;
- (void)_applyFlashSettingsFromRequest:(id)arg1;
- (void)_applyHDRSettingsFromRequest:(id)arg1;
- (void)_applyStillImageStabilizationSettingsFromRequest:(id)arg1;
- (void)_applyTorchSettingsFromVideoRequest:(id)arg1;
- (BOOL)_atomicEffectsAvailable;
- (void)_autofocusAfterCapture;
- (id)_avalancheCaptureService;
- (void)_callStateDidChange:(id)arg1;
- (BOOL)_canCapturePhotoFromVideoMode;
- (void)_cancelDelayedFocusRequests;
- (id)_captureConnectionForStillImageCapture;
- (id)_captureIsolationQueue;
- (id)_captureMainQueueConfigurationOptions;
- (void)_capturedPhotoWithCaptureDictionary:(id)arg1 metadata:(id)arg2;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3;
- (void)_checkKeepAliveStatus;
- (void)_cleanupPanoramaOnSessionQueue:(BOOL)arg1;
- (void)_clearPreviewLayer;
- (void)_completedResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (void)_completedWriteForResponse:(id)arg1 request:(id)arg2 error:(id)arg3;
- (BOOL)_configureSessionWithCameraMode:(int)arg1 cameraDevice:(int)arg2 options:(id)arg3;
- (void)_createAssetForPanoramaResponse:(id)arg1;
- (void)_createAssetForVideoCaptureResponse:(id)arg1;
- (void)_createPanoramaServicesIfNecessary;
- (void)_createServicesIfNecessaryForMode:(int)arg1;
- (void)_createStillImageServicesIfNecessary;
- (void)_createTimelapseServicesIfNecessary;
- (void)_createVideoServicesIfNecessary;
- (id)_currentFaceMetadata;
- (id)_currentVideoConnection;
- (id)_debugCaptureService;
- (void)_debugFocusState;
- (void)_debug_cancelWaitForIris;
- (void)_debug_checkIris;
- (id)_debug_dispatchTimerQueue;
- (void)_debug_teardownDispatchTimer;
- (void)_debug_waitForIrisToOpen;
- (id)_deferredVideoCaptureRequests;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_destroyAllServices;
- (void)_destroyCamera;
- (void)_deviceConfigurationForPanoramaOptions:(struct __CFDictionary { }*)arg1 captureDevice:(id)arg2 deviceFormat:(id*)arg3 minFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4 maxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg5;
- (int)_deviceLockCount;
- (void)_deviceStarted:(id)arg1;
- (BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
- (void)_didTakePhoto;
- (void)_disableIdleIndefinitely;
- (void)_disableSubjectAreaChangeMonitoringIfNeeded;
- (id)_effectFilterIndexQueue;
- (id)_effectFilterIndices;
- (id)_effectRenderingQueue;
- (BOOL)_effectsAvailable;
- (void)_enableKeepAliveFailsafeTimer;
- (void)_enableSubjectAreaChangedMonitoringIfNeededFromFocusCompleted:(BOOL)arg1 fromExposureCompleted:(BOOL)arg2;
- (void)_exposureCompleted;
- (void)_exposureStarted;
- (void)_exposureTargetBiasChanged;
- (void)_faceMetadataDidChange:(id)arg1;
- (void)_faceRectangleChanged;
- (void)_flashStateChanged;
- (void)_focusCompleted;
- (void)_focusStarted;
- (void)_forceDelaySuspendTimeout;
- (void)_forceKeepAliveFailsafeTimeout;
- (void)_generatedResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (BOOL)_ignoreSubjectAreaChanges;
- (double)_ignoreSubjectAreaChangesUntilTime;
- (void)_imageWriterQueueAvailabilityChanged;
- (void)_inCallStatusChanged:(BOOL)arg1;
- (id)_inflightPanoramaCaptureRequests;
- (id)_inflightStillImageCaptureRequests;
- (id)_inflightVideoCaptureResponses;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
- (void)_interruptionEnded:(id)arg1;
- (BOOL)_isAtomicModeChangeWaitingForConfigureSession;
- (BOOL)_isAtomicModeChangeWaitingForPreviewStarted;
- (BOOL)_isCapturingStillFromVideoMode;
- (BOOL)_isConfiguringCamera;
- (BOOL)_isFocusModeContinuousAutoFocusAtCenter;
- (BOOL)_isModeChangeWaitingForConfigureSession;
- (BOOL)_isModeChangeWaitingForPreviewStarted;
- (BOOL)_isPreviewPaused;
- (BOOL)_isSessionReady;
- (void)_jankyPreviewStartedWorkaround;
- (float)_limitZoomFactor:(float)arg1 forDevice:(id)arg2;
- (BOOL)_locationAcquiredForTimelapseCapture;
- (BOOL)_lockCurrentDeviceForConfiguration;
- (BOOL)_lockExposureAfterExposeFinishes;
- (BOOL)_lockFocusAfterFocusFinishes;
- (void)_lockFocusAndExposureForPano;
- (void)_lockFocusForAvalancheCapture;
- (id /* block */)_lockLensPositionCompletionBlock;
- (float)_lockLensPositionTarget;
- (BOOL)_modeAllowsAEAF;
- (BOOL)_modeUsesCompassHeading;
- (id)_mogulFormatFromDevice:(id)arg1 frameRate:(double)arg2;
- (void)_movieFileRecordingCompleted:(id)arg1;
- (struct __IOSurface { }*)_newFilteredSurfaceFromSurface:(struct __IOSurface { }*)arg1 filters:(id)arg2;
- (void)_notifyControllerModeDidChange;
- (void)_notifyEffectFilterIndexChanged;
- (void)_notifyServicesOfCompletedResponse:(id)arg1 error:(id)arg2;
- (void)_notifyServicesOfEnqueuedRequest:(id)arg1;
- (void)_notifyServicesOfGeneratedResponse:(id)arg1 error:(id)arg2;
- (void)_panoShouldEnd;
- (void)_panoramaDidReceiveErrorNotificationString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveIssueWithPanoramaString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveStatusNotificationString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveWarningNotificationString:(struct __CFString { }*)arg1;
- (BOOL)_panoramaProcessorReadyForSampleBuffers;
- (id)_photoModeSessionPresetForMode:(int)arg1 device:(int)arg2;
- (void)_pptTestSetAutofocusDisabled:(BOOL)arg1;
- (BOOL)_previewLayerEnabledForRenderer;
- (void)_previewStarted;
- (void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3;
- (void)_processPanoramaRequest:(id)arg1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)_processingPanoramaCaptureRequests;
- (BOOL)_rebuildingSession;
- (void)_recoverFromServerError:(id)arg1;
- (void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1;
- (void)_resetFocus:(BOOL)arg1 andExposure:(BOOL)arg2;
- (void)_resetFocusAndExposureIfNotExplicitlyLocked;
- (void)_resetIdleTimer;
- (void)_resetRecentFaceMetadata;
- (void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(id /* block */)arg1;
- (BOOL)_safeSetCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (unsigned int)_sanitizeEffectFilterIndex:(unsigned int)arg1 forMode:(int)arg2;
- (id)_sanitizePanoramaCaptureRequest:(id)arg1;
- (id)_sanitizeStillImageRequest:(id)arg1;
- (id)_sanitizeVideoCaptureRequest:(id)arg1;
- (BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)arg1;
- (void)_saveStillImageResponse:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_serverDied:(id)arg1;
- (int)_serviceTypeForCaptureRequest:(id)arg1;
- (id)_servicesByType;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_sessionStopped:(id)arg1;
- (void)_setAtomicEffectsAvailable:(BOOL)arg1;
- (void)_setAtomicModeChangeWaitingForConfigureSession:(BOOL)arg1;
- (void)_setAtomicModeChangeWaitingForPreviewStarted:(BOOL)arg1;
- (void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2 forceConfigure:(BOOL)arg3;
- (void)_setConfiguringCamera:(BOOL)arg1;
- (void)_setDefaultPrewarmDate:(id)arg1;
- (void)_setDelaySuspend:(BOOL)arg1;
- (void)_setDeviceLockCount:(int)arg1;
- (void)_setEffectFilterIndices:(id)arg1;
- (void)_setEffectsAvailable:(BOOL)arg1;
- (void)_setEffectsRenderer:(id)arg1;
- (void)_setEndianAndCircularTestEnabled:(BOOL)arg1;
- (void)_setExposureMode:(int)arg1;
- (void)_setFaceDetectionEnabled:(BOOL)arg1 forceDisableImageProcessing:(BOOL)arg2 forCaptureDevice:(id)arg3 captureOutput:(id)arg4;
- (void)_setFlashMode:(int)arg1 force:(BOOL)arg2;
- (void)_setFocusMode:(int)arg1 forceSmoothFocus:(BOOL)arg2;
- (void)_setFocusModeLockedWithLensPosition;
- (void)_setKeepAlive:(BOOL)arg1 forVideoCapture:(BOOL)arg2;
- (void)_setLocationEnabled:(BOOL)arg1;
- (void)_setLockLensPositionCompletionBlock:(id /* block */)arg1;
- (void)_setLockLensPositionTarget:(float)arg1;
- (void)_setModeChangeWaitingForConfigureSession:(BOOL)arg1;
- (void)_setModeChangeWaitingForPreviewStarted:(BOOL)arg1;
- (void)_setOrientation;
- (void)_setOrientationEventsEnabled:(BOOL)arg1;
- (void)_setOrientationForConnection:(id)arg1;
- (void)_setPerformingAvalancheCapture:(BOOL)arg1;
- (void)_setPreviewLayerEnabledForRenderer:(BOOL)arg1;
- (void)_setPreviewPaused:(BOOL)arg1;
- (void)_setSessionReady:(BOOL)arg1;
- (void)_setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)_setSupportedCameraModes:(id)arg1;
- (void)_setVideoCapturePath:(id)arg1;
- (void)_setVideoDataOutputEnabledForRenderer:(BOOL)arg1;
- (BOOL)_setupCamera;
- (void)_setupPanoramaForDevice:(id)arg1 output:(id)arg2 options:(out const struct __CFDictionary {}**)arg3;
- (BOOL)_shouldDisableLocationForTimelapseRecording;
- (BOOL)_shouldResetExposureWhenSubjectAreaChanged;
- (BOOL)_shouldResetFocusWhenSubjectAreaChanged;
- (void)_startContinuousAEAFAtCenter;
- (void)_startContinuousAutoExposureAtCenter;
- (void)_startContinuousAutoFocusAtCenter;
- (void)_startPreview:(id /* block */)arg1;
- (void)_startPreviewWithCameraDevice:(int)arg1 cameraMode:(int)arg2 effectFilterIndices:(id)arg3;
- (id)_stillImageCaptureResponseForRequest:(id)arg1 error:(id)arg2;
- (void)_subjectAreaDidChange:(id)arg1;
- (void)_suggestedHDRChanged;
- (BOOL)_supportsHDRSuggestionForCaptureDevice:(id)arg1;
- (void)_synchronizeSettings;
- (void)_tearDownCamera;
- (void)_teardownDelaySuspendTimer;
- (void)_teardownKeepAliveFailsafeTimer;
- (void)_teardownKeepAliveTimer;
- (void)_torchActiveChanged;
- (void)_torchLevelChanged;
- (void)_unlockCurrentDeviceForConfiguration;
- (void)_updateCallStatus;
- (void)_updateEffectsRendererFilterIndexForceStateChange:(BOOL)arg1 renderNotifyBlock:(id /* block */)arg2;
- (void)_updateEffectsRendererMirroring;
- (void)_updateEffectsVideoDataOutputEnabled;
- (void)_updateFocusAndExposureForVideoRecording;
- (void)_updateIdleTimerForCapturingTimelapseChanged;
- (void)_updateIdleTimerForDidFinishRecording;
- (void)_updateIdleTimerForDidFinishVideoRecording;
- (void)_updateIdleTimerForPreviewStarted;
- (void)_updateIdleTimerForPreviewStopped;
- (void)_updateIdleTimerForStartVideoCapture;
- (void)_updateIdleTimerForStillImageCaptured;
- (void)_updateIdleTimerForStopVideoCapture;
- (void)_updateImagePickerMetadataForResponse:(id)arg1;
- (void)_updateOrientationForConnection:(id)arg1;
- (void)_updatePreviewLayerEnabled;
- (void)_updateResponse:(id)arg1 withOriginalIOSurface:(struct __IOSurface { }*)arg2 originalSize:(unsigned long)arg3 unfilteredPreviewSurface:(struct __IOSurface { }*)arg4 unfilteredPreviewSize:(unsigned long)arg5 filteredPreviewSurface:(struct __IOSurface { }*)arg6 filteredPreviewSize:(unsigned long)arg7 metadata:(id)arg8 error:(id)arg9;
- (void)_updateResponse:(id)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 metadata:(id)arg3 error:(id)arg4;
- (void)_updateSupportedCameraModes;
- (void)_updateTorchAvailability;
- (void)_updateWhiteBalanceModeForExposureMode:(int)arg1;
- (BOOL)_useSmoothFocus;
- (void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id*)arg2;
- (void)_verifyVideoConsolidationForVideoResponse:(id)arg1;
- (BOOL)_videoDataOutputEnabledForRenderer;
- (id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)arg1;
- (id)_videoModeSessionPresetForDevice:(int)arg1 options:(id)arg2;
- (void)_wasInterrupted:(id)arg1;
- (BOOL)_wasStillImageStabilzationOnBeforeTimedCapture;
- (void)_whiteBalanceCompleted;
- (int)_whiteBalanceModeForExposureMode:(int)arg1;
- (void)_whiteBalanceStarted;
- (void)_willTakePhoto;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (id)activeFilter;
- (BOOL)allowsAlternateSlomoFront;
- (BOOL)allowsAlternateSlomoRear;
- (void)cameraConnection:(id)arg1 setFlashMode:(int)arg2;
- (void)cameraConnection:(id)arg1 setFocusPoint:(struct CGPoint { float x1; float x2; })arg2;
- (unsigned int)cameraConnection:(id)arg1 setMode:(unsigned int)arg2 interruptCapture:(BOOL)arg3;
- (void)cameraConnection:(id)arg1 setZoomAmount:(float)arg2;
- (void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned int)arg2;
- (void)cameraConnectionBeginVideo:(id)arg1;
- (void)cameraConnectionCancelCountdown:(id)arg1;
- (void)cameraConnectionEndVideo:(id)arg1;
- (int)cameraConnectionFlashMode:(id)arg1 flashSupported:(BOOL*)arg2;
- (BOOL)cameraConnectionIsMirrored:(id)arg1;
- (int)cameraConnectionOrientation:(id)arg1;
- (void)cameraConnectionToggleCameraDevice:(id)arg1;
- (float)cameraConnectionZoomAmount:(id)arg1;
- (int)cameraDevice;
- (void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRendererDidStartPreview:(id)arg1;
- (int)cameraMode;
- (int)cameraOrientation;
- (BOOL)canCapturePanorama;
- (BOOL)canCapturePhoto;
- (BOOL)canCapturePhotoDuringRecording;
- (BOOL)canCapturePhotoFromVideoModeWhenNotRecording;
- (BOOL)canCaptureVideo;
- (BOOL)canChangeFocusOrExposure;
- (BOOL)canContinueAvalancheCapture;
- (void)cancelAvalancheCapture;
- (void)cancelVideoZoomRamp;
- (void)captureIOSurface;
- (int)captureOrientation;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)capturePhoto;
- (BOOL)capturePhotoUsingHDR:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cleanAperture;
- (BOOL)convertSampleBufferToJPEG;
- (id)currentDevice;
- (id)currentInput;
- (double)currentMaxFrameDuration;
- (double)currentMinFrameDuration;
- (id)currentOutput;
- (unsigned int)currentRemoteShutterCameraMode;
- (id)currentSession;
- (BOOL)currentlyAllowedToExposeAtPointOfInterestWithMode:(int)arg1;
- (BOOL)currentlyAllowedToFocusAtPointOfInterestWithMode:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)disableAllPreviewSuspensionDuringCapture;
- (unsigned int)effectFilterIndexForMode:(int)arg1;
- (id)effectFilterIndices;
- (int)effectiveExposureMode;
- (int)effectiveFocusMode;
- (id)effectsRenderer;
- (void)enqueueBlockInCaptureSessionQueue:(id /* block */)arg1;
- (void)enqueueBlockOnMainQueue:(id /* block */)arg1;
- (void)enqueuePanoramaRequest:(id)arg1;
- (BOOL)enqueueStillImageCaptureRequest:(id)arg1;
- (void)enqueueVideoCaptureRequest:(id)arg1;
- (void)executeBlockOnMainQueue:(id /* block */)arg1;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (float)exposureTargetBias;
- (float)exposureTargetBiasDefault;
- (float)exposureTargetBiasMax;
- (float)exposureTargetBiasMin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (void)finishAvalancheCapture;
- (int)flashMode;
- (BOOL)flashWillFire;
- (float)focusLensPosition;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (BOOL)hasFlash;
- (BOOL)hasFrontCamera;
- (BOOL)hasInheritedForegroundState;
- (BOOL)hasRearCamera;
- (id)imageOutput;
- (BOOL)imageWriterQueueIsAvailable;
- (BOOL)inCall;
- (id)init;
- (BOOL)isCameraApp;
- (BOOL)isCapturingPanorama;
- (BOOL)isCapturingTimelapse;
- (BOOL)isCapturingVideo;
- (BOOL)isChangingModes;
- (BOOL)isExposing;
- (BOOL)isExposureModeCenteredContinuous;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isFocusing;
- (BOOL)isFocusingOnFace;
- (BOOL)isHDRDetectionEnabled;
- (BOOL)isHDRSuggested;
- (BOOL)isPreviewMirrored;
- (BOOL)isReady;
- (BOOL)isStillImageStabilizationActive;
- (BOOL)isSupportedExposureMode:(int)arg1;
- (BOOL)isSupportedFocusMode:(int)arg1;
- (BOOL)isTorchActive;
- (BOOL)isTorchDisabled;
- (BOOL)isTorchOn;
- (BOOL)lockDeviceForFocusConfiguration;
- (float)maximumZoomFactorForDevice:(int)arg1;
- (double)minimumVideoCaptureDuration;
- (float)minimumZoomFactorForDevice:(int)arg1;
- (double)mogulFrameRate;
- (void)notifyLocationAcquiredForTimelapse;
- (int)numberOfCapturedAvalanchePhotos;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (float)panoramaPreviewScale;
- (struct CGSize { float x1; float x2; })panoramaPreviewSize;
- (void)panoramaProcessorOutputCallbackWithStatus:(long)arg1 buffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)pausePreview;
- (void)performAutofocusAfterCapture;
- (BOOL)performingAvalancheCapture;
- (void)postOrientationChangedNotification:(int)arg1 force:(BOOL)arg2;
- (id /* block */)postSessionSetupBlock;
- (id)previewLayer;
- (int)previewOrientation;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (id)recentFaceMetadata;
- (void)releaseIOSurface;
- (id)remoteShutterConnection;
- (BOOL)resetExposureWhenSubjectAreaChanged;
- (void)resetFocusAndExposureIfNotExplicitlyLocked;
- (BOOL)resetFocusWhenSubjectAreaChanged;
- (void)restartContinuousAEAFAtCenter;
- (void)resumePreview;
- (void)resumeSubjectAreaChangesAfterDelay:(double)arg1;
- (void)sendModeToRemoteShutterConnection;
- (void)setCameraDevice:(int)arg1;
- (void)setCameraMode:(int)arg1;
- (void)setCameraMode:(int)arg1 device:(int)arg2;
- (void)setCanCapturePhotoFromVideoModeWhenNotRecording:(BOOL)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setCapturingTimelapse:(BOOL)arg1;
- (void)setConvertSampleBufferToJPEG:(BOOL)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setCurrentInput:(id)arg1;
- (void)setCurrentOutput:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableAllPreviewSuspensionDuringCapture:(BOOL)arg1;
- (void)setEffectFilterIndex:(unsigned int)arg1 forMode:(int)arg2;
- (void)setEffectFilterIndices:(id)arg1 forceStateChange:(BOOL)arg2;
- (void)setExposureMode:(int)arg1;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setExposureTargetBias:(float)arg1;
- (void)setFaceDetectionEnabled:(BOOL)arg1 forceDisableImageProcessing:(BOOL)arg2;
- (void)setFlashMode:(int)arg1;
- (void)setFocusDisabled:(BOOL)arg1;
- (void)setFocusMode:(int)arg1;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionBlock:(id /* block */)arg2;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHDRDetectionEnabled:(BOOL)arg1;
- (void)setIsCameraApp:(BOOL)arg1;
- (void)setPanoramaCaptureDirection:(int)arg1;
- (void)setPanoramaImageQueueLayer:(id)arg1;
- (void)setPostSessionSetupBlock:(id /* block */)arg1;
- (void)setPreviewOrientation:(int)arg1;
- (void)setResetExposureWhenSubjectAreaChanged:(BOOL)arg1;
- (void)setResetFocusWhenSubjectAreaChanged:(BOOL)arg1;
- (void)setUse60FPSVideo:(BOOL)arg1;
- (void)setUseAlternateSlomoFront:(BOOL)arg1;
- (void)setUseAlternateSlomoRear:(BOOL)arg1;
- (void)setUserLockedExposure:(BOOL)arg1;
- (void)setUserLockedFocus:(BOOL)arg1;
- (void)setUserLockedFocus:(BOOL)arg1 exposure:(BOOL)arg2;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(int)arg1;
- (void)setVideoZoomFactor:(float)arg1;
- (void)set_rebuildingSession:(BOOL)arg1;
- (void)smoothFocusAtCenterForVideoRecording;
- (void)startAvalancheCapture;
- (void)startPreview;
- (void)startPreview:(id /* block */)arg1;
- (void)startVideoCapture;
- (void)stopPanoramaCapture;
- (void)stopPreview;
- (void)stopVideoCapture;
- (id)supportedCameraModes;
- (BOOL)supportsAvalancheAnalysisForDevice:(int)arg1;
- (BOOL)supportsHDR;
- (BOOL)supportsHDRForDevice:(int)arg1 mode:(int)arg2;
- (BOOL)supportsHDRSuggestion;
- (BOOL)supportsHDRSuggestionForDevice:(int)arg1;
- (BOOL)supportsLiveEffects;
- (BOOL)supportsPanorama;
- (BOOL)supportsPreviewDuringHDR;
- (BOOL)supportsVideoCapture;
- (void)suspendSubjectAreaChanges;
- (void)unlockDeviceForFocusConfiguration;
- (BOOL)use60FPSVideo;
- (BOOL)useAlternateSlomoFront;
- (BOOL)useAlternateSlomoRear;
- (BOOL)userLockedExposure;
- (BOOL)userLockedFocus;
- (id)videoCapturePath;
- (float)videoZoomFactor;

@end
