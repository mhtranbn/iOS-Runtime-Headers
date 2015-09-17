/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIInteractionProgressObserver, _UIForcePresentationControllerDelegate> {
    UIPresentationController<UIForcePresentationController> *_currentPresentationController;
    UIViewController *_currentPreviewViewController;
    _UITapticEngine *_currentTapticEngine;
    <UIForceTransitioningDelegate> *_currentTransitionDelegate;
    <UIPreviewInteractionControllerDelegate> *_delegate;
    UIPreviewForceInteractionProgress *_interactionProgressForCommit;
    UIInteractionProgress *_interactionProgressForPresentation;
    BOOL _isCommitting;
    struct CGPoint { 
        float x; 
        float y; 
    } _location;
    UIViewController *_presentingViewController;
    UIGestureRecognizer *_previewGestureRecognizer;
    UIGestureRecognizer *_revealGestureRecognizer;
    UIView *_sourceView;
    BOOL _statusBarWasHidden;
    UIGestureRecognizer *_touchObservingGestureRecognizer;
    UIView *_touchSelectionWorkaroundSnapshotView;
    UIWindow *_windowForPreviewPresentation;
}

@property (nonatomic, readonly) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (nonatomic, retain) UIPresentationController<UIForcePresentationController> *currentPresentationController;
@property (nonatomic, retain) UIViewController *currentPreviewViewController;
@property (nonatomic, retain) _UITapticEngine *currentTapticEngine;
@property (nonatomic, retain) <UIForceTransitioningDelegate> *currentTransitionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPreviewInteractionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gestureRecognizers;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIPreviewForceInteractionProgress *interactionProgressForCommit;
@property (nonatomic, retain) UIInteractionProgress *interactionProgressForPresentation;
@property (nonatomic) struct CGPoint { float x1; float x2; } location;
@property (nonatomic, readonly) UIGestureRecognizer *presentationGestureRecognizer;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) UIGestureRecognizer *previewGestureRecognizer;
@property (nonatomic, retain) UIGestureRecognizer *revealGestureRecognizer;
@property (nonatomic) UIView *sourceView;
@property (nonatomic) BOOL statusBarWasHidden;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIGestureRecognizer *touchObservingGestureRecognizer;
@property (nonatomic, retain) UIView *touchSelectionWorkaroundSnapshotView;
@property (nonatomic, retain) UIWindow *windowForPreviewPresentation;

- (void).cxx_destruct;
- (void)_endUsingTapticFeedbackIfNeeded;
- (void)_finalizeInteractivePreview;
- (void)_handleRevealGesture:(id)arg1;
- (void)_handleTouchObservingGesture:(id)arg1;
- (id)_insertTouchSelectionWorkaroundSnapshotViewToView:(id)arg1 presentationController:(id)arg2;
- (void)_prepareUsingTapticFeedback;
- (BOOL)_previewingIsPossibleForView:(id)arg1;
- (void)_resetCustomPresentationHooks;
- (void)_setCalloutBarHidden:(BOOL)arg1;
- (void)_setStatusBarHidden:(BOOL)arg1;
- (id)_transitionDelegateForPreviewViewController:(id)arg1 atPosition:(struct CGPoint { float x1; float x2; })arg2 inView:(id)arg3;
- (BOOL)_viewControllerIsAncestorOfTwoColumnSplitViewController:(id)arg1;
- (id)beginPreviewGestureRecognizer;
- (void)cancelInteractivePreview;
- (void)commitInteractivePreview;
- (BOOL)configureRevealTransformSourceViewSnapshotSuppressionFromLocation:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (void)configureRevealTransformWithInteractionProgress:(id)arg1 forLocation:(struct CGPoint { float x1; float x2; })arg2 inView:(id)arg3 containerView:(id)arg4;
- (id)currentPresentationController;
- (id)currentPreviewViewController;
- (id)currentTapticEngine;
- (id)currentTransitionDelegate;
- (void)dealloc;
- (id)delegate;
- (void)forcePresentationController:(id)arg1 didSelectMenuItem:(id)arg2;
- (void)forcePresentationControllerDidDismiss:(id)arg1;
- (void)forcePresentationControllerWantsToCommit:(id)arg1;
- (void)forcePresentationControllerWillDismiss:(id)arg1;
- (void)forcePresentationTransitionWillBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (id)init;
- (void)initGestureRecognizers;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)interactionProgressForCommit;
- (id)interactionProgressForPresentation;
- (struct CGPoint { float x1; float x2; })location;
- (id)presentationGestureRecognizer;
- (id)presentingViewController;
- (id)previewGestureRecognizer;
- (id)revealGestureRecognizer;
- (void)setCurrentPresentationController:(id)arg1;
- (void)setCurrentPreviewViewController:(id)arg1;
- (void)setCurrentTapticEngine:(id)arg1;
- (void)setCurrentTransitionDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionProgressForCommit:(id)arg1;
- (void)setInteractionProgressForPresentation:(id)arg1;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPreviewGestureRecognizer:(id)arg1;
- (void)setRevealGestureRecognizer:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setStatusBarWasHidden:(BOOL)arg1;
- (void)setTouchObservingGestureRecognizer:(id)arg1;
- (void)setTouchSelectionWorkaroundSnapshotView:(id)arg1;
- (void)setWindowForPreviewPresentation:(id)arg1;
- (id)sourceView;
- (BOOL)startInteractivePreviewAtPosition:(struct CGPoint { float x1; float x2; })arg1 inView:(id)arg2;
- (BOOL)startInteractivePreviewWithGestureRecognizer:(id)arg1;
- (BOOL)statusBarWasHidden;
- (id)touchObservingGestureRecognizer;
- (id)touchSelectionWorkaroundSnapshotView;
- (id)windowForPreviewPresentation;

@end
