	//
//  MBOClientRecords.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/16/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "MBOClientRecords.h"


@implementation MBOClientRecords
-(void)operation:(Client_x0020_ServiceSoapBindingOperation *)operation completedWithResponse:(Client_x0020_ServiceSoapBindingResponse *)response{
    NSMutableArray* items = [NSMutableArray array];
    if(response.error==nil){
        Client_x0020_ServiceSvc_GetClientVisitsResponse* r = [response.bodyParts objectAtIndex:0];
        Client_x0020_ServiceSvc_GetClientVisitsResult* result =
        r.GetClientVisitsResult;
        NSDateFormatter* df = [[NSDateFormatter alloc] init];
        [df setDateFormat:@"MM/dd/yyyy"];
        for (int i = (result.Visits.Visit.count-1); i>=0; i--) {
                Client_x0020_ServiceSvc_Visit* visit = [result.Visits.Visit objectAtIndex:i];
                NSString* ds = [ df stringFromDate:visit.StartDateTime];
                [items addObject:[NSString stringWithFormat:@"%@ - %@",ds, visit.Staff.Name]];
            }
        }
        
   
    [self.delegate recordsReceived:items];
    
}
-(void)complete:(NSString *)clientID{
    Client_x0020_ServiceSoapBinding* binding = [[Client_x0020_ServiceSoapBinding alloc] initWithAddress:MBOClientURL];
    Client_x0020_ServiceSvc_GetClientVisits* gcv = [[Client_x0020_ServiceSvc_GetClientVisits alloc] init];
    gcv.Request = [[Client_x0020_ServiceSvc_GetClientVisitsRequest alloc] init];
    Client_x0020_ServiceSvc_SourceCredentials* sc = [[Client_x0020_ServiceSvc_SourceCredentials alloc] init];
    sc.SourceName = MBOSourceName;
    sc.Password = MBOPassword;
    sc.SiteIDs = [[Client_x0020_ServiceSvc_ArrayOfInt alloc] init];
    [sc.SiteIDs addInt_:[NSNumber numberWithInt:SiteId]];
    gcv.Request.SourceCredentials = sc;
    gcv.Request.ClientID = clientID;
    gcv.Request.StartDate = [NSDate dateWithTimeIntervalSinceNow:(NSTimeIntervalSince1970*-1)];
    Client_x0020_ServiceSoapBinding_GetClientVisits *r = [[Client_x0020_ServiceSoapBinding_GetClientVisits alloc] initWithBinding:binding delegate:self parameters:gcv];
    [r main];
  
}
-(void)retrieveRecords{
    MBOClientLogin* cl = [[MBOClientLogin alloc] init];
    cl.delegate = self;
    [cl login];
   

}
@end
