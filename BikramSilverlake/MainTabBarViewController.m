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
	// Do any additional setup after loading the view.
    self.schedule  =  [[MainPageTableViewController alloc] initWithNibName:@"MainPageTableViewController" bundle:nil];
   // self.schedule.navigationController = self.navigationController;
    self.settings = [[SettingsViewController alloc] initWithNibName:@"SettingsViewController" bundle:nil];
    self.schedule.tabBarItem.title = @"Schedule";
    self.settings.tabBarItem.title = @"Settings";
    
    self.viewControllers = @[self.schedule,self.settings];
   
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
