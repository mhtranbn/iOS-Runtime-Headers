/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate> {
    NSTimer *_accuracyFallbackTimer;
    int _authorizationStatus;
    NSTimer *_delayedUpdateTimer;
    <CLLocationManagerDelegate> *_delegate;
    BOOL _isInternalBuild;
    float _lastLocationAccuracy;
    struct { 
        double latitude; 
        double longitude; 
    } _lastLocationCoord;
    NSDate *_lastLocationTimeStamp;
    double _lastLocationUpdateTime;
    CLLocationManager *_locationManager;
    BOOL _locationTrackingIsReady;
    BOOL _locationUpdatesEnabled;
    double _nextPlannedUpdate;
    double _oldestAllowedUpdateTime;
    unsigned int _updateInterval;
}

@property (nonatomic, retain) NSTimer *accuracyFallbackTimer;
@property (nonatomic) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSTimer *delayedUpdateTimer;
@property (nonatomic) <CLLocationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isInternalBuild;
@property (nonatomic) float lastLocationAccuracy;
@property (nonatomic) struct { double x1; double x2; } lastLocationCoord;
@property (nonatomic, copy) NSDate *lastLocationTimeStamp;
@property (nonatomic) double lastLocationUpdateTime;
@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic) BOOL locationTrackingIsReady;
@property (nonatomic) BOOL locationUpdatesEnabled;
@property (nonatomic) double nextPlannedUpdate;
@property (nonatomic) double oldestAllowedUpdateTime;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int updateInterval;

+ (void)clearSharedLocationManager;
+ (id)sharedWeatherLocationManager;

- (void).cxx_destruct;
- (id)accuracyFallbackTimer;
- (void)accuracyFallbackTimerDidFire:(id)arg1;
- (void)askForLocationManagerAuthorization;
- (int)authorizationStatus;
- (void)cancelAccuracyFallbackTimer;
- (void)cancelDelayedUpdateTimer;
- (void)clearLastLocationUpdateTime;
- (void)clearLocalWeatherUpdateState;
- (void)dealloc;
- (id)delayedUpdateTimer;
- (void)delayedUpdateTimerDidFire:(id)arg1;
- (id)delegate;
- (int)forceLoadingAuthorizationStatus;
- (void)forceLocationUpdate;
- (id)init;
- (BOOL)isInternalBuild;
- (BOOL)isLocalStaleOrOutOfDate;
- (float)lastLocationAccuracy;
- (struct { double x1; double x2; })lastLocationCoord;
- (id)lastLocationTimeStamp;
- (double)lastLocationUpdateTime;
- (BOOL)localWeatherAuthorized;
- (id)location;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (BOOL)locationTrackingIsReady;
- (BOOL)locationUpdatesEnabled;
- (void)monitorLocationAuthorization;
- (double)nextPlannedUpdate;
- (double)oldestAllowedUpdateTime;
- (void)scheduleDelayedUpdate:(double)arg1;
- (void)setAccuracyFallbackTimer:(id)arg1;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setDelayedUpdateTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInternalBuild:(BOOL)arg1;
- (void)setLastLocationAccuracy:(float)arg1;
- (void)setLastLocationCoord:(struct { double x1; double x2; })arg1;
- (void)setLastLocationTimeStamp:(id)arg1;
- (void)setLastLocationUpdateTime:(double)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setLocationTrackingActive:(BOOL)arg1;
- (void)setLocationTrackingIsReady:(BOOL)arg1;
- (void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3;
- (void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3 shouldRequestAuthorization:(BOOL)arg4;
- (void)setLocationUpdatesEnabled:(BOOL)arg1;
- (void)setNextPlannedUpdate:(double)arg1;
- (void)setOldestAllowedUpdateTime:(double)arg1;
- (void)setUpdateInterval:(unsigned int)arg1;
- (unsigned int)updateInterval;
- (void)updateLocation:(id)arg1;

@end
