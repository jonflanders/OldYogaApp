//
//  ClassDetailViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "ClassDetailViewController.h"

@interface ClassDetailViewController ()

@end

@implementation ClassDetailViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}
- (IBAction)reserve:(id)sender {
    NSString* userName = [[NSUserDefaults standardUserDefaults] objectForKey:@"user_name"];
    UIAlertView* theAlert = [[UIAlertView alloc]  initWithTitle:@"Enter your MBO username and password" message:nil delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"Login", nil ];

    theAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
    if(userName!=nil)
    {
        [[theAlert textFieldAtIndex:0] setText:userName];
    }
    [theAlert show];

}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    NSString* name = [self.teacherBio objectForKey:@"Name"];
    self.teacherName.text = name;
    NSURL* url = [NSURL URLWithString:[self.teacherBio objectForKey:@"ImageURI"]];

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
                 
                 UIImage* img = [UIImage imageWithData:data];
                 self.instructorImage.image = img;
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
    [self setInstructorImage:nil];
    [self setTeacherName:nil];
    [super viewDidUnload];
}
@end
