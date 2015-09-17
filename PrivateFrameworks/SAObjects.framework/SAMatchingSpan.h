/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMatchingSpan : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *domainObjectIdentifier;
@property (nonatomic) int endIndex;
@property (readonly) unsigned int hash;
@property (nonatomic) int startIndex;
@property (readonly) Class superclass;

+ (id)matchingSpan;
+ (id)matchingSpanWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainObjectIdentifier;
- (id)encodedClassName;
- (int)endIndex;
- (id)groupIdentifier;
- (void)setDomainObjectIdentifier:(id)arg1;
- (void)setEndIndex:(int)arg1;
- (void)setStartIndex:(int)arg1;
- (int)startIndex;

@end
