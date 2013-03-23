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
@interface AboutTheStudioViewController ()
{
    NSArray* _items;
    NSString* ImageCellIdentifier;
}
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
    UITableViewCell* cell = [self.tblView dequeueReusableCellWithIdentifier:cellId];
    if(cell==nil){
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue2 reuseIdentifier:cellId];
    }
    CGRect bounds =  cell.bounds;
    
    AboutItems* item= [_items objectAtIndex:indexPath.section];
    if(item.image==nil){
        cell.textLabel.text = item.item;
        cell.detailTextLabel.text = item.value;
        cell.detailTextLabel.adjustsFontSizeToFitWidth=YES;
        cell.detailTextLabel.numberOfLines=5;
    }
    else{
      
        cell   =  [self.tblView dequeueReusableCellWithIdentifier:ImageCellIdentifier];
        for (UIView* view in cell.subviews) {
            for (UIView* sview in view.subviews) {
                if([sview isKindOfClass:[UIImageView class]])
                {
//                    UIImageView* iview = (UIImageView*)sview;
//                     CGRect ibounds = iview.bounds;
//                    iview.image =item.image;
//                    iview.layer.cornerRadius = 10;
//                    iview.contentMode = UIViewContentModeScaleAspectFit;
                }
            }
        }
    }
    return cell;
}
-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{

    CGFloat h = 44;
    if(indexPath.section==1)
    {
        h = 100;
    }
    return h;

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
-(void)address:(NSString*)addy
{
    CLLocationCoordinate2D coordinate;
    coordinate.latitude = 34.118425;
    coordinate.longitude = -118.260727;
    MKPlacemark* placemark = [[MKPlacemark alloc] initWithCoordinate:coordinate addressDictionary:nil];
    MKMapItem* destination =  [[MKMapItem alloc] initWithPlacemark:placemark];
    
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
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        self.title = @"Info";
        self.tabBarItem.image = [UIImage imageNamed:@"aboutus"];
        _items = @[[[AboutItems alloc] initWithItem:@"phone" andValue:@"323-668-2500"],[[AboutItems alloc] initWithItem:@"address" andValue:@"3223 Glendale Boulevard Los Angeles, California 90039"],[[AboutItems alloc] initWithItem:@"email" andValue:@"info@bikramyogasilverlake.com"],[[AboutItems alloc] initWithItem:@"twitter" andValue:@"" andImage:[UIImage imageNamed:@"twitter"]]];
    }
    return self;
}

- (void)viewDidLoad
{
    
    [super viewDidLoad];
    ImageCellIdentifier = @"ImageCell";

    // Do any additional setup after loading the view from its nib.
    [self.tblView registerNib:[UINib nibWithNibName:@"ImageCell" bundle:nil] forCellReuseIdentifier:ImageCellIdentifier];
    
  
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
