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
@property (nonatomic,strong)  NSArray* items;
@property (nonatomic,weak) IBOutlet UITableView* tableView;
@property (nonatomic,strong) NSDictionary* currentItem;
@end

@implementation BuyViewController
-(void) reloadData{
	
	NSURL* url = [NSURL URLWithString:[NSString stringWithFormat:@"%@%@",BaseURL,SalesURL]];
	__weak BuyViewController* weakSelf = self;
	NSMutableURLRequest* request = [NSMutableURLRequest requestWithURL:url];
	[NSURLConnection
	 sendAsynchronousRequest:request
	 queue:[[NSOperationQueue alloc] init]
	 completionHandler:^(NSURLResponse *response,
						 NSData *data,
						 NSError *error)
	 {
		 BOOL hasError = NO;
		 NSHTTPURLResponse* httpResponse = (NSHTTPURLResponse*)response;
		 NSInteger statusCode = [httpResponse statusCode];
		 if ([data length] >0 && error == nil&&statusCode==200)
		 {
			 weakSelf.items = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:nil];
			 
			 dispatch_async(dispatch_get_main_queue(), ^{
				 
				 [weakSelf.tableView reloadData];
			 });
			 
		 }
		 else if ([data length] == 0 && error == nil)
		 {
			 NSLog(@"Nothing was downloaded.");
			 hasError=YES;
		 }
		 else if (error != nil){
			 NSLog(@"Error = %@", error);
			 hasError=YES;
		 }
		 else if (statusCode==500){
			 NSLog(@"Error 500");
			 hasError=YES;
		 }
		 if(hasError){
			 dispatch_async(dispatch_get_main_queue(), ^{
				 UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"We're Sorry" message:@"There is an error connecting - you can pull to refresh to try again" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
				 [theAlert show];
				 
			 });
			 
			 
			 
			 
		 }
		 
	 }];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	[self reloadData];
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

-(IBAction)returnToBuy:(UIStoryboardSegue*)sender{
	
}
-(NSString*)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{
    return @"Products";
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _items.count;
}
static NSString* purchaseSegue = @"buyDetailSegue";
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString *CellIdentifier = @"PurchaseCell";
	UITableViewCell* cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    NSDictionary* item = [self.items objectAtIndex:indexPath.row];
    cell.textLabel.text  = [item objectForKey:@"name"] ;
    NSNumber* price = [item objectForKey:@"price"];
    NSNumberFormatter* formatter = [[NSNumberFormatter alloc] init];
    formatter.numberStyle = NSNumberFormatterCurrencyStyle;    
    cell.detailTextLabel.text = [formatter stringFromNumber:price];
    return cell;
}

#pragma mark - Table view delegate
-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender{
	BuyDetailViewController* vc = (BuyDetailViewController*)segue.destinationViewController;
	vc.item = self.currentItem;
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    self.currentItem = [self.items objectAtIndex:indexPath.row];
	[self performSegueWithIdentifier:purchaseSegue sender:self];
	
}

@end
