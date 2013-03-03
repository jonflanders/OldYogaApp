//
//  StudioNewsViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "StudioNewsViewController.h"
#import "Constants.h"
@interface StudioNewsViewController ()
{
    NSArray* _newsItems;
}
@end

@implementation StudioNewsViewController
- (IBAction)pageChanged:(id)sender {
    NSInteger currentPage = self.pageControl.currentPage;
    NSString* data = [_newsItems objectAtIndex:currentPage];
    self.newsView.text  = data;		
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
         self.title = @"Hot News";
        self.tabBarItem.image = [UIImage imageNamed:@"news"];
        NSURL* url = [NSURL URLWithString:[NSString stringWithFormat:@"%@%@",BaseURL,NewsURL]];

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
             _newsItems = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:nil];
             
             dispatch_async(dispatch_get_main_queue(), ^{
                 
                 self.pageControl.numberOfPages = _newsItems.count;
                 [self pageChanged:nil];
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

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
   
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
    [super viewDidUnload];
}
@end
