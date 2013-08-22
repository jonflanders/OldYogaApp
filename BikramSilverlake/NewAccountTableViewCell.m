//
//  NewAccountTableViewCell.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 8/22/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "NewAccountTableViewCell.h"

@implementation NewAccountTableViewCell
-(id)initWithName:(NSString *)name{
    self = [super init];
    if(self)
    {
        self.accountTextFieldName  = name;
    }
    return self;
}
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
