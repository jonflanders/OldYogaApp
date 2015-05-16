//
//  YouViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/14/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MBOClientRecords.h"
#import "BusyViewController.h"

@interface YouViewController : UITableViewController<MBOLoginComplete,MBOClientRecordDelegate>
@property    (strong,nonatomic) MBOClientRecords* records;
@property (strong,nonatomic) BusyViewController* busyViewController;
@property BOOL loggedIn;
@end
