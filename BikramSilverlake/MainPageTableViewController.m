//
//  MainPageTableViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 10/12/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import "MainPageTableViewController.h"
#import "AppDelegate.h"

@interface MainPageTableViewController ()

@end

@implementation MainPageTableViewController
-(void)refresh{
    
    self.classes = NULL;
    NSURL* url = [NSURL URLWithString:URL];
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
         
         if ([data length] >0 && error == nil&&statusCode==200)
         {
             dispatch_async(dispatch_get_main_queue(), ^{
                            NSError* nerror;
             self.studioData =  [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:&nerror];
             [self.studioData writeToFile:LocalCache atomically:YES];
              [self loadFromJSON];
             });

                      }
         else{
            
             dispatch_async(dispatch_get_main_queue(), ^{
                self.studioData  = [[NSDictionary alloc] initWithContentsOfFile:LocalCache];
                 [self loadFromJSON];
             });
           
         }
        
         
     }];
    
}
-(void)loadFromJSON{
 
    NSDictionary* thisWeek = [[self.studioData objectForKey:@"ThisWeek"] objectAtIndex: self.currentDay];
    self.navigationItem.title = [thisWeek objectForKey:@"Date"];
    self.tabBarItem.title = @"Schedule";
    self.classes = [thisWeek objectForKey:@"Schedule"];
    [self.tableView reloadData];
    [self stopLoading];
    
}
-(void)next{
    int temp = self.currentDay;
    temp++;
    if(temp<[[self.studioData objectForKey:@"ThisWeek"] count]){
        self.currentDay = temp;
        [self loadFromJSON];
    }
    [self flipButtons];
}
-(void)flipButtons{
    NSInteger count = [[self.studioData objectForKey:@"ThisWeek"] count];
    if(self.currentDay==(count-1)){
        self.navigationItem.rightBarButtonItem = nil;
    }
    else{
        self.navigationItem.rightBarButtonItem  = self.nextButton;
    }
    
    if(self.currentDay==0)
    {
        self.navigationItem.leftBarButtonItem = nil;
    }
    else
    {
        self.navigationItem.leftBarButtonItem = self.prevButton;
    }
}
-(void)prev{
    int temp = self.currentDay;
    temp--;
    if(temp>=0){
        self.currentDay = temp;
        [self loadFromJSON];
    }
     [self flipButtons];
}
- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
     }
    return self;
}
-(void)viewWillAppear:(BOOL)animated{
   
    UIBarButtonItem* right = [[UIBarButtonItem alloc] initWithTitle:@"Next" style:UIBarButtonItemStyleBordered target:self action:@selector(next)];
    self.nextButton = right;
    self.navigationItem.rightBarButtonItem =self.nextButton;
    
    UIBarButtonItem* left = [[UIBarButtonItem alloc] initWithTitle:@"Prev" style:UIBarButtonItemStyleBordered target:self action:@selector(prev)];
    self.prevButton  = left;
    //self.navigationItem.leftBarButtonItem =left;

}
-(void)viewDidDisappear:(BOOL)animated{    
    self.navigationItem.rightBarButtonItem =nil;	
    self.navigationItem.leftBarButtonItem =nil;
}
- (void)viewDidLoad
{
    [super viewDidLoad];
       self.currentDay = 0;
    [self.tableView registerNib:[UINib nibWithNibName:@"MainPageCell" bundle:nil] forCellReuseIdentifier:MainCellIdentifier];
    self.tableView.backgroundColor = [UIColor whiteColor];
//    self.tableView.backgroundColor = [UIColor colorWithPatternImage:[UIImage imageNamed:@"poses"]];
   
    [self refresh];
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
   return self.classes.count;
}
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return 60;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:MainCellIdentifier];
    NSDictionary* day = [self.classes objectAtIndex:indexPath.row];
    NSInteger idx =indexPath.row%2;
    NSLog(@"Index path = %d - modulo 2 == %d",indexPath.row, idx);
    // Configure the cell...
    if(idx==0){
        //cell.backgroundColor = [UIColor colorWithRed:.5 green:.5 blue:.5 alpha:.8];
    }
    for (UIView* view in cell.subviews) {
        for (UIView* sview in view.subviews) {
           // NSLog(@"%@",sview.description);
            if([sview isKindOfClass:[UILabel class]])
            {
                UILabel* nb = (UILabel*)sview;
                if(nb.tag==1){
                    nb.text = (NSString*)[day objectForKey:@"FullTime"];
                }
                if(nb.tag==2){
                    nb.text = (NSString*)[day objectForKey:@"Type"];
                }
                if (nb.tag==4) {
                    nb.text = (NSString*)[day objectForKey:@"Teacher"];
                }

            }
            if([sview isKindOfClass:[UIButton class]])
            {
                UIButton* b = (UIButton*)sview;
                [b addTarget:self action:@selector(addToCalendar) forControlEvents:UIControlEventTouchDown];
            }
        }
    }
    
    return cell;
}
-(void)addToCalendar{
    EKEventStore *eventStore = [[EKEventStore alloc] init];
    
    EKEvent *event  = [EKEvent eventWithEventStore:eventStore];
    event.title     = @"Bikram Yoga Silverlake";
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setTimeZone:[NSTimeZone timeZoneWithName:@"UTC"]];
    [dateFormatter setDateFormat:@"yyyy-MM-ddHH:mm:ss"];
    NSDate *date = [dateFormatter dateFromString:self.dateString];
    event.startDate = date;
    event.endDate   = [[NSDate alloc] initWithTimeInterval:(60*90) sinceDate:event.startDate];
    [event setCalendar:[eventStore defaultCalendarForNewEvents]];
    NSError *err;
    [eventStore saveEvent:event span:EKSpanThisEvent error:&err];
}
/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Return NO if you do not want the specified item to be editable.
    return YES; 
}
*/

/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source
        [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
    }   
    else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
    }   
}
*/

/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath
{
}
*/

/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/

#pragma mark - Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Navigation logic may go here. Create and push another view controller.
    /*
     <#DetailViewController#> *detailViewController = [[<#DetailViewController#> alloc] initWithNibName:@"<#Nib name#>" bundle:nil];
     // ...
     // Pass the selected object to the new view controller.
     [self.navigationController pushViewController:detailViewController animated:YES];
     */
}

@end
