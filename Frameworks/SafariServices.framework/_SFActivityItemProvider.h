/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFActivityItemProvider : UIActivityItemProvider {
    NSString *_pageTitle;
    NSURL *_url;
}

@property (nonatomic, copy) NSString *pageTitle;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2;
- (id)item;
- (id)pageTitle;
- (void)setPageTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
