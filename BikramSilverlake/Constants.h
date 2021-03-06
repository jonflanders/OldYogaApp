//
//  Constants.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/1/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString* const BaseURL;
extern NSString* const ScheduleURL;
extern NSString* const SalesURL;
extern NSString* const NewsURL;
extern NSString* const MBOClientURL;
extern NSString* const MBOClassURL;
extern NSString* const MBOSourceName;
extern NSString* const MBOPassword;
extern NSString* const MBOSalesURL;
extern int const SiteId;
#define IS_RETINA ([[UIScreen mainScreen] respondsToSelector:@selector(displayLinkWithTarget:selector:)] && ([UIScreen mainScreen].scale == 2.0))