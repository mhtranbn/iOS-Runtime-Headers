/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPageControllerForTesting : AKPageController {
    AKController *_testingController;
    AKGeometryHelper *_testingGeometryHelper;
    AKLayerPresentationManager *_testingLayerPresentationManager;
    UIView *_testingOverlayView;
    unsigned int _testingPageIndex;
    AKPageModelController *_testingPageModelController;
}

@property (retain) AKController *testingController;
@property (retain) AKGeometryHelper *testingGeometryHelper;
@property (retain) AKLayerPresentationManager *testingLayerPresentationManager;
@property (retain) UIView *testingOverlayView;
@property unsigned int testingPageIndex;
@property (retain) AKPageModelController *testingPageModelController;

- (void).cxx_destruct;
- (id)controller;
- (struct CGPoint { float x1; float x2; })convertPointFromModelToOverlay:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointFromOverlayToModel:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectFromModelToOverlay:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRectFromOverlayToModel:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)geometryHelper;
- (id)init;
- (id)layerPresentationManager;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })maxPageRect;
- (float)modelBaseScaleFactor;
- (id)overlayView;
- (unsigned int)pageIndex;
- (id)pageModelController;
- (void)setTestingController:(id)arg1;
- (void)setTestingGeometryHelper:(id)arg1;
- (void)setTestingLayerPresentationManager:(id)arg1;
- (void)setTestingOverlayView:(id)arg1;
- (void)setTestingPageIndex:(unsigned int)arg1;
- (void)setTestingPageModelController:(id)arg1;
- (id)testingController;
- (id)testingGeometryHelper;
- (id)testingLayerPresentationManager;
- (id)testingOverlayView;
- (unsigned int)testingPageIndex;
- (id)testingPageModelController;

@end
