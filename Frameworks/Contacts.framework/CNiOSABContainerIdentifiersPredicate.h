/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContainerIdentifiersPredicate : CNPredicate <CNiOSContainerPredicate> {
    NSArray *_identifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (readonly) Class superclass;

- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (void)dealloc;
- (id)description;
- (id)identifiers;
- (BOOL)includesDisabledContainers;
- (id)initWithIdentifiers:(id)arg1;

@end
