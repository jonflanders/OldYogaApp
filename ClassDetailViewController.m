//
//  ClassDetailViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "ClassDetailViewController.h"
#import "MBOClientLogin.h"
#import "MBOReserveClass.h"
#import "Constants.h"
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
-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    NSString* button = [alertView buttonTitleAtIndex:buttonIndex];
    if([button isEqualToString:@"Login"])
    {
        UITextField *username = [alertView textFieldAtIndex:0];
        UITextField *password = [alertView textFieldAtIndex:1];
        MBOClientLogin* login = [[MBOClientLogin alloc] init];
        NSString* clientID = [login loginWithUserName:username.text andPassword:password.text];
        if(clientID!=nil){
            [self internalReserve:clientID];
        }  
    }
}
-(void)internalReserve:(NSString*)clientID
{
    MBOReserveClass* reserve = [[MBOReserveClass alloc] init];
    NSString* classID =[self.classData objectForKey:@"ClassID"];
    if([reserve reserveClass:classID forClient:clientID]){
        UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Success!" message:@"You are confirmed for this class." delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
        [theAlert show];
        self.reserveButton.enabled=NO;
    }
    else{
        UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"There was a failure processing your request, please try again later." delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
        [theAlert show];

    }
}
- (IBAction)reserve:(id)sender {
    MBOClientLogin* login = [[MBOClientLogin alloc] init];
    NSString* clientID = [login clientLoggedIn];
    if(clientID==nil){
        UIAlertView* theAlert = [[UIAlertView alloc]  initWithTitle:@"Enter your MBO username and password" message:nil delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"Login", nil ];

        theAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
       
    #ifdef DEBUG
        [[theAlert textFieldAtIndex:0] setText:@"jon.flanders@gmail.com"];
        [[theAlert textFieldAtIndex:1] setText:@"rookie95"];
    #endif
        [theAlert show];
    }
    else{
          [self internalReserve:clientID];
    }

}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    NSString* name = [self.instructorData objectForKey:@"Name"];
    self.instructorName.text = name;
    self.instrutorBio.text = [self.instructorData objectForKey:@"Bio"];
    NSURL* url = [NSURL URLWithString:[self.instructorData objectForKey:@"ImageURI"]];    NSMutableURLRequest* request = [NSMutableURLRequest requestWithURL:url];
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
    [self setInstructorName:nil];
    [self setInstrutorBio:nil];
    [self setReserveButton:nil];
    [super viewDidUnload];
}
@end
