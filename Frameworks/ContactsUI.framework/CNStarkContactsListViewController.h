/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNStarkContactsListViewController : CNContactListViewController <CNContactContentViewControllerDelegate, CNContactListViewControllerDelegate> {
    AVExternalDevice *_externalDevice;
    BOOL _limitedUI;
    CNStarkNoContentBannerView *_overlayView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVExternalDevice *externalDevice;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL limitedUI;
@property (nonatomic, retain) CNStarkNoContentBannerView *overlayView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)contactListViewController:(id)arg1 canSelectContact:(id)arg2;
- (void)contactListViewController:(id)arg1 didSelectContact:(id)arg2;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (void)dealloc;
- (id)externalDevice;
- (id)init;
- (id)initWithStyle:(int)arg1;
- (BOOL)limitedUI;
- (void)limitedUINotification:(id)arg1;
- (id)overlayView;
- (void)postMessageOverlayIfNecessary;
- (void)setExternalDevice:(id)arg1;
- (void)setLimitedUI:(BOOL)arg1;
- (void)setOverlayView:(id)arg1;
- (void)updateLimitedUI;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
