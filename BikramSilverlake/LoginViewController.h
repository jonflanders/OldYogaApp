//
//  LoginViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LoginViewComplete <NSObject>

-(void)loginViewComplete;

@end

@interface LoginViewController : UIViewController<UIAlertViewDelegate>
@property (strong,nonatomic) id<LoginViewComplete> delegate;
@end
