//
//  MBOClientRecords.h
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/16/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Client_x0020_ServiceSvc.h"
#import "Constants.h"
#import "MBOClientLogin.h"
@protocol MBOClientRecordDelegate <NSObject>

-(void)recordsReceived:(NSArray*)records;

@end



@interface MBOClientRecords : NSObject<Client_x0020_ServiceSoapBindingResponseDelegate,MBOLoginComplete>
@property (strong,nonatomic) id<MBOClientRecordDelegate> delegate;
-(void)retrieveRecords;
@end
