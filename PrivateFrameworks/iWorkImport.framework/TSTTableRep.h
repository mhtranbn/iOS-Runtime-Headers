/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableRep : TSWPTextHostRep <UITextFieldDelegate> {
    BOOL _settingSelection;
    <TSTTableAnimationController> *mAnimationController;
    NSMutableArray *mAnimationStack;
    <TSTCanvasReferenceController> *mCanvasReferenceController;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mCanvasVisibleRect;
    TSTSelectionDragController *mCellDragController;
    CAShapeLayer *mCellEditingMaskLayer;
    NSMutableDictionary *mChildTextReps;
    TSTTableCellTextEditingRep *mContainedTextEditingRep;
    float mCurrentScreenScale;
    <TSTTableRepDelegate> *mDelegate;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mDirtyCellRange;
    BOOL mDragByHandleOnly;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mEditingHyperlinkCellID;
    CAShapeLayer *mFindSelectionHighlightLayer;
    CAShapeLayer *mHighlightedHyperlinkLayer;
    TSWPHyperlinkField *mHyperlinkField;
    BOOL mHyperlinkModified;
    TSWPStorage *mHyperlinkParentStorage;
    BOOL mInspectingHyperlinkInEditingStorage;
    BOOL mIsAspectOperationInProgress;
    BOOL mIsZoomOperationInProgress;
    BOOL mIsZoomToEditOperationInProgress;
    struct { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    } mRatingsDragCellID;
    BOOL mRecursivelyDrawingInContext;
    TSTTableReferences *mReferences;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mSearchSelectionBounds;
    BOOL mSelectionUsesBezierPath;
    BOOL mSelectsCellOnInitialTap;
    TSTCellSelection *mSourceFillSelection;
    <TSTTableChromeProvider> *mTableChrome;
    CALayer *mTableCollaboratorCursorLayer;
    BOOL mTableNameValid;
    TSTCellSelection *mTargetFillSelection;
    BOOL mUsesWholeChromeResizer;
    NSSet *mVisibleFillKnobs;
    TSDKnobTracker<TSTTableKnobTrackerVisitorProtocol> *mVisitorKnobTracker;
    BOOL mWPEndedTableNameEditing;
    struct TSUColumnRowRect { 
        struct { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } origin; 
        struct { 
            unsigned short numberOfColumns; 
            unsigned short numberOfRows; 
        } size; 
    } mZoomToEditVisibleCellRange;
}

@property (nonatomic, retain) TSTSearchReference *activeSearchReference;
@property (nonatomic) <TSTTableAnimationController> *animationController;
@property (nonatomic, readonly) <TSTCanvasReferenceController> *canvasReferenceController;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } canvasVisibleRect;
@property (nonatomic) TSTSelectionDragController *cellDragController;
@property (nonatomic, retain) NSMutableDictionary *childTextReps;
@property (nonatomic, readonly) TSTAnimation *currentAnimation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <TSTTableRepDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isZoomToEditOperationInProgress;
@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
@property (nonatomic) struct { unsigned short x1; unsigned char x2; unsigned char x3; } ratingsDragCellID;
@property (nonatomic, readonly) TSTCellSelection *selection;
@property (nonatomic, readonly) int selectionType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <TSTTableChromeProvider> *tableChrome;
@property (nonatomic, readonly) TSTTableInfo *tableInfo;
@property (nonatomic, readonly) TSTLayout *tableLayout;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (getter=isTableNameValid, nonatomic) BOOL tableNameValid;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformFromCanvas;
@property (nonatomic, readonly) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformToCanvas;

+ (float)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (unsigned int)p_countOfIdenticalCellsBetweenOutgoingTableModel:(id)arg1 incomingTableModel:(id)arg2;
+ (Class)tableRepDelegateClass;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (id)animationController;
- (void)asyncPostTextChangedInRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForCellSelection:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (BOOL)canDrawInBackgroundDuringScroll;
- (BOOL)canDrawInParallel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })canvasBoundsForCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (id)canvasReferenceController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })canvasVisibleRect;
- (id)cellDragController;
- (id)childReps;
- (id)childTextReps;
- (void)contentsRectForCellRangeAcrossSpaces:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 contentsCenterInfo:(struct { BOOL x1; float x2; float x3; float x4; float x5; float x6; float x7; }*)arg2 canvasFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 contentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)currentAnimation;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deviceBoundsForCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1;
- (void)didDrawCellImageFill:(id)arg1 inCellRange:(struct TSUColumnRowRect { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)editorSelection;
- (id)hitRep:(struct CGPoint { float x1; float x2; })arg1;
- (id)hitRepChrome:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateEditingCell;
- (void)invalidateFrozenHeaders;
- (BOOL)isDraggable;
- (BOOL)isFullyVisibleWithBorder:(int)arg1;
- (BOOL)isTableNameValid;
- (BOOL)isZoomToEditOperationInProgress;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layerFrameInScaledCanvas;
- (void)layoutInRootChangedFrom:(id)arg1 to:(id)arg2 translatedOnly:(BOOL)arg3;
- (id)masterLayout;
- (BOOL)mustDrawOnMainThreadForInteractiveCanvas;
- (void)orientationDidChange:(id)arg1;
- (id)overlayLayers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_alignedLayerFrameForLayoutSpace:(id)arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (BOOL)p_shouldPerformOnChildTextReps:(SEL)arg1;
- (id)p_textImageForPath:(struct CGPath { }*)arg1 shouldPulsate:(BOOL)arg2;
- (void)popAnimation;
- (void)pushAnimation:(id)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })ratingsDragCellID;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2;
- (id)repForDragging;
- (void)screenScaleDidChange;
- (id)selection;
- (int)selectionType;
- (void)setAnimationController:(id)arg1;
- (void)setCellDragController:(id)arg1;
- (void)setChildTextReps:(id)arg1;
- (void)setRatingsDragCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setTableNameValid:(BOOL)arg1;
- (void)setTextureStage:(unsigned int)arg1;
- (id)tableChrome;
- (id)tableInfo;
- (id)tableLayout;
- (id)tableModel;
- (id)textureForContext:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformFromCanvas;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToCanvas;
- (void)updateChildrenFromLayout;
- (void)updateDynamicModeForEditingSpillText;
- (void)updateFromLayout;
- (void)validateFrozenHeaderColumns;
- (void)validateFrozenHeaderCorner;
- (void)validateFrozenHeaderRows;
- (void)validateFrozenHeaderTableBodyMask;
- (void)validateStrokesInEditingSpillingTextRange;
- (void)validateVisibleRect;
- (void)viewScaleDidChange;
- (void)willBeRemoved;
- (void)willUpdateLayer:(id)arg1;

@end
