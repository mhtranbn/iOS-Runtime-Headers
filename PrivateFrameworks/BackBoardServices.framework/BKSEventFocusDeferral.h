/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {
    BKSEventFocusDeferralProperties *_deferredProperties;
    int _priority;
    BKSEventFocusDeferralProperties *_properties;
}

@property (nonatomic, readonly, retain) BKSEventFocusDeferralProperties *deferredProperties;
@property (nonatomic, readonly) int priority;
@property (nonatomic, readonly, retain) BKSEventFocusDeferralProperties *properties;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)deferredProperties;
- (id)deferredPropertiesForProperties:(id)arg1;
- (BOOL)defersProperties:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1 deferredProperties:(id)arg2;
- (id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 withPriority:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)priority;
- (id)properties;

@end
