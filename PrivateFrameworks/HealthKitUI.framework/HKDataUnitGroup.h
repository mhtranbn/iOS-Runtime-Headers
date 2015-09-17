/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKDataUnitGroup : NSObject {
    NSAttributedString *_attributedSummaryAttribution;
    int _categoryID;
    NSString *_cautionaryText;
    HKDataUnitGroupChartingRules *_chartingRules;
    HKCorrelationType *_correlationType;
    int _dataUnitGroupID;
    NSArray *_dataUnits;
    NSMutableDictionary *_dataUnitsByType;
    NSArray *_dataUnitsOrderedForDataEntry;
    UIImage *_detailImage;
    NSString *_displayName;
    NSString *_embeddedDisplayName;
    BOOL _isCharacteristic;
    NSString *_joinString;
    NSSet *_keywordsSet;
    NSString *_keywordsString;
    NSArray *_reversedDataUnits;
    BOOL _showAllDataHierarchically;
    NSString *_summary;
    NSString *_summaryAttribution;
    NSString *_unitChangeCautionaryText;
}

@property (nonatomic, readonly) NSAttributedString *attributedSummaryAttribution;
@property (nonatomic, readonly) int categoryID;
@property (nonatomic, readonly) NSString *cautionaryText;
@property (nonatomic, readonly) HKDataUnitGroupChartingRules *chartingRules;
@property (nonatomic, readonly) HKCorrelationType *correlationType;
@property (nonatomic, readonly) int dataUnitGroupID;
@property (nonatomic, readonly) NSArray *dataUnits;
@property (nonatomic, readonly) NSArray *dataUnitsOrderedForDataEntry;
@property (nonatomic, readonly) UIImage *detailImage;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *embeddedDisplayName;
@property (nonatomic, readonly) UIImage *groupIcon;
@property (nonatomic, readonly) NSString *joinString;
@property (nonatomic, readonly) NSSet *keywords;
@property (nonatomic, readonly) UIImage *shareIcon;
@property (nonatomic, readonly) BOOL showAllDataHierarchically;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *summaryAttribution;
@property (nonatomic, readonly) NSString *unitChangeCautionaryText;
@property (nonatomic, readonly) UIImage *unitIcon;
@property (nonatomic, readonly) BOOL unitPreferencesRequireChangeConfirmation;

- (void).cxx_destruct;
- (void)_applyChartingProperties:(id)arg1;
- (BOOL)allowsManualEntry;
- (id)anyDataUnit;
- (id)attributedSummaryAttribution;
- (int)categoryID;
- (id)cautionaryText;
- (id)chartingRules;
- (id)correlationType;
- (id)dataUnitForType:(id)arg1;
- (int)dataUnitGroupID;
- (id)dataUnits;
- (id)dataUnitsOrderedForDataEntry;
- (id)detailImage;
- (id)displayName;
- (id)embeddedDisplayName;
- (id)groupIcon;
- (unsigned int)hash;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (BOOL)isCharacteristic;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNikeFuel;
- (id)joinString;
- (id)keywords;
- (id)shareIcon;
- (BOOL)shouldDisplayUnitStringOnYAxis;
- (BOOL)showAllDataHierarchically;
- (id)summary;
- (id)summaryAttribution;
- (id)unitChangeCautionaryText;
- (id)unitIcon;
- (BOOL)unitPreferencesRequireChangeConfirmation;

@end
