//
//  SettingsViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 10/13/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingsViewController : UITableViewController
@property (strong, nonatomic) IBOutlet UINavigationController *nav;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *cancelButton;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *doneButton;

@end
