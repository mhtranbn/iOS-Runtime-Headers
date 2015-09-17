/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPLoadQPCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAMPCollection *loadedItems;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)loadQPCompleted;
+ (id)loadQPCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)loadedItems;
- (void)setLoadedItems:(id)arg1;

@end
