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
    NSMutableArray* countries;
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
    UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Invalid fields" message:@"Please correct the indicated field(s)."  delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
    [theAlert show];
   
}
-(UITextField*)textFieldForKey:(NSString*)key
{
    return [self textFieldForKey:key withArray:userData inSection:0];
}
-(UITextField*)textFieldForKeyBoth:(NSString*)key{
    UITextField* ret = [self textFieldForKey:key withArray:userData inSection:0];
    if(ret==nil)
    {
        ret  = [self textFieldForKey:key withArray:emergencyData inSection:1];
    }
    return ret;
}
-(UITextField*)textFieldForKey:(NSString*)key withArray:(NSArray*)arr inSection:(NSInteger)s{
    UITextField* field= nil;
    NSUInteger r = [arr indexOfObject:key];
    UITableViewCell* cell = [self.tableView cellForRowAtIndexPath:[NSIndexPath indexPathForItem:r inSection:s]];
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
    userData = @[@"First",@"Last",@"Email",@"Password",@"Confirm",@"Address",@"Country",@"Postal Code",@"Phone"];
    emergencyData = @[@"Name",@"Relationship",@"Contact Phone",@"Contact Email"];
    self.data = [NSMutableDictionary dictionaryWithObjects:userData forKeys:userData];
    [self.data addEntriesFromDictionary:[NSMutableDictionary dictionaryWithObjects:emergencyData    forKeys:emergencyData]];
    [self.data setObject:@"UNITED STATES" forKey:@"Country"];
    [[UILabel appearanceWhenContainedIn:[UITextField class], nil] setTextColor:[UIColor darkGrayColor]];
#ifdef DEBUG
    [self.data setObject:@"jflanders" forKey:@"Username"];
    [self.data setObject:@"Jon" forKey:@"First"];
    [self.data setObject:@"Flanders" forKey:@"Last"];
    [self.data setObject:@"jon@flounderware.com" forKey:@"Email"];
    [self.data setObject:@"Testing12" forKey:@"Password"];
    [self.data setObject:@"Testing1" forKey:@"Confirm"];
    [self.data setObject:@"91754" forKey:@"Postal Code"];
    [self.data setObject:@"651-492-1273" forKey:@"Phone"];
    [self.data setObject:@"Shannon Ahern" forKey:@"Name"];
    [self.data setObject:@"wife" forKey:@"Relationship"];
    [self.data setObject:@"818-599-9522" forKey:@"Contact Phone"];
    [self.data setObject:@"shannon.ahern@gmail.com" forKey:@"Contact Email"];
    
#endif
    NSString* fileRoot = [[NSBundle mainBundle]
                          pathForResource:@"country_names_and_code_elements_txt" ofType:@"txt"];
    // read everything from text
    NSString* fileContents =
    [NSString stringWithContentsOfFile:fileRoot
                              encoding:NSUTF8StringEncoding error:nil];
    countries = [[NSMutableArray alloc] init];
    
    NSArray* allLinedStrings =
    [fileContents componentsSeparatedByCharactersInSet:
     [NSCharacterSet newlineCharacterSet]];
    for (NSString* c in allLinedStrings) {
        NSArray* ca =
        [c componentsSeparatedByCharactersInSet:
         [NSCharacterSet characterSetWithCharactersInString:@";"]];
        if(ca!=nil&&ca.count==2)
        {
            NSString* country = [ca objectAtIndex:0];
            if([country isEqualToString:@"UNITED STATES"]){
                [countries insertObject:country atIndex:0];
            }
            else{
            [countries addObject:country];
            }
            
        }
    }
    [self.countryPicker reloadComponent:0];
    // choose whatever input identity you have decided. in this case ;
 
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
  
}
- (void)pickerView:(UIPickerView *)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component {
    
   NSString* country =  [countries objectAtIndex:row];
    UITextField* textField = [self textFieldForKey:@"Country"];
    textField.text = country;
    [self textFieldDidEndEditing:textField];
    
}
-(NSInteger)pickerView:(UIPickerView *)pickerView numberOfRowsInComponent:(NSInteger)component{
    return countries.count;
    
}
- (NSString *)pickerView:(UIPickerView *)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component{
    NSString* country = [countries objectAtIndex:row];
    return country;
    
}
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView *)pickerView{
    return 1;
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
-(void)textFieldDidBeginEditing:(UITextField *)textField{
   
}
-(void)checkForFieldData{
    NSArray* keys =  [self.data allKeys];
    for (NSString* item in keys) {
        UITextField* tf = [self textFieldForKeyBoth:item];
        if(tf!=nil){
            [self textFieldDidEndEditing:tf];
        }
    }
}
-(void)textFieldDidEndEditing:(UITextField *)textField{
    NSString* key = [self keyForTextField:textField];
    if(textField.text!=nil){
        [self.data setObject:textField.text forKey:key];
    }

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
           UIKeyboardType keyboard = UIKeyboardTypeDefault;
           UIView* inputView = nil;
            for (UIView* sview in view.subviews) {
                if([sview isKindOfClass:[UILabel class]])
                {
                    UILabel* label = (UILabel*)sview;
                    label.text = labeltext;
                   
                    if([label.text isEqualToString:@"Password"]||[label.text isEqualToString:@"Confirm"]){
                        protected = YES;
                    } if([label.text isEqualToString:@"Phone"]||[label.text isEqualToString:@"Contact Phone"]){
                       keyboard = UIKeyboardTypePhonePad;
                    }
                    if([label.text isEqualToString:@"Email"])
                        {
                            keyboard = UIKeyboardTypeEmailAddress;
                        }
                    if([label.text isEqualToString:@"Postal Code"])
                    {
                        keyboard = UIKeyboardTypeNumbersAndPunctuation;
                    }
                    if([label.text isEqualToString:@"Country"])
                    {
                        inputView = self.countryPicker;
                    }
                }
                if([sview isKindOfClass:[UITextField class]]){
                    UITextField* field = (UITextField*)sview;
                    field.keyboardType = keyboard;
                    field.secureTextEntry=NO;
                    if(protected){
                        field.secureTextEntry=YES;
                    }
                    field.delegate = self;
                    field.text = textVal;
                    field.placeholder = @"required";
                    if(view!=nil){
                        field.inputView = inputView;
                    }
                    NSLog(@"label = %@ text = %@ row = %d section = %d",labeltext, field.text,indexPath.row, indexPath.section);
                }
            }
      
       }
    return cell;
}



- (void)viewDidUnload {
    [self setCountryPicker:nil];
    [super viewDidUnload];
}
@end
