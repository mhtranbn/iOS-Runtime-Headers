/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKLabel : UILabel <GKTextStyleReplay> {
    float _actualFontShrinkageFactor;
    GKTextStyle *_appliedStyle;
    GKTextStyle *_baseStyle;
    BOOL _shouldEnforcePreferredWidth;
    BOOL _shouldInhibitReplay;
    BOOL _usingAttributedText;
}

@property (nonatomic) float actualFontShrinkageFactor;
@property (nonatomic, retain) GKTextStyle *appliedStyle;
@property (nonatomic, retain) GKTextStyle *baseStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldEnforcePreferredWidth;
@property (nonatomic) BOOL shouldInhibitReplay;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL usingAttributedText;

+ (void)initialize;

- (float)actualFontShrinkageFactor;
- (id)appliedStyle;
- (void)applyTextStyle:(id)arg1;
- (id)baseStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)replayAndApplyStyleUnlessInhibited;
- (void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1;
- (void)setActualFontShrinkageFactor:(float)arg1;
- (void)setAppliedStyle:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setBaseStyle:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShouldEnforcePreferredWidth:(BOOL)arg1;
- (void)setShouldInhibitReplay:(BOOL)arg1;
- (void)setText:(id)arg1;
- (BOOL)shouldEnforcePreferredWidth;
- (BOOL)shouldInhibitReplay;
- (struct CGSize { float x1; float x2; })shrinkFontToFitSize:(struct CGSize { float x1; float x2; })arg1;
- (void)shrinkFontToFitWidth;
- (void)updateConstraints;
- (BOOL)usingAttributedText;

@end
