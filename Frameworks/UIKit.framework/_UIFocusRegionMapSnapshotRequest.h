/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusRegionMapSnapshotRequest : NSObject {
    BOOL _clipToSnapshotRect;
    unsigned int _focusHeading;
    UIView *_focusableRegionAncestorView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _focusedRect;
    BOOL _includeFocusContainerGuides;
    BOOL _includeFocusGuides;
    UIView *_rootView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _snapshotRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _viewSearchRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visualRepresentationMinimumArea;
}

@property (nonatomic) BOOL clipToSnapshotRect;
@property (nonatomic) unsigned int focusHeading;
@property (nonatomic) UIView *focusableRegionAncestorView;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } focusedRect;
@property (nonatomic) BOOL includeFocusContainerGuides;
@property (nonatomic) BOOL includeFocusGuides;
@property (nonatomic) UIView *rootView;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } snapshotRect;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } viewSearchRect;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visualRepresentationMinimumArea;

+ (id)requestWithRootView:(id)arg1;

- (void).cxx_destruct;
- (BOOL)clipToSnapshotRect;
- (unsigned int)focusHeading;
- (id)focusableRegionAncestorView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })focusedRect;
- (BOOL)includeFocusContainerGuides;
- (BOOL)includeFocusGuides;
- (id)initWithRootView:(id)arg1;
- (id)rootView;
- (void)setClipToSnapshotRect:(BOOL)arg1;
- (void)setFocusHeading:(unsigned int)arg1;
- (void)setFocusableRegionAncestorView:(id)arg1;
- (void)setFocusedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIncludeFocusContainerGuides:(BOOL)arg1;
- (void)setIncludeFocusGuides:(BOOL)arg1;
- (void)setRootView:(id)arg1;
- (void)setSnapshotRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setViewSearchRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setVisualRepresentationMinimumArea:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })snapshotRect;
- (id)takeSnapshot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })viewSearchRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visualRepresentationMinimumArea;

@end
