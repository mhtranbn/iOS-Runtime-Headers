/* Generated by RuntimeBrowser.
 */

@protocol PUAirPlayControllerContentProvider <NSObject>

@required

- (UIViewController *)contentViewControllerForAirPlayController:(PUAirPlayScreenController *)arg1;

@optional

- (void)airPlayControllerScreenAvailabilityChanged:(PUAirPlayScreenController *)arg1;
- (BOOL)wantsContentVisibleAfterUnregisteringWithAirPlayController:(PUAirPlayScreenController *)arg1;

@end
