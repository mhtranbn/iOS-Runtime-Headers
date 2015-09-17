/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISCrossfadeLayer : CALayer {
    CALayer *__contentLayer;
    CALayer *__heroLayer;
    ISCrossfadeItem *_crossfadeItem;
    ISPlaybackSpec *_playbackSpec;
}

@property (nonatomic, readonly) CALayer *_contentLayer;
@property (setter=_setHeroLayer:, nonatomic, retain) CALayer *_heroLayer;
@property (nonatomic, retain) ISCrossfadeItem *crossfadeItem;
@property (nonatomic, retain) ISPlaybackSpec *playbackSpec;

- (void).cxx_destruct;
- (id)_contentLayer;
- (id)_heroLayer;
- (void)_setHeroLayer:(id)arg1;
- (void)_updateContents;
- (void)_updateFrameLayers;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)crossfadeItem;
- (id)init;
- (void)layoutSublayers;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)pause;
- (void)playFromBeginning;
- (id)playbackSpec;
- (void)setCrossfadeItem:(id)arg1;
- (void)setPlaybackSpec:(id)arg1;

@end
