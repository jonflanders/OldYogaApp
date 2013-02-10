//
//  MainTabBarViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 10/13/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainPageTableViewController.h"
#import "SettingsViewController.h"
@interface MainTabBarViewController : UITabBarController
@property  (strong,nonatomic) MainPageTableViewController* schedule;
@property   (strong,nonatomic)  SettingsViewController* settings;
@end
