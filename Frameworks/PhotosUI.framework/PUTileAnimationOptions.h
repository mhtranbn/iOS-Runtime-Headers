/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileAnimationOptions : NSObject {
    id /* block */ _customViewAnimatorBlock;
    double _delay;
    double _duration;
    struct PUDisplayVelocity { 
        float x; 
        float y; 
        float scale; 
        float rotation; 
    } _initialVelocity;
    int _kind;
    float _springDampingRatio;
    float _springMass;
    int _springNumberOfOscillations;
    float _springStiffness;
    BOOL _synchronizedWithTransition;
}

@property (nonatomic, copy) id /* block */ customViewAnimatorBlock;
@property (nonatomic) double delay;
@property (nonatomic) double duration;
@property (nonatomic) struct PUDisplayVelocity { float x1; float x2; float x3; float x4; } initialVelocity;
@property (nonatomic) int kind;
@property (nonatomic) float springDampingRatio;
@property (nonatomic) float springMass;
@property (nonatomic) int springNumberOfOscillations;
@property (nonatomic) float springStiffness;
@property (getter=isSynchronizedWithTransition, nonatomic) BOOL synchronizedWithTransition;

- (void).cxx_destruct;
- (id /* block */)customViewAnimatorBlock;
- (double)delay;
- (double)duration;
- (struct PUDisplayVelocity { float x1; float x2; float x3; float x4; })initialVelocity;
- (BOOL)isSynchronizedWithTransition;
- (int)kind;
- (void)setCustomViewAnimatorBlock:(id /* block */)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setInitialVelocity:(struct PUDisplayVelocity { float x1; float x2; float x3; float x4; })arg1;
- (void)setKind:(int)arg1;
- (void)setSpringDampingRatio:(float)arg1;
- (void)setSpringMass:(float)arg1;
- (void)setSpringNumberOfOscillations:(int)arg1;
- (void)setSpringStiffness:(float)arg1;
- (void)setSynchronizedWithTransition:(BOOL)arg1;
- (float)springDampingRatio;
- (float)springMass;
- (int)springNumberOfOscillations;
- (float)springStiffness;

@end
