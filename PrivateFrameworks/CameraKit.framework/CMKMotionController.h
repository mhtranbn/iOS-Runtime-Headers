/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKMotionController : NSObject {
    BKSAccelerometer *__accelerometer;
    int __numberOfDominantPhysicalButtonObservers;
    CMMotionManager *__physicalButtonMotionManager;
    int _captureOrientation;
    int _deviceOrientation;
    int _dominantPhysicalButton;
}

@property (setter=_setAccelerometer:, nonatomic, retain) BKSAccelerometer *_accelerometer;
@property (setter=_setNumberOfDominantPhysicalButtonObservers:, nonatomic) int _numberOfDominantPhysicalButtonObservers;
@property (nonatomic, readonly) CMMotionManager *_physicalButtonMotionManager;
@property (setter=_setCaptureOrientation:, nonatomic) int captureOrientation;
@property (setter=_setDeviceOrientation:, nonatomic) int deviceOrientation;
@property (nonatomic) int dominantPhysicalButton;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_accelerometer;
- (int)_numberOfDominantPhysicalButtonObservers;
- (id)_physicalButtonMotionManager;
- (void)_setAccelerometer:(id)arg1;
- (void)_setCaptureOrientation:(int)arg1;
- (void)_setDeviceOrientation:(int)arg1;
- (void)_setDominantPhysicalButton:(int)arg1;
- (void)_setNumberOfDominantPhysicalButtonObservers:(int)arg1;
- (void)_updatePhysicalButtonObservation;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (int)captureOrientation;
- (void)dealloc;
- (int)deviceOrientation;
- (int)dominantPhysicalButton;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (id)init;

@end
