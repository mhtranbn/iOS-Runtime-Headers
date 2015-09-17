/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
 */

@interface BSUIAnimationFactory : NSObject <NSCopying, _UIBasicAnimationFactory> {
    BSAnimationSettings *_settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) BSAnimationSettings *effectiveSettings;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) BSAnimationSettings *settings;
@property (readonly) Class superclass;

+ (void)animateWithFactory:(id)arg1 actions:(id /* block */)arg2;
+ (void)animateWithFactory:(id)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(id /* block */)arg3;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned int)arg3 actions:(id /* block */)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned int)arg3 actions:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)animateWithFactory:(id)arg1 options:(unsigned int)arg2 actions:(id /* block */)arg3;
+ (void)animateWithFactory:(id)arg1 options:(unsigned int)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateWithSettings:(id)arg1 actions:(id /* block */)arg2;
+ (void)animateWithSettings:(id)arg1 actions:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithSettings:(id)arg1 options:(unsigned int)arg2 actions:(id /* block */)arg3;
+ (void)animateWithSettings:(id)arg1 options:(unsigned int)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (id)factoryWithAnimationAttributes:(id)arg1;
+ (id)factoryWithDuration:(double)arg1;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)factoryWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3;
+ (id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4;
+ (id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 initialVelocity:(float)arg5;
+ (id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 timingFunction:(id)arg5;
+ (id)factoryWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 timingFunction:(id)arg4;
+ (id)factoryWithSettings:(id)arg1;
+ (id)factoryWithSettings:(id)arg1 timingFunction:(id)arg2;
+ (float)globalSlowDownFactor;
+ (void)setGlobalSlowDownFactor:(float)arg1;

- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned int)arg2 actions:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_initWithSettings:(id)arg1;
- (id)_timingFunctionForAnimation;
- (void)applySettingsToCAAnimation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)delay;
- (id)description;
- (double)duration;
- (id)effectiveSettings;
- (id)factoryWithTimingFunction:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)settings;

@end
