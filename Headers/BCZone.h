//
//  BCZone.h
//  BlueCatsSDK
//
//  Created by Cody Singleton on 8/19/15.
//  Copyright (c) 2015 bluecats. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCDefinitions.h"

@class BCSite;

@interface BCZone : NSObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, assign) BCZoneState zoneState;
@property (nonatomic, copy) BCSite* site;
@property (nonatomic, strong) NSDate* enteredZoneAt;
@property (nonatomic, strong) NSDate* reenteredZoneAt;
@property (nonatomic, strong) NSDate* exitedZoneAt;
@property (nonatomic, strong) NSDate* lastRangedBeaconsInZoneAt;
@property (nonatomic, assign) NSInteger entryCount;

- (NSDate *) lastEntered;

@end
