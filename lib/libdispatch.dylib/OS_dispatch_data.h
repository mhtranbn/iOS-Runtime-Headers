/* Generated by RuntimeBrowser
   Image: /usr/lib/system/libdispatch.dylib
 */

@interface OS_dispatch_data : _NSDispatchData <OS_dispatch_data>

@property (readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) unsigned int length;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (BOOL)_bytesAreVM;
- (void*)_getContext;
- (BOOL)_isCompact;
- (void)_setContext:(void*)arg1;
- (void)_setFinalizer:(int (*)arg1;
- (void)_setTargetQueue:(id)arg1;
- (const void*)bytes;
- (void)dealloc;
- (id)debugDescription;
- (void)finalize;
- (id)init;
- (id)initWithBytes:(void*)arg1 length:(unsigned int)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5;
- (unsigned int)length;

@end
