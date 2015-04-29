//
//  MBOReserveClass.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/13/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "MBOReserveClass.h"
#import "Class_x0020_ServiceSvc.h"
#import "Constants.h"

@implementation MBOReserveClass

//TODO
-(BOOL) reserveClass:(NSString *)classID forClient:(NSString *)clientID{
    BOOL ret = NO;
    
    Class_x0020_ServiceSoapBinding* binding = [[Class_x0020_ServiceSoapBinding alloc] initWithAddress:MBOClassURL];
	binding.logXMLInOut = NO;
    Class_x0020_ServiceSvc_AddClientsToClasses* add = [[Class_x0020_ServiceSvc_AddClientsToClasses alloc] init];
    Class_x0020_ServiceSvc_AddClientsToClassesRequest* addRequest = [[Class_x0020_ServiceSvc_AddClientsToClassesRequest alloc] init];
    Class_x0020_ServiceSvc_SourceCredentials* sc = [[Class_x0020_ServiceSvc_SourceCredentials alloc ] init];
    sc.SourceName = MBOSourceName;
    sc.Password = MBOPassword;
    sc.SiteIDs = [[Class_x0020_ServiceSvc_ArrayOfInt alloc] init];
    [sc.SiteIDs addInt_:[NSNumber numberWithInt:SiteId]];
    
    addRequest.SourceCredentials = sc;
    add.Request = addRequest;
#ifdef DEBUG
  //  addRequest.Test = [[USBoolean alloc] initWithBool:YES];
#endif
    addRequest.SendEmail = [[USBoolean alloc] initWithBool:NO];
    addRequest.Waitlist = addRequest.SendEmail;
    addRequest.RequirePayment = [[USBoolean alloc] initWithBool:YES];
    addRequest.ClientIDs = [[Class_x0020_ServiceSvc_ArrayOfString alloc] init];
    [addRequest.ClientIDs addString:clientID];
    addRequest.ClassIDs = [[Class_x0020_ServiceSvc_ArrayOfInt alloc] init];
    NSNumberFormatter* formatter = [[NSNumberFormatter alloc] init];
    NSNumber* nclass = classID;
    [addRequest.ClassIDs addInt_:nclass];Class_x0020_ServiceSoapBindingResponse* response = [binding AddClientsToClassesUsingParameters:add];
    if(response.error!=nil){
        //TODO: log error
    }
    else{
        Class_x0020_ServiceSvc_AddClientsToClassesResponse* r = response.bodyParts[0];
        if(r&&[r isKindOfClass:[Class_x0020_ServiceSvc_AddClientsToClassesResponse class]])
        {
            Class_x0020_ServiceSvc_AddClientsToClassesResult* result = r.AddClientsToClassesResult;
          if(result.Status==Class_x0020_ServiceSvc_StatusCode_Success)
          {
              ret = YES;
          }
        }
        if(r&&[r isKindOfClass:[SOAPFault class]])
        {
            SOAPFault* fault = (SOAPFault*)r;
            NSString* f = fault.faultstring;
            NSLog(@"SOAPFault %@",f);
            
        }
    }
    return ret;
}
@end















