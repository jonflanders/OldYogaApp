//
//  YouViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/14/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "YouViewController.h"
#import "MBOClientLogin.h"
@interface YouViewController ()
{
    NSArray* classes;
}
@end

@implementation YouViewController

-(id) initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        self.tabBarItem.image = [UIImage imageNamed:@"bikramsettings"];
    }
    return self;
}
- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
 
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 2;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{

    if(section==0)
    {
        return 1;
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
        }
    }
}
-(void)logout{
    MBOClientLogin* login = [[MBOClientLogin alloc] init];
    if ([login clientLoggedIn]) {
        [login logout];
         UITableViewCell * cell =  [ self.tableView cellForRowAtIndexPath:[NSIndexPath indexPathForItem:0 inSection:0]];
         [self setButton:cell withTitle:@"Login"];

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
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier];
    }
    
    // Configure the cell...
    }
    if(indexPath.section==0){
        cell = [tableView dequeueReusableCellWithIdentifier:ButtonCellID];
        if (cell == nil) {
            [self.tableView registerNib:[UINib nibWithNibName:@"ButtonTableViewCell" bundle:nil] forCellReuseIdentifier:ButtonCellID];
            cell  = [tableView dequeueReusableCellWithIdentifier:ButtonCellID];
            for (UIView* view in cell.subviews) {
                 for (UIView* sv in view.subviews) {
                    if([sv isKindOfClass:[UIButton class]])
                    {
                        UIButton* button = (UIButton*)sv;
                        MBOClientLogin* cl = [[MBOClientLogin alloc] init];
                        NSString* buttonTitle = @"Logout";
                        if(![cl clientLoggedIn]){
                            buttonTitle = @"Login";
                        }
                        [button setTitle:buttonTitle forState:UIControlStateNormal ];
                        [button addTarget:self action:@selector(logout) forControlEvents:UIControlEventTouchDown];
                    }
                 }
            }
        }
    }
    return cell;
}

/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/

/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source
        [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
    }   
    else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
    }   
}
*/

/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath
{
}
*/

/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/

#pragma mark - Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    // Navigation logic may go here. Create and push another view controller.
    /*
     <#DetailViewController#> *detailViewController = [[<#DetailViewController#> alloc] initWithNibName:@"<#Nib name#>" bundle:nil];
     // ...
     // Pass the selected object to the new view controller.
     [self.navigationController pushViewController:detailViewController animated:YES];
     */
}

@end
