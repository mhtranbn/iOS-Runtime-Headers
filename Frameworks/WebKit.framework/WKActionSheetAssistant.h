/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKActionSheetAssistant : NSObject <DDDetectionControllerInteractionDelegate, WKActionSheetDelegate> {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<WKActionSheetAssistantDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<WKActionSheetAssistantDelegate> > { 
        id m_weakReference; 
    } _delegate;
    struct RetainPtr<_WKActivatedElementInfo> { 
        void *m_ptr; 
    } _elementInfo;
    struct RetainPtr<WKActionSheet> { 
        void *m_ptr; 
    } _interactionSheet;
    UIView *_view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKActionSheetAssistantDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_presentationRectForSheetGivenPoint:(struct CGPoint { float x1; float x2; })arg1 inHostView:(id)arg2;
- (void)cleanupSheet;
- (void)dealloc;
- (struct RetainPtr<NSArray> { void *x1; })defaultActionsForImageSheet:(id)arg1;
- (struct RetainPtr<NSArray> { void *x1; })defaultActionsForLinkSheet:(id)arg1;
- (id)delegate;
- (id)hostViewForSheet;
- (id)initWithView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialPresentationRectInHostViewForSheet;
- (BOOL)isShowingSheet;
- (BOOL)presentSheet;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })presentationRectInHostViewForSheet;
- (void)setDelegate:(id)arg1;
- (void)showDataDetectorsSheet;
- (void)showImageSheet;
- (void)showLinkSheet;
- (id)superviewForSheet;
- (void)updatePositionInformation;
- (void)updateSheetPosition;

@end
