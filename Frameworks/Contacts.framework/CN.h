/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CN : NSObject

+ (void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2;
+ (id)allContactProperties;
+ (id)allContactPropertyKeys;
+ (id)allContainerProperties;
+ (id)allImageDataProperties;
+ (id)allImageDataPropertyKeys;
+ (id)allNameComponentRelatedProperties;
+ (id)alwaysFetchedProperties;
+ (BOOL)areValidDayComponents:(id)arg1 error:(id*)arg2;
+ (BOOL)areValidGregorianDayComponents:(id)arg1 error:(id*)arg2;
+ (BOOL)areValidKeyPaths:(id)arg1 forObject:(id)arg2 expectedClasses:(id)arg3 allowNil:(id)arg4 error:(id*)arg5;
+ (BOOL)areValidNonGregorianDayComponents:(id)arg1 error:(id*)arg2;
+ (id)birthdayDescription;
+ (id)calendarURIsDescription;
+ (id)callAlertDescription;
+ (id)contactPropertiesByKey;
+ (id)contactRelationsDescription;
+ (id)contactTypeDescription;
+ (id)containerEnabledDescription;
+ (id)containerIdentifierDescription;
+ (id)containerNameDescription;
+ (id)containerTypeDescription;
+ (id)containeriOSLegacyIdentifierDescription;
+ (id)creationDateDescription;
+ (id)cropRectDescription;
+ (id /* block */)dateComponentsFromDictionaryTransform;
+ (id /* block */)dateComponentsToDictionaryTransform;
+ (id)datesDescription;
+ (Class)defaultDataMapperClass;
+ (id)departmentDescription;
+ (id)emailAddressesDescription;
+ (id)familyNameDescription;
+ (id)fullscreenImageDataDescription;
+ (id)givenNameDescription;
+ (id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2;
+ (BOOL)hasContactChineseJapaneseKoreanName:(id)arg1;
+ (BOOL)hasContactChineseJapaneseKoreanPhoneticName:(id)arg1;
+ (id)iOSLegacyIdentifierDescription;
+ (id)identifierDescription;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (id)imageDataAvailableDescription;
+ (id)imageDataDescription;
+ (unsigned int)indexOfPreferredContactsForUnifying:(id)arg1 includingMainStoreContacts:(BOOL)arg2;
+ (unsigned int)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (id)instantMessagAddressesDescription;
+ (id /* block */)instantMessageAddressFromDictionaryTransform;
+ (id /* block */)instantMessageAddressToDictionaryTransform;
+ (BOOL)isEmptyNameContact:(id)arg1 phonetic:(BOOL)arg2 includingPrefixAndSuffix:(BOOL)arg3;
+ (id)jobTitleDescription;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3;
+ (id)linkIdentifierDescription;
+ (id)localizedNameDelimiterForContact:(id)arg1;
+ (id)localizedPhoneticNameDelimiterForContact:(id)arg1;
+ (id)mapsDataDescription;
+ (id)middleNameDescription;
+ (id)multiValueContactProperties;
+ (id)namePrefixDescription;
+ (id)nameSuffixDescription;
+ (id)nicknameDescription;
+ (id)nonGregorianBirthdayDescription;
+ (id)noteDescription;
+ (id /* block */)nullTransform;
+ (id)orderForContactName:(id)arg1;
+ (id)orderForContactName:(id)arg1 phonetic:(BOOL)arg2;
+ (id)orderForContactPhoneticName:(id)arg1;
+ (id)organizationNameDescription;
+ (id /* block */)phoneNumberFromStringTransform;
+ (id /* block */)phoneNumberToStringTransform;
+ (id)phoneNumbersDescription;
+ (id)phonemeDataDescription;
+ (id)phoneticFamilyNameDescription;
+ (id)phoneticGivenNameDescription;
+ (id)phoneticMiddleNameDescription;
+ (id /* block */)postalAddressFromDictionaryTransform;
+ (id /* block */)postalAddressToDictionaryTransform;
+ (id)postalAddressesDescription;
+ (id)preferredForImageDescription;
+ (id)preferredForNameDescription;
+ (id)previousFamilyNameDescription;
+ (id)pronunciationFamilyNameDescription;
+ (id)pronunciationGivenNameDescription;
+ (id /* block */)relatedContactFromStringTransform;
+ (id /* block */)relatedContactToStringTransform;
+ (id)requiredPropertiesForNameScriptDetection;
+ (id)requiredPropertiesForPhoneticNameScriptDetection;
+ (id)sectionForSortingByFamilyNameDescription;
+ (id)sectionForSortingByGivenNameDescription;
+ (id)singleValueContactProperties;
+ (id /* block */)socialProfileFromDictionaryTransform;
+ (id /* block */)socialProfileToDictionaryTransform;
+ (id /* block */)socialProfileToFoundationProfileTransform;
+ (id)socialProfilesDescription;
+ (id)sortingFamilyNameDescription;
+ (id)sortingGivenNameDescription;
+ (id)textAlertDescription;
+ (id)thumbnailImageDataDescription;
+ (id)unifyContactMatchInfos:(id)arg1 linkedContacts:(id)arg2;
+ (id)unifyContacts:(id)arg1 includingMainStoreContacts:(BOOL)arg2;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;
+ (id)urlAddressesDescription;
+ (id)writableAlwaysFetchedProperties;
+ (id)writableContactProperties;
+ (id)writableContainerProperties;
+ (id)writableMultiValueContactProperties;
+ (id)writableSingleValueContactProperties;

@end
