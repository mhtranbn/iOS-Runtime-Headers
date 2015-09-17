/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISplitViewController : UIViewController <GKContentRefresh, GKURLHandling, UIGestureRecognizerDelegate> {
    id /* block */ __clearPreventRotationHook;
    id /* block */ __didChangeBoundsBlock;
    UIViewController *__preservedDetailController;
    UIBarButtonItem *_barButtonItem;
    NSString *_buttonTitle;
    UISnapshotView *_collapsingDetailSnapshotView;
    UISnapshotView *_collapsingMasterSnapshotView;
    NSArray *_cornerImageViews;
    float _cornerRadius;
    id _delegate;
    UIFocusContainerGuide *_detailFocusContainerGuide;
    UIBarButtonItem *_displayModeButtonItem;
    NSString *_displayModeButtonItemTitle;
    int _effectiveTargetDisplayMode;
    float _gutterWidth;
    UIPopoverController *_hiddenPopoverController;
    unsigned int _lastFocusedChildViewControllerIndex;
    int _lastNotifiedDisplayMode;
    int _lastPresentedOrientation;
    UIView *_masterBackgroundView;
    float _masterColumnWidth;
    UIFocusContainerGuide *_masterFocusContainerGuide;
    float _maximumPrimaryColumnWidth;
    float _minimumPrimaryColumnWidth;
    int _pendingDisplayModeChangeCount;
    UIGestureRecognizer *_popoverPresentationGestureRecognizer;
    UIResponder *_postTransitionResponder;
    int _preferredDisplayMode;
    float _preferredPrimaryColumnWidthFraction;
    BOOL _presentsInFadingPopover;
    BOOL _presentsWithGesture;
    BOOL _resizeForKeyboard;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rotatingFromMasterViewFrame;
    int _rotatingFromOrientation;
    int _rotatingMasterChange;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rotatingToMasterViewFrame;
    UIView *_rotationSnapshotView;
    unsigned int _slideTransitionCount;
    struct { 
        unsigned int invalidDelegateHiddenMasterAspectRatios : 2; 
        unsigned int delegateHiddenMasterAspectRatios : 2; 
        unsigned int delegateImplementsShouldHide : 1; 
        unsigned int hidden : 3; 
        unsigned int delegateHandlesTogglingMaster : 1; 
        unsigned int delegateProvidesBackgroundView : 1; 
        unsigned int delegateWantsUnSlideCallback : 1; 
        unsigned int masterOnSlide : 1; 
        unsigned int delegateWantsWillShowCallback : 1; 
        unsigned int delegateWantsWillHideCallback : 1; 
        unsigned int delegateWantsWillPresentCallback : 1; 
        unsigned int delegateWantsNavigationRequests : 1; 
        unsigned int resizesDetailOnSlide : 1; 
        unsigned int delegateSupportedInterfaceOrientations : 1; 
        unsigned int delegatePreferredInterfaceOrientationForPresentation : 1; 
        unsigned int disableDetailFrameChanges : 1; 
        unsigned int delegateWantsShowViewController : 1; 
        unsigned int delegateWantsPrivateShowViewController : 1; 
        unsigned int delegateWantsShowDetailViewController : 1; 
        unsigned int delegateWantsPrivateShowDetailViewController : 1; 
        unsigned int delegateWantsCollapseSecondaryViewController : 1; 
        unsigned int delegateWantsPrivateCollapseSecondaryViewController : 1; 
        unsigned int delegateWantsSeparateSecondaryViewController : 1; 
        unsigned int delegateWantsPrivateSeparateSecondaryViewController : 1; 
        unsigned int delegateWantsPrimaryViewControllerForCollapse : 1; 
        unsigned int delegateWantsPrivatePrimaryViewControllerForCollapse : 1; 
        unsigned int delegateWantsPrimaryViewControllerForExpanding : 1; 
        unsigned int delegateWantsPrivatePrimaryViewControllerForExpanding : 1; 
        unsigned int collapsedState : 2; 
        unsigned int primaryHidingState : 2; 
        unsigned int primaryHidingStateForCurrentOrientation : 2; 
        unsigned int delegateWantsWillChangeToDisplayMode : 1; 
        unsigned int delegateWantsTargetDisplayModeForAction : 1; 
        unsigned int delegateCanModifyFirstResponderOnTraitCollectionTransition : 1; 
        unsigned int pendingPresentMasterViewController : 1; 
        unsigned int pendingUpdateTargetDisplayMode : 1; 
        unsigned int collapsingClockwise : 1; 
        unsigned int firstResponderChangedFromPostTransitionResponder : 1; 
        unsigned int inWillTransitionToSize : 1; 
        unsigned int hasTransitioningToInternalMode : 1; 
        unsigned int delegateImplementsPrivateIsPrimaryVisible : 1; 
        unsigned int delegateImplementsPrivateCollapseSecondaryViewControllerWhileSuspended : 1; 
    } _splitViewControllerFlags;
    int _suspendedState;
    int _transitioningMasterChange;
    int _transitioningToInternalMode;
    UITraitCollection *_transitioningToTraitCollection;
    UIView *_underBarSeparatorView;
    BOOL _useChangingBoundsLayout;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _viewBoundsBeforeCollapse;
}

