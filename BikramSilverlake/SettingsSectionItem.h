//
//  SettingsSection.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/12/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SettingsSectionItem : NSObject
-(id)initWithTitle:(NSString*)title andSubTitle:(NSString*)subTitle andView:(NSString*)viewToLoad;
@property (nonatomic,strong) NSString* title;
@property (nonatomic,strong) NSString* subTitle;
@property (nonatomic,strong) NSString* viewToLoad;
@end
