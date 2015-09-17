/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding> {
    SCNGeometry *_geometry;
    struct __C3DLOD { } *_lod;
    int _mode;
}

@property (readonly) SCNGeometry *geometry;
@property (readonly) float screenSpaceRadius;
@property (readonly) float worldSpaceDistance;

+ (id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(float)arg2;
+ (id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(float)arg2;
+ (BOOL)supportsSecureCoding;

- (void*)__CFObject;
- (void)_customEncodingOfSCNLevelOfDetail:(id)arg1;
- (void)_didDecodeSCNLevelOfDetail:(id)arg1;
- (void)_setupWithGeometry:(id)arg1 thresholdMode:(int)arg2 value:(float)arg3;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geometry;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeometry:(id)arg1 thresholdMode:(int)arg2 lod:(struct __C3DLOD { }*)arg3;
- (id)initWithGeometry:(id)arg1 thresholdMode:(int)arg2 thresholdValue:(id)arg3;
- (float)screenSpaceRadius;
- (int)thresholdMode;
- (id)thresholdValue;
- (float)worldSpaceDistance;

@end
