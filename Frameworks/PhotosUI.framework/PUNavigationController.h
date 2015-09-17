/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUNavigationController : UINavigationController <UINavigationControllerDelegate> {
    PUAbstractNavigationBanner *__banner;
    int __barStyle;
    UIViewController *__currentToolbarViewController;
    _UINavigationControllerPalette *__palette;
    id /* block */ _ppt_onDidShowViewControllerBlock;
    BOOL _pu_preventsAutorotation;
    unsigned int _pu_supportedInterfaceOrientations;
}

@property (setter=_setBanner:, nonatomic, retain) PUAbstractNavigationBanner *_banner;
@property (setter=_setBarStyle:, nonatomic) int _barStyle;
@property (setter=_setCurrentToolbarViewController:, nonatomic) UIViewController *_currentToolbarViewController;
@property (setter=_setPalette:, nonatomic, retain) _UINavigationControllerPalette *_palette;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (setter=ppt_setOnDidShowViewControllerBlock:, nonatomic, copy) id /* block */ ppt_onDidShowViewControllerBlock;
@property (nonatomic) BOOL pu_preventsAutorotation;
@property (nonatomic) unsigned int pu_supportedInterfaceOrientations;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_banner;
- (int)_barStyle;
- (void)_commonPUNavigationControllerInitialization;
- (id)_currentToolbarViewController;
- (id)_extendedToolbar;
- (id)_palette;
- (void)_setBanner:(id)arg1;
- (void)_setBarStyle:(int)arg1;
- (void)_setCurrentToolbarViewController:(id)arg1;
- (void)_setCurrentToolbarViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_setPalette:(id)arg1;
- (void)_updateBarStyle;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id /* block */)ppt_onDidShowViewControllerBlock;
- (void)ppt_setOnDidShowViewControllerBlock:(id /* block */)arg1;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (BOOL)pu_preventsAutorotation;
- (void)pu_setPreventsAutorotation:(BOOL)arg1;
- (void)pu_setSupportedInterfaceOrientations:(unsigned int)arg1;
- (unsigned int)pu_supportedInterfaceOrientations;
- (void)setPu_preventsAutorotation:(BOOL)arg1;
- (void)setPu_supportedInterfaceOrientations:(unsigned int)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewController:(id)arg1 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(BOOL)arg2;

@end
