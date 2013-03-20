//
//  AppDelegate.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 8/15/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainTabBarViewController.h"
#import "LoginViewController.h"
@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate,LoginViewComplete>

@property (strong, nonatomic) UIWindow *window;
@property (strong,nonatomic) LoginViewController* loginViewController;
@property (strong, nonatomic) MainTabBarViewController *viewController;
@end