@property (setter=_setClearPreventRotationHook:, nonatomic, copy) id /* block */ _clearPreventRotationHook;
@property (getter=_didChangeBoundsBlock, setter=_setDidChangeBoundsBlock:, nonatomic, copy) id /* block */ _didChangeBoundsBlock;
@property (setter=_setDisplayModeButtonItemTitle:, nonatomic, copy) NSString *_displayModeButtonItemTitle;
@property (setter=_setPresentsInFadingPopover:, nonatomic) BOOL _presentsInFadingPopover;
@property (setter=_setPreservedDetailController:, nonatomic, retain) UIViewController *_preservedDetailController;
@property (setter=_setResizesDetailOnSlide:, nonatomic) BOOL _resizesDetailOnSlide;
@property (getter=isCollapsed, nonatomic, readonly) BOOL collapsed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UISplitViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_detailFocusContainerGuide, nonatomic, readonly) UIFocusContainerGuide *detailFocusContainerGuide;
@property (nonatomic, readonly) int displayMode;
@property (nonatomic) float gutterWidth;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL hidesMasterViewInLandscape;
@property (nonatomic) BOOL hidesMasterViewInPortrait;
@property (getter=_lastFocusedChildViewControllerIndex, nonatomic, readonly) unsigned int lastFocusedChildViewControllerIndex;
@property (nonatomic) float masterColumnWidth;
@property (getter=_masterFocusContainerGuide, nonatomic, readonly) UIFocusContainerGuide *masterFocusContainerGuide;
@property (nonatomic) float maximumPrimaryColumnWidth;
@property (nonatomic) float minimumPrimaryColumnWidth;
@property (nonatomic) int preferredDisplayMode;
@property (nonatomic) float preferredPrimaryColumnWidthFraction;
@property (nonatomic) BOOL presentsWithGesture;
@property (nonatomic, readonly) float primaryColumnWidth;
@property (nonatomic) BOOL resizeForKeyboard;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *viewControllers;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (float)_defaultGutterWidthInView:(id)arg1;
+ (BOOL)_forcePresentsInSlidingPopover;
+ (BOOL)_forcePresentsWithGesture;
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;
+ (BOOL)doesOverridePreferredInterfaceOrientationForPresentation;
+ (BOOL)doesOverrideSupportedInterfaceOrientations;

