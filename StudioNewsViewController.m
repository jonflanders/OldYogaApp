//
//  StudioNewsViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "StudioNewsViewController.h"
#import "Constants.h"
#import "QuartzCore/QuartzCore.h"
@interface StudioNewsViewController ()


@property (nonatomic,strong) NSArray* newsItems;
@end

@implementation StudioNewsViewController
- (IBAction)pageChanged:(id)sender {
    NSInteger currentPage = self.pageControl.currentPage;
    NSDictionary* data = [self.newsItems objectAtIndex:currentPage];
	__weak UITextView* nv = self.newsView;
	
	[UIView animateWithDuration:.5 delay:0 options:UIViewAnimationOptionCurveEaseOut animations:^{
		nv.alpha = 0;
		nv.text  = data[@"message"];
	} completion:^(BOOL finished) {
		[UIView animateWithDuration:.5 animations:^{
			nv.alpha = 1.0F;
		}];
	}];
	
}
- (IBAction)swipe:(id)sender {
       self.pageControl.currentPage=self.pageControl.currentPage-1;
    
    [self pageChanged:nil];
}
- (IBAction)leftSwipe:(id)sender {
      self.pageControl.currentPage=self.pageControl.currentPage+1	;
    
    [self pageChanged:nil];
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        self.title = @"Hot News";
        self.tabBarItem.image = [UIImage imageNamed:@"bikramsettings"];
  
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.newsContainerView.layer.masksToBounds = NO;
    self.newsContainerView.layer.cornerRadius = 8; // if you like rounded corners
    // self.instrutorBio.layer.shadowOffset = CGSizeMake(-15, 20);
    self.newsContainerView.layer.shadowRadius = 5;
    self.newsContainerView.layer.shadowOpacity = 0.5;
	self.newsView.layer.cornerRadius = 8;
    self.busyViewController = [[BusyViewController alloc] initWithNibName:@"BusyViewController" bundle:nil];
    [self.view addSubview:self.busyViewController.view];
    
    NSURL* url = [NSURL URLWithString:[NSString stringWithFormat:@"%@%@",BaseURL,NewsURL]];
	__weak StudioNewsViewController* weakSelf = self;
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
             weakSelf.newsItems = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:nil];
             
             dispatch_async(dispatch_get_main_queue(), ^{
                 weakSelf.busyViewController.view.hidden=YES;
                 weakSelf.pageControl.numberOfPages = weakSelf.newsItems.count;
                 weakSelf.pageControl.currentPage = 0;
                 [weakSelf pageChanged:nil];
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

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewDidUnload {
    [self setPageControl:nil];
    [self setNewsView:nil];
    [self setNewsView:nil];
    [self setSwipeGesture:nil];
    [self setLeftswipeGesture:nil];
    [self setNewsContainerView:nil];
    [super viewDidUnload];
}
@end
