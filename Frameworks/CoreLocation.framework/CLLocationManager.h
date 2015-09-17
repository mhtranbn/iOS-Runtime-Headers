/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManager : NSObject {
    id _internal;
}

@property (nonatomic) int activityType;
@property (nonatomic) BOOL allowsBackgroundLocationUpdates;
@property (nonatomic, readonly) double bestAccuracy;
@property (nonatomic) <CLLocationManagerDelegate> *delegate;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (getter=isDynamicAccuracyReductionEnabled, nonatomic) BOOL dynamicAccuracyReductionEnabled;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (nonatomic, readonly, copy) CLHeading *heading;
@property (nonatomic, readonly) BOOL headingAvailable;
@property (nonatomic) double headingFilter;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) struct __CLClient { }*internalClient;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly) BOOL locationServicesApproved;
@property (nonatomic, readonly) BOOL locationServicesAvailable;
@property (nonatomic, readonly) BOOL locationServicesEnabled;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) BOOL locationServicesPreferencesDialogEnabled;
@property (getter=isMatchInfoEnabled, nonatomic) BOOL matchInfoEnabled;
@property (nonatomic, readonly) double maximumRegionMonitoringDistance;
@property (nonatomic, readonly, copy) NSSet *monitoredRegions;
@property (nonatomic) BOOL pausesLocationUpdatesAutomatically;
@property (getter=isPersistentMonitoringEnabled, nonatomic) BOOL persistentMonitoringEnabled;
@property (nonatomic) BOOL privateMode;
@property (nonatomic, copy) NSString *purpose;
@property (nonatomic, readonly, copy) NSSet *rangedRegions;
@property (nonatomic) BOOL supportInfo;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (int)_authorizationStatus;
+ (int)_authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (int)_regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (unsigned int)activeLocationServiceTypesForLocationDictionary:(id)arg1;
+ (BOOL)advertiseAsBeacon:(id)arg1 withPower:(id)arg2;
+ (unsigned int)allowableAuthorizationForLocationDictionary:(id)arg1;
+ (int)authorizationStatus;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;
+ (BOOL)bundleSupported:(id)arg1;
+ (id)dateLocationLastUsedForLocationDictionary:(id)arg1;
+ (BOOL)deferredLocationUpdatesAvailable;
+ (BOOL)dumpLogsWithMessage:(id)arg1;
+ (unsigned int)entityAuthorizationForLocationDictionary:(id)arg1;
+ (unsigned int)entityClassesForLocationDictionary:(id)arg1;
+ (BOOL)hasUsedBackgroundLocationServices:(id)arg1;
+ (BOOL)headingAvailable;
+ (BOOL)isEntityAuthorizedForLocationDictionary:(id)arg1;
+ (BOOL)isLocationActiveForLocationDictionary:(id)arg1;
+ (BOOL)isMonitoringAvailableForClass:(Class)arg1;
+ (BOOL)isRangingAvailable;
+ (BOOL)isStatusBarIconEnabledForLocationEntityClass:(unsigned int)arg1;
+ (BOOL)locationServicesEnabled;
+ (BOOL)locationServicesEnabled:(BOOL)arg1;
+ (BOOL)mapCorrectionAvailable;
+ (unsigned int)primaryEntityClassForLocationDictionary:(id)arg1;
+ (int)regionMonitoringAuthorizationStatusForBundle:(id)arg1;
+ (int)regionMonitoringAuthorizationStatusForBundleIdentifier:(id)arg1;
+ (BOOL)regionMonitoringAvailable;
+ (BOOL)regionMonitoringEnabled;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatus:(BOOL)arg1 forBundleIdentifier:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundle:(id)arg2;
+ (void)setAuthorizationStatusByType:(int)arg1 forBundleIdentifier:(id)arg2;
+ (void)setDefaultEffectiveBundle:(id)arg1;
+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;
+ (void)setEntityAuthorization:(unsigned int)arg1 forLocationDictionary:(id)arg2;
+ (void)setEntityAuthorized:(BOOL)arg1 forLocationDictionary:(id)arg2;
+ (void)setLocationServicesEnabled:(BOOL)arg1;
+ (void)setStatusBarIconEnabled:(BOOL)arg1 forLocationEntityClass:(unsigned int)arg2;
+ (id)sharedManager;
+ (BOOL)shutdownDaemon;
+ (BOOL)significantLocationChangeMonitoringAvailable;

