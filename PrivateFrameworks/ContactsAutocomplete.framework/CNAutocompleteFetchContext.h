/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteFetchContext : NSObject <NSCopying> {
    NSArray *_bundleIdentifiers;
    NSDate *_date;
    NSString *_domainIdentifier;
    NSString *_locationUUID;
    NSArray *_otherAddressesAlreadyChosen;
    BOOL _predictsBasedOnOutgoingInteraction;
    NSArray *_relatedContacts;
    NSString *_sendingAddress;
    NSString *_sendingAddressAccountIdentifier;
    NSString *_title;
}

@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSDate *date;
@property (copy) NSString *domainIdentifier;
@property (copy) NSString *locationUUID;
@property (copy) NSArray *otherAddressesAlreadyChosen;
@property BOOL predictsBasedOnOutgoingInteraction;
@property (copy) NSArray *relatedContacts;
@property (copy) NSString *sendingAddress;
@property (copy) NSString *sendingAddressAccountIdentifier;
@property (copy) NSString *title;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)domainIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationUUID;
- (id)otherAddressesAlreadyChosen;
- (BOOL)predictsBasedOnOutgoingInteraction;
- (id)relatedContacts;
- (id)sendingAddress;
- (id)sendingAddressAccountIdentifier;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setLocationUUID:(id)arg1;
- (void)setOtherAddressesAlreadyChosen:(id)arg1;
- (void)setPredictsBasedOnOutgoingInteraction:(BOOL)arg1;
- (void)setRelatedContacts:(id)arg1;
- (void)setSendingAddress:(id)arg1;
- (void)setSendingAddressAccountIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
