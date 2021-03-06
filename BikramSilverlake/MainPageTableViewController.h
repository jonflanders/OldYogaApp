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
#import "BusyViewController.h"
#import "MBOClientLogin.h"
#import "CMPopTipView.h"

static NSString *MainCellIdentifier = @"Cell";
static NSString *TopCellIdentifier = @"Top";

static NSString* LocalCache = @"LocalCacheData";

@interface MainPageTableViewController : PullRefreshTableViewController<MBOLoginComplete,CMPopTipViewDelegate>
@property (strong,nonatomic) NSArray* classes;
@property (strong,nonatomic) NSArray* instructors;
@property (strong,nonatomic) NSDictionary* studioData;
@property (strong,nonatomic)NSString* dateString;
@property (nonatomic)NSInteger currentDay;
@property (strong,nonatomic) UIBarButtonItem* nextButton;
@property (strong,nonatomic) UIBarButtonItem* prevButton;
@property (strong, nonatomic) IBOutlet UISwipeGestureRecognizer *swipeGR;
@property (strong,nonatomic) BusyViewController* busyView;
@property (strong, nonatomic) IBOutlet UILabel *addedToCalendar;
@property (strong,nonatomic) NSDictionary* selectedDay;
@property (strong,nonatomic) MBOClientLogin* login;
@end
