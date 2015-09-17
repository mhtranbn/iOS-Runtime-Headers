/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecBuyButton : WBSParsecModel {
    NSString *_adamID;
    BOOL _enabled;
    int _imageAlignment;
    WBSParsecImageRepresentation *_imageRepresentation;
    NSString *_offerIdentifier;
    NSString *_subtitle;
    NSString *_title;
    NSURL *_url;
}

@property (nonatomic, readonly, copy) NSString *adamID;
@property (getter=isEnabled, nonatomic, readonly) BOOL enabled;
@property (nonatomic, readonly) int imageAlignment;
@property (nonatomic, readonly) WBSParsecImageRepresentation *imageRepresentation;
@property (nonatomic, readonly, copy) NSString *offerIdentifier;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (id)schema;

- (void).cxx_destruct;
- (id)adamID;
- (int)imageAlignment;
- (id)imageRepresentation;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEnabled;
- (id)offerIdentifier;
- (id)subtitle;
- (id)title;
- (id)url;

@end
