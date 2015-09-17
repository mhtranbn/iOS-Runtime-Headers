/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPArchiverManager : NSObject {
    NSObject<OS_dispatch_queue> *_archiveCompletionQueue;
    NSObject<OS_dispatch_queue> *_archiveDefaultQueue;
    NSObject<OS_dispatch_queue> *_archiveHighQueue;
    NSObject<OS_dispatch_queue> *_archiveLowQueue;
    Class _archiverClass;
    NSMapTable *_archivers;
    NSObject<OS_dispatch_queue> *_archiversHighQueue;
    NSObject<OS_dispatch_queue> *_archiversLowQueue;
    <TSPArchiverManagerDelegate> *_delegate;
    TSPDescriptionGenerator *_descriptionGenerator;
    struct { 
        unsigned int isStopped : 1; 
        unsigned int delegateRespondsToDidCreateArchiver : 1; 
        unsigned int delegateRespondsToShouldDelayArchivingObject : 1; 
    } _flags;
}

@property (nonatomic, retain) TSPDescriptionGenerator *descriptionGenerator;

- (void).cxx_destruct;
- (void)archiveObjectWithHighPriority:(id)arg1;
- (void)archiveObjectWithLowPriority:(id)arg1;
- (void)archiveWithArchiver:(id)arg1 queue:(id)arg2 archiveCompletion:(id /* block */)arg3;
- (id)archiverForObject:(id)arg1 archiveQueue:(id)arg2 archiveCompletion:(id /* block */)arg3;
- (void)archiverForObject:(id)arg1 hasArchiverAccessLock:(BOOL)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (id)descriptionGenerator;
- (id)explicitComponentRootObjectForObject:(id)arg1 hasArchiverAccessLock:(BOOL)arg2;
- (void)impl_archiverForObject:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)impl_explicitComponentRootObjectForObject:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 archiverClass:(Class)arg2;
- (void)performAsynchronousArchiverAccessUsingBlock:(id /* block */)arg1;
- (void)setDescriptionGenerator:(id)arg1;
- (void)stop;

@end
