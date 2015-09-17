/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        BOOL identifier[512]; 
        BOOL onBehalfOfIdentifier[512]; 
        int type; 
        bool notifyOnEntry; 
        bool notifyOnExit; 
        bool conservativeEntry; 
        union { 
            struct { 
                BOOL proximityUUID[512]; 
                unsigned short major; 
                unsigned short minor; 
                int definitionMask; 
                bool notifyEntryStateOnDisplay; 
            } beaconAttributes; 
            struct { 
                struct { 
                    double latitude; 
                    double longitude; 
                } center; 
                double radius; 
                double desiredAccuracy; 
                int referenceFrame; 
            } circularAttributes; 
        } ; 
    } fRegion;
}

@property (nonatomic, readonly) struct { double x1; double x2; } center;
@property (nonatomic, readonly) struct { BOOL x1[512]; BOOL x2[512]; int x3; bool x4; bool x5; bool x6; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; bool x_1_2_5; } x_7_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; int x_2_2_4; } x_7_1_2; } x7; } clientRegion;
@property (nonatomic) BOOL conservativeEntry;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) BOOL notifyOnEntry;
@property (nonatomic) BOOL notifyOnExit;
@property (nonatomic, copy) NSString *onBehalfOfBundleId;
@property (nonatomic, readonly) double radius;
@property (nonatomic) int referenceFrame;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (BOOL)supportsSecureCoding;

- (void)_encodeWithCoder:(id)arg1;
- (id)_initWithCoder:(id)arg1;
- (struct { double x1; double x2; })center;
- (struct { BOOL x1[512]; BOOL x2[512]; int x3; bool x4; bool x5; bool x6; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; bool x_1_2_5; } x_7_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; int x_2_2_4; } x_7_1_2; } x7; })clientRegion;
- (BOOL)conservativeEntry;
- (BOOL)containsCoordinate:(struct { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)initCircularRegionWithCenter:(struct { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(struct { BOOL x1[512]; BOOL x2[512]; int x3; bool x4; bool x5; bool x6; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; bool x_1_2_5; } x_7_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; int x_2_2_4; } x_7_1_2; } x7; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)notifyOnEntry;
- (BOOL)notifyOnExit;
- (id)onBehalfOfBundleId;
- (double)radius;
- (int)referenceFrame;
- (void)setConservativeEntry:(BOOL)arg1;
- (void)setNotifyOnEntry:(BOOL)arg1;
- (void)setNotifyOnExit:(BOOL)arg1;
- (void)setOnBehalfOfBundleId:(id)arg1;
- (void)setReferenceFrame:(int)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)regionWithLocations:(id)arg1 andIdentifier:(id)arg2;

@end
