//
//  BuyDetailViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/2/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BusyViewController.h"
#import "MBOClientLogin.h"

@interface BuyDetailViewController : UITableViewController<MBOLoginComplete>
@property (nonatomic,strong) NSDictionary* item;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *doneButton;
@property (strong, nonatomic) IBOutlet UINavigationController *nav;

@property (strong, nonatomic) IBOutlet UIBarButtonItem *cancelButton;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *buyButton;
@property (strong,nonatomic) BusyViewController* busyView;
-(void)complete:(NSString *)clientID;
@property  (strong,nonatomic) MBOClientLogin* login;
@end
