//
//  MainTabBarViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 10/13/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainPageTableViewController.h"
#import "StudioNewsViewController.h"
#import "AboutTheStudioViewController.h"
#import "BuyViewController.h"
#import "YouViewController.h"

@interface MainTabBarViewController : UITabBarController
@property  (strong,nonatomic) MainPageTableViewController* schedule;
@property   (strong,nonatomic)  YouViewController* settings;
@property (strong,nonatomic) StudioNewsViewController* studioNews;
@property (strong,nonatomic) AboutTheStudioViewController* about;
@property  (strong,nonatomic) UINavigationController* scheduleNavController;
@property (strong,nonatomic) BuyViewController* buyViewController;
@end
