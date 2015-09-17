/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADMiterLineJoin : OADLineJoin {
    unsigned int mIsLimitOverridden;
    float mLimit;
}

+ (id)defaultProperties;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (id)initWithDefaults;
- (BOOL)isAnythingOverridden;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLimitOverridden;
- (float)limit;
- (void)removeUnnecessaryOverrides;
- (void)setLimit:(float)arg1;

@end
