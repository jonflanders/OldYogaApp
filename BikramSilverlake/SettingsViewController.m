//
//  SettingsViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 10/13/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import "SettingsViewController.h"
#import "SettingsSectionItem.h"
@interface SettingsViewController ()
{
    NSArray* alertArray;
    NSDictionary* sections;
}
@end

@implementation SettingsViewController
-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    NSString* sectionKey = [[sections allKeys] objectAtIndex:section];
    NSArray* s = [sections objectForKey:sectionKey];
    return s.count;
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return sections.count;
}
-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    static NSString* cell = @"Cell";
    UITableViewCell* c = [self.tableView dequeueReusableCellWithIdentifier:cell];
    if(c==nil){
        c = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:cell];
        c.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    }
    SettingsSectionItem* item = [self getForIndexPath:indexPath];
    c.textLabel.text = item.title;
    c.detailTextLabel.text = item.subTitle;
    return c;
}
- (IBAction)settingDone:(id)sender {
}
- (IBAction)settingCancel:(id)sender {
    [self dismissModalViewControllerAnimated:YES];
}

-(NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{
    NSString* s = [[sections allKeys] objectAtIndex:section];
    return s;
}
-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    SettingsSectionItem* item = [self getForIndexPath:indexPath];
    NSString* viewControllerName = item.viewToLoad;
    NSString* class  = [NSString stringWithFormat:@"%@ViewController",viewControllerName];
    NSString* nib;
    if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone) {
        nib =   [NSString stringWithFormat:@"%@ViewController",viewControllerName];
    } else {
        nib =   [NSString stringWithFormat:@"%@ViewController_iPad",viewControllerName];
    }
    UIViewController* vc = [[NSClassFromString(class) alloc] initWithNibName:nib bundle:nil];
    self.nav.viewControllers = @[vc];
    self.nav.navigationBar.topItem.title = item.title;
    self.nav.navigationBar.topItem.rightBarButtonItem = self.doneButton;
    self.nav.navigationBar.topItem.leftBarButtonItem = self.cancelButton;
    [self presentViewController:self.nav animated:YES completion:^{
      
    }];
}
-(SettingsSectionItem*) getForIndexPath:(NSIndexPath*)indexPath{
    NSString* sectionKey = [[sections allKeys] objectAtIndex:indexPath.section];
    NSArray* section = [sections objectForKey:sectionKey];
    SettingsSectionItem* item = [section objectAtIndex:indexPath.row];
    return item;
}
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        self.tabBarItem.image = [UIImage imageNamed:@"bikramsettings"];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    alertArray = @[ [[SettingsSectionItem alloc] initWithTitle:@"Alert" andSubTitle:@"15 minutes" andView:@"AlarmTimeTable"], [[SettingsSectionItem alloc] initWithTitle:@"Second Alert" andSubTitle:@"None" andView:@"AlarmTimeTable"]];
    sections = @{@"Calendar Alerts": alertArray};
  
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewDidUnload {
   
    [self setNav:nil];
    [self setCancelButton:nil];
    [self setDoneButton:nil];
    [super viewDidUnload];
}
@end
