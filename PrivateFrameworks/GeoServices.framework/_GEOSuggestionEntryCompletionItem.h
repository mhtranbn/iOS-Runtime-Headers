/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOSuggestionEntryCompletionItem : NSObject <GEOCompletionItem> {
    NSData *_completionMetaData;
    GEOSuggestionEntry *_entry;
    int _entryIndex;
    int _entryListIndex;
    NSString *_query;
    GEOMapServiceTraits *_traits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *displayLines;
@property (nonatomic, readonly) NSData *entryMetadata;
@property (nonatomic, readonly) <GEOMapItem> *geoMapItem;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSData *metadata;
@property (nonatomic, readonly) GEOSearchCategory *searchCategory;
@property (readonly) Class superclass;

- (id)calloutTitle;
- (void)dealloc;
- (id)description;
- (id)displayLines;
- (id)entryMetadata;
- (id)geoMapItem;
- (BOOL)getCoordinate:(struct { double x1; double x2; }*)arg1;
- (unsigned int)hash;
- (id)highlightsForLine:(unsigned int)arg1;
- (id)initWithSuggestionEntry:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 completion:(id)arg5 traits:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (id)metadata;
- (id)queryLine;
- (id)searchCategory;
- (void)sendFeedback;

@end
