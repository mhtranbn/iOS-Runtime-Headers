/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFWhitelistSiteBuffer : NSObject {
    unsigned int _maxSize;
    NSMutableDictionary *_siteTree;
}

@property unsigned int maxSize;
@property (retain) NSMutableDictionary *siteTree;

- (void)addURLString:(id)arg1;
- (BOOL)containsURLString:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)maxSize;
- (void)setMaxSize:(unsigned int)arg1;
- (void)setSiteTree:(id)arg1;
- (id)siteTree;
- (BOOL)treeContainsURLString:(id)arg1;

@end
