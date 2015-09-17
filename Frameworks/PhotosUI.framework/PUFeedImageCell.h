/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedImageCell : PUFeedCell {
    UIImageView *__centerOverlayImageView;
    UIButton *__commentButton;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } __imageFrame;
    int __imageTag;
    UIImageView *__imageView;
    UIView<PLVideoOverlayButton> *__overlayPlayButton;
    PUImageViewExtraction *__overlayPlayButtonBackgroundExtraction;
    UIImageView *__overlayPlayButtonBackgroundImageView;
    PLPhotoTileBadgeView *__photoIrisBadgeView;
    BOOL __shouldHideCenterOverlayImageView;
    BOOL __shouldHideCommentButton;
    BOOL __shouldHideOverlayPlayButton;
    BOOL __shouldUpdateOverlayPlayButtonBackground;
    int _commentCount;
    UIImage *_image;
    int _imageAlignment;
    int _imageContentMode;
    BOOL _imageHidden;
    struct CGSize { 
        float width; 
        float height; 
    } _maximumImageSize;
    int _overlayOptions;
}

@property (setter=_setCenterOverlayImageView:, nonatomic, retain) UIImageView *_centerOverlayImageView;
@property (setter=_setCommentButton:, nonatomic, retain) UIButton *_commentButton;
@property (setter=_setImageFrame:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _imageFrame;
@property (setter=_setImageTag:, nonatomic) int _imageTag;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (setter=_setOverlayPlayButton:, nonatomic, retain) UIView<PLVideoOverlayButton> *_overlayPlayButton;
@property (setter=_setOverlayPlayButtonBackgroundExtraction:, nonatomic, retain) PUImageViewExtraction *_overlayPlayButtonBackgroundExtraction;
@property (setter=_setOverlayPlayButtonBackgroundImageView:, nonatomic, retain) UIImageView *_overlayPlayButtonBackgroundImageView;
@property (setter=_setPhotoIrisBadgeView:, nonatomic, retain) PLPhotoTileBadgeView *_photoIrisBadgeView;
@property (setter=_setShouldHideCenterOverlayImageView:, nonatomic) BOOL _shouldHideCenterOverlayImageView;
@property (setter=_setShouldHideCommentButton:, nonatomic) BOOL _shouldHideCommentButton;
@property (setter=_setShouldHideOverlayPlayButton:, nonatomic) BOOL _shouldHideOverlayPlayButton;
@property (setter=_setShouldUpdateOverlayPlayButtonBackground:, nonatomic) BOOL _shouldUpdateOverlayPlayButtonBackground;
@property (nonatomic) int commentCount;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) int imageAlignment;
@property (nonatomic) int imageContentMode;
@property (getter=isImageHidden, nonatomic) BOOL imageHidden;
@property (nonatomic) struct CGSize { float x1; float x2; } maximumImageSize;
@property (nonatomic) int overlayOptions;

+ (Class)_contentViewClass;

- (void).cxx_destruct;
- (id)_centerOverlayImageView;
- (id)_commentButton;
- (void)_handleCommentButton:(id)arg1;
- (void)_handlePlayButton:(id)arg1;
- (id)_imageCellDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageFrame;
- (int)_imageTag;
- (id)_imageView;
- (void)_invalidateOverlayPlayButtonBackground;
- (void)_layoutImageView;
- (id)_overlayPlayButton;
- (id)_overlayPlayButtonBackgroundExtraction;
- (id)_overlayPlayButtonBackgroundImageView;
- (id)_photoIrisBadgeView;
- (void)_setCenterOverlayImageView:(id)arg1;
- (void)_setCommentButton:(id)arg1;
- (void)_setImageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setImageTag:(int)arg1;
- (void)_setImageView:(id)arg1;
- (void)_setOverlayPlayButton:(id)arg1;
- (void)_setOverlayPlayButtonBackgroundExtraction:(id)arg1;
- (void)_setOverlayPlayButtonBackgroundImageView:(id)arg1;
- (void)_setPhotoIrisBadgeView:(id)arg1;
- (void)_setShouldHideCenterOverlayImageView:(BOOL)arg1;
- (void)_setShouldHideCommentButton:(BOOL)arg1;
- (void)_setShouldHideOverlayPlayButton:(BOOL)arg1;
- (void)_setShouldUpdateOverlayPlayButtonBackground:(BOOL)arg1;
- (BOOL)_shouldHideCenterOverlayImageView;
- (BOOL)_shouldHideCommentButton;
- (BOOL)_shouldHideOverlayPlayButton;
- (BOOL)_shouldUpdateOverlayPlayButtonBackground;
- (void)_updateCommentButton;
- (void)_updateOverlays;
- (int)commentCount;
- (id)image;
- (int)imageAlignment;
- (int)imageContentMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isImageHidden;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })maximumImageSize;
- (int)overlayOptions;
- (void)prepareForReuse;
- (void)setCommentCount:(int)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 withTag:(int)arg2;
- (void)setImageAlignment:(int)arg1;
- (void)setImageContentMode:(int)arg1;
- (void)setImageHidden:(BOOL)arg1;
- (void)setMaximumImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setOverlayOptions:(int)arg1;
- (void)setParallaxOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
