//
//  LoginViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "LoginViewController.h"
#import "MBOClientLogin.h"

@interface LoginViewController ()

@end

@implementation LoginViewController

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
    if([button isEqualToString: @"Login"]){
        UITextField *username = [alertView textFieldAtIndex:0];
        UITextField *password = [alertView textFieldAtIndex:1];
        MBOClientLogin* login = [[MBOClientLogin alloc] init];
        NSString* clientID = [login loginWithUserName:username.text andPassword:password.text];
        if(clientID==nil){
               //TODO: deal with bad password
        }
    }
    
     [self dismissViewControllerAnimated:YES completion:nil];
     [self.delegate loginViewComplete];
    
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    MBOClientLogin* login = [[MBOClientLogin alloc] init];
    if (![login clientLoggedIn]) {
             UIAlertView* theAlert = [[UIAlertView alloc]  initWithTitle:@"Enter your MBO username and password" message:nil delegate:self cancelButtonTitle:@"Skip" otherButtonTitles:@"Login", nil ];
        theAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
#ifdef DEBUG
        [[theAlert textFieldAtIndex:0] setText:@"jon.flanders@gmail.com"];
        [[theAlert textFieldAtIndex:1] setText:@"rookie95"];
#endif
        [theAlert show];
    }else{
        [self dismissViewControllerAnimated:YES completion:nil];
        [self.delegate loginViewComplete];

    }

}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
