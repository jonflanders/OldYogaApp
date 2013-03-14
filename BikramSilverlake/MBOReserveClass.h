//
//  MBOReserveClass.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/13/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MBOReserveClass : NSObject
-(BOOL) reserveClass:(NSString*) classID forClient:(NSString*) clientID;
@end
