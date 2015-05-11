//
//  MBOClientLogin.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/13/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Client_x0020_ServiceSvc.h"
#import "Constants.h"
@protocol MBOLoginComplete;

@interface MBOClientLogin : NSObject<UIAlertViewDelegate>
-(void)login;
-(void)sendPassword;
-(NSString*) loginWithUserName:(NSString*)userName andPassword:(NSString*) password;
-(NSString*) clientLoggedIn;
-(void)logout;
-(NSString*) createClient:(NSDictionary*)params;
@property (strong,nonatomic) id<MBOLoginComplete> delegate;
@end

@protocol MBOLoginComplete <NSObject>

-(void)complete:(NSString*)clientID;

@end