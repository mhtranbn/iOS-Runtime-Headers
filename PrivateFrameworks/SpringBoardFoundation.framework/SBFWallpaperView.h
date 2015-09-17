/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFWallpaperView : UIView <SBFLegibilitySettingsProvider, _UISettingsKeyObserver> {
    NSTimer *_colorSampleTimer;
    float _contentScaleFactor;
    UIView *_contentView;
    BOOL _continuousColorSamplingEnabled;
    <SBFLegibilitySettingsProviderDelegate> *_delegate;
    int _disallowRasterizationBlockCount;
    BOOL _generatingBlurredImages;
    <SBFWallpaperViewInternalObserver> *_internalObserver;
    UIColor *_lastAverageColor;
    _UILegibilitySettings *_legibilitySettings;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    BOOL _parallaxEnabled;
    float _parallaxFactor;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    UIView *_parallaxView;
    BOOL _rotating;
    BOOL _shouldGenerateBlurredImagesWhenVisible;
    int _variant;
    BOOL _wallpaperAnimationEnabled;
    SBFWallpaperSettings *_wallpaperSettings;
    BOOL _wantsRasterization;
    float _zoomFactor;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) BOOL continuousColorSamplingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFLegibilitySettingsProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <SBFWallpaperViewInternalObserver> *internalObserver;
@property (nonatomic, readonly, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) BOOL needsImmediateLayoutBeforeRotation;
@property (nonatomic) BOOL parallaxEnabled;
@property (nonatomic) float parallaxFactor;
@property (getter=isRotating, nonatomic) BOOL rotating;
@property (readonly) Class superclass;
@property (nonatomic) int variant;
@property (nonatomic) BOOL wallpaperAnimationEnabled;
@property (nonatomic, readonly) UIImage *wallpaperImage;
@property (nonatomic) float zoomFactor;

+ (BOOL)_allowsParallax;
+ (BOOL)_allowsRasterization;
+ (BOOL)_shouldScaleForParallax;

- (void)_addParallax;
- (void)_applyParallaxSettings;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 smudgeRadius:(float)arg2;
- (void)_beginDisallowRasterizationBlock;
- (id)_blurReplacementImage;
- (id)_blurredImage;
- (id)_computeAverageColor;
- (id)_displayedImage;
- (void)_endDisallowRasterizationBlock;
- (void)_handleVariantChange;
- (void)_handleVisibilityChange;
- (id)_imageForBackdropParameters:(struct { int x1; int x2; int x3; float x4; float x5; })arg1 includeTint:(BOOL)arg2;
- (BOOL)_isVisible;
- (void)_notifyBlursInvalidated;
- (void)_notifyGeometryInvalidated;
- (id)_primaryColorOverride;
- (void)_removeParallax;
- (void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2;
- (void)_startGeneratingBlurredImages;
- (void)_stopGeneratingBlurredImages;
- (void)_updateContentViewScale;
- (void)_updateGeneratingBlurs;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(BOOL)arg2;
- (void)_updateParallaxSettings;
- (void)_updateRasterizationState;
- (void)_updateScaleFactor;
- (id)_wallpaperName;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withSmudgeRadius:(float)arg2;
- (id)blurredImage;
- (float)contentScaleFactor;
- (id)contentView;
- (BOOL)continuousColorSamplingEnabled;
- (float)contrast;
- (float)contrastInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)contrastInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contrastWithinBoxes:(float*)arg2 contrastBetweenBoxes:(float*)arg3;
- (BOOL)contrastRequiresGradient;
- (BOOL)contrastRequiresTreatments;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (float)cropZoomScale;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (id)imageForBackdropParameters:(struct { int x1; int x2; int x3; float x4; float x5; })arg1 includeTint:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 variant:(int)arg2;
- (id)internalObserver;
- (void)invalidate;
- (BOOL)isDisplayingWallpaper:(id)arg1 forVariant:(int)arg2 options:(id)arg3;
- (BOOL)isRotating;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (void)legibilitySettingsDidChange;
- (BOOL)luminanceInRectRequiresTreatments:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)needsImmediateLayoutBeforeRotation;
- (BOOL)parallaxEnabled;
- (float)parallaxFactor;
- (void)prepareToAppear;
- (void)prepareToDisappear;
- (void)setContentView:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContinuousColorSamplingEnabled:(BOOL)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGeneratesBlurredImages:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setInternalObserver:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setParallaxEnabled:(BOOL)arg1;
- (void)setParallaxFactor:(float)arg1;
- (void)setRotating:(BOOL)arg1;
- (void)setVariant:(int)arg1;
- (void)setVariant:(int)arg1 withAnimationFactory:(id)arg2;
- (void)setVariant:(int)arg1 withAnimationFactory:(id)arg2 forced:(BOOL)arg3;
- (void)setWallpaperAnimationEnabled:(BOOL)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)snapshotImage;
- (BOOL)supportsCropping;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (int)variant;
- (BOOL)wallpaperAnimationEnabled;
- (id)wallpaperImage;
- (BOOL)wantsRasterization;
- (float)zoomFactor;

@end
