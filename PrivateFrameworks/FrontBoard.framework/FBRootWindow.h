/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBRootWindow : _UIRootWindow <FBSceneTransformTarget> {
    UIView *_sceneContainerView;
    UIView *_systemGestureView;
    NSHashTable *_transforms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)_isSecure;

- (BOOL)_appearsInLoupe;
- (BOOL)_canBecomeKeyWindow;
- (BOOL)_shouldPrepareScreenForWindow;
- (id)_systemGestureView;
- (void)_updateTransforms;
- (BOOL)_usesWindowServerHitTesting;
- (void)attachSceneTransform:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithDisplay:(id)arg1;
- (void)removeSceneTransform:(id)arg1;
- (id)sceneContainerView;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)transformDidInvalidate:(id)arg1;
- (void)transformDidUpdate:(id)arg1;

@end