- (void).cxx_destruct;
- (void)__viewWillLayoutSubviews;
- (void)_addOrRemovePopoverPresentationGestureRecognizer;
- (id)_additionalViewControllersToCheckForUserActivity;
- (id)_allContainedViewControllers;
- (void)_animateTransitionFromTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_animateTransitionToOrientation:(int)arg1 duration:(double)arg2 masterChange:(int)arg3;
- (void)_cacheEffectiveTargetDisplayMode;
- (BOOL)_canDisplayHostedMaster;
- (BOOL)_canSlideMaster;
- (void)_changeToDisplayMode:(int)arg1 forCurrentOrientationOnly:(BOOL)arg2;
- (id)_childContainingSender:(id)arg1;
- (id)_childViewControllersToSendViewWillTransitionToSize;
- (id /* block */)_clearPreventRotationHook;
- (void)_collapseMaster:(id)arg1 andDetail:(id)arg2 withTransitionCoordinator:(id)arg3;
- (void)_collapseSecondaryViewController:(id)arg1 ontoPrimaryViewController:(id)arg2;
- (void)_commonInit;
- (void)_completeTransitionFromOrientation:(int)arg1 masterChange:(int)arg2;
- (float)_contentMarginForChildViewController:(id)arg1;
- (struct CGSize { float x1; float x2; })_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
- (id)_defaultDisplayModes;
- (float)_defaultMaximumPrimaryColumnWidthForSize:(struct CGSize { float x1; float x2; })arg1;
- (int)_defaultTargetDisplayMode;
- (BOOL)_delegateUsesLegacySlideSPI;
- (void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4;
- (id)_detailFocusContainerGuide;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_detailViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_detailViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_detailViewFrameWithPopoverControllerFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id /* block */)_didChangeBoundsBlock;
- (void)_didChangeToFirstResponder:(id)arg1;
- (void)_didTransitionTraitCollection;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_dismissMasterViewController:(BOOL)arg1;
- (id)_displayModeButtonItemTitle;
- (void)_displayModeDidChange;
- (void)_displayModeWillChangeTo:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
- (BOOL)_effectivePresentsWithGesture;
- (int)_effectivePrimaryHidingState;
- (int)_effectiveTargetDisplayMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (BOOL)_hasMasterViewController;
- (BOOL)_hidesMasterViewInCurrentOrientation;
- (BOOL)_hidesMasterViewInOrientation:(int)arg1 medusaState:(int)arg2;
- (int)_internalModeForTraitCollection:(id)arg1 orientation:(int)arg2 viewSize:(struct CGSize { float x1; float x2; })arg3 medusaState:(int)arg4;
- (void)_invalidateHidesMasterViewForAspectRatio:(int)arg1;
- (void)_invokeDidChangeBoundsBlock;
- (BOOL)_isBasicallyHorizontallyCompact;
- (BOOL)_isCollapsed;
- (BOOL)_isHidesMasterInLandscapeInvalid;
- (BOOL)_isHidesMasterInPortraitInvalid;
- (BOOL)_isLandscape;
- (BOOL)_isMasterPopoverVisible;
- (BOOL)_isMasterViewShown;
- (BOOL)_isRotating;
- (BOOL)_isTransitioningFromCollapsedToSeparated;
- (unsigned int)_lastFocusedChildViewControllerIndex;
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;
- (void)_loadNewSubviews:(id)arg1;
- (id)_masterFocusContainerGuide;
- (double)_masterPresentationAnimationDuration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_masterViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_masterViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)_medusaState;
- (int)_medusaStateForOrientation:(int)arg1 viewWidth:(float)arg2;
- (void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2;
- (void)_popoverController:(id)arg1 willAnimateToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2;
- (void)_prepareForCompactLayout;
- (int)_prepareToTransitionToViewSize:(struct CGSize { float x1; float x2; })arg1 fromOrientation:(int)arg2 toOrientation:(int)arg3 duration:(double)arg4;
- (void)_presentGestureAttemptedWithPresentedPopoverController:(id)arg1;
- (void)_presentMasterViewController:(BOOL)arg1;
- (BOOL)_presentsInFadingPopover;
- (id)_preservedDetailController;
- (float)_primaryColumnWidthForSize:(struct CGSize { float x1; float x2; })arg1;
- (float)_primaryColumnWidthForSize:(struct CGSize { float x1; float x2; })arg1 isCompact:(BOOL)arg2;
- (id)_primaryContentResponder;
- (id)_primaryDimmingView;
- (int)_primaryHidingState;
- (int)_primaryHidingStateForCurrentOrientation;
- (id)_primaryViewControllerForCollapsing;
- (id)_primaryViewControllerForExpanding;
- (void)_removeCollapsingSnapshotViews;
- (void)_removeRoundedCorners;
- (BOOL)_resizesDetailOnSlide;
- (id)_secondaryViewControllerForCollapsing;
- (void)_separateMasterAndDetailWithTransitionCoordinator:(id)arg1;
- (id)_separateSecondaryViewControllerFromPrimaryViewController:(id)arg1;
- (void)_setClearPreventRotationHook:(id /* block */)arg1;
- (void)_setCollapsedState:(int)arg1;
- (void)_setDelegateHidesMaster:(BOOL)arg1 inAspectRatio:(int)arg2;
- (void)_setDetailViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setDidChangeBoundsBlock:(id /* block */)arg1;
- (void)_setDisplayModeButtonItemTitle:(id)arg1;
- (void)_setMasterOverrideTraitCollectionActive:(BOOL)arg1;
- (void)_setPresentsInFadingPopover:(BOOL)arg1;
- (void)_setPreservedDetailController:(id)arg1;
- (void)_setPrimaryHidingState:(int)arg1;
- (void)_setPrimaryHidingStateForCurrentOrientation:(int)arg1;
- (void)_setResizesDetailOnSlide:(BOOL)arg1;
- (void)_setUpFocusContainerGuides;
- (void)_setupHiddenPopoverControllerWithViewController:(id)arg1;
- (void)_setupRoundedCorners;
- (void)_setupUnderBarSeparatorView;
- (BOOL)_shouldPersistViewWhenCoding;
- (BOOL)_shouldPreventAutorotation;
- (BOOL)_shouldSynthesizeSupportedOrientations;
- (void)_showMasterViewAnimated:(BOOL)arg1;
- (void)_slideIn:(BOOL)arg1 viewController:(id)arg2 animated:(BOOL)arg3 totalDuration:(double)arg4 completion:(id /* block */)arg5;
- (unsigned int)_targetEdgeForPopover;
- (void)_triggerDisplayModeAction:(id)arg1;
- (void)_updateChildContentMargins;
- (void)_updateDelegateHiddenMasterAspectRatios;
- (void)_updateDisplayModeButtonItem;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateMasterViewControllerFrame;
- (void)_updateTargetDisplayMode;
- (void)_viewControllerHiding:(id)arg1;
- (void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (int)displayMode;
- (id)displayModeButtonItem;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)gutterWidth;
- (BOOL)hidesMasterViewInLandscape;
- (BOOL)hidesMasterViewInPortrait;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isCollapsed;
- (float)leftColumnWidth;
- (void)loadSubviews;
- (void)loadView;
- (float)masterColumnWidth;
- (id)masterViewController;
- (float)maximumPrimaryColumnWidth;
- (float)minimumPrimaryColumnWidth;
- (void)popoverWillAppear:(id)arg1;
- (int)preferredDisplayMode;
- (id)preferredFocusedView;
- (int)preferredInterfaceOrientationForPresentation;
- (float)preferredLeftColumnWidth;
- (float)preferredPrimaryColumnWidthFraction;
- (BOOL)presentsWithGesture;
- (float)primaryColumnWidth;
- (void)purgeMemoryForReason:(int)arg1;
- (BOOL)resizeForKeyboard;
- (void)setDelegate:(id)arg1;
- (void)setGutterWidth:(float)arg1;
- (void)setHidesMasterViewInPortrait:(BOOL)arg1;
- (void)setMasterColumnWidth:(float)arg1;
- (void)setMaximumPrimaryColumnWidth:(float)arg1;
- (void)setMinimumPrimaryColumnWidth:(float)arg1;
- (void)setPreferredDisplayMode:(int)arg1;
- (void)setPreferredLeftColumnWidth:(float)arg1;
- (void)setPreferredPrimaryColumnWidthFraction:(float)arg1;
- (void)setPresentsWithGesture:(BOOL)arg1;
- (void)setResizeForKeyboard:(BOOL)arg1;
- (void)setViewControllers:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)showDetailViewController:(id)arg1 sender:(id)arg2;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (void)snapshotAllViews;
- (void)snapshotForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 masterChange:(int)arg3;
- (void)snapshotMasterView;
- (unsigned int)supportedInterfaceOrientations;
- (void)toggleMasterVisible:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unloadViewForced:(BOOL)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkForceNextContentUpdate;
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;
- (void)_gkResetContents;
- (void)_gkSetContentsNeedUpdateWithHandler:(id /* block */)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id /* block */)arg1;

@end
