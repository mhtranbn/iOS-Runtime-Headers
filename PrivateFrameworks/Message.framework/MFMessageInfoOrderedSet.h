/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMessageInfoOrderedSet : NSObject {
    id /* block */ _comparator;
    NSMutableDictionary *_duplicateMessageInfos;
    MFSparseMutable64IndexSet *_knownMessageIDs;
    NSMutableArray *_mutableMessageInfos;
}

@property (nonatomic, readonly) NSArray *allMessageInfos;
@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) unsigned int countWithDuplicates;
@property (nonatomic, readonly) MFMessageInfo *firstMessage;
@property (nonatomic, readonly) MFMessageInfo *lastMessage;
@property (nonatomic, readonly) NSArray *uniqueMessageInfos;

- (void)_addMessageInfoToDuplicates:(id)arg1;
- (id)_duplicateMessageInfosForMessageInfo:(id)arg1;
- (void)_invalidate;
- (void)_removeDuplicatesForMessageInfo:(id)arg1;
- (unsigned int)addMessageInfo:(id)arg1;
- (id)allMessageInfos;
- (id /* block */)comparator;
- (unsigned int)count;
- (unsigned int)countWithDuplicates;
- (void)dealloc;
- (id)debugDescription;
- (id)duplicatesOfMessageInfo:(id)arg1;
- (id)firstMessage;
- (unsigned int)indexOfMessageInfo:(id)arg1;
- (unsigned int)indexWhereMessageInfoWouldBeInserted:(id)arg1;
- (id)init;
- (id)initWithComparator:(id /* block */)arg1;
- (id)lastMessage;
- (id)messageInfoAtIndex:(unsigned int)arg1;
- (id)messageInfoEquivalentToMessageInfo:(id)arg1;
- (void)removeAllMessageInfos;
- (unsigned int)removeMessageInfo:(id)arg1;
- (unsigned int)removeMessageInfoAtIndex:(unsigned int)arg1;
- (void)removeMessageInfosAtIndexes:(id)arg1;
- (void)setComparator:(id /* block */)arg1;
- (id)uniqueMessageInfos;

@end
