/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface NCSnippetDatum : NSObject <NCDatum> {
    BBBulletin *_representedBulletin;
}

@property (nonatomic, readonly, copy) NSString *datumIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BBBulletin *representedBulletin;
@property (readonly) Class superclass;

- (id)datumIdentifier;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithBulletin:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)representedBulletin;

@end
