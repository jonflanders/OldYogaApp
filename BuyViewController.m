//
//  BuyViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/27/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "BuyViewController.h"
#import "Constants.h"
#import "BuyDetailViewController.h"
@interface BuyViewController ()
{
    NSArray* _items;
}

@end

@implementation BuyViewController
-(id) initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibB {
    
  self =   [super initWithNibName:nibNameOrNil bundle:nibB];
    if (self) {
    // Custom initialization
        self.title = @"Buy";
        NSURL* url = [NSURL URLWithString:[NSString stringWithFormat:@"%@%@",BaseURL,SalesURL]];

    NSMutableURLRequest* request = [NSMutableURLRequest requestWithURL:url];
    [NSURLConnection
     sendAsynchronousRequest:request
     queue:[[NSOperationQueue alloc] init]
     completionHandler:^(NSURLResponse *response,
                         NSData *data,
                         NSError *error)
     {
         NSHTTPURLResponse* httpResponse = (NSHTTPURLResponse*)response;
         NSInteger statusCode = [httpResponse statusCode];
         _items = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:nil];
         if ([data length] >0 && error == nil&&statusCode==200)
         {
           
             dispatch_async(dispatch_get_main_queue(), ^{
                 
                 [self.tableView reloadData];
             });
             
         }
         else if ([data length] == 0 && error == nil)
         {
             NSLog(@"Nothing was downloaded.");
         }
         else if (error != nil){
             NSLog(@"Error = %@", error);
         }
         else if (statusCode==500){
             NSLog(@"Error 500");

         }
         
     }];
    }
    return self;
    
}
- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
        self.title = @"Buy";
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
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

- (IBAction)done:(id)sender {
    [self dismissModalViewControllerAnimated:YES];
}

-(NSString*)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{
    return @"Products";
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _items.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"Cell";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:CellIdentifier];
        cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    }
    NSDictionary* item = [_items objectAtIndex:indexPath.row];
    cell.textLabel.text  = [item objectForKey:@"name"] ;
    NSNumber* price = [item objectForKey:@"price"];
    NSNumberFormatter* formatter = [[NSNumberFormatter alloc] init];
    formatter.numberStyle = NSNumberFormatterCurrencyStyle;    
    cell.detailTextLabel.text = [formatter stringFromNumber:price];
    return cell;
}

#pragma mark - Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSDictionary* item = [_items objectAtIndex:indexPath.row];
    BuyDetailViewController* detail = [[BuyDetailViewController alloc] initWithNibName:@"BuyDetailViewController" bundle:nil];
    detail.item = item;
    self.nav.viewControllers = @[detail];
    [self presentViewController:self.nav animated:YES completion:^{
        
    }];
}

- (void)viewDidUnload {
    [self setNav:nil];
    [self setNav:nil];
    [super viewDidUnload];
}
@end
