/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUOneUpTilingLayout : PUSectionedTilingLayout {
    struct CGSize { 
        float width; 
        float height; 
    } _bufferingIndicatorSize;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentGuideInsets;
    <PUOneUpTilingLayoutDelegate> *_delegate;
    struct { 
        BOOL respondsToAspectRatioForItemAtIndexPath; 
        BOOL respondsToBadgeSizeForItemAtIndexPath; 
        BOOL respondsToShouldShowPlayButtonForItemAtIndexPath; 
        BOOL respondsToShouldShowProgressIndicatorForItemAtIndexPath; 
        BOOL respondsToShouldShowBufferingIndicatorForItemAtIndexPath; 
        BOOL respondsToShouldShowLoadingIndicatorForItemAtIndexPath; 
        BOOL respondsToModelTileTransformForItemAtIndexPath; 
        BOOL respondsToScrollOffsetForItemAtIndexPath; 
        BOOL respondsToCanShowCommentsForItemAtIndexPath; 
        BOOL respondsToShouldShowCommentsForItemAtIndexPath; 
        BOOL respondsToShouldShowVideoPlaceholderForItemAtIndexPath; 
        BOOL respondsToDisableInitialZoomToFillForItemAtIndexPath; 
    } _delegateFlags;
    struct CGSize { 
        float width; 
        float height; 
    } _displaySizeForInsetMatching;
    NSIndexPath *_inFocusIndexPath;
    struct CGSize { 
        float width; 
        float height; 
    } _interpageSpacing;
    struct CGSize { 
        float width; 
        float height; 
    } _itemSize;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
    struct CGSize { 
        float width; 
        float height; 
    } _loadingIndicatorSize;
    NSIndexPath *_neighborIndexPath;
    PUParallaxComputer *_parallaxComputer;
    struct CGSize { 
        float width; 
        float height; 
    } _playButtonSize;
    struct CGSize { 
        float width; 
        float height; 
    } _progressIndicatorSize;
    BOOL _shouldPinContentToTop;
    float _tileContentMaximumInitialZoomToFillScale;
    float _transitionProgress;
    BOOL _useBackgroundTile;
    BOOL _useBadgeTiles;
    BOOL _useCommentsTiles;
    BOOL _useUserTransformTiles;
}

@property (nonatomic) struct CGSize { float x1; float x2; } bufferingIndicatorSize;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentGuideInsets;
@property (nonatomic) <PUOneUpTilingLayoutDelegate> *delegate;
@property (nonatomic) struct CGSize { float x1; float x2; } displaySizeForInsetMatching;
@property (nonatomic, readonly) NSIndexPath *indexPathOfCurrentItem;
@property (nonatomic) struct CGSize { float x1; float x2; } interpageSpacing;
@property (nonatomic) struct CGSize { float x1; float x2; } loadingIndicatorSize;
@property (nonatomic, retain) PUParallaxComputer *parallaxComputer;
@property (nonatomic) struct CGSize { float x1; float x2; } playButtonSize;
@property (nonatomic) struct CGSize { float x1; float x2; } progressIndicatorSize;
@property (nonatomic) BOOL shouldPinContentToTop;
@property (nonatomic) float tileContentMaximumInitialZoomToFillScale;
@property (nonatomic, readonly) float transitionProgress;
@property (nonatomic) BOOL useBackgroundTile;
@property (nonatomic) BOOL useBadgeTiles;
@property (nonatomic) BOOL useCommentsTiles;
@property (nonatomic) BOOL useUserTransformTiles;

+ (id)centerTileKinds;
+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)_areCommentsVisibleForItemAtIndexPath:(id)arg1;
- (struct CGPoint { float x1; float x2; })_contentOffsetForItemAtIndexPath:(id)arg1;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1 pageSize:(struct CGSize { float x1; float x2; })arg2 secondaryDisplayTransform:(id)arg3;
- (void)_getLayoutRect:(out struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 transform:(out struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg2 shouldIncludeBottomOffset:(BOOL)arg3 forContentOfItemAtIndexPath:(id)arg4;
- (id)_indexPathOfItemClosestToAbscissa:(float)arg1;
- (BOOL)_isVideoPlacholderVisibleForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })_itemSize;
- (float)_minimumBottomContentInsetsForItemAtIndexPath:(id)arg1;
- (float)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(float)arg2 outNeighbor:(out id*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pageRectForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_untransformedRectForItemAtIndexPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_untransformedRectForItemAtIndexPath:(id)arg1 pageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 section:(int)arg2 toSet:(id)arg3;
- (struct CGSize { float x1; float x2; })bufferingIndicatorSize;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentGuideInsets;
- (id)delegate;
- (struct CGSize { float x1; float x2; })displaySizeForInsetMatching;
- (struct CGSize { float x1; float x2; })estimatedSectionSize;
- (id)indexPathOfCurrentItem;
- (id)init;
- (struct CGSize { float x1; float x2; })interpageSpacing;
- (void)invalidateBadgeSizeForItemAtIndexPath:(id)arg1;
- (void)invalidateCommentsForItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateModelTileTransformForItemAtIndexPath:(id)arg1;
- (void)invalidateVideoPlaceholderForItemAtIndexPath:(id)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (struct CGSize { float x1; float x2; })loadingIndicatorSize;
- (id)parallaxComputer;
- (struct CGSize { float x1; float x2; })playButtonSize;
- (id)preferredScrollInfo;
- (void)prepareLayout;
- (struct CGSize { float x1; float x2; })progressIndicatorSize;
- (void)setBufferingIndicatorSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentGuideInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaySizeForInsetMatching:(struct CGSize { float x1; float x2; })arg1;
- (void)setInterpageSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)setLoadingIndicatorSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setParallaxComputer:(id)arg1;
- (void)setPlayButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setProgressIndicatorSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShouldPinContentToTop:(BOOL)arg1;
- (void)setTileContentMaximumInitialZoomToFillScale:(float)arg1;
- (void)setUseBackgroundTile:(BOOL)arg1;
- (void)setUseBadgeTiles:(BOOL)arg1;
- (void)setUseCommentsTiles:(BOOL)arg1;
- (void)setUseUserTransformTiles:(BOOL)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldPinContentToTop;
- (struct CGSize { float x1; float x2; })sizeForSection:(int)arg1 numberOfItems:(int)arg2;
- (float)tileContentMaximumInitialZoomToFillScale;
- (float)transitionProgress;
- (BOOL)useBackgroundTile;
- (BOOL)useBadgeTiles;
- (BOOL)useCommentsTiles;
- (BOOL)useUserTransformTiles;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectForItemAtIndexPath:(id)arg1 transitionProgress:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(int)arg2;

@end
