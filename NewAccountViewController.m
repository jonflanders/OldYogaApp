//
//  NewAccountViewController.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/23/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "NewAccountViewController.h"
#import "NewAccountTableViewCell.h"

@interface NewAccountViewController (){
    NSString* EditCell;
    NSMutableArray* userData;
    NSMutableArray* emergencyData;
    NSMutableArray* countries;
    NSDictionary* invalidFields;
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
    invalidFields = invalid;
    for (NSString* key in [invalidFields allKeys]) {
        UITextField* field = [self textFieldForKeyBoth:key];
        [self setFieldInvalid:field];
    }
    UIAlertView* theAlert = [[UIAlertView alloc] initWithTitle:@"Invalid fields" message:@"Please correct the indicated field(s)."  delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
    [theAlert show];
   
}
-(void)setFieldInvalid:(UITextField*)field
{
    field.backgroundColor  = [UIColor colorWithRed:1.0 green:0 blue:0 alpha:.3];
  
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
    NSUInteger r = [arr indexOfObject:key];
    NewAccountTableViewCell* cell = (NewAccountTableViewCell*)[self.tableView cellForRowAtIndexPath:[NSIndexPath indexPathForItem:r inSection:s]];
    
    return cell.accountTextField;
}
-(void)configureCell:(NewAccountTableViewCell*)cell{
    UIView* inputView = nil;
    BOOL protected = NO;
    UILabel* label = cell.nameLabel;
    UIKeyboardType keyboard = UIKeyboardTypeDefault;
    NSString* labeltext = label.text;
    
    if([labeltext isEqualToString:@"Password"]||[labeltext isEqualToString:@"Confirm"]){
        protected = YES;
    } if([labeltext isEqualToString:@"Phone"]||[labeltext isEqualToString:@"Contact Phone"]){
        keyboard = UIKeyboardTypePhonePad;
    }
    if([labeltext isEqualToString:@"Email"])
    {
        keyboard = UIKeyboardTypeEmailAddress;
    }
    if([labeltext isEqualToString:@"Contact Email"])
    {
        keyboard = UIKeyboardTypeEmailAddress;
    }
    if([labeltext isEqualToString:@"Postal Code"])
    {
        keyboard = UIKeyboardTypeNumbersAndPunctuation;
    }
    if([labeltext isEqualToString:@"Country"])
    {
        inputView = self.countryPicker;
    }
    UITextField* field = cell.accountTextField;
    field.backgroundColor  = nil;
    
    if([[invalidFields allKeys] containsObject:labeltext]){
        [self setFieldInvalid:field];
    }
    field.keyboardType = keyboard;
    field.secureTextEntry=NO;
    if(protected){
        field.secureTextEntry=YES;
    }
    field.delegate = self;
    NSString* textVal = [self.data objectForKey:labeltext];
    if([textVal isEqualToString:labeltext]){
        textVal =nil;
    }

    field.text = textVal;
    field.placeholder = @"required";
    if(inputView!=nil){
        field.inputView = inputView;
    }
    
}
- (void)viewDidLoad
{
    [super viewDidLoad];
    EditCell = @"EditCell";
        UINib* cellNib = [UINib nibWithNibName:@"NewEditTableViewCell" bundle:nil];
    NSArray* udStrings = @[@"First",@"Last",@"Email",@"Password",@"Confirm",@"Address",@"Country",@"Postal Code",@"Phone"];
    userData = [[NSMutableArray alloc] initWithCapacity:udStrings.count];
    NSArray* edStrings = @[@"Name",@"Relationship",@"Contact Phone",@"Contact Email"];
    emergencyData = [[NSMutableArray alloc] initWithCapacity:edStrings.count];
    
    self.data = [NSMutableDictionary dictionaryWithObjects:udStrings forKeys:udStrings];
    [self.data addEntriesFromDictionary:[NSMutableDictionary dictionaryWithObjects:edStrings    forKeys:edStrings]];
    [self.data setObject:@"UNITED STATES" forKey:@"Country"];
    [[UILabel appearanceWhenContainedIn:[UITextField class], nil] setTextColor:[UIColor darkGrayColor]];
#ifdef DEBUG
    //[self.data setObject:@"jflanders" forKey:@"Username"];
    [self.data setObject:@"Jon" forKey:@"First"];
    [self.data setObject:@"Flanders" forKey:@"Last"];
    [self.data setObject:@"jon.flanders@me.com" forKey:@"Email"];
    [self.data setObject:@"Testing12" forKey:@"Password"];
    [self.data setObject:@"Testing12" forKey:@"Confirm"];
    [self.data setObject:@"710 Cipriano Pl" forKey:@"Address"];
    [self.data setObject:@"91754-3802" forKey:@"Postal Code"];
    [self.data setObject:@"651-492-1273" forKey:@"Phone"];
    [self.data setObject:@"Shannon Ahern" forKey:@"Name"];
    [self.data setObject:@"wife" forKey:@"Relationship"];
    [self.data setObject:@"818-599-9522" forKey:@"Contact Phone"];
    [self.data setObject:@"shannon.ahern@gmail.com" forKey:@"Contact Email"];
    
#endif
 
    for (NSString* name in udStrings) {
        NewAccountTableViewCell* cell = (NewAccountTableViewCell*)[cellNib instantiateWithOwner:nil options:nil][0];
        cell.nameLabel.text = name;
        [self configureCell:cell];
        [userData addObject:cell];

    }
    for (NSString* name in edStrings) {
        NewAccountTableViewCell* cell = (NewAccountTableViewCell*)[cellNib instantiateWithOwner:nil options:nil][0];
        cell.nameLabel.text = name;
        [self configureCell:cell];
        [emergencyData addObject:cell];

    }
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
    NewAccountTableViewCell* cell = (NewAccountTableViewCell*)superView.superview;
    ret = cell.nameLabel.text;
    return ret;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell* cell= nil;
    if(indexPath.section==0){
     
        cell = [userData objectAtIndex:indexPath.row];
    }
    else
    {
        cell = [emergencyData objectAtIndex:indexPath.row];
    }
   
    return cell;
}



- (void)viewDidUnload {
    [self setCountryPicker:nil];
    [super viewDidUnload];
}
@end
