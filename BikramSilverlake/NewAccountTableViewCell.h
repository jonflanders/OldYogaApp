//
//  NewAccountTableViewCell.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 8/22/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewAccountTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UITextField *accountTextField;
@property (strong,nonatomic) NSString* accountTextFieldName;
-(id)initWithName:(NSString*)name;
@end
