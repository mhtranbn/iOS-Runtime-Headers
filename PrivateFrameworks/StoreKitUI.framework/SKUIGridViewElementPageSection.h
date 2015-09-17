/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUICollectionDOMFeatureTargetting, SKUIGridViewElementPageSectionConfigurationDataSource> {
    IKColor *_backgroundColor;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    float _cellPaddingInteriorHorizontal;
    float _cellPaddingLeftEdgeHorizontal;
    float _cellPaddingRightEdgeHorizontal;
    SKUIGridViewElementPageSectionConfiguration *_configuration;
    BOOL _editing;
    NSArray *_indexPathsForBackgroundItems;
    int _lastNeedsMoreCount;
    NSArray *_viewElements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic, readonly) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_containsOnlyShelfElements;
- (void)_enumerateVisibleViewElementsUsingBlock:(id /* block */)arg1;
- (void)_reloadViewElementProperties;
- (void)_requestLayoutForCells;
- (void)_resetLayoutProperties;
- (void)_setContext:(id)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (int)applyUpdateType:(int)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)backgroundColorForSection;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;
- (BOOL)collectionViewShouldSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 visibleRange:(struct SKUIIndexPathRange { int x1; int x2; int x3; int x4; })arg2;
- (void)dealloc;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (id)indexPathsForBackgroundItems;
- (id)initWithPageComponent:(id)arg1;
- (BOOL)isEditing;
- (int)numberOfCells;
- (void)prefetchResourcesWithReason:(int)arg1;
- (id)previewViewControllerForIndexPath:(id)arg1;
- (BOOL)previewsSupportedForIndexPath:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (void)reloadVisibleCellsWithReason:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(int)arg2;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
