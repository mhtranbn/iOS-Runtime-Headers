/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCSCEPPayload : MCCertificatePayload {
    NSArray *_CACaps;
    NSData *_CAFingerprint;
    NSString *_CAInstanceName;
    NSString *_URLString;
    NSString *_challenge;
    unsigned int _keySize;
    unsigned int _retries;
    unsigned int _retryDelay;
    NSArray *_subject;
    NSDictionary *_subjectAltName;
    int _usageFlags;
}

@property (nonatomic, readonly, retain) NSArray *CACaps;
@property (nonatomic, readonly, retain) NSData *CAFingerprint;
@property (nonatomic, readonly, retain) NSString *CAInstanceName;
@property (nonatomic, readonly, retain) NSString *URLString;
@property (nonatomic, readonly, retain) NSString *challenge;
@property (nonatomic, readonly) unsigned int keySize;
@property (nonatomic, readonly) unsigned int retries;
@property (nonatomic, readonly) unsigned int retryDelay;
@property (nonatomic, readonly, retain) NSArray *subject;
@property (nonatomic, readonly, retain) NSDictionary *subjectAltName;
@property (nonatomic, readonly) int usageFlags;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)CACaps;
- (id)CAFingerprint;
- (id)CAInstanceName;
- (id)URLString;
- (id)challenge;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (BOOL)isIdentity;
- (BOOL)isRoot;
- (unsigned int)keySize;
- (id)payloadDescriptionKeyValueSections;
- (unsigned int)retries;
- (unsigned int)retryDelay;
- (id)stubDictionary;
- (id)subject;
- (id)subjectAltName;
- (int)usageFlags;

@end
