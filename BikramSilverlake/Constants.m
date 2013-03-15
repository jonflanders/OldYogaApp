//
//  Constants.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/1/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "Constants.h"

NSString* const BaseURL = @"http://www.bikramyogasilverlake.com";
NSString* const ScheduleURL = @"/api/schedule";
NSString* const SalesURL = @"/api/sales";
NSString* const NewsURL = @"/api/news";
#ifdef DEBUG
NSString* const MBOClientURL = @"http://api.mindbodyonline.com/0_5/ClientService.asmx";
NSString* const MBOClassURL = @"http://api.mindbodyonline.com/0_5/ClassService.asmx";

#else
NSString* const MBOClientURL = @"https://api.mindbodyonline.com/0_5/ClientService.asmx";
NSString* const MBOClassURL = @"https://api.mindbodyonline.com/0_5/ClassService.asmx";

#endif
NSString* const MBOSalesURL = @"https://api.mindbodyonline.com/0_5/SaleService.asmx";

NSString* const MBOSourceName = @"BikramYogaSilverlake";
NSString* const MBOPassword = @"WebSite2011";
int const SiteId = 5354;