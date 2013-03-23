//
//  AboutItems.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "AboutItems.h"

@implementation AboutItems
-(id)initWithItem:(NSString*)item andValue:(NSString*) value{
    self = [self initWithItem:item andValue:value andImage:nil];
    return self;
}
-(id)initWithItem:(NSString*)item andValue:(NSString*) value andImage:(UIImage*)image{
    self = [super init];
    if(self)
    {
        self.item = item;
        self.value = value;
        self.image = image;
    }
    return self;
}
@end
