//
//  ClassDetailViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "ClassDetailViewController.h"
#import "Client_x0020_ServiceSvc.h"
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
            Client_x0020_ServiceSoapBinding* binding = [[Client_x0020_ServiceSoapBinding alloc] initWithAddress:MBOClientURL];
        Client_x0020_ServiceSvc_ValidateLoginRequest* vlr = [[Client_x0020_ServiceSvc_ValidateLoginRequest alloc] init];
        vlr.Password = password.text;
        vlr.Username = username.text;
        Client_x0020_ServiceSvc_SourceCredentials* sc = [[Client_x0020_ServiceSvc_SourceCredentials alloc] init];
        sc.SourceName = MBOSourceName;
        sc.Password = MBOPassword;
        sc.SiteIDs = [[Client_x0020_ServiceSvc_ArrayOfInt alloc] init];
        [sc.SiteIDs addInt_:[NSNumber numberWithInt:SiteId]];
        vlr.SourceCredentials = sc;
        Client_x0020_ServiceSvc_ValidateLogin* vl = [[Client_x0020_ServiceSvc_ValidateLogin alloc] init];
        vl.Request = vlr;
        Client_x0020_ServiceSoapBindingResponse * response = [binding ValidateLoginUsingParameters:vl];
        if(response.error!=nil) {
            
            UIAlertView* errorAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"Unable to connect to server" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
            
             [errorAlert show];

        }
        else{
    
            Client_x0020_ServiceSvc_ValidateLoginResponse* lr =        [response.bodyParts objectAtIndex:0];
            NSString* clientID = lr.ValidateLoginResult.GUID;
            if(clientID==nil)
            {
                UIAlertView* errorAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"Unable to login with that username and password" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
                
                [errorAlert show];

            }
            else{
                
            }
        }
        
    }
    
}
- (IBAction)reserve:(id)sender {
    NSString* userName = [[NSUserDefaults standardUserDefaults] objectForKey:@"user_name"];
    UIAlertView* theAlert = [[UIAlertView alloc]  initWithTitle:@"Enter your MBO username and password" message:nil delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"Login", nil ];

    theAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
    if(userName!=nil)
    {
        [[theAlert textFieldAtIndex:0] setText:userName];
    }
    [[theAlert textFieldAtIndex:0] setText:@"jon.flanders@gmail.com"];
    [[theAlert textFieldAtIndex:1] setText:@"rookie95"];
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
