//
//  MainTabBarViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 10/13/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import "MainTabBarViewController.h"

@interface MainTabBarViewController ()

@end

@implementation MainTabBarViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
          }
    return self;
}

-(void)viewDidAppear:(BOOL)animated{
   self.title = self.selectedViewController.title;
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    self.tabBar.tintColor = [UIColor clearColor];	// Do any additional setup after loading the view.
    self.schedule  =  [[MainPageTableViewController alloc] initWithNibName:@"MainPageTableViewController" bundle:nil];
    self.settings = [[YouViewController alloc] initWithNibName:@"YouViewController" bundle:nil];
    self.settings.tabBarItem.title = @"You";
    self.scheduleNavController = [[UINavigationController alloc] initWithRootViewController:self.schedule];
    self.scheduleNavController.tabBarItem.title = @"Schedule";
    [self.scheduleNavController.navigationBar setTintColor:[UIColor colorWithRed:(254.0/255.0) green:(178.0/255.0) blue:(67.0/255.0) alpha:1.0]];
    self.studioNews = [[StudioNewsViewController alloc] initWithNibName:@"StudioNewsViewController" bundle:nil];
    self.about = [[AboutTheStudioViewController alloc] initWithNibName:@"AboutTheStudioViewController" bundle:nil];
    self.buyViewController = [[BuyViewController alloc] initWithNibName:@"BuyViewController" bundle:nil];
    self.viewControllers = @[self.scheduleNavController,self.buyViewController,self.studioNews ,self.about,self.settings];
   
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
