/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {
    BOOL _isFromPhraseDictionary;
    BOOL _isFromTextChecker;
    NSString *_label;
    unsigned int _usageTrackingMask;
    unsigned int _wordOriginFeedbackID;
}

@property (nonatomic) BOOL isFromPhraseDictionary;
@property (nonatomic) BOOL isFromTextChecker;
@property (nonatomic, copy) NSString *label;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned int)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAutocorrection;
- (BOOL)isFromPhraseDictionary;
- (BOOL)isFromTextChecker;
- (id)label;
- (void)setIsFromPhraseDictionary:(BOOL)arg1;
- (void)setIsFromTextChecker:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (unsigned int)usageTrackingMask;
- (unsigned int)wordOriginFeedbackID;

@end
