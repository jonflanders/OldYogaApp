//
//  MBOClientLogin.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/13/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Client_x0020_ServiceSvc.h"
#import "Constants.h"
@interface MBOClientLogin : NSObject
-(NSString*) loginWithUserName:(NSString*)userName andPassword:(NSString*) password;
@end
