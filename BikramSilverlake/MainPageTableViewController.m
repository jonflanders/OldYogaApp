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
#import "MBOReserveClass.h"
@interface MainPageTableViewController ()<UIAlertViewDelegate>
{
    CMPopTipView* popup;
    id	currentPopTipViewTarget;
    EKEventStore *eventStore;
}
@property (nonatomic,strong) NSString* currentClientID;
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
            // [self.studioData writeToFile:LocalCache atomically:YES];
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
    [self flipButtons];

}
-(void)viewDidDisappear:(BOOL)animated{    
    self.navigationItem.rightBarButtonItem =nil;	
    self.navigationItem.leftBarButtonItem =nil;
    
}
-(id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.tabBarItem.image = [UIImage imageNamed:@"smallcalendar"];
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
    eventStore = [[EKEventStore alloc] init];
    self.navigationController.navigationBarHidden = YES;
    self.tabBarController.tabBar.hidden = YES;
    self.currentDay = 0;
    [self.tableView registerNib:[UINib nibWithNibName:@"MainPageCell" bundle:nil] forCellReuseIdentifier:MainCellIdentifier];
    [self.tableView registerNib:[UINib nibWithNibName:@"ScheduleHeader" bundle:nil] forCellReuseIdentifier:TopCellIdentifier];
    popup = [[CMPopTipView alloc] init];
   popup.backgroundColor = [UIColor colorWithRed:(254.0/255.0) green:(178.0/255.0) blue:(67.0/255.0) alpha:1.0];
    //self.tableView.backgroundColor = [UIColor whiteColor];
    [self.swipeGR addTarget:self action:@selector(swipe)];
    [self.tableView addGestureRecognizer:self.swipeGR];
    self.busyView.view.hidden=YES;
    [self.tableView addSubview:self.busyView.view];
    self.addedToCalendar.center = CGPointMake(self.view.frame.size.width/2, (self.view.frame.size.height-self.addedToCalendar.bounds.size.height/2)+25);
       [self.tableView addSubview:self.addedToCalendar];
    [self refresh];
}

-(void)scrollViewDidScroll:(UIScrollView *)scrollView
{
    CGRect newFrame =   self.addedToCalendar.frame;
    newFrame.origin.x = 0;
    newFrame.origin.y = self.tableView.contentOffset.y+(self.tableView.frame.size.height-self.view.frame.size.height-self.addedToCalendar.bounds.size.height/2)+25;
     self.addedToCalendar.frame = newFrame;
}
- (NSIndexPath *)tableView:(UITableView *)tableView willSelectRowAtIndexPath:(NSIndexPath *)indexPath;
{
    if (indexPath.row==0) {
        return nil;
    }
    return indexPath;
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
   return self.classes.count+1;
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
     if(indexPath.row==0){
        cell = [tableView dequeueReusableCellWithIdentifier:TopCellIdentifier];
        
       
    }
    else{
        
        NSDictionary* day = [self.classes objectAtIndex:indexPath.row-1];        
        cell = [tableView dequeueReusableCellWithIdentifier:MainCellIdentifier];
            cell.userInteractionEnabled =YES;
        UIButton* reserveButton=nil;
        NSNumber* time = [day objectForKey:@"ClassLength"];
        double dtime = [time doubleValue];
        for (UIView* view in cell.subviews) {
            for (UIView* sview in view.subviews) {
                sview.alpha = .6;
                if([sview isKindOfClass:[UILabel class]])
                {
                    UILabel* nb = (UILabel*)sview;
                    if(nb.tag==1){
                        nb.text = (NSString*)[day objectForKey:@"Time"];
                    }
                    if(nb.tag==2){
                        nb.text = (NSString*)[day objectForKey:@"Type"];
                    }
                  

                }
                if([sview isKindOfClass:[UIButton class]])
                {
                    UIButton* b = (UIButton*)sview;
                    if (b.tag==40) {
                        [b setTitle:(NSString*)[day objectForKey:@"Teacher"] forState:0];
                        [b addTarget:self action:@selector(showTeacher:) forControlEvents:UIControlEventTouchDown];
                                            }
                    
                    if(b.tag==20){
                        [b addTarget:self action:@selector(addToCalendar:) forControlEvents:UIControlEventTouchDown];
                    }
                    if(b.tag==30){
                        reserveButton = b;
                        [b addTarget:self action:@selector(reserve:) forControlEvents:UIControlEventTouchDown];
                    }
                    if(b.tag==10){
                        [b setImage:[UIImage imageNamed:@"noun_project_12301.png"] forState:0];
                        if(dtime==60){
                            [b setImage:[UIImage imageNamed:@"60minutes.png"] forState:0];
                          
                        }
                        NSString* type = [day objectForKey:@"Type"];
                        if([type isEqualToString:@"DONATION CLASS - $10 cash only"]){
                            [b setImage:[UIImage imageNamed:@"bikramdonate"] forState:0];
                                                    }
                        [b addTarget:self action:@selector(showClassType:) forControlEvents:UIControlEventTouchDown];

                    }
                }
            }
        }
        NSDate* currentDate = [NSDate date];
        NSDateFormatter* df = [[NSDateFormatter alloc] init];
        [df setTimeZone:[NSTimeZone timeZoneWithName:@"UTC"]];
        [df setDateFormat:@"yyyy-MM-ddHH:mm:ss"];
        NSDate* classDate = [df dateFromString:[day objectForKey:@"DateLink"]];
        NSComparisonResult r =[currentDate compare:classDate];
        if(r==NSOrderedDescending){
            for (UIView* view in cell.subviews) {
                for (UIView* sview in view.subviews) {
                    sview.alpha = .1;
                }
            }
            cell.userInteractionEnabled =NO;
        }
        NSTimeInterval t = [classDate timeIntervalSinceDate:currentDate];
        double diff = (t/60)/60;
        if(diff>0&&diff<1){
            reserveButton.alpha=.2;
            reserveButton.userInteractionEnabled=NO;
        }
    }    
    return cell;
}

