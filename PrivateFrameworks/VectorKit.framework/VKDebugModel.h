/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDebugModel : VKModelObject <VKMapLayer> {
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _debugLinesRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> > { 
        struct __compressed_pair<ggl::RenderState *, std::__1::default_delete<ggl::RenderState> > { 
            struct RenderState {} *__first_; 
        } __ptr_; 
    } _debugPointsRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::DebugPoints::Shader::Setup> > > { 
            struct FragmentedPool<ggl::DebugPoints::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _debugPointsShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::RenderItem> *, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > > { 
            struct FragmentedPool<ggl::RenderItem> {} *__first_; 
        } __ptr_; 
    } _debugRenderItemPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > { 
        struct __compressed_pair<ggl::FragmentedPool<ggl::Debug::Shader::Setup> *, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > > { 
            struct FragmentedPool<ggl::Debug::Shader::Setup> {} *__first_; 
        } __ptr_; 
    } _debugShaderSetupPool;
    float _fontSize;
    BOOL _geocentric;
    BOOL _needsReset;
    struct shared_ptr<ggl::Debug::BaseMesh> { 
        struct BaseMesh {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } _unitRectMesh;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL geocentric;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendDebugTileCommandsToBuffer:(struct CommandBuffer { int (**x1)(); char *x2; unsigned char x3; struct RenderQueue {} *x4; struct ClearItem {} *x5; struct vector<ggl::RenderItem *, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_6_1_1; struct RenderItem {} **x_6_1_2; struct __compressed_pair<ggl::RenderItem **, std::__1::allocator<ggl::RenderItem *> > { struct RenderItem {} **x_3_2_1; } x_6_1_3; } x6; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_7_1_1; struct Texture2DLoadItem {} *x_7_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_7_1_3; } x7; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_8_1_1; struct BufferLoadItem {} *x_8_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_8_1_3; } x8; struct deque<geo::fast_shared_ptr<ggl::QueryItem>, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { struct __split_buffer<geo::fast_shared_ptr<ggl::QueryItem> *, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_1; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_2; struct fast_shared_ptr<ggl::QueryItem> {} **x_1_2_3; struct __compressed_pair<geo::fast_shared_ptr<ggl::QueryItem> **, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> *> > { struct fast_shared_ptr<ggl::QueryItem> {} **x_4_3_1; } x_1_2_4; } x_9_1_1; unsigned int x_9_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<geo::fast_shared_ptr<ggl::QueryItem> > > { unsigned long x_3_2_1; } x_9_1_3; } x9; struct deque<ggl::PendingQuery, std::__1::allocator<ggl::PendingQuery> > { struct __split_buffer<ggl::PendingQuery *, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_1_2_1; struct PendingQuery {} **x_1_2_2; struct PendingQuery {} **x_1_2_3; struct __compressed_pair<ggl::PendingQuery **, std::__1::allocator<ggl::PendingQuery *> > { struct PendingQuery {} **x_4_3_1; } x_1_2_4; } x_10_1_1; unsigned int x_10_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<ggl::PendingQuery> > { unsigned long x_3_2_1; } x_10_1_3; } x10; id x11; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; int x19; void*x20; void*x21; void*x22; void*x23; void*x24; float x25; void*x26; long x27; void*x28; out void*x29; void*x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; void*x38; void*x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; struct x50; void*x51; void*x52; void*x53; float x54; void*x55; long x56; void*x57; out void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void* x79[ /* ? */ ]; void*x80; void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; }*)arg1 forMapTile:(id)arg2 fromLayer:(unsigned long long)arg3 withContext:(id)arg4 withConsole:(struct DebugConsole { int (**x1)(); struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; struct Matrix<float, 2, 1> { float x_3_1_1[2]; } x3; struct Matrix<float, 2, 1> { float x_4_1_1[2]; } x4; struct Matrix<float, 2, 1> { float x_5_1_1[2]; } x5; unsigned int x6; struct RenderItem {} *x7; struct unique_ptr<ggl::DataWrite<ggl::ColoredText::My>, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::My> > > { struct __compressed_pair<ggl::DataWrite<ggl::ColoredText::My> *, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::My> > > { struct DataWrite<ggl::ColoredText::My> {} *x_1_2_1; } x_8_1_1; } x8; unsigned int x9; struct Matrix<float, 2, 1> {} *x10; struct Matrix<unsigned char, 4, 1> { unsigned char x_11_1_1[4]; } x11; struct Matrix<unsigned char, 4, 1> { unsigned char x_12_1_1[4]; } x12; float x13; }*)arg5;
- (void)dealloc;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (void)flushPools;
- (BOOL)geocentric;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)init;
- (unsigned long long)mapLayerPosition;
- (void)reset;
- (void)resetPools:(id)arg1;
- (void)setGeocentric:(BOOL)arg1;
- (BOOL)shouldLayoutWithoutStyleManager;
- (struct shared_ptr<ggl::Debug::BaseMesh> { struct BaseMesh {} *x1; struct __shared_weak_count {} *x2; })unitRectMesh;

@end
