//
//  BlueCatsBlueCatsSDK.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 2/13/13.
//  Copyright (c) 2013 Bluecats. All rights reserved.
//

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
#import <UIKit/UIKit.h>
#endif

//! Project version number for BlueCatsSDK.
FOUNDATION_EXPORT double BlueCatsVersionNumber;

//! Project version string for BlueCatsSDK.
FOUNDATION_EXPORT const unsigned char BlueCatsSDKVersionString[];

#import "BCAddress.h"
#import "BCApp.h"
#import "BCBatteryStatus.h"
#import "BCBeacon.h"
#import "BCBeaconLoudness.h"
#import "BCTargetSpeed.h"
#import "BCBeaconMode.h"
#import "BCBeaconManager.h"
#import "BCBeaconRegion.h"
#import "BCBeaconVisit.h"
#import "BCBeacon+Analytics.h"
#import "BCCategory.h"
#import "BCCustomValue.h"
#import "BCDefinitions.h"
#import "BCEddystone.h"
#import "BCEvent.h"
#import "BCEventFilter.h"
#import "BCEventFilterContext.h"
#import "BCEventManager.h"
#import "BCJSONModel.h"
#import "BCLasso.h"
#import "BCLassoManager.h"
#import "BCLocalNotification.h"
#import "BCLocalNotificationManager.h"
#import "BCMap.h"
#import "BCMapPoint.h"
#import "BCMicroLocation.h"
#import "BCMicroLocationManager.h"
#import "BCPlatformType.h"
#import "BCPoint.h"
#import "BCResource.h"
#import "BCSite.h"
#import "BCSiteAccessType.h"
#import "BCTrigger.h"
#import "BCTriggeredEvent.h"
#import "BCZone.h"
#import "BCZoneMonitor.h"
#import "NSPredicate+BCBeaconFilter.h"
#import "BCTemperatureData.h"
#import "BCBeacon+Features.h"

@interface BlueCatsSDK : NSObject

+ (void)setOptions:(NSDictionary*)options;

+ (void)startPurring:(void (^)(BCStatus status))completion;
+ (void)startPurringWithAppToken:(NSString *)appToken completion:(void (^)(BCStatus status))completion;
+ (void)startPurringWithoutApi:(void (^)(BCStatus status))completion; // Publicised by Cody and Ron to ensure running without API was possible

+ (void)stopPurring;

+ (void)setAppToken:(NSString *)appToken;
+ (void)setCredentialsWithUserName:(NSString *)userName password:(NSString *)password;

+ (BCStatus)status;
+ (BCAppTokenVerificationStatus)appTokenVerificationStatus;
+ (BOOL)isNetworkReachable;
+ (BOOL)isBluetoothEnabled;
+ (BOOL)isLocationAuthorized;
+ (CLAuthorizationStatus)locationAuthorizationStatus;

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
+ (void)requestAlwaysLocationAuthorization;
+ (void)requestWhenInUseLocationAuthorization;
#else
+ (void)requestLocationAuthorization;
#endif

+ (BCApp*)currentApp;

+ (NSString *)installationIdentifier;
+ (NSString *)deviceIdentifier;
+ (void)setDeviceIdentifier:(NSString *)deviceIdentifier;

+ (void)logEventWithIdentifier:(NSString *)identifier
                         value:(NSString *)value
                         value:(NSString *)value2
                         value:(NSString *)value3;
@end

#pragma mark - BlueCats SDK Options
extern NSString * const BCOptionApiBaseURL;
extern NSString * const BCOptionAutoTrackStandardEvents;
extern NSString * const BCOptionBackgroundSessionTimeIntervalInSeconds;
extern NSString * const BCOptionCacheAllBeaconsForApp;
extern NSString * const BCOptionCacheRefreshTimeIntervalInSeconds;
extern NSString * const BCOptionCacheSitesNearbyByLocation;
extern NSString * const BCOptionCrowdSourceBeaconUpdates;
extern NSString * const BCOptionDiscoverBeaconsNearby;
extern NSString * const BCOptionUseApi;
extern NSString * const BCOptionMaximumDailyBackgroundUsageInMinutes;
extern NSString * const BCOptionMonitorAllAvailableRegionsOnStartup;
extern NSString * const BCOptionMonitorBlueCatsRegionOnStartup;
extern NSString * const BCOptionScanInBackground;
extern NSString * const BCOptionShowBluetoothPowerWarningMessage;
extern NSString * const BCOptionTrackBeaconVisits;
extern NSString * const BCOptionUseEnergySaverScanStrategy;
extern NSString * const BCOptionUseLocalStorage;

// public notifications

extern NSString * const BCNotificationDidStartPurring;
extern NSString * const BCNotificationDidStartPurringStatusKeyItem;
extern NSString * const BCNotificationDidStopPurring;
extern NSString * const BCNotificationBluetoothStateDidChange;
extern NSString * const BCNotificationNetworkReachabilityDidChange;
extern NSString * const BCNotificationLocationAuthorizationStatusDidChange;

// standard event keys

extern NSString * const BCAnalyticEventAppEnteredForeground;
extern NSString * const BCAnalyticEventAppEnteredBackground;
extern NSString * const BCAnalyticEventAppResignedActive;
extern NSString * const BCAnalyticEventAppBecameActive;
extern NSString * const BCAnalyticEventAppWillTerminate;
extern NSString * const BCAnalyticEventAppDidRxLocalNotification;
extern NSString * const BCAnalyticEventSDKStartPurring;
extern NSString * const BCAnalyticEventSDKStopPurring;