-(void)showTeacher:(id)sender
{
        NSDictionary* class = [self dayForButton:(UIButton*)sender];
        NSString* teacher = [class objectForKey:@"Teacher"];
        NSArray* tResult  = [self.instructors filteredArrayUsingPredicate:[NSPredicate predicateWithFormat:@"(Name==%@)",teacher]];
        ClassDetailViewController* vc = [[ClassDetailViewController alloc]  initWithNibName:@"ClassDetailViewController" bundle:nil];
        vc.classData = class;
        if(tResult!=nil&&tResult.count>0){
            vc.instructorData= [tResult objectAtIndex:0];
        }
        [self presentViewController:vc animated:YES completion:^{
            
        }];
    
}
#pragma mark - Table view delegate


-(void)complete:(NSString *)clientID{
    if(clientID==nil){
        UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"You must login in order to reserve a class"   delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
        [theAlert show];
    }
    else{
		self.currentClientID = clientID;
		UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Add Class?" message:@"Are you sure you want to reserve this class?"   delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"OK" , nil];
		[theAlert show];


    }
}
- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
	if([[alertView buttonTitleAtIndex:buttonIndex] isEqualToString:@"OK"]){

	MBOReserveClass* reserve = [[MBOReserveClass alloc] init];
	NSString* classID =[self.selectedDay objectForKey:@"ClassID"];
	if([reserve reserveClass:classID forClient:self.currentClientID]){
		UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Success!" message:@"You are confirmed for this class." delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
		[theAlert show];
		
	}
	else{
		UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"There was a failure processing your request, please try again later or make sure you have a valid payment method set up on Mindbody" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
		[theAlert show];
		
	}
	}
}
-(void)reserve:(id)sender{
    UIButton* b = (UIButton*)sender;
    self.selectedDay = [self dayForButton:b];
    if(self.login==nil){
        self.login  = [[MBOClientLogin alloc] init];
        self.login.delegate = self;
    }
    [self.login login];
}
-(void)showClassType:(id)sender{
    UIButton* b = (UIButton*)sender;
    NSDictionary* day = [self dayForButton:b];
    
	if (sender == currentPopTipViewTarget) {
		// Dismiss the popTipView and that is all
		currentPopTipViewTarget = nil;
        [popup dismissAnimated:YES];

	}
	else {
		NSString *contentMessage = [self stringByStrippingHTML:[day objectForKey:@"Type"]];
		popup.delegate = self;
      //  popup.textFont = [UIFont fontWithName:@"Helvetica" size:9];
        popup.animation = arc4random() % 2;
		popup.dismissTapAnywhere = YES;
        [popup autoDismissAnimated:YES atTimeInterval:3.0];
        popup.message = contentMessage;
		if ([sender isKindOfClass:[UIButton class]]) {
			UIButton *button = (UIButton *)sender;
			[popup presentPointingAtView:button inView:self.view animated:YES];
		}
		else {
			UIBarButtonItem *barButtonItem = (UIBarButtonItem *)sender;
			[popup presentPointingAtBarButtonItem:barButtonItem animated:YES];
		}
		
		//[visiblePopTipViews addObject:popTipView];
		currentPopTipViewTarget = sender;
	}
}
- (NSString *)stringByStrippingHTML:(NSString *)inputString
{
    NSMutableString *outString;
    
    if (inputString)
    {
        outString = [[NSMutableString alloc] initWithString:inputString];
        
        if ([inputString length] > 0)
        {
            NSRange r;
            
            while ((r = [outString rangeOfString:@"<[^>]+>" options:NSRegularExpressionSearch]).location != NSNotFound)
            {
                [outString deleteCharactersInRange:r];
            }      
        }
    }
    
    return outString; 
}
-(NSDictionary*)dayForButton:(UIButton*)b{
    UIView* superView = b.superview;
    UITableViewCell* cell = 	(UITableViewCell*)superView.superview;
    NSIndexPath* path =    [self.tableView indexPathForCell:cell];
    // NSLog(@"%@",path);
    NSDictionary* day = [self.classes objectAtIndex:path.row-1	];
    return day;
}
-(void)addEventToCalendar:(id)sender{
    self.addedToCalendar.hidden = NO;
    UIButton* b = (UIButton*)sender;
    NSDictionary* day = [self dayForButton:b];
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
    EKCalendar* cal = [eventStore defaultCalendarForNewEvents];
    [event setCalendar:cal];
    NSError *err;
    [eventStore saveEvent:event span:EKSpanThisEvent error:&err];
    double delayInSeconds = 2.0;
    dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
    dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
        self.addedToCalendar.hidden = YES;
    });

}
-(void)addToCalendar:(id)sender{
    
  
    if ([eventStore respondsToSelector:@selector(requestAccessToEntityType:completion:)])
    {
        __weak typeof (self) weakSelf = self;
        [eventStore requestAccessToEntityType:EKEntityTypeEvent completion:^(BOOL granted, NSError *error)
         {
             if (granted)
             {
                 [weakSelf performSelectorOnMainThread:@selector(addEventToCalendar:) withObject:sender waitUntilDone:YES];
             }
             else
             {
                 NSLog(@"Not granted");
             }
         }];
    }
    else
    {
        [self addEventToCalendar:sender];
    }
  }

- (void)viewDidUnload {
    [self setSwipeGR:nil];
    [self setAddedToCalendar:nil];
    [super viewDidUnload];
}
@end
