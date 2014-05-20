//
//  CZWeatherService.h
//  
//
//  Created by Comyar Zaheri on 5/19/14.
//
//


#pragma mark - Imports

@import Foundation;


#pragma mark - Forward Declarations

@class CZWeatherData;
@class CZWeatherRequest;


#pragma mark - Protocol

/**
 The CZWeatherService protocol outlines an interface for objects to implement in order to act
 as services for weather requests. Objects adopting the CZWeatherService protocol provide URLs
 for specific weather APIs and parse downloaded data.
 */
@protocol CZWeatherService <NSObject>

@required

// -----
// @name Using a Weather Service
// -----

#pragma mark Using a Weather Service

/**
 Returns the appropriate URL for the given request.
 @param request Weather requests asking for the URL.
 @return        URL for the given request, or nil if the request is malformed.
 */
- (NSURL *)urlForRequest:(CZWeatherRequest *)request;

/**
 Parses the response data from the given request.
 @param data    Response data from a weather request.
 @param request Weather request that retrieved the response data.
 @return        Weather data instance from the parsed response data, or nil if the data is malformed.
 */
- (CZWeatherData *)weatherDataForResponseData:(NSData *)data request:(CZWeatherRequest *)request;

// -----
// @name Class Methods
// -----

#pragma mark Class Methods

/**
 Returns a human-readable name for the weather service
 @return Name of the weather service
 */
+ (NSString *)serviceName;

// -----
// @name Properties
// -----

#pragma mark Properties

/**
 API key for the given service.
 */
@property (nonatomic) NSString *key;

@end