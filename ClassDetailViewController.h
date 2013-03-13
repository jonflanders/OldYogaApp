//
//  ClassDetailViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ClassDetailViewController : UIViewController
@property (nonatomic,strong) NSDictionary* teacherBio;
@property (nonatomic,strong) NSDictionary* classData;
@property (strong, nonatomic) IBOutlet UIImageView *instructorImage;
@property (strong, nonatomic) IBOutlet UILabel *teacherName;
@end
