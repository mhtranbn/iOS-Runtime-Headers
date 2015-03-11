/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSPLazyReferenceDelegate>, TSPComponent, TSPObject;

@interface TSPLazyReference : NSObject <NSCopying> {
    TSPComponent *_component;
    <TSPLazyReferenceDelegate> *_delegate;
    long long _identifier;
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    bool_allowUnknownObject;
    bool_isWeak;
}

@property TSPComponent * component;
@property <TSPLazyReferenceDelegate> * delegate;
@property(readonly) long long identifier;
@property(readonly) bool isWeak;
@property(readonly) id object;
@property(readonly) id objectIfLoaded;
@property(retain) TSPObject * strongObject;
@property(readonly) TSPObject * weakObject;

+ (id)referenceForObject:(id)arg1;
+ (id)weakReferenceForObject:(id)arg1;

- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2;
- (id)component;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)delegate;
- (bool)discardStrongObjectIfPossible;
- (unsigned long long)hash;
- (long long)identifier;
- (id)init;
- (id)initWeakReferenceWithObject:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(bool)arg3 allowUnknownObject:(bool)arg4;
- (id)initWithObject:(id)arg1 isWeak:(bool)arg2;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLazyReference:(id)arg1;
- (bool)isWeak;
- (id)object;
- (id)objectIfLoaded;
- (bool)referencesObject:(id)arg1;
- (void)resetIdentifier;
- (void)setComponent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStrongObject:(id)arg1;
- (id)strongObject;
- (id)weakObject;

@end