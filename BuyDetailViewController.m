//
//  BuyDetailViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/2/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "BuyDetailViewController.h"
#import "CreditCardInputViewController.h"
@interface BuyDetailViewController ()

@end

@implementation BuyDetailViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
        self.title = @"Purchase";
    }
    return self;
}
- (IBAction)done:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.navigationItem.leftBarButtonItem = self.doneButton;
    
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 2;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if(section==0){
        return 2;
    }
    return 1;
}
//-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
//    return 100;
//}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"Cell";
   
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
    }
    static NSString *ButtonCellID = @"ButtonCell";
    
    
    // Configure the cell...
    if(indexPath.section==0)
    {
        if(indexPath.row==0){
            cell.textLabel.text = [self.item objectForKey:@"name"];
             cell.detailTextLabel.textAlignment = NSTextAlignmentCenter;
        }
        if(indexPath.row==1){
            NSNumber* price = [self.item objectForKey:@"price"];
            NSNumberFormatter* formatter = [[NSNumberFormatter alloc] init];
            formatter.numberStyle = NSNumberFormatterCurrencyStyle;        
            cell.textLabel.text = [formatter stringFromNumber:price];
           
        }
    }
    else{
        cell  = [tableView dequeueReusableCellWithIdentifier:ButtonCellID];
        if(cell==nil)
        {
            [self.tableView registerNib:[UINib nibWithNibName:@"ButtonTableViewCell" bundle:nil] forCellReuseIdentifier:ButtonCellID];
             cell  = [tableView dequeueReusableCellWithIdentifier:ButtonCellID];
            for (UIView* view in cell.subviews) {
                for (UIView* sv in view.subviews) {
                    if([sv isKindOfClass:[UIButton class]])
                    {
                        UIButton* button = (UIButton*)sv;
                       [button addTarget:self action:@selector(buy) forControlEvents:UIControlEventTouchDown];
                    }
                }
            }
        }
       
    }
    return cell;
}
-(void)buy{
    CreditCardInputViewController* vc = [[CreditCardInputViewController alloc] init];
    self.nav.viewControllers = @[vc];
    [self presentViewController:self.nav animated:YES completion:^{
        
    }];

}

- (void)viewDidUnload {
    [self setDoneButton:nil];
    [self setNav:nil];
    [self setCancelButton:nil];
    [self setBuyButton:nil];
    [self setNav:nil];
    [super viewDidUnload];
}
@end
