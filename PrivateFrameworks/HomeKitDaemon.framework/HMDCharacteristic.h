/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristic : NSObject <NSSecureCoding> {
    HMDAccessory *_accessory;
    NSData *_authorizationData;
    NSNumber *_characteristicInstanceID;
    HMDCharacteristicMetadata *_characteristicMetadata;
    int _characteristicProperties;
    NSString *_characteristicType;
    NSMutableSet *_hapCharacteristicTuples;
    id _lastKnownValue;
    unsigned long long _lastKnownValueUpdateTime;
    BOOL _notificationEnabled;
    NSMutableSet *_notificationRegistrations;
    HMDService *_service;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, copy) NSData *authorizationData;
@property (nonatomic, readonly) NSDictionary *bulletinContext;
@property (nonatomic, readonly) HMDBulletinCategory *category;
@property (nonatomic, retain) NSNumber *characteristicInstanceID;
@property (nonatomic, retain) HMDCharacteristicMetadata *characteristicMetadata;
@property (nonatomic) int characteristicProperties;
@property (nonatomic, retain) NSString *characteristicType;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, retain) NSMutableSet *hapCharacteristicTuples;
@property (nonatomic, readonly, copy) NSNumber *instanceID;
@property (nonatomic, retain) id lastKnownValue;
@property (nonatomic) unsigned long long lastKnownValueUpdateTime;
@property (nonatomic, readonly) HMDCharacteristicMetadata *metadata;
@property (getter=isNotificationEnabled, nonatomic, readonly) BOOL notificationEnabled;
@property (nonatomic, retain) NSMutableSet *notificationRegistrations;
@property (nonatomic, readonly) int properties;
@property (nonatomic, readonly) HMDService *service;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) id value;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (id)authorizationData;
- (struct NSDictionary { Class x1; }*)bulletinContext;
- (id)category;
- (id)characteristicForHAPAccessory:(id)arg1;
- (id)characteristicForServerIdentifier:(id)arg1 linkType:(int)arg2;
- (id)characteristicInstanceID;
- (id)characteristicMetadata;
- (int)characteristicProperties;
- (id)characteristicType;
- (void)configureWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (id)contextID;
- (BOOL)deregisterNotificationForClientIdentifier:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(int)arg2;
- (id)hapCharacteristicTuples;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (BOOL)isNotificationEnabled;
- (BOOL)isNotificationEnabledForClientIdentifier:(id)arg1;
- (id)lastKnownValue;
- (unsigned long long)lastKnownValueUpdateTime;
- (id)localizedCategoryName;
- (id)localizedCategoryState;
- (id)metadata;
- (id)notificationRegistrations;
- (int)properties;
- (id)service;
- (void)setAuthorizationData:(id)arg1;
- (void)setCharacteristicInstanceID:(id)arg1;
- (void)setCharacteristicMetadata:(id)arg1;
- (void)setCharacteristicProperties:(int)arg1;
- (void)setCharacteristicType:(id)arg1;
- (void)setHapCharacteristicTuples:(id)arg1;
- (void)setLastKnownValue:(id)arg1;
- (void)setLastKnownValueUpdateTime:(unsigned long long)arg1;
- (void)setNotificationEnabled:(BOOL)arg1 forClientIdentifier:(id)arg2;
- (void)setNotificationRegistrations:(id)arg1;
- (id)type;
- (void)unconfigure;
- (void)unconfigureAll;
- (void)unconfigureForServerIdentifier:(id)arg1 linkType:(int)arg2;
- (void)updateLastKnownValue;
- (void)updateValue:(id)arg1;
- (void)updateValue:(id)arg1 serverIdentifier:(id)arg2 linkType:(int)arg3;
- (id)validateValue:(id)arg1 outValue:(id*)arg2;
- (id)value;

@end
