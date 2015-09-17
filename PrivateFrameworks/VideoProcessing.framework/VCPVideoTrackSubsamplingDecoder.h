/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoTrackSubsamplingDecoder : VCPVideoTrackDecoder {
    AVAssetReader *_assetReader;
    struct opaqueCMSampleBuffer { } *_currentSample;
    struct opaqueCMSampleBuffer { } *_nextSample;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _nextSampleTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _sampleDuration;
    PFVideoAVObjectBuilder *_slowmoTimeMap;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _trackEnd;
    AVAssetReaderTrackOutput *_trackOutput;
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 atInterval:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 slowmoTimeMap:(id)arg3;
- (int)status;

@end
