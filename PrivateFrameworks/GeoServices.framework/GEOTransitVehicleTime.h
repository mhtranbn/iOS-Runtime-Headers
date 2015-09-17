/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitVehicleTime : PBCodable <NSCopying> {
    unsigned int _absTime;
    struct { 
        unsigned int absTime : 1; 
    } _has;
}

@property (nonatomic) unsigned int absTime;
@property (nonatomic) BOOL hasAbsTime;

- (unsigned int)absTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAbsTime;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAbsTime:(unsigned int)arg1;
- (void)setHasAbsTime:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
