/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface GeometricCutTools : NSObject

+ (id)boxInNormalizedSpace:(id)arg1 toImageSpaceWithSize:(struct CGSize { float x1; float x2; })arg2 plusPadding:(struct CGPoint { float x1; float x2; })arg3 destSize:(struct CGSize { float x1; float x2; }*)arg4;
+ (id)cleanTextDetectorOutput:(id)arg1;
+ (BOOL)derotateContentsOf:(id)arg1 inImage:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 andOutputTo:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg3 withPadding:(struct CGPoint { float x1; float x2; })arg4;
+ (id)findCorrectedBoundingBoxOfTextFeature:(id)arg1 inImageWithSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)geometricRecognitionOf:(id)arg1 inDerotatedRegion:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg2 withPadding:(struct CGPoint { float x1; float x2; })arg3 fromCorrectedBoundingBox:(id)arg4 inImageWithSize:(struct CGSize { float x1; float x2; })arg5 withNetwork:(struct CHNeuralNetwork { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; struct vector<std::__1::pair<int, int>, std::__1::allocator<std::__1::pair<int, int> > > { struct pair<int, int> {} *x_2_1_1; struct pair<int, int> {} *x_2_1_2; struct __compressed_pair<std::__1::pair<int, int> *, std::__1::allocator<std::__1::pair<int, int> > > { struct pair<int, int> {} *x_3_2_1; } x_2_1_3; } x2; struct set<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree_node<int, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<int, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<int> > { unsigned long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; struct set<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree_node<int, void *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<int, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::less<int> > { unsigned long x_3_3_1; } x_1_2_3; } x_4_1_1; } x4; bool x5; int x6; int x7; int x8; int x9; int x10; int x11; struct { /* ? */ } *x12; struct { /* ? */ } *x13; int x14; int x15; struct Matrix<short> {} *x16; short *x17; struct Matrix<short> {} *x18; short *x19; int *x20; struct Matrix<int> {} *x21; struct Matrix<int> {} *x22; struct Matrix<int> {} *x23; struct Matrix<int> {} *x24; struct vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_25_1_1; struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_25_1_2; struct __compressed_pair<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > *, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > > { struct vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > {} *x_3_2_1; } x_25_1_3; } x25; }*)arg6 invert:(BOOL)arg7;
+ (BOOL)isPointArrayARectangle:(id)arg1;
+ (id)stringByInjectingSpaces:(id)arg1 textFeatures:(id)arg2;

@end
