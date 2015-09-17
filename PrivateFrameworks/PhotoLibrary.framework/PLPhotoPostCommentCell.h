/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoPostCommentCell : UITableViewCell {
    UIButton *_addCommentButton;
    UILabel *_contentLabel;
    UIView *_styledSeparatorView;
    BOOL _wantsEntryInCell;
}

@property (nonatomic, readonly, retain) UIButton *addCommentButton;
@property (nonatomic, readonly, retain) UILabel *contentLabel;
@property (nonatomic, readonly, retain) UIView *styledSeparatorView;
@property (nonatomic) BOOL wantsEntryInCell;

+ (float)heightForWidth:(float)arg1;

- (id)_commentPostPlaceholder;
- (id)addCommentButton;
- (id)contentLabel;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setWantsEntryInCell:(BOOL)arg1;
- (void)setupContent;
- (id)styledSeparatorView;
- (BOOL)wantsEntryInCell;

@end
