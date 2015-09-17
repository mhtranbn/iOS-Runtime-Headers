/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {
    int _color;
    unsigned int _decayTimeWindowInMinutes;
    float _endOffset;
    long long _geoid;
    struct { 
        unsigned int color : 1; 
        unsigned int decayTimeWindowInMinutes : 1; 
        unsigned int endOffset : 1; 
        unsigned int speedKph : 1; 
        unsigned int startOffset : 1; 
        unsigned int hidden : 1; 
    } _has;
    BOOL _hidden;
    NSMutableArray *_predictedSpeeds;
    unsigned int _speedKph;
    float _startOffset;
    NSData *_zilch;
}

@property (nonatomic) int color;
@property (nonatomic) unsigned int decayTimeWindowInMinutes;
@property (nonatomic) float endOffset;
@property (nonatomic) long long geoid;
@property (nonatomic) BOOL hasColor;
@property (nonatomic) BOOL hasDecayTimeWindowInMinutes;
@property (nonatomic) BOOL hasEndOffset;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hasSpeedKph;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic, readonly) BOOL hasZilch;
@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) NSMutableArray *predictedSpeeds;
@property (nonatomic) unsigned int speedKph;
@property (nonatomic) float startOffset;
@property (nonatomic, retain) NSData *zilch;

- (void)addPredictedSpeed:(id)arg1;
- (void)clearPredictedSpeeds;
- (int)color;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)decayTimeWindowInMinutes;
- (id)description;
- (id)dictionaryRepresentation;
- (float)endOffset;
- (long long)geoid;
- (BOOL)hasColor;
- (BOOL)hasDecayTimeWindowInMinutes;
- (BOOL)hasEndOffset;
- (BOOL)hasHidden;
- (BOOL)hasSpeedKph;
- (BOOL)hasStartOffset;
- (BOOL)hasZilch;
- (unsigned int)hash;
- (BOOL)hidden;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)predictedSpeedAtIndex:(unsigned int)arg1;
- (id)predictedSpeeds;
- (unsigned int)predictedSpeedsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setColor:(int)arg1;
- (void)setDecayTimeWindowInMinutes:(unsigned int)arg1;
- (void)setEndOffset:(float)arg1;
- (void)setGeoid:(long long)arg1;
- (void)setHasColor:(BOOL)arg1;
- (void)setHasDecayTimeWindowInMinutes:(BOOL)arg1;
- (void)setHasEndOffset:(BOOL)arg1;
- (void)setHasHidden:(BOOL)arg1;
- (void)setHasSpeedKph:(BOOL)arg1;
- (void)setHasStartOffset:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setPredictedSpeeds:(id)arg1;
- (void)setSpeedKph:(unsigned int)arg1;
- (void)setStartOffset:(float)arg1;
- (void)setZilch:(id)arg1;
- (unsigned int)speedKph;
- (float)startOffset;
- (void)writeTo:(id)arg1;
- (id)zilch;

@end
