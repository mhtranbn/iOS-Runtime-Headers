/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnnotationAuthor : TSPObject {
    TSUColor *mColor;
    NSString *mName;
}

@property (nonatomic, readonly) NSString *appearanceColorForAuthor;
@property (nonatomic, readonly) NSString *authorColorName;
@property (nonatomic, readonly) TSUColor *cellViolatorColor;
@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;
@property (nonatomic, readonly) TSUColor *flagFillColor;
@property (nonatomic, readonly) TSUColor *flagPressedColor;
@property (nonatomic, readonly) TSUColor *flagStrokeColor;
@property (nonatomic, readonly) TSUColor *gradientEndColor;
@property (nonatomic, readonly) TSUColor *gradientStartColor;
@property (nonatomic, readonly) TSUColor *indicatorDarkColor;
@property (nonatomic, readonly) TSUColor *indicatorLightColor;
@property (nonatomic, readonly) NSString *menuSwatchColorForAuthor;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) TSUColor *popoverAuthorLabelColor;
@property (nonatomic, readonly) TSUColor *popoverButtonTintColor;
@property (nonatomic, readonly) TSUColor *popoverColor;
@property (nonatomic, readonly) BOOL showAuthorComments;
@property (nonatomic, readonly) TSUColor *sidebarChangeBarColor;
@property (nonatomic, readonly) TSUColor *sidebarDecoratorLineColor;
@property (nonatomic, readonly) TSUColor *sidebarHoverColor;
@property (nonatomic, readonly) TSUColor *sidebarSelectedBorderColor;
@property (nonatomic, readonly) TSUColor *sidebarSelectedColor;
@property (nonatomic, readonly) TSUColor *sidebarUsernameColor;
@property (nonatomic, retain) TSUColor *storageColor;
@property (nonatomic, readonly) TSUColor *textHighlightColor;
@property (nonatomic, readonly) TSUColor *textMarkupColor;

+ (id)authorColorAppearanceNameForIndex:(unsigned int)arg1;
+ (id)authorColorForIndex:(unsigned int)arg1 forKey:(id)arg2;
+ (id)authorColorNameForIndex:(unsigned int)arg1;
+ (id)authorMenuSwatchColorForIndex:(unsigned int)arg1;
+ (id)authorStorageColorForIndex:(unsigned int)arg1;
+ (id)authorTextMarkupColorForIndex:(unsigned int)arg1;
+ (id)collaboratorCursorColorByLightColor:(id)arg1;
+ (id)defaultAuthorName;
+ (id)indicatorDarkColorByLightColor:(id)arg1;
+ (id)indicatorDarkColorForIndex:(unsigned int)arg1;
+ (id)indicatorLightColorByAuthorColor:(id)arg1;
+ (id)indicatorLightColorForIndex:(unsigned int)arg1;
+ (id)normalizedAuthorNameForAuthorName:(id)arg1;
+ (unsigned int)p_authorColorIndexWithColor:(id)arg1 forIndicator:(BOOL)arg2;
+ (unsigned int)presetColorCount;

- (BOOL)allowsImplicitComponentOwnership;
- (id)appearanceColorForAuthor;
- (id)authorColorName;
- (id)cellViolatorColor;
- (id)changeAdornmentsColor;
- (id)componentRootObject;
- (void)dealloc;
- (id)description;
- (id)flagFillColor;
- (id)flagPressedColor;
- (id)flagStrokeColor;
- (id)gradientEndColor;
- (id)gradientStartColor;
- (unsigned int)hash;
- (id)indicatorDarkColor;
- (id)indicatorLightColor;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)menuSwatchColorForAuthor;
- (id)name;
- (unsigned int)p_authorColorIndex;
- (id)popoverAuthorLabelColor;
- (id)popoverButtonTintColor;
- (id)popoverColor;
- (void)saveToArchiver:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStorageColor:(id)arg1;
- (BOOL)showAuthorComments;
- (id)sidebarChangeBarColor;
- (id)sidebarDecoratorLineColor;
- (id)sidebarHoverColor;
- (id)sidebarSelectedBorderColor;
- (id)sidebarSelectedColor;
- (id)sidebarUsernameColor;
- (id)storageColor;
- (id)textHighlightColor;
- (id)textMarkupColor;

@end
