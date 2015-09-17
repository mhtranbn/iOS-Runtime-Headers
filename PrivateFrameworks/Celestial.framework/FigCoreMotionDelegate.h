/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCoreMotionDelegate : NSObject {
    int accelRingIndex;
    double accelRingTime;
    float accelRingX;
    float accelRingY;
    float accelRingZ;
    BOOL computingPosition;
    BOOL copyingAllData;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } currentQuaternion;
    double dGyroUpdateInterval;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    double dStartOfLogging;
    struct OpaqueFigSemaphore { } *dataSemaphore;
    struct { 
        float x; 
        float y; 
        float z; 
    } fusedRingAccel;
    BOOL fusedRingDoingBiasEstimation;
    int fusedRingIndex;
    struct { 
        float x; 
        float y; 
        float z; 
    } fusedRingPosition;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } fusedRingQuaternion;
    double fusedRingTime;
    BOOL gettingAttitudeChange;
    double latestGravityDataTime;
    double latestMotionDataTime;
    BOOL manageAccel;
    BOOL manageFusedMotion;
    BOOL manageGravity;
    CMMotionManager *motionManager;
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    } position;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } previousQuaternion;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } ringMutex;
    double timestampLatency;
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    } velocity;
}

- (id)copyAllFusedMotionData;
- (id)copyFusedMotionData:(double)arg1 endTime:(double)arg2 timeoutValue:(double)arg3 errOut:(int*)arg4;
- (id)copyNewFusedMotionData;
- (void)dealloc;
- (void)didUpdateAcceleration:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdateFusedMotionWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; bool x6; bool x7; bool x8; })arg1 time:(double)arg2 ifsync:(BOOL)arg3;
- (void)didUpdateGravity:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdatePositionWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)didUpdatePositionWithTimeStamp:(double)arg1;
- (void)didUpdateVelocityWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)getCurrentAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3;
- (void)getCurrentDeltaAttitudeRoll:(double*)arg1 pitch:(double*)arg2 yaw:(double*)arg3;
- (void)getCurrentDeltaQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)getCurrentQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (long)getFusedVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (long)getGravityX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (long)getLatestMotionDataTime:(double*)arg1;
- (void)getPositionX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (long)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4;
- (id)init;
- (id)initWithAccelerometer:(BOOL)arg1 gravityZ:(BOOL)arg2 fusedMotion:(BOOL)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5;
- (BOOL)isCopyingAllData;
- (BOOL)managingAccel;
- (BOOL)managingFusedMotion;
- (BOOL)managingGravity;
- (long)updateCurrentQuaternionForTimeStamp:(double)arg1;
- (long)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2;
- (void)updateDeviceCallback:(BOOL)arg1 fusedMotionUpdateInterval:(float)arg2;
- (void)updateGyroInterval:(float)arg1;

@end
