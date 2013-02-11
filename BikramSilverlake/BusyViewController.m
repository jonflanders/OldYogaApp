//
//  BusyViewController.m
//  AYM
//
//  Created by Jon Flanders on 12/15/12.
//  Copyright (c) 2012 flounderware. All rights reserved.
//

#import "BusyViewController.h"
#import <QuartzCore/QuartzCore.h>
@interface BusyViewController ()

@end

@implementation BusyViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    self.busyContainer.layer.cornerRadius = 10;
    
    self.busyContainer.layer.masksToBounds = YES;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
