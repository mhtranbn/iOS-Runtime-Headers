/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFLazyCache : NSObject {
    NSLock *_lock;
    NSCache *_storage;
}

- (void)_exchangeOriginalValue:(id)arg1 forKey:(id)arg2 withValue:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)removeAllObjects;
- (id)valueForKey:(id)arg1 valueGenerator:(id /* block */)arg2;

@end
