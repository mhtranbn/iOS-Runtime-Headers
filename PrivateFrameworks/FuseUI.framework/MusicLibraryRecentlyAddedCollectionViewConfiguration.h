/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryRecentlyAddedCollectionViewConfiguration : MusicLibraryAlbumsCollectionViewConfiguration {
    unsigned int _entityLimit;
}

@property (nonatomic, readonly) unsigned int entityLimit;

+ (unsigned int)defaultEntityLimit;

- (BOOL)canPreviewEntityValueContext:(id)arg1;
- (unsigned int)entityLimit;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initForMainAlbumsList:(BOOL)arg1 includeCompilations:(BOOL)arg2;
- (id)initWithEntityLimit:(unsigned int)arg1;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end
