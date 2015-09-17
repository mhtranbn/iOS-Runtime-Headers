/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIRingsViewController : FIUIGLViewController <FIUIRingGroupAnimationStatusDelegate> {
    BOOL _buffersCreated;
    struct CGPoint { 
        float x; 
        float y; 
    } _cachedGroupCenter;
    float _cachedPointSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _cachedPosition;
    float _cachedThickness;
    unsigned int _color1Attribute;
    unsigned int _color2Attribute;
    unsigned int _coordPercentAttribute;
    unsigned int _coordPercentBuffer;
    unsigned int _coordinateAttribute;
    unsigned int _coordinateBuffer;
    BOOL _didSetup;
    unsigned int _endCapShadowDistanceUniform;
    unsigned int _flatColorProgram;
    unsigned int _iconSpriteColorAttribute;
    unsigned int _iconSpriteIconsPerDimensionUniform;
    UIImage *_iconSpriteImage;
    unsigned int _iconSpritePositionAttribute;
    unsigned int _iconSpriteProgram;
    unsigned int _iconSpriteSamplerUniform;
    unsigned int _iconSpriteSizeAttribute;
    GLKTextureInfo *_iconSpriteTexture;
    unsigned int _iconSpriteTextureOffsetAttribute;
    unsigned int _iconSpriteTransformUniform;
    unsigned int _iconSpriteVertexBuffer;
    struct { union _GLKVector2 { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; } x_1_1_2; float x_1_1_3[2]; } x1; float x2; float x3; union _GLKVector4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_4_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_4_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_4_1_3; float x_4_1_4[4]; } x4; union _GLKVector2 { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; float x_2_2_2; } x_5_1_2; float x_5_1_3[2]; } x5; } *_iconSpriteVertices;
    unsigned int _iconTextureColumns;
    unsigned int _iconTextureRows;
    BOOL _iconVAOinit;
    unsigned int _iconsVAO;
    int _numRingsPerGroup;
    unsigned int _percentagesAttribute;
    unsigned int _positionAttribute;
    unsigned int _positionBuffer;
    BOOL _prevRingsAreEmpty;
    union _GLKMatrix4 { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    } _projectionMatrix;
    unsigned int _ringEmptyProgram;
    unsigned int _ringEndCapProgram;
    NSArray *_ringGroups;
    int _ringGroupsPerRow;
    unsigned int _ringProgram;
    float _ringSpacing;
    BOOL _ringVAOinit;
    union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } *_ringVertexCoordinates;
    union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } *_ringVertexPositions;
    struct { union _GLKVector4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_1_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_1_1_3; float x_1_1_4[4]; } x1; union _GLKVector4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_2_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_2_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_2_1_3; float x_2_1_4[4]; } x2; union _GLKVector4 { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_3_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_3_1_2; struct { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_3_1_3; float x_3_1_4[4]; } x3; union _GLKVector2 { struct { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct { float x_2_2_1; float x_2_2_2; } x_4_1_2; float x_4_1_3[2]; } x4; union _GLKVector2 { struct { float x_1_2_1; float x_1_2_2; } x_5_1_1; struct { float x_2_2_1; float x_2_2_2; } x_5_1_2; float x_5_1_3[2]; } x5; } *_ringVertices;
    unsigned int _ringsVAO;
    float _screenScale;
    unsigned int _sizesAttribute;
    unsigned int _transformUniform;
    unsigned int _trigResultsAttribute;
}

@property (nonatomic, retain) UIImage *iconSpriteImage;
@property (nonatomic) unsigned int iconTextureColumns;
@property (nonatomic) unsigned int iconTextureRows;
@property (nonatomic, readonly) NSArray *ringGroups;
@property (nonatomic) int ringGroupsPerRow;
@property (nonatomic) float ringSpacing;

+ (id)_iconSpriteImage;
+ (id)_ringsViewControllerConfiguredForCompanionWithNumberOfRings:(int)arg1 ringType:(int)arg2;
+ (id)ringsViewControllerConfiguredForOneRingOnCompanionOfType:(int)arg1;
+ (id)ringsViewControllerConfiguredForThreeRingsOnCompanion;

- (void).cxx_destruct;
- (void)_context_createBuffers;
- (void)_context_loadFlatColorProgramIfNeeded;
- (void)_context_loadRingDataForGroupAtIndex:(int)arg1;
- (void)_context_loadRingEmptyProgramIfNeeded;
- (void)_context_loadUniformsAndAttributes;
- (void)_context_prepareForIconDraw;
- (void)_context_prepareForRingDraw:(BOOL)arg1;
- (void)_destroyBuffers;
- (void)_loadIconDataForGroupAtIndex:(int)arg1;
- (void)_setRingGroups:(id)arg1;
- (void)_setupIfNecessary;
- (void)_updateProjectionMatrix;
- (void)dealloc;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)iconSpriteImage;
- (unsigned int)iconTextureColumns;
- (unsigned int)iconTextureRows;
- (id)initWithRingGroups:(id)arg1 numberOfRingsPerGroup:(int)arg2;
- (void)ringGroupDidBeginAnimations:(id)arg1;
- (id)ringGroups;
- (int)ringGroupsPerRow;
- (float)ringSpacing;
- (void)setActiveEnergyPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setBriskPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setIconSpriteImage:(id)arg1;
- (void)setIconTextureColumns:(unsigned int)arg1;
- (void)setIconTextureRows:(unsigned int)arg1;
- (void)setMovingHoursPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setRingGroupsPerRow:(int)arg1;
- (void)setRingSpacing:(float)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)update;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
