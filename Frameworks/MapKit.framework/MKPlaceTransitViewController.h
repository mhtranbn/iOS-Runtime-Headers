/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceTransitViewController : MKTransitDeparturesViewController <MKStackingViewControllerPreferredSizeUse> {
    BOOL _analyticsAwaitingMapItemLoad;
    BOOL _displayError;
    NSString *_errorString;
    BOOL _mapItemIsLoading;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL mapItemIsLoading;
@property (nonatomic, readonly) BOOL requiresPreferredContentSizeInStackingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_errorCell;
- (id)_errorString;
- (BOOL)_shouldDisplayError;
- (void)errorLoadingMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2;
- (BOOL)mapItemIsLoading;
- (void)mapItemLoadingResolved;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)setMapItemIsLoading:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
