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
@protocol MBOLoginComplete;

@interface MBOClientLogin : NSObject<UIAlertViewDelegate>
-(void)login;
-(NSString*) loginWithUserName:(NSString*)userName andPassword:(NSString*) password;
-(NSString*) clientLoggedIn;
-(void)logout;
@property (strong,nonatomic) id<MBOLoginComplete> delegate;
@end

@protocol MBOLoginComplete <NSObject>

-(void)complete:(NSString*)clientID;

@end