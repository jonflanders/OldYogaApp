//
//  MainPageTableViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 10/12/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import "MainPageTableViewController.h"
#import "AppDelegate.h"
#import "Constants.h"
#import "ClassDetailViewController.h"
@interface MainPageTableViewController ()

@end

@implementation MainPageTableViewController
-(void)refresh{
    self.busyView.view.hidden=NO;
    self.classes = NULL;
    NSURL* url = [NSURL URLWithString:[NSString stringWithFormat:@"%@%@",BaseURL,ScheduleURL]];
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
         dispatch_async(dispatch_get_main_queue(), ^{
             self.busyView.view.hidden=YES;
             self.navigationController.navigationBarHidden = NO;
             self.tabBarController.tabBar.hidden = NO;
             
         });
        
         
     }];
    
}

-(void)loadFromJSON{
 
    NSDictionary* thisWeek = [[self.studioData objectForKey:@"ThisWeek"] objectAtIndex: self.currentDay];
    self.instructors = [thisWeek objectForKey:@"Instructors"];
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
-(id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.tabBarItem.image = [UIImage imageNamed:@"pose"];
        self.busyView = [[BusyViewController alloc] initWithNibName:@"BusyViewController" bundle:nil];

    }
    return self;
}
-(void)swipe{
//   if(self.swipeGR.direction==UISwipeGestureRecognizerDirectionRight)
//   {
//       [self prev ];
//   }
//    if(self.swipeGR.direction == UISwipeGestureRecognizerDirectionLeft) {
//        [self next];
//    }
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    self.navigationController.navigationBarHidden = YES;
    self.tabBarController.tabBar.hidden = YES;
    self.currentDay = 0;
    [self.tableView registerNib:[UINib nibWithNibName:@"MainPageCell" bundle:nil] forCellReuseIdentifier:MainCellIdentifier];
    [self.tableView registerNib:[UINib nibWithNibName:@"ScheduleHeader" bundle:nil] forCellReuseIdentifier:TopCellIdentifier];
    
    //self.tableView.backgroundColor = [UIColor whiteColor];
    [self.swipeGR addTarget:self action:@selector(swipe)];
    [self.tableView addGestureRecognizer:self.swipeGR];
    self.busyView.view.hidden=YES;
    [self.tableView addSubview:self.busyView.view];
    [self.tableView addSubview:self.addedToCalendar];
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
    if(indexPath.row==0)
        return 30;
    else
        return 60;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell =nil;
    
    NSDictionary* day = [self.classes objectAtIndex:indexPath.row];
    if(indexPath.row==0){
        cell = [tableView dequeueReusableCellWithIdentifier:TopCellIdentifier];
        
       
    }
    else{
        cell = [tableView dequeueReusableCellWithIdentifier:MainCellIdentifier];
        for (UIView* view in cell.subviews) {
            for (UIView* sview in view.subviews) {
                if([sview isKindOfClass:[UILabel class]])
                {
                    UILabel* nb = (UILabel*)sview;
                    if(nb.tag==1){
                        nb.text = (NSString*)[day objectForKey:@"Time"];
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
                    [b addTarget:self action:@selector(addToCalendar:) forControlEvents:UIControlEventTouchDown];
                }
            }
        }
    }
    
    return cell;
}


#pragma mark - Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSDictionary* class = [self.classes objectAtIndex:indexPath.row];
    NSString* teacher = [class objectForKey:@"Teacher"];
    NSArray* tResult  = [self.instructors filteredArrayUsingPredicate:[NSPredicate predicateWithFormat:@"(Name==%@)",teacher]];
    ClassDetailViewController* vc = [[ClassDetailViewController alloc]  initWithNibName:@"ClassDetailViewController" bundle:nil];
    vc.classData = class;
    if(tResult!=nil&&tResult.count>0){
        vc.instructorData= [tResult objectAtIndex:0];
    }
    UINavigationController* nav = self.navigationController;
    [nav pushViewController:vc animated:YES];
   
}
-(void)addToCalendar:(id)sender{
    
    self.addedToCalendar.hidden = NO;
    UIButton* b = (UIButton*)sender;
    UIView* superView = b.superview;
    UITableViewCell* cell = (UITableViewCell*)superView.superview;
    NSIndexPath* path =    [self.tableView indexPathForCell:cell];
    // NSLog(@"%@",path);
    EKEventStore *eventStore = [[EKEventStore alloc] init];
    NSDictionary* day = [self.classes objectAtIndex:path.row];
    NSString* dateString = [day objectForKey:@"DateLink"];
    EKEvent *event  = [EKEvent eventWithEventStore:eventStore];
    event.title     = @"Bikram Yoga Silverlake";
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setTimeZone:[NSTimeZone timeZoneWithName:@"UTC"]];
    [dateFormatter setDateFormat:@"yyyy-MM-ddHH:mm:ss"];
    NSDate *date = [dateFormatter dateFromString:dateString];
    event.startDate = date;
    NSNumber* time = [day objectForKey:@"ClassLength"];
    event.endDate   = [[NSDate alloc] initWithTimeInterval:(60*time.doubleValue) sinceDate:event.startDate];
    [event setCalendar:[eventStore defaultCalendarForNewEvents]];
    NSError *err;
    [eventStore saveEvent:event span:EKSpanThisEvent error:&err];
    double delayInSeconds = 2.0;
    dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
    dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
        self.addedToCalendar.hidden = YES;
    });
}

- (void)viewDidUnload {
    [self setSwipeGR:nil];
    [self setAddedToCalendar:nil];
    [super viewDidUnload];
}
@end
