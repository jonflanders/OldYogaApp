//
//  ClassDetailViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ClassDetailViewController : UIViewController<UIAlertViewDelegate>
@property (nonatomic,strong) NSDictionary* instructorData;
@property (nonatomic,strong) NSDictionary* classData;
@property (strong, nonatomic) IBOutlet UIImageView *instructorImage;
@property (strong, nonatomic) IBOutlet UILabel *instructorName;
@property (strong, nonatomic) IBOutlet UITextView *instrutorBio;
@property (strong, nonatomic) IBOutlet UIView *instrutorBioView;
@property (strong, nonatomic) IBOutlet UIButton *reserveButton;
@end
