/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn {
    NSString *_SWCServiceName;
    BOOL _requiresApproval;
    BOOL _usesDetailsDictionary;
}

@property (copy) NSString *SWCServiceName;
@property BOOL requiresApproval;
@property BOOL usesDetailsDictionary;

- (id)SWCServiceName;
- (BOOL)appHasApproval:(id)arg1;
- (id)callingBundleIdentifier;
- (void)dealloc;
- (void)getAppLinkWithCompletionHandler:(id /* block */)arg1;
- (BOOL)getApplicationProxy:(id*)arg1 forSWCResults:(id)arg2;
- (id)init;
- (BOOL)requiresApproval;
- (void)setRequiresApproval:(BOOL)arg1;
- (void)setSWCServiceName:(id)arg1;
- (void)setUsesDetailsDictionary:(BOOL)arg1;
- (BOOL)usesDetailsDictionary;

@end
