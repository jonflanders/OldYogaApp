//
//  AboutItems.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AboutItems : NSObject
@property (strong,nonatomic) UIImage* image;
@property (strong,nonatomic) NSString* item;
@property (strong,nonatomic) NSString* value;
-(id)initWithItem:(NSString*)item andValue:(NSString*) value;
-(id)initWithItem:(NSString*)item andValue:(NSString*) value andImage:(UIImage*)image;
@end
