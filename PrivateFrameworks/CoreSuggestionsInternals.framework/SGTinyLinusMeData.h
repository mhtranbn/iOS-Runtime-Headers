/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGTinyLinusMeData : NSObject {
    NSSet *_addresses;
    NSString *_compositeName;
    NSString *_firstName;
    NSString *_lastName;
    NSSet *_normalizedEmails;
    NSSet *_normalizedPhones;
}

@property (nonatomic, readonly) NSSet *addresses;
@property (nonatomic, readonly) NSString *compositeName;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSSet *normalizedEmails;
@property (nonatomic, readonly) NSSet *normalizedPhones;

+ (void)clearCache;
+ (id)fetch;
+ (id)fetchWithAddressBook:(id)arg1;

- (void).cxx_destruct;
- (id)addresses;
- (id)compositeName;
- (id)firstName;
- (id)lastName;
- (id)normalizedEmails;
- (id)normalizedPhones;

@end
