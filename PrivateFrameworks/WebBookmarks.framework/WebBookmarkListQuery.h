/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkListQuery : NSObject {
    BOOL _customQuery;
    unsigned int _folderID;
    BOOL _includeHidden;
    NSString *_query;
    NSString *_queryWithOrderBy;
    NSArray *_titleWordPrefixes;
    NSString *_urlFilter;
}

@property (getter=isCustomQuery, nonatomic, readonly) BOOL customQuery;
@property (nonatomic, readonly) unsigned int folderID;

- (void).cxx_destruct;
- (id)_normalizeUserTypedString:(id)arg1;
- (id)_prefixesFromNormalizedString:(id)arg1;
- (id)bookmarksInCollection:(id)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (int)countInCollection:(id)arg1;
- (unsigned int)folderID;
- (id)init;
- (id)initWithBookmarksWhere:(id)arg1 orderBy:(id)arg2 usingFilter:(id)arg3;
- (id)initWithFolderID:(unsigned int)arg1 inCollection:(id)arg2 includeHidden:(BOOL)arg3 usingFilter:(id)arg4;
- (BOOL)isCustomQuery;

@end
