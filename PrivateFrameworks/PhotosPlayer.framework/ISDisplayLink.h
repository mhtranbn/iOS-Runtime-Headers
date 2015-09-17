/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISDisplayLink : NSObject {
    id /* block */ _completionHandler;
    CADisplayLink *_displayLink;
    id /* block */ _updateHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)_callUpdateHandler;
- (void)_update:(id)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)displayLink;
- (id)initWithUpdateHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (id /* block */)updateHandler;

@end
