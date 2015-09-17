/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataOriginProvenance : NSObject <NSCopying, NSSecureCoding> {
    NSString *_buildNumber;
    NSNumber *_deviceID;
    NSString *_deviceModel;
    NSNumber *_sourceID;
    NSString *_sourceVersion;
    int _syncProvenance;
}

@property (nonatomic, copy) NSString *buildNumber;
@property (nonatomic, retain) NSNumber *deviceID;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, retain) NSNumber *sourceID;
@property (nonatomic, retain) NSString *sourceVersion;
@property (nonatomic) int syncProvenance;

+ (id)dataProvenanceWithSyncProvenance:(int)arg1 deviceModel:(id)arg2 buildNumber:(id)arg3 sourceID:(id)arg4 deviceID:(id)arg5 sourceVersion:(id)arg6;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buildNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceID;
- (id)deviceModel;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (void)setBuildNumber:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setSyncProvenance:(int)arg1;
- (id)sourceID;
- (id)sourceVersion;
- (int)syncProvenance;

@end
