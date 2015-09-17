/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHManualFetchResult : PHFetchResult {
    NSString *_identifier;
    NSOrderedSet *_objectIDs;
    NSArray *_objects;
}

@property (readonly) NSString *identifier;
@property (readonly) NSOrderedSet *objectIDs;
@property (readonly) NSArray *objects;

- (void).cxx_destruct;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (int)collectionFetchType;
- (id)containerIdentifier;
- (id)copyWithOptions:(id)arg1;
- (id)description;
- (id)fetchRequest;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchUpdatedObjects;
- (id)fetchedObjectIDs;
- (id)fetchedObjects;
- (void)getMediaTypeCounts;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithObjects:(id)arg1;
- (id)initWithObjects:(id)arg1 identifier:(id)arg2 registerIfNeeded:(BOOL)arg3;
- (id)initWithOids:(id)arg1 identifier:(id)arg2 registerIfNeeded:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)objectIDAtIndex:(unsigned int)arg1;
- (id)objectIDs;
- (id)objects;
- (id)photoLibrary;
- (unsigned int)possibleChangesForChange:(id)arg1;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
