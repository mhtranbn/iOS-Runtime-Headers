/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICalloutBarButton : UIButton {
    BOOL forceFlash;
    SEL m_action;
    float m_additionalContentHeight;
    BOOL m_configured;
    float m_contentScale;
    float m_contentWidth;
    float m_dividerOffset;
    BOOL m_dontDismiss;
    float m_imageVerticalAdjust;
    BOOL m_isText;
    BOOL m_padLeft;
    BOOL m_padRight;
    int m_page;
    int m_position;
    BOOL m_single;
    UITextReplacement *m_textReplacement;
    int m_type;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) float additionalContentHeight;
@property (nonatomic, readonly) float contentScale;
@property (nonatomic, readonly) float contentWidth;
@property (nonatomic) float dividerOffset;
@property (nonatomic) BOOL dontDismiss;
@property (nonatomic) BOOL forceFlash;
@property (nonatomic) float imageVerticalAdjust;
@property (nonatomic) int page;
@property (nonatomic, retain) UITextReplacement *textReplacement;
@property (nonatomic, readonly) int type;

+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(float)arg3 action:(SEL)arg4 type:(int)arg5 inView:(id)arg6;

- (void).cxx_destruct;
- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2;
- (SEL)action;
- (float)additionalContentHeight;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustRectForPosition:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 scaleRect:(BOOL)arg2;
- (void)cancelFlash;
- (void)configureForLeftPosition:(int)arg1;
- (void)configureForMiddlePosition;
- (void)configureForRightPosition:(int)arg1;
- (void)configureForSingle:(int)arg1;
- (void)configureLabel;
- (float)contentScale;
- (float)contentWidth;
- (void)dealloc;
- (float)dividerOffset;
- (BOOL)dontDismiss;
- (void)fadeAndSendAction;
- (void)flash;
- (BOOL)forceFlash;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)imageVerticalAdjust;
- (void)layoutSubviews;
- (int)page;
- (void)removeFromSuperview;
- (void)setContentScale:(float)arg1;
- (void)setDividerOffset:(float)arg1;
- (void)setDontDismiss:(BOOL)arg1;
- (void)setForceFlash:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImageVerticalAdjust:(float)arg1;
- (void)setPage:(int)arg1;
- (void)setTextReplacement:(id)arg1;
- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)setupWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(float)arg3 action:(SEL)arg4 type:(int)arg5;
- (id)textReplacement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)type;

@end
