//
//  MBOClientLogin.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/13/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "MBOClientLogin.h"
#import "Client_x0020_ServiceSvc.h"
#import "Constants.h"
@interface MBOClientLogin(){
    NSString* clientIDKey;
}
@end
@implementation MBOClientLogin
-(id) init{
    self = [super init];
    if(self){
        clientIDKey=@"ClientID";
    }
    return self;
}
-(NSString*)createClient:(NSDictionary *)params{
    NSString* ret = nil;
    Client_x0020_ServiceSoapBinding* binding = [[Client_x0020_ServiceSoapBinding alloc] initWithAddress:MBOClientURL];
    Client_x0020_ServiceSvc_AddOrUpdateClientsRequest* vlr = [[Client_x0020_ServiceSvc_AddOrUpdateClientsRequest alloc] init];
    Client_x0020_ServiceSvc_SourceCredentials* sc = [[Client_x0020_ServiceSvc_SourceCredentials alloc] init];
    sc.SourceName = MBOSourceName;
    sc.Password = MBOPassword;
    sc.SiteIDs = [[Client_x0020_ServiceSvc_ArrayOfInt alloc] init];
    [sc.SiteIDs addInt_:[NSNumber numberWithInt:SiteId]];
    vlr.SourceCredentials = sc;
    
    Client_x0020_ServiceSvc_Client* newClient = [[Client_x0020_ServiceSvc_Client alloc] init];
    newClient.FirstName = [params objectForKey:@"First"];
    newClient.LastName = [params objectForKey:@"Last"];
    newClient.Email = [params objectForKey:@"Email"];
    newClient.HomePhone  = [params objectForKey:@"Phone"];
    newClient.Username = [params objectForKey:@"Email"];
    newClient.Password = [params objectForKey:@"Password"];
    newClient.PostalCode = [params objectForKey:@"Postal Code"];
    newClient.City  = [params objectForKey:@"City"];
    newClient.State = [params objectForKey:@"State"];
    newClient.Country = [params objectForKey:@"Country"];
    newClient.EmergencyContactInfoEmail = [params objectForKey:@"Contact Email"];
    newClient.EmergencyContactInfoName = [params objectForKey:@"Name"];
    newClient.EmergencyContactInfoPhone = [params objectForKey:@"Contact Phone"];
    newClient.EmergencyContactInfoRelationship = [params objectForKey:@"Relationship"];
    newClient.AddressLine1 = [params objectForKey:@"Address"];
//    newClient.AddressLine2 = [params objectForKey:@"Address 2"];
    newClient.ReferredBy = @"iOS App";
    vlr.Clients  = [[Client_x0020_ServiceSvc_ArrayOfClient alloc] init];
    
    [vlr.Clients.Client addObject:newClient];
    Client_x0020_ServiceSvc_AddOrUpdateClients* msg = [[Client_x0020_ServiceSvc_AddOrUpdateClients alloc] init];
    msg.Request = vlr;
#ifdef DEBUG
   // msg.Request.Test = [[USBoolean alloc] initWithBool:YES];
#endif
    msg.Request.UpdateAction = @"AddNew";
    Client_x0020_ServiceSoapBindingResponse * response = [binding AddOrUpdateClientsUsingParameters:msg];
    if(response.error!=nil) {
        
        UIAlertView* errorAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"Unable to connect to server" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
        
        [errorAlert show];
        
    }
    else{
        
        Client_x0020_ServiceSvc_AddOrUpdateClientsResponse* lr =        [response.bodyParts objectAtIndex:0];
        if(lr.AddOrUpdateClientsResult.Clients.Client.count>0)
        {
            Client_x0020_ServiceSvc_Client *client = [lr.AddOrUpdateClientsResult.Clients.Client objectAtIndex:0];
            ret = client.ID_;
        }
        if(ret==nil)
        {
            UIAlertView* errorAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"Unable to create an account.  Please try again later." delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
            
            [errorAlert show];
            
        }
        else{
            [[NSUserDefaults standardUserDefaults] setValue:ret forKey:clientIDKey];
            
            
        }
    }
    return ret;
}

-(void)login{
    NSString* clientID =  [[NSUserDefaults standardUserDefaults] valueForKey:clientIDKey ];
    if(clientID==nil){
    UIAlertView* theAlert = [[UIAlertView alloc]  initWithTitle:@"Enter your MBO username and password" message:nil delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"Login", nil ];
    
    theAlert.alertViewStyle = UIAlertViewStyleLoginAndPasswordInput;
    
#ifdef DEBUG
    [[theAlert textFieldAtIndex:0] setText:@"jon.flanders@gmail.com"];
    [[theAlert textFieldAtIndex:1] setText:@"rookie95"];
#endif
        [theAlert show];}
    else{
        [self.delegate complete:clientID];
    }

}
-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    NSString* button = [alertView buttonTitleAtIndex:buttonIndex];
    if([button isEqualToString:@"Login"])
    {
        UITextField *username = [alertView textFieldAtIndex:0];
        UITextField *password = [alertView textFieldAtIndex:1];
      
        NSString* clientID = [self loginWithUserName:username.text andPassword:password.text];
        [self.delegate complete:clientID];
    }
}
-(NSString*) clientLoggedIn
{
   return  [[NSUserDefaults standardUserDefaults] valueForKey:clientIDKey ];
}
-(void)logout{
     [[NSUserDefaults standardUserDefaults] setValue:nil forKey:clientIDKey];
    [[NSUserDefaults standardUserDefaults] synchronize];
}

-(NSString*) loginWithUserName:(NSString *)userName andPassword:(NSString *)password{
   
    NSString* clientID =  [[NSUserDefaults standardUserDefaults] valueForKey:clientIDKey ];
    if(clientID==nil){
        Client_x0020_ServiceSoapBinding* binding = [[Client_x0020_ServiceSoapBinding alloc] initWithAddress:MBOClientURL];
        Client_x0020_ServiceSvc_ValidateLoginRequest* vlr = [[Client_x0020_ServiceSvc_ValidateLoginRequest alloc] init];
        vlr.Password = password;
        vlr.Username = userName;
        Client_x0020_ServiceSvc_SourceCredentials* sc = [[Client_x0020_ServiceSvc_SourceCredentials alloc] init];
        sc.SourceName = MBOSourceName;
        sc.Password = MBOPassword;
        sc.SiteIDs = [[Client_x0020_ServiceSvc_ArrayOfInt alloc] init];
        [sc.SiteIDs addInt_:[NSNumber numberWithInt:SiteId]];
        vlr.SourceCredentials = sc;
        Client_x0020_ServiceSvc_ValidateLogin* vl = [[Client_x0020_ServiceSvc_ValidateLogin alloc] init];
        vl.Request = vlr;
        Client_x0020_ServiceSoapBindingResponse * response = [binding ValidateLoginUsingParameters:vl];
        if(response.error!=nil) {
            
            UIAlertView* errorAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"Unable to connect to server" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
            
            [errorAlert show];
            
        }
        else{
            
            Client_x0020_ServiceSvc_ValidateLoginResponse* lr =        [response.bodyParts objectAtIndex:0];
            clientID = lr.ValidateLoginResult.Client.ID_;
            if(clientID==nil)
            {
                UIAlertView* errorAlert = [[UIAlertView alloc] initWithTitle:@"Sorry" message:@"Unable to login with that username and password" delegate:nil cancelButtonTitle:nil otherButtonTitles:@"OK" , nil];
                
                [errorAlert show];
                
            }
            else{
                [[NSUserDefaults standardUserDefaults] setValue:clientID forKey:clientIDKey];
                
                
            }
        }
    }
    return clientID;

}
@end
