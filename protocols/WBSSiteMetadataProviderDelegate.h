/* Generated by RuntimeBrowser.
 */

@protocol WBSSiteMetadataProviderDelegate <NSObject>

@required

- (void)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 cancelRequestsWithTokens:(id <NSFastEnumeration>)arg2;
- (void)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 didFinishRequestWithoutReceivingNewData:(WBSSiteMetadataRequest *)arg2;
- (void)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 didReceiveResponse:(WBSSiteMetadataResponse *)arg2 forRequest:(WBSSiteMetadataRequest *)arg3;
- (void)siteMetadataProvider:(WBSSiteMetadataProvider *)arg1 didReceiveUpdateForRequest:(WBSSiteMetadataRequest *)arg2;
- (id)siteMetadataProvider:(void *)arg1 registerOneTimeRequest:(void *)arg2 priority:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 9: WBSSiteMetadataProvider *, WBSSiteMetadataRequest *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSSiteMetadataResponse *, void*
- (id)siteMetadataProvider:(void *)arg1 registerRequest:(void *)arg2 priority:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 9: WBSSiteMetadataProvider *, WBSSiteMetadataRequest *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WBSSiteMetadataResponse *, void*

@end
