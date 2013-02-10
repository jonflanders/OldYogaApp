//
//  MainPageTableViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 10/12/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PullRefreshTableViewController.h"
#import <EventKit/EventKit.h>
static NSString *MainCellIdentifier = @"Cell";
static NSString *URL = @"http://www.bikramyogasilverlake.com/api/schedule";
static NSString* LocalCache = @"LocalCacheData";
@interface MainPageTableViewController : PullRefreshTableViewController
@property (strong,nonatomic) NSArray* classes;
@property (strong,nonatomic) NSDictionary* studioData;
@property (strong,nonatomic)NSString* dateString;
@property (nonatomic)NSInteger currentDay;
@property (strong,nonatomic) UINavigationItem *navItem;
@end
