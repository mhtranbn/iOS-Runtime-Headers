/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_logMessages;
}

@property (nonatomic, retain) NSMutableArray *logMessages;

- (void)addLogMessage:(id)arg1;
- (void)clearLogMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)logMessageAtIndex:(unsigned int)arg1;
- (id)logMessages;
- (unsigned int)logMessagesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setLogMessages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
