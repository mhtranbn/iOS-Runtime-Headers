/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate> {
    CNContact *_contact;
    NSString *_contactIdentifier;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)contact;
- (id)contactIdentifier;
- (void)dealloc;
- (id)description;
- (id)initWithContact:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;

@end
