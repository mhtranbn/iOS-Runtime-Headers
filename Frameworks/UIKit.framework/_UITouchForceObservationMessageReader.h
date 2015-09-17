/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITouchForceObservationMessageReader : NSObject <_UITouchForceObservationMessageReading> {
    struct CGPoint { 
        float x; 
        float y; 
    } _centroid;
    BOOL _shouldFilterDueToSystemGestures;
    double _timestamp;
    float _touchForce;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } centroid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldFilterDueToSystemGestures;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) float touchForce;

- (struct CGPoint { float x1; float x2; })centroid;
- (void)setCentroid:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShouldFilterDueToSystemGestures:(BOOL)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTouchForce:(float)arg1;
- (BOOL)shouldFilterDueToSystemGestures;
- (double)timestamp;
- (float)touchForce;

@end
