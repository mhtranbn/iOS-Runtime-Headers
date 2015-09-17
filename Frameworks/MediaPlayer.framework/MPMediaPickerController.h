/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaPickerController : UIViewController {
    BOOL _allowsPickingMultipleItems;
    _UIAsyncInvocation *_cancelRequest;
    <MPMediaPickerControllerDelegate> *_delegate;
    unsigned int _mediaTypes;
    id _modalContext;
    NSString *_prompt;
    MPRemoteMediaPickerController *_remoteViewController;
    BOOL _showsCloudItems;
}

@property (nonatomic) BOOL allowsPickingMultipleItems;
@property (nonatomic) <MPMediaPickerControllerDelegate> *delegate;
@property (nonatomic, readonly) unsigned int mediaTypes;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic) BOOL showsCloudItems;

+ (void)preheatMediaPicker;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_forceDismissal;
- (BOOL)_hasAddedRemoteView;
- (void)_pickerDidCancel;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_requestRemoteViewController;
- (void)_resetRemoteViewController;
- (void)_sendSettingsToService;
- (id)_serviceViewControllerProxy;
- (BOOL)allowsPickingMultipleItems;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaTypes:(unsigned int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned int)mediaTypes;
- (id)prompt;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)setAllowsPickingMultipleItems:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setShowsCloudItems:(BOOL)arg1;
- (BOOL)showsCloudItems;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
