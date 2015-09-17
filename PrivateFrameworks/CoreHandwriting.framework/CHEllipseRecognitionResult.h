/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHEllipseRecognitionResult : CHSketchRecognitionResult {
    struct CGPoint { 
        float x; 
        float y; 
    } _center;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
}

@property (readonly) struct CGPoint { float x1; float x2; } center;
@property (readonly) struct CGSize { float x1; float x2; } size;

- (struct CGPoint { float x1; float x2; })center;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(float)arg3 center:(struct CGPoint { float x1; float x2; })arg4 size:(struct CGSize { float x1; float x2; })arg5;
- (struct CGSize { float x1; float x2; })size;

@end
