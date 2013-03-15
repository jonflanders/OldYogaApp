//
//  CreditCardInputViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/14/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "CreditCardInputViewController.h"

@interface CreditCardInputViewController ()
{
    NSArray* items;
}
@end

@implementation CreditCardInputViewController
- (IBAction)cancel:(id)sender {
    [self.navigationController dismissViewControllerAnimated:YES completion:nil];
}
- (IBAction)buy:(id)sender {
}


- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        items = @[@"Credit Card",@"Address",@"City",@"State",@"Zip",@"Expiration Month",@"Expiration Year"];
      
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    self.navigationItem.rightBarButtonItem = self.buyButton;
    self.navigationItem.leftBarButtonItem = self.cancelButton;
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return items.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"Cell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if(cell==nil)
    {
        [self.tableView registerNib:[UINib nibWithNibName:@"EditTableViewCell" bundle:nil] forCellReuseIdentifier:CellIdentifier];
        cell  = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    }
    
    // Configure the cell...
    NSString* t = [items objectAtIndex:indexPath.row];
    for (UIView* view in cell.subviews) {
        for (UIView* sv in view.subviews) {
            if([sv isKindOfClass:[UILabel class]])
            {
                UILabel* label = (UILabel*)sv;
                label.text = t;
            }
        }
    }
    return cell;
}


- (void)viewDidUnload {
    [self setCancelButton:nil];
    [self setBuyButton:nil];
   [super viewDidUnload];
}
@end
