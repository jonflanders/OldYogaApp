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
        self.view.frame  = [[UIScreen mainScreen] bounds];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
 
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
