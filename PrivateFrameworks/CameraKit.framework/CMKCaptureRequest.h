/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKCaptureRequest : NSObject <NSCopying, NSMutableCopying> {
    NSMutableDictionary *__parameterStorage;
    int _type;
}

@property (nonatomic, readonly, copy) NSDictionary *_customParameterStorage;
@property (nonatomic, readonly) NSMutableDictionary *_parameterStorage;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)_customParameterStorage;
- (id)_parameterStorage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithType:(int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)parameterForKey:(id)arg1;
- (int)type;

@end
