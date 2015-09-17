/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIChildAccountCreationController : NSObject <RUIObjectModelDelegate> {
    NSHTTPURLResponse *_currentResponse;
    <AAUIChildAccountCreationDelegate> *_delegate;
    AAGrandSlamSigner *_grandSlamSigner;
    BOOL _isPendingDismissal;
    BOOL _isShowingSpinner;
    NSURL *_launchingURL;
    RUILoader *_loader;
    UINavigationController *_navigationController;
    UINavigationItem *_navigationItemShowingSpinner;
    NSMutableArray *_objectModels;
    NSArray *_originalEnabledToolbarItems;
    UIBarButtonItem *_originalRightBarButtonItem;
    UIToolbar *_originalToolbar;
    NSArray *_originalToolbarItems;
    AASetupAssistantService *_setupService;
    UIActivityIndicatorView *_spinnerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIChildAccountCreationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) UINavigationController *navigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_cancel;
- (void)_cleanupRemoteUILoader;
- (void)_createChildAccount;
- (void)_displayConnectionErrorAndCancel;
- (void)_hideActivitySpinner;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (BOOL)_pressedLink:(id)arg1 comesFromBarButtonItem:(id)arg2 objectModel:(id)arg3;
- (void)_renewCredentialsWithCompletionHandler:(id /* block */)arg1;
- (void)_sendUserToiTunesSettings;
- (void)_showActivitySpinnerInNavigationBar;
- (void)_showActivitySpinnerInToolbar:(id)arg1;
- (id)_spinnerView;
- (void)_startRemoteUILoaderWithRequest:(id)arg1;
- (id)delegate;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void)loadRemoteUI;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (id)navigationController;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (unsigned int)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;

@end
