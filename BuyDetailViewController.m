//
//  BuyDetailViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/2/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "BuyDetailViewController.h"
#import "CreditCardInputViewController.h"
#import "MBOSaleClient.h"
@interface BuyDetailViewController ()
{
    NSArray* items;
    NSArray* itemValues;
}
@end

@implementation BuyDetailViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
      
        

    }
    return self;
}
- (IBAction)done:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.busyView = [[BusyViewController alloc] initWithNibName:@"BusyViewController" bundle:nil];
    self.busyView.view.hidden = YES;
    [self.view addSubview:self.busyView.view];
    self.navigationItem.leftBarButtonItem = self.doneButton;
    self.navigationItem.rightBarButtonItem = self.buyButton;
    self.title = @"Purchase";
    items = @[@"Name",@"Credit Card",@"Address",@"City",@"State",@"Zip",@"Expiration Month",@"Expiration Year"];
#ifdef DEBUG
    itemValues = @[@"Jon Flanders",@"4111111111111111",@"710 Cipriano Pl",@"Monterey Park",@"CA",@"91754",@"03",@"2016"];
#endif
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
        return 1;
    }
    return items.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"Cell";
    static NSString *TextCellID = @"TextCell";
    UITableViewCell *cell = nil;
    if(indexPath.section==0)
    {
        cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
        if (cell == nil) {
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
        }

        if(indexPath.row==0){
            NSNumber* price = [self.item objectForKey:@"price"];
            NSNumberFormatter* formatter = [[NSNumberFormatter alloc] init];
            formatter.numberStyle = NSNumberFormatterCurrencyStyle;
            cell.textLabel.text =[NSString stringWithFormat:@"%@-%@", [self.item objectForKey:@"name"],[formatter stringFromNumber:price]];
           
        }
       
    }
    else{
        cell  = [tableView dequeueReusableCellWithIdentifier:TextCellID];
        if(cell==nil)
        {
            [self.tableView registerNib:[UINib nibWithNibName:@"EditTableViewCell" bundle:nil] forCellReuseIdentifier:TextCellID];
            cell  = [tableView dequeueReusableCellWithIdentifier:TextCellID];
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
#ifdef DEBUG
                if([sv isKindOfClass:[UITextField class]])
                {
                    UITextField* tf = (UITextField*)sv;
                    tf.text= [itemValues objectAtIndex:indexPath.row];
                }
              
#endif

            }
        }

       
    }
    return cell;
}




-(NSMutableDictionary*) extractParametersFromTable
{
    NSMutableDictionary* ret = [[NSMutableDictionary alloc] initWithCapacity:items.count];
    for (int i=0; i<items.count; i++) {
        NSString* key = [items objectAtIndex:i];
        UITableViewCell* cell = [self.tableView cellForRowAtIndexPath:[NSIndexPath indexPathForRow:i inSection:1]];
        for (UIView* view in cell.subviews) {
            for (UIView* sv in view.subviews) {
                if([sv isKindOfClass:[UITextField class]])
                {
                    UITextField* tf = (UITextField*)sv;
                    [ret setObject:tf.text forKey:key];
                }
            }
        }
    }
    return ret;
    
}
-(void)complete:(NSString *)clientID{
    MBOSaleClient* client = [[MBOSaleClient alloc] init];
    NSMutableDictionary* params = [self extractParametersFromTable];
    [params setObject:clientID forKey:@"ClientID"];
    [params setObject: [self.item objectForKey:@"price"] forKey:@"Amount"];
    [params setObject:[self.item objectForKey:@"id"] forKey:@"ID"];
    if([client makeSale:params])
    {
        UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Success!" message:@"Thanks for your purchase" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
        [theAlert show];
        [self done:nil];

    }else{
        UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"There was a failure processing your request, please try again later." delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
        [theAlert show];
    }
    self.busyView.view.hidden = YES;
    
    
}
- (IBAction)buy:(id)sender {
    self.busyView.view.hidden = NO;
    self.login  = [[MBOClientLogin alloc] init];
    self.login.delegate = self;
    [self.login login];
   
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
