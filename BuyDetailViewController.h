//
//  BuyDetailViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/2/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BuyDetailViewController : UITableViewController
@property (nonatomic,strong) NSDictionary* item;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *doneButton;

@end