- (int)activityType;
- (void)allowDeferredLocationUpdatesUntilTraveled:(double)arg1 timeout:(double)arg2;
- (BOOL)allowsBackgroundLocationUpdates;
- (id)appsUsingLocation;
- (id)appsUsingLocationWithDetails;
- (double)bestAccuracy;
- (void)dealloc;
- (id)delegate;
- (double)desiredAccuracy;
- (void)disallowDeferredLocationUpdates;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (double)expectedGpsUpdateInterval;
- (id)heading;
- (BOOL)headingAvailable;
- (double)headingFilter;
- (int)headingOrientation;
- (id)init;
- (id)initWithEffectiveBundle:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1;
- (id)initWithEffectiveBundleIdentifier:(id)arg1 bundle:(id)arg2;
- (struct __CLClient { }*)internalClient;
- (BOOL)isDynamicAccuracyReductionEnabled;
- (BOOL)isLocationServicesPreferencesDialogEnabled;
- (BOOL)isMatchInfoEnabled;
- (BOOL)isPersistentMonitoringEnabled;
- (id)location;
- (BOOL)locationServicesApproved;
- (BOOL)locationServicesAvailable;
- (BOOL)locationServicesEnabled;
- (void)markAsHavingReceivedLocation;
- (double)maximumRegionMonitoringDistance;
- (id)monitoredRegions;
- (void)onClientEvent:(int)arg1 supportInfo:(id)arg2;
- (void)onClientEventAuthStatus:(id)arg1;
- (void)onClientEventAutopauseStatus:(id)arg1;
- (void)onClientEventBatch:(id)arg1;
- (void)onClientEventError:(id)arg1;
- (void)onClientEventHeading:(id)arg1;
- (void)onClientEventHeadingCalibration:(id)arg1;
- (void)onClientEventHistoricLocation:(id)arg1;
- (void)onClientEventInterrupted:(id)arg1;
- (void)onClientEventLocation:(id)arg1;
- (void)onClientEventLocationUnavailable:(id)arg1;
- (void)onClientEventRanging:(id)arg1;
- (void)onClientEventRangingError:(id)arg1;
- (void)onClientEventRegion:(id)arg1;
- (void)onClientEventRegionError:(id)arg1;
- (void)onClientEventRegionResponseDelayed:(id)arg1;
- (void)onClientEventRegionSetupCompleted:(id)arg1;
- (void)onClientEventRegionState:(id)arg1;
- (void)onClientEventSignificantLocationVisit:(id)arg1;
- (void)onClientEventVehicleHeading:(id)arg1;
- (void)onClientEventVehicleSpeed:(id)arg1;
- (void)onDidBecomeActive:(id)arg1;
- (void)onLocationRequestTimeout;
- (void)pauseLocationUpdates:(BOOL)arg1;
- (BOOL)pausesLocationUpdatesAutomatically;
- (BOOL)privateMode;
- (id)purpose;
- (id)rangedRegions;
- (void)registerAsLocationClient;
- (void)requestAlwaysAuthorization;
- (void)requestLocation;
- (void)requestStateForRegion:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)resetApps;
- (void)resumeLocationUpdates;
- (void)setActivityType:(int)arg1;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setDynamicAccuracyReductionEnabled:(BOOL)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsActuallyAWatchKitExtension:(BOOL)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1;
- (void)setMatchInfoEnabled:(BOOL)arg1;
- (void)setPausesLocationUpdatesAutomatically:(BOOL)arg1;
- (void)setPersistentMonitoringEnabled:(BOOL)arg1;
- (void)setPrivateMode:(BOOL)arg1;
- (void)setPurpose:(id)arg1;
- (void)setSupportInfo:(BOOL)arg1;
- (void)startAppStatusUpdates;
- (void)startMonitoringForRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1 desiredAccuracy:(double)arg2;
- (void)startMonitoringSignificantLocationChanges;
- (void)startMonitoringVisits;
- (void)startRangingBeaconsInRegion:(id)arg1;
- (void)startTechStatusUpdates;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingLocationWithPrompt;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopAppStatusUpdates;
- (void)stopMonitoringForRegion:(id)arg1;
- (void)stopMonitoringSignificantLocationChanges;
- (void)stopMonitoringVisits;
- (void)stopRangingBeaconsInRegion:(id)arg1;
- (void)stopTechStatusUpdates;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (BOOL)supportInfo;
- (id)technologiesInUse;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (BOOL)convertAuthStatusToBool:(int)arg1;
+ (int)convertToHMDLocationAuthorization:(int)arg1;
+ (id)hmdLocationAuthorizationAsString:(int)arg1;
+ (id)locationAuthorizationDescription:(int)arg1;
+ (id)referenceFrameDescription:(int)arg1;
+ (id)regionDescription:(id)arg1;
+ (id)regionStateDescription:(int)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (BOOL)convertAuthStatusToBool:(int)arg1;
+ (int)convertToHMDLocationAuthorization:(int)arg1;
+ (id)hmdLocationAuthorizationAsString:(int)arg1;
+ (id)locationAuthorizationDescription:(int)arg1;
+ (id)referenceFrameDescription:(int)arg1;
+ (id)regionDescription:(id)arg1;
+ (id)regionStateDescription:(int)arg1;

@end
