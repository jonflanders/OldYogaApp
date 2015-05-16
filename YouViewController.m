//
//  YouViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/14/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "YouViewController.h"
#import "MBOClientLogin.h"
#import "LoginViewController.h"
@interface YouViewController ()
{
    NSArray* classes;
    MBOClientLogin* cl;
}
@end

@implementation YouViewController

-(void)complete:(NSString *)clientID{
	self.loggedIn = YES;
	[self.tableView reloadData];
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    [self getClasses];
    cl = [[MBOClientLogin alloc] init];
     self.loggedIn = ([cl clientLoggedIn]!=nil);
}
-(void)getClasses{
    MBOClientLogin* login = [[MBOClientLogin alloc] init];
    if ([login clientLoggedIn]) {
        self.busyViewController = [[BusyViewController alloc] initWithNibName:@"BusyViewController" bundle:nil];
        [self.view addSubview:self.busyViewController.view];
        
        self.records = [[MBOClientRecords alloc] init];
        self.records.delegate  = self;
        [self.records retrieveRecords];
    }
}
-(void)recordsReceived:(NSArray *)records{
    classes  = records;
    [self.tableView reloadData];
    self.busyViewController.view.hidden=YES;
    self.busyViewController = nil;
    self.records =nil;
}
- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source
-(NSString*)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{
    if(section==1){
        return [NSString stringWithFormat:@"You've been to %d classes",classes.count];
    }
    return nil;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 2;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{

    if(section==0)
    {
        return 3;
    }
   else
       return classes.count;
    
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
            UITableViewCell * cell =  [ self.tableView cellForRowAtIndexPath:[NSIndexPath indexPathForItem:0 inSection:0]];
            [self setButton:cell withTitle:@"Logout"];
            self.loggedIn=YES;
			[self.tableView reloadData];
			[self getClasses];
        }
    }
}
-(void)createAccount{
    LoginViewController *vc = [[LoginViewController alloc] initWithNibName:@"LoginViewController" bundle:nil];
    [self presentViewController:vc animated:YES completion:^{
          [vc createNewAccount];
    }];
  
}
-(void)forgotPassword{
       [cl sendPassword];
}
-(void)logout{
    
    if ([cl clientLoggedIn]) {
        [cl logout];
         UITableViewCell * cell =  [ self.tableView cellForRowAtIndexPath:[NSIndexPath indexPathForItem:0 inSection:0]];
         [self setButton:cell withTitle:@"Login"];
        classes = nil;
        [self.tableView reloadData];
        self.loggedIn=NO;
    }
    else{
        UIAlertView* theAlert = [[UIAlertView alloc]  initWithTitle:@"Enter your MBO username and password" message:nil delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"Login", nil ];
        theAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
#ifdef DEBUG
        [[theAlert textFieldAtIndex:0] setText:@"jon.flanders@gmail.com"];
        [[theAlert textFieldAtIndex:1] setText:@"rookie95"];
#endif
        [theAlert show];
    }
}
-(void)setButton:(UITableViewCell*)cell withTitle:(NSString*)title{
    for (UIView* view in cell.subviews) {
        for (UIView* sv in view.subviews) {
            if([sv isKindOfClass:[UIButton class]])
            {
                UIButton* button = (UIButton*)sv;
                [button setTitle:title forState:UIControlStateNormal ];
            }
        }
    }
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = nil;
    static NSString *CellIdentifier = @"Cell";
    static NSString *ButtonCellID = @"ButtonCell";
   	if(indexPath.section==1){
     cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:CellIdentifier];
    }
    
    NSString* item = [classes objectAtIndex:indexPath.row];
    cell.textLabel.text = item;
    }
    if(indexPath.section==0){
        cell = [tableView dequeueReusableCellWithIdentifier:ButtonCellID];
        if (cell == nil) {
            [self.tableView registerNib:[UINib nibWithNibName:@"ButtonTableViewCell" bundle:nil] forCellReuseIdentifier:ButtonCellID];
            cell  = [tableView dequeueReusableCellWithIdentifier:ButtonCellID];
        }
        
            for (UIView* view in cell.subviews) {
                 for (UIView* sv in view.subviews) {
                    if([sv isKindOfClass:[UIButton class]])
                    {
                        if(indexPath.row==0){
                            UIButton* button = (UIButton*)sv;
                            NSString* buttonTitle = @"Logout";
                            
                            if(!self.loggedIn){
                                buttonTitle = @"Login";
                            }
                            [button setTitle:buttonTitle forState:UIControlStateNormal ];
                            [button addTarget:self action:@selector(logout) forControlEvents:UIControlEventTouchDown];
                        }
                        if(indexPath.row==1){
                            UIButton* button = (UIButton*)sv;
                            
                            [button setTitle:@"Create Account" forState:UIControlStateNormal ];
                            [button addTarget:self action:@selector(createAccount) forControlEvents:UIControlEventTouchDown];
                            if(self.loggedIn){
                                cell.hidden = YES;
                            }
                        }
                        if(indexPath.row==2){
                            UIButton* button = (UIButton*)sv;
                            
                            [button setTitle:@"Forgot Password" forState:UIControlStateNormal ];
                            [button addTarget:self action:@selector(forgotPassword) forControlEvents:UIControlEventTouchDown];
                            if(self.loggedIn){
                                cell.hidden = YES;
                            }
                        }
                    }
                 }
            }
        
    }
    return cell;
}

@end
