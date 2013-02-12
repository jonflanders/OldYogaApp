//
//  SettingsSection.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/12/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "SettingsSectionItem.h"

@implementation SettingsSectionItem
-(id)initWithTitle:(NSString*)title andSubTitle:(NSString*)subTitle andView:(NSString*)viewToLoad
{
    self = [super init];
    if(self){
        self.title =title;
        self.subTitle = subTitle;
        self.viewToLoad = viewToLoad;
    }
    return self;
}
@end
