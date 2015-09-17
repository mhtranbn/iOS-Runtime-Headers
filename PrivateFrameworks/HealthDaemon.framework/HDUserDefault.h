/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUserDefault : NSObject <NSSecureCoding> {
    NSString *_bundleID;
    NSString *_key;
    NSDictionary *_value;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSDictionary *value;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (void)setBundleID:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
