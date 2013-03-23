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
@property (strong, nonatomic) IBOutlet UIBarButtonItem *cancel;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *save;

@property (strong, nonatomic) IBOutlet UINavigationController *nav;
@end
