/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface _CTNativeGlyphStorage : _CTGlyphStorage {
    const int *_attachCounts;
    long _capacity;
    const struct CGPoint { float x1; float x2; } *_origins;
    void *_preallocatedStorage;
    unsigned int _retainCount;
    struct GlyphStack { int x1; int x2; struct GlyphStackEntry { unsigned short x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; unsigned int x_3_1_3; int x_3_1_4; int x_3_1_5; struct CGPoint { float x_6_2_1; float x_6_2_2; } x_3_1_6; } x3[1]; } *_stack;
}

+ (id)newWithCount:(long)arg1;

- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (long)attachmentCountAtIndex:(long)arg1;
- (id)copyWithRange:(struct { int x1; int x2; })arg1;
- (void)dealloc;
- (void)finalize;
- (void)initGlyphStackWithCapacity:(long)arg1;
- (id)initWithCount:(long)arg1;
- (void)insertGlyphsAtRange:(struct { int x1; int x2; })arg1;
- (void)moveGlyphsFromRange:(struct { int x1; int x2; })arg1 toIndex:(long)arg2;
- (struct CGPoint { float x1; float x2; })originAtIndex:(long)arg1;
- (void)popGlyphAtIndex:(long)arg1;
- (void)prepareWithCapacity:(long)arg1 preallocated:(bool)arg2;
- (void)puntStringIndicesInRange:(struct { int x1; int x2; })arg1 by:(long)arg2;
- (void)pushGlyphAtIndex:(long)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setAdvance:(struct CGSize { float x1; float x2; })arg1 atIndex:(long)arg2;
- (void)setAttachmentCount:(long)arg1 atIndex:(long)arg2;
- (void)setCapacity:(long)arg1;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2;
- (void)setOrigin:(struct CGPoint { float x1; float x2; })arg1 atIndex:(long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long)arg2;
- (void)setStringIndex:(long)arg1 atIndex:(long)arg2;
- (const int*)stringIndices;
- (void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2;

@end
