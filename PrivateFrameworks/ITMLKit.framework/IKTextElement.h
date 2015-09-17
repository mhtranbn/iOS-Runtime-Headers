/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTextElement : IKViewElement {
    NSMutableArray *_textBadges;
    IKTextParser *_textParser;
    unsigned int _textStyle;
}

@property (nonatomic, readonly) unsigned int alignment;
@property (nonatomic, readonly) NSArray *badges;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) int maxLines;
@property (nonatomic, readonly, retain) NSAttributedString *text;
@property (nonatomic, readonly) unsigned int textStyle;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (BOOL)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (unsigned int)_styleForTagName:(id)arg1;
- (id)accessibilityText;
- (unsigned int)alignment;
- (id)attributedStringWithFont:(id)arg1;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(int)arg3;
- (id)badges;
- (id)color;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (int)maxLines;
- (id)text;
- (unsigned int)textStyle;

// Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI

- (id)textAttributes;

@end
