/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardCardDAVParser : ABVCardParser {
    NSData *_lastCropRectChecksum;
    int _lastCropRectHeight;
    int _lastCropRectWidth;
    int _lastCropRectX;
    int _lastCropRectY;
    BOOL _localRecordHasAdditionalProperties;
    BOOL _removeExistingProperties;
    NSMutableDictionary *_unknownAttributes;
}

@property (readonly, retain) NSData *lastCropRectChecksum;
@property (readonly) int lastCropRectHeight;
@property (readonly) int lastCropRectWidth;
@property (readonly) int lastCropRectX;
@property (readonly) int lastCropRectY;
@property (readonly) BOOL localRecordHasAdditionalProperties;

- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (void)cleanUpCardState;
- (void*)createRecordInSource:(void*)arg1 outRecordType:(unsigned int*)arg2;
- (void)dealloc;
- (id)defaultADRLabel;
- (id)defaultLabel;
- (id)defaultURLLabel;
- (id)genericLabel;
- (BOOL)importToGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)importToPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (id)initWithData:(id)arg1;
- (id)lastCropRectChecksum;
- (int)lastCropRectHeight;
- (int)lastCropRectWidth;
- (int)lastCropRectX;
- (int)lastCropRectY;
- (BOOL)localRecordHasAdditionalProperties;
- (void)noteLackOfValueForImageData;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (BOOL)parseUID;
- (void)setLocalRecordHasAdditionalProperties:(BOOL)arg1;

@end
