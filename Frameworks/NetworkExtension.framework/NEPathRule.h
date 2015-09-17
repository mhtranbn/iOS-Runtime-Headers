/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription> {
    NSNumber *_aggregateEnterpriseCellular;
    NSNumber *_aggregatePersonalCellular;
    BOOL _denyCellularFallback;
    int _internalCellularBehavior;
}

@property (retain) NSNumber *aggregateEnterpriseCellular;
@property (retain) NSNumber *aggregatePersonalCellular;
@property int cellularBehavior;
@property (getter=isDefaultPathRule, readonly) BOOL defaultPathRule;
@property BOOL denyCellularFallback;
@property int internalCellularBehavior;

+ (int)aggregateNetworkBehavior:(int)arg1 other:(int)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCellularBehavior:(int)arg1 grade:(int)arg2;
- (id)aggregateEnterpriseCellular;
- (id)aggregatePersonalCellular;
- (int)cellularBehavior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)denyCellularFallback;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initDefaultPathRule;
- (id)initWithCoder:(id)arg1;
- (int)internalCellularBehavior;
- (BOOL)isAggregateRule;
- (BOOL)isDefaultPathRule;
- (BOOL)isEqual:(id)arg1;
- (void)setAggregateEnterpriseCellular:(id)arg1;
- (void)setAggregatePersonalCellular:(id)arg1;
- (void)setCellularBehavior:(int)arg1;
- (void)setDenyCellularFallback:(BOOL)arg1;
- (void)setInternalCellularBehavior:(int)arg1;
- (BOOL)signingIdentifierAllowed:(id)arg1 domainsRequired:(out BOOL*)arg2;
- (BOOL)supportsCellularBehavior:(int)arg1;

@end
