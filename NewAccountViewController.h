//
//  NewAccountViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/23/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewAccountViewController : UITableViewController<UITextFieldDelegate,UIPickerViewDataSource>
@property (strong, nonatomic) IBOutlet UIPickerView *countryPicker;
@property (strong,nonatomic) NSMutableDictionary* data;
-(void)invalidFields:(NSDictionary*)invalid;
@end
