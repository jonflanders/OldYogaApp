//
//  NewAccountViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/23/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "NewAccountViewController.h"

@interface NewAccountViewController (){
    NSString* EditCell;
    NSArray* userData;
    NSArray* emergencyData;
}

@end

@implementation NewAccountViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}
-(void)invalidFields:(NSDictionary *)invalid{
    for (NSString* key in [invalid allKeys]) {
        
        UITextField* field = [self textFieldForKey:key];
        field.backgroundColor  = [UIColor colorWithRed:1.0 green:0 blue:0 alpha:.3];
    }
}
-(UITextField*)textFieldForKey:(NSString*)key
{
    UITextField* field= nil;
    NSUInteger r = [userData indexOfObject:key];
    UITableViewCell* cell = [self.tableView cellForRowAtIndexPath:[NSIndexPath indexPathForItem:r inSection:0]];
       for (UIView* view in cell.subviews) {
            for (UIView* sview in view.subviews) {
                if([sview isKindOfClass:[UITextField class]])
                {
                    field = (UITextField*)sview;
                }
            }
        }

    return field;
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    EditCell = @"EditCell"; 
    [self.tableView registerNib:[UINib nibWithNibName:@"NewEditTableViewCell" bundle:nil]  forCellReuseIdentifier:EditCell];
    userData = @[@"Username",@"First",@"Last",@"Email",@"Password",@"Confirm",@"Address",@"Address 2",@"City",@"State",@"Country",@"Zip",@"Phone"];
    emergencyData = @[@"Name",@"Relationship",@"Contact Phone",@"Contact Email"];
    self.data = [NSMutableDictionary dictionaryWithObjects:userData forKeys:userData];
    [self.data addEntriesFromDictionary:[NSMutableDictionary dictionaryWithObjects:emergencyData    forKeys:emergencyData]];
#ifdef DEBUG
    [self.data setObject:@"jflanders" forKey:@"Username"];
    [self.data setObject:@"Jon" forKey:@"First"];
    [self.data setObject:@"Flanders" forKey:@"Last"];
    [self.data setObject:@"jon.flanders@me.com" forKey:@"Email"];
    [self.data setObject:@"Testing12" forKey:@"Password"];
    [self.data setObject:@"Testing12" forKey:@"Confirm"];
    [self.data setObject:@"710 Cipriano " forKey:@"Address"];
    [self.data setObject:@"" forKey:@"Address 2"];
    [self.data setObject:@"Monterey Park" forKey:@"City"];
    [self.data setObject:@"CA" forKey:@"State"];
    [self.data setObject:@"USA" forKey:@"Country"];
    [self.data setObject:@"91754" forKey:@"Zip"];
    [self.data setObject:@"651-492-1273" forKey:@"Phone"];
    [self.data setObject:@"Shannon Ahern" forKey:@"Name"];
    [self.data setObject:@"wife" forKey:@"Relationship"];
    [self.data setObject:@"818-599-9522" forKey:@"Contact Phone"];
    [self.data setObject:@"shannon.ahern@gmail.com" forKey:@"Contact Email"];
    
#endif
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
  
}

#pragma mark - Table view data source
-(NSString*) tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{
    if(section==0)
    {
        return @"Your Contact Information";
    }
    return @"Emergency Contact Information";
}
- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return  2;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    if(section==0)
        return userData.count;
    else
        return emergencyData.count;
}
-(void)textFieldDidEndEditing:(UITextField *)textField{
    NSString* key = [self keyForTextField:textField];
    [self.data setObject:textField.text forKey:key];
}
-(NSString*)keyForTextField:(UITextField*)textField{
    NSString* ret = nil;
    UIView* superView = textField.superview;
    UITableViewCell* cell = 	(UITableViewCell*)superView.superview;
    NSIndexPath* path =    [self.tableView indexPathForCell:cell];
    if (path.section==0) {
        ret = [userData objectAtIndex:path.row];
        
    }
    else{
        ret = [emergencyData objectAtIndex:path.row];
    }
    return ret;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSString* labeltext = nil;
    NSString* textVal = nil;
    if(indexPath.section==0){
        labeltext = [userData objectAtIndex:indexPath.row];
        
    }
    else
    {
        labeltext = [emergencyData objectAtIndex:indexPath.row];
    }
    textVal = [self.data objectForKey:labeltext];
    if([textVal isEqualToString:labeltext]){
        textVal =nil;
    }
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:EditCell];
       for (UIView* view in cell.subviews) {
           BOOL protected = NO;
            for (UIView* sview in view.subviews) {
                if([sview isKindOfClass:[UILabel class]])
                {
                    UILabel* label = (UILabel*)sview;
                    label.text = labeltext;
                    if([label.text isEqualToString:@"Password"]||[label.text isEqualToString:@"Confirm"]){
                        protected = YES;
                    }
                }
                if([sview isKindOfClass:[UITextField class]]){
                    UITextField* field = (UITextField*)sview;
                    field.secureTextEntry=NO;
                    if(protected){
                        field.secureTextEntry=YES;
                    }
                    field.delegate = self;
                    field.text = textVal;
                    NSLog(@"label = %@ text = %@ row = %d section = %d",labeltext, field.text,indexPath.row, indexPath.section);
                }
            }
       }

    return cell;
}



@end
