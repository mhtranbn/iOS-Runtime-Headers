/* Generated by RuntimeBrowser.
 */

@protocol ICSearchIndexable <NSObject>

@required

- (void)deleteFromNoteContextUsingIndexerContext:(ICSearchIndexerContext *)arg1;
- (NSString *)identifier;
- (BOOL)isHiddenFromSearch;
- (NSManagedObjectContext *)managedObjectContext;
- (NSDate *)modificationDate;
- (NSString *)objectIdentifier;
- (NSArray *)searchIndexStringsOutHasAdditionalStrings:(BOOL*)arg1;
- (NSString *)searchIndexableTitleUsingContentTextIfNecessary:(NSString *)arg1;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned int)searchResultsSection;
- (BOOL)shouldUpdateIndexForChangedValues:(NSDictionary *)arg1;
- (int)visibilityTestingType;

@optional

- (ICGenerateSearchIndexStringsOperation *)generateSearchIndexStringsOperation;

@end
