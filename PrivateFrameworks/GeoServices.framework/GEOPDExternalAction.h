/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDExternalAction : PBCodable <NSCopying> {
    int _componentType;
    NSMutableArray *_externalActionDetails;
    struct { 
        unsigned int componentType : 1; 
    } _has;
}

@property (nonatomic) int componentType;
@property (nonatomic, retain) NSMutableArray *externalActionDetails;
@property (nonatomic) BOOL hasComponentType;

- (void)addExternalActionDetail:(id)arg1;
- (void)clearExternalActionDetails;
- (int)componentType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalActionDetailAtIndex:(unsigned int)arg1;
- (id)externalActionDetails;
- (unsigned int)externalActionDetailsCount;
- (BOOL)hasComponentType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setComponentType:(int)arg1;
- (void)setExternalActionDetails:(id)arg1;
- (void)setHasComponentType:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
