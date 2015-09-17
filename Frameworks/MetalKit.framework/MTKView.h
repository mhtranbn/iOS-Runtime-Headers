/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKView : UIView <NSCoding> {
    BOOL _autoResizeDrawable;
    struct { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    } _clearColor;
    double _clearDepth;
    unsigned int _clearStencil;
    unsigned int _colorPixelFormat;
    <CAMetalDrawable> *_currentDrawable;
    <MTKViewDelegate> *_delegate;
    unsigned int _depthStencilPixelFormat;
    <MTLTexture> *_depthStencilTexture;
    <MTLDevice> *_device;
    BOOL _deviceReset;
    CADisplayLink *_displayLink;
    int (*_drawRectSubIMP;
    struct CGSize { 
        float width; 
        float height; 
    } _drawableScaleFactor;
    struct CGSize { 
        float width; 
        float height; 
    } _drawableSize;
    BOOL _enableSetNeedsDisplay;
    int _frameInterval;
    CAMetalLayer *_metalLayer;
    <MTLTexture> *_multisampleColorTexture;
    int _nominalFramesPerSecond;
    BOOL _paused;
    BOOL _pausedOnBackgrounding;
    int _preferredFramesPerSecond;
    unsigned int _sampleCount;
    BOOL _sizeDirty;
    BOOL _subClassOverridesDrawRect;
}

@property (nonatomic) BOOL autoResizeDrawable;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } clearColor;
@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned int clearStencil;
@property (nonatomic) unsigned int colorPixelFormat;
@property (nonatomic, readonly) <CAMetalDrawable> *currentDrawable;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (nonatomic) <MTKViewDelegate> *delegate;
@property (nonatomic) unsigned int depthStencilPixelFormat;
@property (nonatomic, readonly) <MTLTexture> *depthStencilTexture;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic) struct CGSize { float x1; float x2; } drawableSize;
@property (nonatomic) BOOL enableSetNeedsDisplay;
@property (nonatomic) BOOL framebufferOnly;
@property (nonatomic, readonly) <MTLTexture> *multisampleColorTexture;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (nonatomic) int preferredFramesPerSecond;
@property (nonatomic) BOOL presentsWithTransaction;
@property (nonatomic) unsigned int sampleCount;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (int)_calculateRefeshesPerSecond;
- (BOOL)_canDrawContent;
- (BOOL)_controlsOwnScaleFactor;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (struct CGSize { float x1; float x2; })_pixelSizeFromPointSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_resizeDrawable;
- (BOOL)autoResizeDrawable;
- (struct { double x1; double x2; double x3; double x4; })clearColor;
- (double)clearDepth;
- (unsigned int)clearStencil;
- (unsigned int)colorPixelFormat;
- (id)currentDrawable;
- (id)currentRenderPassDescriptor;
- (void)dealloc;
- (id)delegate;
- (unsigned int)depthStencilPixelFormat;
- (id)depthStencilTexture;
- (id)device;
- (void)displayLayer:(id)arg1;
- (void)draw;
- (struct CGSize { float x1; float x2; })drawableSize;
- (BOOL)enableSetNeedsDisplay;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)framebufferOnly;
- (void)initCommon;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 device:(id)arg2;
- (BOOL)isPaused;
- (void)layoutSubviews;
- (id)multisampleColorTexture;
- (int)nominalFramesPerSecond;
- (int)preferredFramesPerSecond;
- (BOOL)presentsWithTransaction;
- (void)releaseDrawables;
- (unsigned int)sampleCount;
- (void)setAutoResizeDrawable:(BOOL)arg1;
- (void)setClearColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setClearDepth:(double)arg1;
- (void)setClearStencil:(unsigned int)arg1;
- (void)setColorPixelFormat:(unsigned int)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthStencilPixelFormat:(unsigned int)arg1;
- (void)setDevice:(id)arg1;
- (void)setDrawableSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setEnableSetNeedsDisplay:(BOOL)arg1;
- (void)setFramebufferOnly:(BOOL)arg1;
- (void)setNominalFramesPerSecond:(int)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setPreferredFramesPerSecond:(int)arg1;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (void)setSampleCount:(unsigned int)arg1;

@end
