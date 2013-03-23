//
//  NewAccountViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/23/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "NewAccountViewController.h"

@interface NewAccountViewController (){
    NSString* EditCell;
    NSArray* tableItems;
}

@end

@implementation NewAccountViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    EditCell = @"EditCell"; 
    [self.tableView registerNib:[UINib nibWithNibName:@"NewEditTableViewCell" bundle:nil]  forCellReuseIdentifier:EditCell];
    tableItems = @[@"First",@"Last",@"Email",@"Password",@"Confirm",@"Zip",@"Mobile",@"Gender"];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return  1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return tableItems.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:EditCell];
       for (UIView* view in cell.subviews) {
            for (UIView* sview in view.subviews) {
                if([sview isKindOfClass:[UILabel class]])
                {
                    UILabel* label = (UILabel*)sview;
                    label.text = [tableItems objectAtIndex:indexPath.row];
                }
            }
        }

    return cell;
}



@end
