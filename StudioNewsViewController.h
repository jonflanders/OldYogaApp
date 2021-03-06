//
//  StudioNewsViewController.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 2/19/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BuyDetailViewController.h"
@interface StudioNewsViewController : UIViewController<UIGestureRecognizerDelegate>
@property (weak, nonatomic) IBOutlet UIPageControl *pageControl;
@property (strong, nonatomic) IBOutlet UISwipeGestureRecognizer *swipeGesture;
@property (strong, nonatomic) IBOutlet UISwipeGestureRecognizer *leftswipeGesture;
@property (strong,nonatomic) BusyViewController* busyViewController;
@property (strong, nonatomic) IBOutlet UITextView *newsView;
@property (strong, nonatomic) IBOutlet UIView *newsContainerView;
@end
