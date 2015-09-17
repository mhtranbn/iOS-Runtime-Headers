/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISocialActivity : UIApplicationExtensionActivity {
    NSString *_builtinActivityType;
    SLComposeViewController *_socialComposeViewController;
}

@property (nonatomic, copy) NSString *builtinActivityType;
@property (nonatomic, retain) SLComposeViewController *socialComposeViewController;

+ (int)activityCategory;

- (void).cxx_destruct;
- (BOOL)_canBeExcludedByActivityViewController:(id)arg1;
- (void)_cleanup;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (struct CGSize { float x1; float x2; })_thumbnailSize;
- (id)activityType;
- (id)activityViewController;
- (id)builtinActivityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)debugDescription;
- (id)initWithActivityType:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setBuiltinActivityType:(id)arg1;
- (void)setSocialComposeViewController:(id)arg1;
- (id)socialComposeViewController;

@end
