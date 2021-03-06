//
//  LoginViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "LoginViewController.h"
#import "MBOClientLogin.h"
#import "NewAccountViewController.h"
#import "AppDelegate.h"
@interface LoginViewController ()
{
    NewAccountViewController* newAccount;
    UITextField* txtOldPwd;
    UITextField* txtNewPwd;
    UITextField* txtConfirmPwd;
    MBOClientLogin* cl;
}
@end

@implementation LoginViewController
- (IBAction)cancelNewAccount:(id)sender {
    
    [self dismissViewControllerAnimated:YES completion:^{
        newAccount = nil;
        AppDelegate* del = ( AppDelegate*)[UIApplication sharedApplication].delegate;
        if(del.loginViewController==nil&&del.loginViewController!=self){
            [self dismissViewControllerAnimated:YES completion:^{
                
            }];
        }
    }];
   
    
}
-(void)createNewAccount{
    [self create:nil];
}
- (IBAction)forgotPassword:(id)sender {
   cl =  [[MBOClientLogin alloc] init];
    [cl sendPassword];
}
-(void)addCityState:(NSMutableDictionary*)data{
    NSString* postal = [data objectForKey:@"Postal Code"];
    NSString* country = [data objectForKey:@"Country"];
   //remove + 4 if country is US
    if([country isEqualToString:@"UNITED STATES"])
    {
        NSRange contains = [postal rangeOfString:@"-"];
        if(contains.location>0){
            NSArray* split = [postal componentsSeparatedByString:@"-"];
            postal = [split objectAtIndex:0];
        }
    }
    
    NSString* fileRoot = [[NSBundle mainBundle]
                          pathForResource:@"country_names_and_code_elements_txt" ofType:@"txt"];
    NSString* sc = nil;
    NSString* fileContents =
    [NSString stringWithContentsOfFile:fileRoot
                              encoding:NSUTF8StringEncoding error:nil];
     NSArray* allLinedStrings =
    [fileContents componentsSeparatedByCharactersInSet:
     [NSCharacterSet newlineCharacterSet]];
    for (NSString* c in allLinedStrings) {
        NSArray* ca =
        [c componentsSeparatedByCharactersInSet:
         [NSCharacterSet characterSetWithCharactersInString:@";"]];
        if(ca!=nil&&ca.count==2)
        {
            NSString* ncountry = [ca objectAtIndex:0];
            if([ncountry isEqualToString:country]){
                sc = [ca objectAtIndex:1];
            }
        }
    }

    NSString* url = [NSString stringWithFormat:@"http://api.geonames.org/findNearbyPostalCodesJSON?formatted=true&postalcode=%@&username=jonflanders&country=%@",postal,sc];
    NSString* sdata = [NSString stringWithContentsOfURL:[NSURL URLWithString:url] encoding:NSUTF8StringEncoding error:nil];
    NSDictionary* results = [NSJSONSerialization JSONObjectWithData:[sdata dataUsingEncoding:NSUTF8StringEncoding] options:NSJSONReadingAllowFragments error:nil];
    NSArray* presults = [results objectForKey:@"postalCodes"];
    NSDictionary* fresult = [presults objectAtIndex:0];
    NSString* state = [fresult objectForKey:@"adminCode1"];
    if(state==nil){
        UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Can't find your location" message:@"Please check your Postal Code and Country" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
        [theAlert show];

    }else{
        [data setObject:state forKey:@"State"];
        NSString* city = [fresult objectForKey:@"placeName"];
        [data setObject:city forKey:@"City"];
    }
}
- (IBAction)saveNewAccount:(id)sender {
    BOOL valid = YES;
    NSMutableDictionary* invalid = [[NSMutableDictionary alloc] init];
    [newAccount checkForFieldData];
    [self addCityState:newAccount.data];
    for (NSString* key in newAccount.data) {
        NSString* val  = [newAccount.data objectForKey:key];
        if([val isEqualToString:key]||val==nil||[val isEqualToString:@""]){
            [invalid setObject:key forKey:key];
            valid=NO;
        }
    }
    //password check
    NSString* pwdKey = @"Password";
    NSString* cpwdKey = @"Confirm";
    NSString* pwd = [newAccount.data objectForKey:pwdKey];
    NSString* cpwd = [newAccount.data objectForKey:cpwdKey];
    if(![pwd isEqualToString:cpwd]){
        [invalid setObject:pwdKey forKey:pwdKey];
         [invalid setObject:cpwdKey forKey:cpwdKey];
    }
   
    if(valid){
        
        MBOClientLogin* client = [[MBOClientLogin alloc] init];
        NSString* clientID = [client createClient:newAccount.data];
        if(clientID==nil){
            NSLog(@"client is null - but data is valid!!!!");
        }else{
          [self dismissViewControllerAnimated:YES completion:^{
              [self dismissViewControllerAnimated:YES completion:nil];
              [self.delegate loginViewComplete];
          }];
            newAccount = nil;

        }

    }else
    {
        [newAccount invalidFields:invalid];
    }
}
- (IBAction)login:(id)sender {
    UIAlertView* theAlert = [[UIAlertView alloc]  initWithTitle:@"Enter your MBO username and password" message:nil delegate:self cancelButtonTitle:@"Skip" otherButtonTitles:@"Login", nil ];
    theAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
#ifdef DEBUG
    [[theAlert textFieldAtIndex:0] setText:@"jon.flanders@gmail.com"];
    [[theAlert textFieldAtIndex:1] setText:@"rookie95"];
#endif
    [theAlert show];
}
- (IBAction)skip:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
    [self.delegate loginViewComplete];

}
- (IBAction)create:(id)sender {

    newAccount = [[NewAccountViewController alloc] initWithNibName:@"NewAccountViewController" bundle:nil];
    self.nav.viewControllers = @[newAccount];
    self.nav.navigationBar.topItem.title = @"Create Account";
    self.nav.navigationBar.topItem.rightBarButtonItem = self.save;
    self.nav.navigationBar.topItem.leftBarButtonItem = self.cancel;
    [self presentViewController:self.nav animated:YES completion:^{
        
    }];
}

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

- (void)viewDidUnload {
     [self setNav:nil];
    [self setCancel:nil];
    [self setSave:nil];
    [super viewDidUnload];
}
@end
