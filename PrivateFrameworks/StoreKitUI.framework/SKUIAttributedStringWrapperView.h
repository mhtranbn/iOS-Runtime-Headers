/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView {
    SKUIAttributedStringView *_delegateView;
}

@property (nonatomic, readonly) SKUIAttributedStringView *delegateView;

- (void).cxx_destruct;
- (int)badgePlacement;
- (float)baselineOffset;
- (id)delegateView;
- (float)firstBaselineOffset;
- (int)firstLineTopInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)requiredBadges;
- (void)setBadgePlacement:(int)arg1;
- (void)setFirstLineTopInset:(int)arg1;
- (void)setLayout:(id)arg1;
- (void)setRequiredBadges:(id)arg1;
- (void)setStringTreatment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(BOOL)arg1;
- (void)setTreatmentColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)stringTreatment;
- (id)textColor;
- (BOOL)textColorFollowsTintColor;
- (id)treatmentColor;
- (BOOL)usesTallCharacterSet;

@end
