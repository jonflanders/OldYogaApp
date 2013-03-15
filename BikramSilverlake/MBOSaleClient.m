//
//  MBOSaleClient.m
//  BikramSilverlake
//
//  Created by Jon Flanders on 3/14/13.
//  Copyright (c) 2013 flounderware. All rights reserved.
//

#import "MBOSaleClient.h"
#import "Sale_x0020_Service.h"
#import "Constants.h"
@implementation MBOSaleClient
// items = @[@"Credit Card",@"Address",@"City",@"State",@"Zip",@"Expiration Month",@"Expiration Year"];
-(BOOL)makeSale:(NSDictionary *)params{
    BOOL ret = NO;
    Sale_x0020_ServiceSoapBinding* binding = [[Sale_x0020_ServiceSoapBinding alloc] initWithAddress:MBOSalesURL];
    Sale_x0020_Service_CheckoutShoppingCartRequest* request = [[Sale_x0020_Service_CheckoutShoppingCartRequest alloc] init];
    Sale_x0020_Service_SourceCredentials* sc = [[Sale_x0020_Service_SourceCredentials alloc] init];
    sc.SourceName = MBOSourceName;
    sc.Password = MBOPassword;
    sc.SiteIDs = [[ Sale_x0020_Service_ArrayOfInt alloc] init];
    [sc.SiteIDs addInt_:[NSNumber numberWithInt:SiteId]];
    request.SourceCredentials = sc;
    request.SendEmail = [[USBoolean alloc] initWithBool:NO];
    request.LocationID = [NSNumber numberWithInt:0];
    request.InStore = request.SendEmail;

    request.Payments = [[Sale_x0020_Service_ArrayOfPaymentInfo alloc] init];
    Sale_x0020_Service_CreditCardInfo* cc = [[Sale_x0020_Service_CreditCardInfo alloc] init];
    cc.CreditCardNumber = [params objectForKey:@"Credit Card"];
    cc.ExpMonth = [params objectForKey:@"Expiration Month"];
    cc.ExpYear = [params objectForKey:@"Expiration Year"];
    cc.Amount = [params objectForKey:@"Amount"];
    cc.BillingAddress = [params objectForKey:@"Address"];
    cc.BillingCity = [params objectForKey:@"City"];
    cc.BillingName = [params objectForKey:@"Name"];
    cc.BillingPostalCode = [params objectForKey:@"Zip"];
    cc.BillingState = [params objectForKey:@"State"];
    [request.Payments addPaymentInfo:cc];
    Sale_x0020_Service_CartItem* ci = [[Sale_x0020_Service_CartItem alloc] init];
    ci.Quantity = [NSNumber numberWithInt:1];
    ci.DiscountAmount = [NSNumber numberWithInt:0];
    Sale_x0020_Service_Service* item = [[Sale_x0020_Service_Service alloc] init];
    item.ID_ = [params objectForKey:@"ID"];
    ci.Item = item;
    request.CartItems = [[Sale_x0020_Service_ArrayOfCartItem alloc] init];
    [request.CartItems addCartItem:ci];
    request.ClientID = [params objectForKey:@"ClientID"];
#ifdef DEBUG
    request.Test = [[USBoolean alloc] initWithBool:YES];
#endif
    Sale_x0020_Service_CheckoutShoppingCart* csc = [[Sale_x0020_Service_CheckoutShoppingCart alloc] init];
    csc.Request = request;
    Sale_x0020_ServiceSoapBindingResponse* response = [binding CheckoutShoppingCartUsingParameters:csc];
    if(response.error!=nil){
        //TODO: log error
    }
    else{
        Sale_x0020_Service_CheckoutShoppingCartResponse* r = response.bodyParts[0];
        if(r&&[r isKindOfClass:[Sale_x0020_Service_CheckoutShoppingCartResponse class]])
        {
            Sale_x0020_Service_CheckoutShoppingCartResult* result = r.CheckoutShoppingCartResult;
            if(result.Status==Sale_x0020_Service_StatusCode_Success)
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
