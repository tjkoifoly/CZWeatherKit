//
//  CZWeatherData.h
//  CZWeatherKit
//
//  Created by Comyar Zaheri on 5/19/14.
//  Copyright (c) 2014 Comyar Zaheri. All rights reserved.
//


#pragma mark - Imports

@import Foundation;


#pragma mark - Forward Declarations

@class CZWeatherState;


#pragma mark - CZWeatherData Interface

@interface CZWeatherData : NSObject

@property (nonatomic, readonly) CZWeatherState      *currentConditions;

@property (nonatomic, readonly) NSArray             *forecasts;

@property (nonatomic, readonly) NSDictionary        *location;

@property (nonatomic, readonly) NSDate              *localTime;

@property (nonatomic, readonly) NSDate              *timestamp;

@end