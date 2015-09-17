/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDManagementFrames : PBCodable <NSCopying> {
    unsigned long long _aTIM;
    unsigned long long _action;
    unsigned long long _assocRequest;
    unsigned long long _assocResponse;
    unsigned long long _auth;
    unsigned long long _beacon;
    unsigned long long _deauth;
    unsigned long long _disassoc;
    struct { 
        unsigned int aTIM : 1; 
        unsigned int action : 1; 
        unsigned int assocRequest : 1; 
        unsigned int assocResponse : 1; 
        unsigned int auth : 1; 
        unsigned int beacon : 1; 
        unsigned int deauth : 1; 
        unsigned int disassoc : 1; 
        unsigned int probeRequest : 1; 
        unsigned int probeResponse : 1; 
        unsigned int reassocRequest : 1; 
        unsigned int reassocResponse : 1; 
    } _has;
    unsigned long long _probeRequest;
    unsigned long long _probeResponse;
    unsigned long long _reassocRequest;
    unsigned long long _reassocResponse;
}

@property (nonatomic) unsigned long long aTIM;
@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long assocRequest;
@property (nonatomic) unsigned long long assocResponse;
@property (nonatomic) unsigned long long auth;
@property (nonatomic) unsigned long long beacon;
@property (nonatomic) unsigned long long deauth;
@property (nonatomic) unsigned long long disassoc;
@property (nonatomic) BOOL hasATIM;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasAssocRequest;
@property (nonatomic) BOOL hasAssocResponse;
@property (nonatomic) BOOL hasAuth;
@property (nonatomic) BOOL hasBeacon;
@property (nonatomic) BOOL hasDeauth;
@property (nonatomic) BOOL hasDisassoc;
@property (nonatomic) BOOL hasProbeRequest;
@property (nonatomic) BOOL hasProbeResponse;
@property (nonatomic) BOOL hasReassocRequest;
@property (nonatomic) BOOL hasReassocResponse;
@property (nonatomic) unsigned long long probeRequest;
@property (nonatomic) unsigned long long probeResponse;
@property (nonatomic) unsigned long long reassocRequest;
@property (nonatomic) unsigned long long reassocResponse;

- (unsigned long long)aTIM;
- (unsigned long long)action;
- (unsigned long long)assocRequest;
- (unsigned long long)assocResponse;
- (unsigned long long)auth;
- (unsigned long long)beacon;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deauth;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)disassoc;
- (BOOL)hasATIM;
- (BOOL)hasAction;
- (BOOL)hasAssocRequest;
- (BOOL)hasAssocResponse;
- (BOOL)hasAuth;
- (BOOL)hasBeacon;
- (BOOL)hasDeauth;
- (BOOL)hasDisassoc;
- (BOOL)hasProbeRequest;
- (BOOL)hasProbeResponse;
- (BOOL)hasReassocRequest;
- (BOOL)hasReassocResponse;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)probeRequest;
- (unsigned long long)probeResponse;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)reassocRequest;
- (unsigned long long)reassocResponse;
- (void)setATIM:(unsigned long long)arg1;
- (void)setAction:(unsigned long long)arg1;
- (void)setAssocRequest:(unsigned long long)arg1;
- (void)setAssocResponse:(unsigned long long)arg1;
- (void)setAuth:(unsigned long long)arg1;
- (void)setBeacon:(unsigned long long)arg1;
- (void)setDeauth:(unsigned long long)arg1;
- (void)setDisassoc:(unsigned long long)arg1;
- (void)setHasATIM:(BOOL)arg1;
- (void)setHasAction:(BOOL)arg1;
- (void)setHasAssocRequest:(BOOL)arg1;
- (void)setHasAssocResponse:(BOOL)arg1;
- (void)setHasAuth:(BOOL)arg1;
- (void)setHasBeacon:(BOOL)arg1;
- (void)setHasDeauth:(BOOL)arg1;
- (void)setHasDisassoc:(BOOL)arg1;
- (void)setHasProbeRequest:(BOOL)arg1;
- (void)setHasProbeResponse:(BOOL)arg1;
- (void)setHasReassocRequest:(BOOL)arg1;
- (void)setHasReassocResponse:(BOOL)arg1;
- (void)setProbeRequest:(unsigned long long)arg1;
- (void)setProbeResponse:(unsigned long long)arg1;
- (void)setReassocRequest:(unsigned long long)arg1;
- (void)setReassocResponse:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
