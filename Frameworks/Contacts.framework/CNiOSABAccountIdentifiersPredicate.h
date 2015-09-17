/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABAccountIdentifiersPredicate : CNPredicate <CNiOSAccountPredicate> {
    NSArray *_identifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (readonly) Class superclass;

- (struct __CFArray { }*)cn_copyAccountsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (void)dealloc;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1;

@end
