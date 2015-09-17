/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievementInternal : GKInternalRepresentation {
    NSString *_achievedDescription;
    union { 
        struct { 
            unsigned int _maximumPoints : 16; 
            unsigned int _hidden : 1; 
            unsigned int _replayable : 1; 
            unsigned int _reserved : 14; 
        } ; 
        unsigned int _value; 
    } _attributes;
    NSString *_groupIdentifier;
    NSDictionary *_icons;
    NSString *_identifier;
    NSDate *_lastReportedDate;
    double _percentComplete;
    GKPlayerInternal *_player;
    NSString *_title;
    NSString *_unachievedDescription;
}

@property (nonatomic, retain) NSString *achievedDescription;
@property (nonatomic) unsigned int attributes;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (getter=isHidden, nonatomic) BOOL hidden;
@property (nonatomic, retain) NSDictionary *icons;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *lastReportedDate;
@property (nonatomic) unsigned short maximumPoints;
@property (nonatomic) double percentComplete;
@property (nonatomic, retain) GKPlayerInternal *player;
@property (getter=isReplayable, nonatomic) BOOL replayable;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *unachievedDescription;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (id)achievedDescription;
- (unsigned int)attributes;
- (void)dealloc;
- (id)descriptionSubstitutionMap;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned int)hash;
- (id)icons;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHidden;
- (BOOL)isReplayable;
- (id)lastReportedDate;
- (unsigned short)maximumPoints;
- (void)mergePropertiesFromDescription:(id)arg1;
- (double)percentComplete;
- (id)player;
- (id)serverRepresentation;
- (void)setAchievedDescription:(id)arg1;
- (void)setAttributes:(unsigned int)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastReportedDate:(id)arg1;
- (void)setMaximumPoints:(unsigned short)arg1;
- (void)setPercentComplete:(double)arg1;
- (void)setPlayer:(id)arg1;
- (void)setReplayable:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnachievedDescription:(id)arg1;
- (id)title;
- (id)unachievedDescription;

@end
