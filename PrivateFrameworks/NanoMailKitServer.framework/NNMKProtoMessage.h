/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMessage : PBCodable <NSCopying> {
    NSString *_accountId;
    NSMutableArray *_bccs;
    NSMutableArray *_ccs;
    NSString *_conversationId;
    NSData *_dateReceived;
    NSData *_dateSent;
    NSString *_from;
    struct { 
        unsigned int status : 1; 
    } _has;
    NSString *_messageId;
    NSString *_messageIdHeader;
    unsigned int _status;
    NSString *_subject;
    NSMutableArray *_tos;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSMutableArray *bccs;
@property (nonatomic, retain) NSMutableArray *ccs;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic, retain) NSData *dateReceived;
@property (nonatomic, retain) NSData *dateSent;
@property (nonatomic, retain) NSString *from;
@property (nonatomic, readonly) BOOL hasAccountId;
@property (nonatomic, readonly) BOOL hasConversationId;
@property (nonatomic, readonly) BOOL hasDateReceived;
@property (nonatomic, readonly) BOOL hasDateSent;
@property (nonatomic, readonly) BOOL hasFrom;
@property (nonatomic, readonly) BOOL hasMessageId;
@property (nonatomic, readonly) BOOL hasMessageIdHeader;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic, readonly) BOOL hasSubject;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic, retain) NSString *messageIdHeader;
@property (nonatomic) unsigned int status;
@property (nonatomic, retain) NSString *subject;
@property (nonatomic, retain) NSMutableArray *tos;

- (void).cxx_destruct;
- (id)accountId;
- (void)addBcc:(id)arg1;
- (void)addCc:(id)arg1;
- (void)addTo:(id)arg1;
- (id)bccAtIndex:(unsigned int)arg1;
- (id)bccs;
- (unsigned int)bccsCount;
- (id)ccAtIndex:(unsigned int)arg1;
- (id)ccs;
- (unsigned int)ccsCount;
- (void)clearBccs;
- (void)clearCcs;
- (void)clearTos;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateReceived;
- (id)dateSent;
- (id)description;
- (id)dictionaryRepresentation;
- (id)from;
- (BOOL)hasAccountId;
- (BOOL)hasConversationId;
- (BOOL)hasDateReceived;
- (BOOL)hasDateSent;
- (BOOL)hasFrom;
- (BOOL)hasMessageId;
- (BOOL)hasMessageIdHeader;
- (BOOL)hasStatus;
- (BOOL)hasSubject;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (id)messageIdHeader;
- (BOOL)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setBccs:(id)arg1;
- (void)setCcs:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setMessageId:(id)arg1;
- (void)setMessageIdHeader:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTos:(id)arg1;
- (unsigned int)status;
- (id)subject;
- (id)toAtIndex:(unsigned int)arg1;
- (id)tos;
- (unsigned int)tosCount;
- (void)writeTo:(id)arg1;

@end
