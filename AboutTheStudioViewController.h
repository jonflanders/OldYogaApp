//
//  AboutTheStudioViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AboutTheStudioViewController : UIViewController<UITableViewDataSource,UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *tblView;

@end
