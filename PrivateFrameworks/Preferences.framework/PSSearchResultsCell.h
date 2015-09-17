/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchResultsCell : UITableViewCell {
    BOOL _shouldIndentContent;
    BOOL _shouldIndentSeparator;
}

@property (nonatomic) BOOL shouldIndentContent;
@property (nonatomic) BOOL shouldIndentSeparator;

+ (id)reuseIdentifier;

- (void)_resetIndentation;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setShouldIndentContent:(BOOL)arg1;
- (void)setShouldIndentSeparator:(BOOL)arg1;
- (BOOL)shouldIndentContent;
- (BOOL)shouldIndentSeparator;

@end
