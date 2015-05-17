//
//  AboutTheStudioViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "AboutTheStudioViewController.h"
#import "AboutItems.h"
#import <MapKit/MapKit.h>
#import <QuartzCore/QuartzCore.h>
#import "Constants.h"
#import "BikramSilverlake-Swift.h"
@interface AboutTheStudioViewController ()
@property (nonatomic,strong) NSArray* items;
@property (nonatomic,strong) NSString* ImageCellIdentifier;

@end

@implementation AboutTheStudioViewController
-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 1;
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return _items.count;
}
-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    static NSString* cellId = @"Cell";
    UITableViewCell* cell = nil;
    
   
    
    AboutItems* item= [_items objectAtIndex:indexPath.section];
    if(item.image==nil){
        cell = [self.tblView dequeueReusableCellWithIdentifier:cellId];
        if(cell==nil){
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue2 reuseIdentifier:cellId];
        }
        cell.textLabel.text = item.item;
		cell.backgroundColor = [UIColor clearColor];
        cell.detailTextLabel.text = item.value;
        cell.detailTextLabel.adjustsFontSizeToFitWidth=YES;
        if([item.item isEqualToString:@"address"]){
            cell.detailTextLabel.numberOfLines=3;

        }
       }
    else{
        cell   =  [self.tblView dequeueReusableCellWithIdentifier:self.ImageCellIdentifier];
		ImageTableViewCell* imageCell = (ImageTableViewCell*)cell;
		imageCell.cellImage = item.image;
    }
    return cell;
}
-(CGFloat) tableView:(UITableView*)tableView heightForFooterInSection:(NSInteger)section{
    return 0;
}
-(CGFloat) tableView:(UITableView*)tableView heightForHeaderInSection:(NSInteger)section{
    int header = 10;
    int sheader = 0;
    
    if (IS_RETINA&&[UIScreen mainScreen].bounds.size.height == 568.0) {
        int mul = 6;
        header= header*mul+8;
        sheader = sheader*mul;
    }
    if(section==0)
        return header;
    return sheader;

}
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{

    CGFloat h = 50;
	AboutItems* item = self.items[indexPath.row];
	
    if(item.image)
    {
		h = 100;
    }
    return h;

}

-(UIView*)tableView:(UITableView*)tableView viewForHeaderInSection:(NSInteger)section
{
    return [[UIView alloc] initWithFrame:CGRectZero] ;
}

-(UIView*)tableView:(UITableView*)tableView viewForFooterInSection:(NSInteger)section
{
    return [[UIView alloc] initWithFrame:CGRectZero] ;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [self.tblView deselectRowAtIndexPath:indexPath animated:YES];
    AboutItems* item= [_items objectAtIndex:indexPath.section];
    SEL sel = NSSelectorFromString([NSString stringWithFormat:@"%@:",item.item]);
    if([self respondsToSelector:sel]){
        [self performSelector:sel withObject:item.value];
    }
    
}
-(void)email:(NSString*)emailAddy{
     [[UIApplication sharedApplication] openURL: [NSURL URLWithString:[NSString stringWithFormat:@"mailto://%@",emailAddy]]];
}
-(void)address:(NSString*)addy
{
    CLLocationCoordinate2D coordinate;
    coordinate.latitude = 34.118425;
    coordinate.longitude = -118.260727;
    MKPlacemark* placemark = [[MKPlacemark alloc] initWithCoordinate:coordinate addressDictionary:nil];
    MKMapItem* destination =  [[MKMapItem alloc] initWithPlacemark:placemark];
    destination.name  = @"Bikram Yoga Silverlake";
    if([destination respondsToSelector:@selector(openInMapsWithLaunchOptions:)])
    {
        // Using iOS6 native maps app
        [destination openInMapsWithLaunchOptions:@{MKLaunchOptionsDirectionsModeKey:MKLaunchOptionsDirectionsModeDriving}];
    }
    else
    {
       NSString *routeString = [NSString stringWithFormat:@"%@saddr=%@", @"http://maps.google.com", addy];
        [[UIApplication sharedApplication] openURL:[NSURL URLWithString:routeString]];
    }
}
-(void)phone:(NSString*)number
{
    [[UIApplication sharedApplication] openURL: [NSURL URLWithString:[NSString stringWithFormat:@"tel://%@",number]]];
}
-(instancetype)initWithCoder:(NSCoder *)aDecoder{
	self = [super initWithCoder:aDecoder];
	if(self){
		NSMutableArray* arr = [[NSMutableArray alloc] init];
		[arr addObjectsFromArray:@[[[AboutItems alloc] initWithItem:@"phone" andValue:@"323-668-2500"],[[AboutItems alloc] initWithItem:@"address" andValue:@"3223 Glendale Boulevard Los Angeles, CA 90039"],[[AboutItems alloc] initWithItem:@"email" andValue:@"info@bikramyogasilverlake.com"]]];
		AboutItems* fb = [[AboutItems alloc] initWithItem:@"facebook" andValue:@"106087309432633" andImage:[UIImage imageNamed:@"fb"]];
		[arr addObject:fb];
		AboutItems* twitter = [[AboutItems alloc] initWithItem:@"twitter" andValue:@"bikramsilvrlake" andImage:[UIImage imageNamed:@"twitter"]];
		[arr addObject:twitter];
		self.items = arr.copy;
	}
	return self;
}

- (IBAction)privacyButton:(id)sender {
    [self privacy:nil];
}
-(void)privacy:(NSString*)s{
    NSURL* url = [NSURL URLWithString:@"http://www.bikramyogasilverlake.com/#!//Home/Privacy"];
    [[UIApplication sharedApplication] openURL:url];
}
- (IBAction)twitterButton:(id)sender {
    [self twitter:@"bikramsilvrlake"];
}
-(void)twitter:(NSString*)twitterUser
{
    [self tryURL:@"twitter://user?screen_name=%@" withValue:twitterUser orThisURL:@"http://www.twitter.com/%@"];
    
}
-(void)tryURL:(NSString*)url withValue:(NSString*)val orThisURL:(NSString*)secondURL{
    NSURL* rurl = [NSURL URLWithString:[NSString stringWithFormat:url,val]];
    UIApplication* app = [UIApplication sharedApplication];
    if([app canOpenURL:rurl]){
        [app openURL:rurl];
    }else{
        rurl = [NSURL URLWithString:[NSString stringWithFormat:secondURL,val]];
        [app openURL:rurl];
    }

}
- (IBAction)facebookButton:(id)sender {
    [self facebook:@"bikramyogasilverlake"];
}
-(void)facebook:(NSString*)facebookUser{
 
    [self tryURL:@"fb://profile/%@" withValue:@"106087309432633" orThisURL:@"http://www.facebook.com/%@"];
}
- (void)viewDidLoad
{
    
    [super viewDidLoad];
    self.ImageCellIdentifier = @"ImageCell";
    self.tblView.sectionHeaderHeight = 0.0;
    self.tblView.sectionFooterHeight = 0.0;
    
  
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewDidUnload {
    [self setTblView:nil];
    [super viewDidUnload];
}
@end
