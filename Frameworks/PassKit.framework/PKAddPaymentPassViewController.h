/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAddPaymentPassViewController : UIViewController {
    PKAddPaymentPassRequestConfiguration *_configuration;
    PKWeakReference *_delegate;
    PKRemoteAddPaymentPassViewController *_remoteVC;
    _UIAsyncInvocation *_remoteVCRequest;
}

@property (nonatomic) <PKAddPaymentPassViewControllerDelegate> *delegate;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)canAddPaymentPass;

- (void)_setRemoteVC:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (int)modalPresentationStyle;
- (int)modalTransitionStyle;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldAutorotate;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;

@end
