/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceAudio : RTSource <NSCopying, NSSecureCoding> {
    int _audioSource;
}

@property (nonatomic, readonly) int audioSource;

+ (id)stringFromAudioSource:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (int)audioSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioSource:(int)arg1;
- (id)initWithCoder:(id)arg1;

@end
