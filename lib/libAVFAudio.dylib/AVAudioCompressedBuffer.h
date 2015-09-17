/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioCompressedBuffer : AVAudioBuffer

@property (nonatomic, readonly) void*data;
@property (nonatomic, readonly) int maximumPacketSize;
@property (nonatomic, readonly) unsigned int packetCapacity;
@property (nonatomic) unsigned int packetCount;
@property (nonatomic, readonly) struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*packetDescriptions;

- (void*)data;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2;
- (id)initWithFormat:(id)arg1 packetCapacity:(unsigned int)arg2 maximumPacketSize:(int)arg3;
- (int)maximumPacketSize;
- (unsigned int)packetCapacity;
- (unsigned int)packetCount;
- (struct AudioStreamPacketDescription { long long x1; unsigned int x2; unsigned int x3; }*)packetDescriptions;
- (void)setPacketCount:(unsigned int)arg1;

@end
