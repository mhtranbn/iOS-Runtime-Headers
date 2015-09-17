/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSDisplayLayoutElement : NSObject <BSDescriptionProviding, BSSettingDescriptionProvider, BSXPCCoding, FBSDisplayLayoutElement, NSCopying, SBSDisplayLayoutElement> {
    BOOL _application;
    NSString *_bundleIdentifier;
    BOOL _fillsDisplayBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    NSString *_identifier;
    BOOL _keyboardFocus;
    int _level;
    BSMutableSettings *_otherSettings;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _referenceFrame;
}

@property (getter=isUIApplicationElement, nonatomic) BOOL UIApplicationElement;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fillsDisplayBounds;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property (nonatomic) BOOL hasKeyboardFocus;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) int layoutRole;
@property (nonatomic) int level;
@property (nonatomic, readonly, copy) BSMutableSettings *otherSettings;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } referenceFrame;
@property (getter=isSpringBoardElement, nonatomic, readonly) BOOL springBoardElement;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (Class)fallbackXPCEncodableClass;
- (BOOL)fillsDisplayBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (BOOL)hasKeyboardFocus;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUIApplicationElement;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (int)level;
- (id)otherSettings;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })referenceFrame;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFillsDisplayBounds:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHasKeyboardFocus:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLevel:(int)arg1;
- (void)setOtherSettings:(id)arg1;
- (void)setReferenceFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUIApplicationElement:(BOOL)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

// Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices

- (BOOL)isSpringBoardElement;
- (int)layoutRole;

@end
