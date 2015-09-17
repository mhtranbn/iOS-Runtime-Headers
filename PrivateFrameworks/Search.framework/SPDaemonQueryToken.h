/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPDaemonQueryToken : NSObject <NSCopying> {
    <SPDaemonQueryDelegate> *_delegate;
    NSString *_fbq;
    SPSearchQuery *_query;
    BOOL _queryFinished;
    unsigned int _queryID;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_web_fbq;
}

@property (nonatomic) <SPDaemonQueryDelegate> *delegate;
@property (readonly) NSString *fbq;
@property (nonatomic, readonly) SPSearchQuery *query;
@property BOOL queryFinished;
@property (nonatomic, readonly) unsigned int queryID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *web_fbq;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)fbq;
- (void)handleMessage:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 queue:(id)arg2;
- (id)query;
- (BOOL)queryFinished;
- (unsigned int)queryID;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueryFinished:(BOOL)arg1;
- (id)web_fbq;

@end
