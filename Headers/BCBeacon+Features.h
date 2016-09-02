//
//  BCBeacon+Features.m
//  BlueCatsSDK
//
//  Created by Cody Singleton on 4/13/15.
//  Copyright (c) 2015 BlueCats. All rights reserved.
//

#import "BCBeacon.h"

@interface BCBeacon (Features)

- (BOOL)isTargetSpeedEditable;
- (BOOL)supportsTemperatureData;
- (BOOL)supportsTwoWayDataTransfer;

@end
