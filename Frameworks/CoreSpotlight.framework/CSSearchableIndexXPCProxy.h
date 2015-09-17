/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchableIndexXPCProxy : NSObject <CSSearchableIndexServiceInterface> {
    CSSearchableIndex *_index;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)index;
- (id)initWithSearchableIndex:(id)arg1;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(id /* block */)arg2;

@end
