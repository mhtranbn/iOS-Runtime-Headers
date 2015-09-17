/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWIrisDiscontinuity : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _discontinuityTime;
    NSArray *_recipe;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _targetFrameDuration;
    NSArray *_timeSkews;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (int)_offsetIndexFromDiscontinuityForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)containsVideoBufferTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)dealloc;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 targetFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 timeSkews:(id)arg4;
- (BOOL)shouldKeepBufferWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 nextAdjustedTimeInOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
