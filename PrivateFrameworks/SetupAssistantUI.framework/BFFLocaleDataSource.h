/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFLocaleDataSource : NSObject {
    NSArray *_canonicalLocales;
    NSString *_language;
    NSMutableArray *_moreCountries;
    NSMutableArray *_suggestedCountries;
}

@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) NSMutableArray *moreCountries;
@property (nonatomic, retain) NSMutableArray *suggestedCountries;

+ (id)newWithLanguage:(id)arg1;

- (void).cxx_destruct;
- (id)language;
- (id)moreCountries;
- (unsigned int)numberOfOtherLocales;
- (unsigned int)numberOfRecommendedLocales;
- (id)otherLocaleAtIndex:(unsigned int)arg1;
- (id)recommendedLocaleAtIndex:(unsigned int)arg1;
- (void)reloadData;
- (void)setLanguage:(id)arg1;
- (void)setMoreCountries:(id)arg1;
- (void)setSuggestedCountries:(id)arg1;
- (id)suggestedCountries;

@end
