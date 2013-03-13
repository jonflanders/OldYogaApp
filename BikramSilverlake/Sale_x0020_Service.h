#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class Sale_x0020_Service_GetAcceptedCardType;
@class Sale_x0020_Service_GetAcceptedCardTypeRequest;
@class Sale_x0020_Service_MBRequest;
@class Sale_x0020_Service_SourceCredentials;
@class Sale_x0020_Service_UserCredentials;
@class Sale_x0020_Service_ArrayOfString;
@class Sale_x0020_Service_ArrayOfInt;
@class Sale_x0020_Service_GetAcceptedCardTypeResponse;
@class Sale_x0020_Service_GetAcceptedCardTypeResult;
@class Sale_x0020_Service_MBResult;
@class Sale_x0020_Service_CheckoutShoppingCart;
@class Sale_x0020_Service_CheckoutShoppingCartRequest;
@class Sale_x0020_Service_ArrayOfCartItem;
@class Sale_x0020_Service_ArrayOfPaymentInfo;
@class Sale_x0020_Service_CartItem;
@class Sale_x0020_Service_MBObject;
@class Sale_x0020_Service_Item;
@class Sale_x0020_Service_ArrayOfAppointment;
@class Sale_x0020_Service_ArrayOfLong;
@class Sale_x0020_Service_Site;
@class Sale_x0020_Service_ClassSchedule;
@class Sale_x0020_Service_ArrayOfClass;
@class Sale_x0020_Service_ArrayOfClient;
@class Sale_x0020_Service_Course;
@class Sale_x0020_Service_ClassDescription;
@class Sale_x0020_Service_Staff;
@class Sale_x0020_Service_Location;
@class Sale_x0020_Service_Class;
@class Sale_x0020_Service_ArrayOfVisit;
@class Sale_x0020_Service_Resource;
@class Sale_x0020_Service_Visit;
@class Sale_x0020_Service_Client;
@class Sale_x0020_Service_ClientService;
@class Sale_x0020_Service_ArrayOfUnavailability;
@class Sale_x0020_Service_ArrayOfAvailability;
@class Sale_x0020_Service_Appointment;
@class Sale_x0020_Service_ScheduleItem;
@class Sale_x0020_Service_Program;
@class Sale_x0020_Service_SessionType;
@class Sale_x0020_Service_ArrayOfResource;
@class Sale_x0020_Service_Unavailability;
@class Sale_x0020_Service_Availability;
@class Sale_x0020_Service_ArrayOfProgram;
@class Sale_x0020_Service_ArrayOfClientIndex;
@class Sale_x0020_Service_ClientCreditCard;
@class Sale_x0020_Service_ArrayOfClientRelationship;
@class Sale_x0020_Service_ArrayOfRep;
@class Sale_x0020_Service_ArrayOfCustomClientField;
@class Sale_x0020_Service_ClientIndex;
@class Sale_x0020_Service_ArrayOfClientIndexValue;
@class Sale_x0020_Service_ClientIndexValue;
@class Sale_x0020_Service_ClientRelationship;
@class Sale_x0020_Service_Relationship;
@class Sale_x0020_Service_Rep;
@class Sale_x0020_Service_CustomClientField;
@class Sale_x0020_Service_Level;
@class Sale_x0020_Service_ShoppingCart;
@class Sale_x0020_Service_Size;
@class Sale_x0020_Service_Color;
@class Sale_x0020_Service_Package;
@class Sale_x0020_Service_ArrayOfService;
@class Sale_x0020_Service_ArrayOfProduct;
@class Sale_x0020_Service_Service;
@class Sale_x0020_Service_Product;
@class Sale_x0020_Service_Tip;
@class Sale_x0020_Service_PaymentInfo;
@class Sale_x0020_Service_GiftCardInfo;
@class Sale_x0020_Service_DebitAccountInfo;
@class Sale_x0020_Service_CheckInfo;
@class Sale_x0020_Service_CashInfo;
@class Sale_x0020_Service_TrackDataInfo;
@class Sale_x0020_Service_StoredCardInfo;
@class Sale_x0020_Service_EncryptedTrackDataInfo;
@class Sale_x0020_Service_CustomPaymentInfo;
@class Sale_x0020_Service_CreditCardInfo;
@class Sale_x0020_Service_CompInfo;
@class Sale_x0020_Service_CheckoutShoppingCartResponse;
@class Sale_x0020_Service_CheckoutShoppingCartResult;
@class Sale_x0020_Service_ArrayOfClassSchedule;
@class Sale_x0020_Service_GetSales;
@class Sale_x0020_Service_GetSalesRequest;
@class Sale_x0020_Service_GetSalesResponse;
@class Sale_x0020_Service_GetSalesResult;
@class Sale_x0020_Service_ArrayOfSale;
@class Sale_x0020_Service_Sale;
@class Sale_x0020_Service_ArrayOfPayment;
@class Sale_x0020_Service_Payment;
@class Sale_x0020_Service_GetServices;
@class Sale_x0020_Service_GetServicesRequest;
@class Sale_x0020_Service_GetServicesResponse;
@class Sale_x0020_Service_GetServicesResult;
@class Sale_x0020_Service_UpdateServices;
@class Sale_x0020_Service_UpdateServicesRequest;
@class Sale_x0020_Service_UpdateServicesResponse;
@class Sale_x0020_Service_UpdateServicesResult;
@class Sale_x0020_Service_GetPackages;
@class Sale_x0020_Service_GetPackagesRequest;
@class Sale_x0020_Service_GetPackagesResponse;
@class Sale_x0020_Service_GetPackagesResult;
@class Sale_x0020_Service_ArrayOfPackage;
@class Sale_x0020_Service_GetProducts;
@class Sale_x0020_Service_GetProductsRequest;
@class Sale_x0020_Service_GetProductsResponse;
@class Sale_x0020_Service_GetProductsResult;
@class Sale_x0020_Service_UpdateProducts;
@class Sale_x0020_Service_UpdateProductsRequest;
@class Sale_x0020_Service_UpdateProductsResponse;
@class Sale_x0020_Service_UpdateProductsResult;
@class Sale_x0020_Service_RedeemSpaFinderWellnessCard;
@class Sale_x0020_Service_RedeemSpaFinderWellnessCardRequest;
@class Sale_x0020_Service_RedeemSpaFinderWellnessCardResponse;
@class Sale_x0020_Service_RedeemSpaFinderWellnessCardResult;
@class Sale_x0020_Service_GetCustomPaymentMethods;
@class Sale_x0020_Service_GetCustomPaymentMethodsRequest;
@class Sale_x0020_Service_GetCustomPaymentMethodsResponse;
@class Sale_x0020_Service_GetCustomPaymentMethodsResult;
@class Sale_x0020_Service_ArrayOfCustomPaymentInfo;
@interface Sale_x0020_Service_ArrayOfInt : NSObject {
	
/* elements */
	NSMutableArray *int_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfInt *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addInt_:(NSNumber *)toAdd;
@property (readonly) NSMutableArray * int_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_SourceCredentials : NSObject {
	
/* elements */
	NSString * SourceName;
	NSString * Password;
	Sale_x0020_Service_ArrayOfInt * SiteIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_SourceCredentials *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * SourceName;
@property (retain) NSString * Password;
@property (retain) Sale_x0020_Service_ArrayOfInt * SiteIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UserCredentials : NSObject {
	
/* elements */
	NSString * Username;
	NSString * Password;
	Sale_x0020_Service_ArrayOfInt * SiteIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UserCredentials *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Username;
@property (retain) NSString * Password;
@property (retain) Sale_x0020_Service_ArrayOfInt * SiteIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Sale_x0020_Service_XMLDetailLevel_none = 0,
	Sale_x0020_Service_XMLDetailLevel_Bare,
	Sale_x0020_Service_XMLDetailLevel_Basic,
	Sale_x0020_Service_XMLDetailLevel_Full,
} Sale_x0020_Service_XMLDetailLevel;
Sale_x0020_Service_XMLDetailLevel Sale_x0020_Service_XMLDetailLevel_enumFromString(NSString *string);
NSString * Sale_x0020_Service_XMLDetailLevel_stringFromEnum(Sale_x0020_Service_XMLDetailLevel enumValue);
@interface Sale_x0020_Service_ArrayOfString : NSObject {
	
/* elements */
	NSMutableArray *string;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfString *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addString:(NSString *)toAdd;
@property (readonly) NSMutableArray * string;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_MBRequest : NSObject {
	
/* elements */
	Sale_x0020_Service_SourceCredentials * SourceCredentials;
	Sale_x0020_Service_UserCredentials * UserCredentials;
	Sale_x0020_Service_XMLDetailLevel XMLDetail;
	NSNumber * PageSize;
	NSNumber * CurrentPageIndex;
	Sale_x0020_Service_ArrayOfString * Fields;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_MBRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_SourceCredentials * SourceCredentials;
@property (retain) Sale_x0020_Service_UserCredentials * UserCredentials;
@property (assign) Sale_x0020_Service_XMLDetailLevel XMLDetail;
@property (retain) NSNumber * PageSize;
@property (retain) NSNumber * CurrentPageIndex;
@property (retain) Sale_x0020_Service_ArrayOfString * Fields;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetAcceptedCardTypeRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetAcceptedCardTypeRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetAcceptedCardType : NSObject {
	
/* elements */
	Sale_x0020_Service_GetAcceptedCardTypeRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetAcceptedCardType *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetAcceptedCardTypeRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Sale_x0020_Service_StatusCode_none = 0,
	Sale_x0020_Service_StatusCode_Success,
	Sale_x0020_Service_StatusCode_InvalidCredentials,
	Sale_x0020_Service_StatusCode_InvalidParameters,
	Sale_x0020_Service_StatusCode_InternalException,
	Sale_x0020_Service_StatusCode_Unknown,
	Sale_x0020_Service_StatusCode_FailedAction,
} Sale_x0020_Service_StatusCode;
Sale_x0020_Service_StatusCode Sale_x0020_Service_StatusCode_enumFromString(NSString *string);
NSString * Sale_x0020_Service_StatusCode_stringFromEnum(Sale_x0020_Service_StatusCode enumValue);
@interface Sale_x0020_Service_MBResult : NSObject {
	
/* elements */
	Sale_x0020_Service_StatusCode Status;
	NSNumber * ErrorCode;
	NSString * Message;
	Sale_x0020_Service_XMLDetailLevel XMLDetail;
	NSNumber * ResultCount;
	NSNumber * CurrentPageIndex;
	NSNumber * TotalPageCount;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_MBResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_StatusCode Status;
@property (retain) NSNumber * ErrorCode;
@property (retain) NSString * Message;
@property (assign) Sale_x0020_Service_XMLDetailLevel XMLDetail;
@property (retain) NSNumber * ResultCount;
@property (retain) NSNumber * CurrentPageIndex;
@property (retain) NSNumber * TotalPageCount;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetAcceptedCardTypeResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ArrayOfString * CardTypes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetAcceptedCardTypeResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfString * CardTypes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetAcceptedCardTypeResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_GetAcceptedCardTypeResult * GetAcceptedCardTypeResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetAcceptedCardTypeResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetAcceptedCardTypeResult * GetAcceptedCardTypeResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Site : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	NSString * Description;
	NSString * LogoURL;
	NSString * PageColor1;
	NSString * PageColor2;
	NSString * PageColor3;
	NSString * PageColor4;
	USBoolean * AcceptsVisa;
	USBoolean * AcceptsDiscover;
	USBoolean * AcceptsMasterCard;
	USBoolean * AcceptsAmericanExpress;
	NSString * ContactEmail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Site *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Description;
@property (retain) NSString * LogoURL;
@property (retain) NSString * PageColor1;
@property (retain) NSString * PageColor2;
@property (retain) NSString * PageColor3;
@property (retain) NSString * PageColor4;
@property (retain) USBoolean * AcceptsVisa;
@property (retain) USBoolean * AcceptsDiscover;
@property (retain) USBoolean * AcceptsMasterCard;
@property (retain) USBoolean * AcceptsAmericanExpress;
@property (retain) NSString * ContactEmail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_MBObject : NSObject {
	
/* elements */
	Sale_x0020_Service_Site * Site;
	Sale_x0020_Service_ArrayOfString * Messages;
	NSString * Execute;
	NSString * ErrorCode;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_MBObject *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_Site * Site;
@property (retain) Sale_x0020_Service_ArrayOfString * Messages;
@property (retain) NSString * Execute;
@property (retain) NSString * ErrorCode;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Item : Sale_x0020_Service_MBObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Item *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ScheduleItem : Sale_x0020_Service_MBObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ScheduleItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Sale_x0020_Service_ActionCode_none = 0,
	Sale_x0020_Service_ActionCode_None,
	Sale_x0020_Service_ActionCode_Added,
	Sale_x0020_Service_ActionCode_Updated,
	Sale_x0020_Service_ActionCode_Failed,
	Sale_x0020_Service_ActionCode_Removed,
} Sale_x0020_Service_ActionCode;
Sale_x0020_Service_ActionCode Sale_x0020_Service_ActionCode_enumFromString(NSString *string);
NSString * Sale_x0020_Service_ActionCode_stringFromEnum(Sale_x0020_Service_ActionCode enumValue);
typedef enum {
	Sale_x0020_Service_AppointmentStatus_none = 0,
	Sale_x0020_Service_AppointmentStatus_Booked,
	Sale_x0020_Service_AppointmentStatus_Completed,
	Sale_x0020_Service_AppointmentStatus_Confirmed,
	Sale_x0020_Service_AppointmentStatus_Arrived,
	Sale_x0020_Service_AppointmentStatus_NoShow,
	Sale_x0020_Service_AppointmentStatus_Cancelled,
} Sale_x0020_Service_AppointmentStatus;
Sale_x0020_Service_AppointmentStatus Sale_x0020_Service_AppointmentStatus_enumFromString(NSString *string);
NSString * Sale_x0020_Service_AppointmentStatus_stringFromEnum(Sale_x0020_Service_AppointmentStatus enumValue);
typedef enum {
	Sale_x0020_Service_ScheduleType_none = 0,
	Sale_x0020_Service_ScheduleType_All,
	Sale_x0020_Service_ScheduleType_DropIn,
	Sale_x0020_Service_ScheduleType_Enrollment,
	Sale_x0020_Service_ScheduleType_Appointment,
	Sale_x0020_Service_ScheduleType_Resource,
	Sale_x0020_Service_ScheduleType_Media,
	Sale_x0020_Service_ScheduleType_Arrival,
} Sale_x0020_Service_ScheduleType;
Sale_x0020_Service_ScheduleType Sale_x0020_Service_ScheduleType_enumFromString(NSString *string);
NSString * Sale_x0020_Service_ScheduleType_stringFromEnum(Sale_x0020_Service_ScheduleType enumValue);
@interface Sale_x0020_Service_Program : Sale_x0020_Service_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	Sale_x0020_Service_ScheduleType ScheduleType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Program *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (assign) Sale_x0020_Service_ScheduleType ScheduleType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_SessionType : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_SessionType *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Location : Sale_x0020_Service_MBObject {
	
/* elements */
	NSNumber * BusinessID;
	NSNumber * SiteID;
	NSString * BusinessDescription;
	Sale_x0020_Service_ArrayOfString * AdditionalImageURLs;
	NSNumber * FacilitySquareFeet;
	NSNumber * TreatmentRooms;
	USBoolean * ProSpaFinderSite;
	USBoolean * HasClasses;
	NSString * PhoneExtension;
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	NSString * Address;
	NSString * Address2;
	NSNumber * Tax1;
	NSNumber * Tax2;
	NSNumber * Tax3;
	NSNumber * Tax4;
	NSNumber * Tax5;
	NSString * Phone;
	NSString * City;
	NSString * StateProvCode;
	NSString * PostalCode;
	NSNumber * Latitude;
	NSNumber * Longitude;
	NSNumber * DistanceInMiles;
	NSString * ImageURL;
	NSString * Description;
	USBoolean * HasSite;
	USBoolean * CanBook;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Location *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * BusinessID;
@property (retain) NSNumber * SiteID;
@property (retain) NSString * BusinessDescription;
@property (retain) Sale_x0020_Service_ArrayOfString * AdditionalImageURLs;
@property (retain) NSNumber * FacilitySquareFeet;
@property (retain) NSNumber * TreatmentRooms;
@property (retain) USBoolean * ProSpaFinderSite;
@property (retain) USBoolean * HasClasses;
@property (retain) NSString * PhoneExtension;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Address;
@property (retain) NSString * Address2;
@property (retain) NSNumber * Tax1;
@property (retain) NSNumber * Tax2;
@property (retain) NSNumber * Tax3;
@property (retain) NSNumber * Tax4;
@property (retain) NSNumber * Tax5;
@property (retain) NSString * Phone;
@property (retain) NSString * City;
@property (retain) NSString * StateProvCode;
@property (retain) NSString * PostalCode;
@property (retain) NSNumber * Latitude;
@property (retain) NSNumber * Longitude;
@property (retain) NSNumber * DistanceInMiles;
@property (retain) NSString * ImageURL;
@property (retain) NSString * Description;
@property (retain) USBoolean * HasSite;
@property (retain) USBoolean * CanBook;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Unavailability : Sale_x0020_Service_ScheduleItem {
	
/* elements */
	NSNumber * ID_;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	NSString * Description;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Unavailability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * Description;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfUnavailability : NSObject {
	
/* elements */
	NSMutableArray *Unavailability;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfUnavailability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addUnavailability:(Sale_x0020_Service_Unavailability *)toAdd;
@property (readonly) NSMutableArray * Unavailability;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfProgram : NSObject {
	
/* elements */
	NSMutableArray *Program;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfProgram *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addProgram:(Sale_x0020_Service_Program *)toAdd;
@property (readonly) NSMutableArray * Program;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Availability : Sale_x0020_Service_ScheduleItem {
	
/* elements */
	NSNumber * ID_;
	Sale_x0020_Service_Staff * Staff;
	Sale_x0020_Service_SessionType * SessionType;
	Sale_x0020_Service_ArrayOfProgram * Programs;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	NSDate * BookableEndDateTime;
	Sale_x0020_Service_Location * Location;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Availability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) Sale_x0020_Service_Staff * Staff;
@property (retain) Sale_x0020_Service_SessionType * SessionType;
@property (retain) Sale_x0020_Service_ArrayOfProgram * Programs;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSDate * BookableEndDateTime;
@property (retain) Sale_x0020_Service_Location * Location;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfAvailability : NSObject {
	
/* elements */
	NSMutableArray *Availability;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfAvailability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addAvailability:(Sale_x0020_Service_Availability *)toAdd;
@property (readonly) NSMutableArray * Availability;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Staff : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ArrayOfAppointment * Appointments;
	Sale_x0020_Service_ArrayOfUnavailability * Unavailabilities;
	Sale_x0020_Service_ArrayOfAvailability * Availabilities;
	NSString * Email;
	NSString * MobilePhone;
	NSString * HomePhone;
	NSString * WorkPhone;
	NSString * Address;
	NSString * Address2;
	NSString * City;
	NSString * State;
	NSString * Country;
	NSString * PostalCode;
	NSString * ForeignZip;
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	NSString * FirstName;
	NSString * LastName;
	NSString * ImageURL;
	NSString * Bio;
	USBoolean * isMale;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Staff *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfAppointment * Appointments;
@property (retain) Sale_x0020_Service_ArrayOfUnavailability * Unavailabilities;
@property (retain) Sale_x0020_Service_ArrayOfAvailability * Availabilities;
@property (retain) NSString * Email;
@property (retain) NSString * MobilePhone;
@property (retain) NSString * HomePhone;
@property (retain) NSString * WorkPhone;
@property (retain) NSString * Address;
@property (retain) NSString * Address2;
@property (retain) NSString * City;
@property (retain) NSString * State;
@property (retain) NSString * Country;
@property (retain) NSString * PostalCode;
@property (retain) NSString * ForeignZip;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * FirstName;
@property (retain) NSString * LastName;
@property (retain) NSString * ImageURL;
@property (retain) NSString * Bio;
@property (retain) USBoolean * isMale;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ClientIndexValue : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ClientIndexValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfClientIndexValue : NSObject {
	
/* elements */
	NSMutableArray *ClientIndexValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfClientIndexValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientIndexValue:(Sale_x0020_Service_ClientIndexValue *)toAdd;
@property (readonly) NSMutableArray * ClientIndexValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ClientIndex : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	Sale_x0020_Service_ArrayOfClientIndexValue * Values;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ClientIndex *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) Sale_x0020_Service_ArrayOfClientIndexValue * Values;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfClientIndex : NSObject {
	
/* elements */
	NSMutableArray *ClientIndex;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfClientIndex *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientIndex:(Sale_x0020_Service_ClientIndex *)toAdd;
@property (readonly) NSMutableArray * ClientIndex;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ClientCreditCard : NSObject {
	
/* elements */
	NSString * CardType;
	NSString * LastFour;
	NSString * CardNumber;
	NSString * CardHolder;
	NSString * ExpMonth;
	NSString * ExpYear;
	NSString * Address;
	NSString * City;
	NSString * State;
	NSString * PostalCode;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ClientCreditCard *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * CardType;
@property (retain) NSString * LastFour;
@property (retain) NSString * CardNumber;
@property (retain) NSString * CardHolder;
@property (retain) NSString * ExpMonth;
@property (retain) NSString * ExpYear;
@property (retain) NSString * Address;
@property (retain) NSString * City;
@property (retain) NSString * State;
@property (retain) NSString * PostalCode;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Relationship : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSString * RelationshipName1;
	NSString * RelationshipName2;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Relationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * RelationshipName1;
@property (retain) NSString * RelationshipName2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ClientRelationship : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_Client * RelatedClient;
	Sale_x0020_Service_Relationship * Relationship;
	NSString * RelationshipName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ClientRelationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_Client * RelatedClient;
@property (retain) Sale_x0020_Service_Relationship * Relationship;
@property (retain) NSString * RelationshipName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfClientRelationship : NSObject {
	
/* elements */
	NSMutableArray *ClientRelationship;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfClientRelationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientRelationship:(Sale_x0020_Service_ClientRelationship *)toAdd;
@property (readonly) NSMutableArray * ClientRelationship;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Rep : Sale_x0020_Service_MBObject {
	
/* elements */
	NSNumber * ID_;
	Sale_x0020_Service_Staff * Staff;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Rep *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) Sale_x0020_Service_Staff * Staff;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfRep : NSObject {
	
/* elements */
	NSMutableArray *Rep;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfRep *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addRep:(Sale_x0020_Service_Rep *)toAdd;
@property (readonly) NSMutableArray * Rep;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CustomClientField : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSString * DataType;
	NSString * Name;
	NSString * Value;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CustomClientField *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * DataType;
@property (retain) NSString * Name;
@property (retain) NSString * Value;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfCustomClientField : NSObject {
	
/* elements */
	NSMutableArray *CustomClientField;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfCustomClientField *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addCustomClientField:(Sale_x0020_Service_CustomClientField *)toAdd;
@property (readonly) NSMutableArray * CustomClientField;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Client : Sale_x0020_Service_MBObject {
	
/* elements */
	NSString * NewID;
	NSNumber * AccountBalance;
	Sale_x0020_Service_ArrayOfClientIndex * ClientIndexes;
	NSString * Username;
	NSString * Password;
	NSString * Notes;
	Sale_x0020_Service_ClientCreditCard * ClientCreditCard;
	NSString * LastFormulaNotes;
	NSString * AppointmentGenderPreference;
	NSString * Gender;
	USBoolean * IsCompany;
	Sale_x0020_Service_ArrayOfClientRelationship * ClientRelationships;
	Sale_x0020_Service_ArrayOfRep * Reps;
	Sale_x0020_Service_ArrayOfCustomClientField * CustomClientFields;
	USBoolean * LiabilityRelease;
	NSString * EmergencyContactInfoName;
	NSString * EmergencyContactInfoRelationship;
	NSString * EmergencyContactInfoPhone;
	NSString * EmergencyContactInfoEmail;
	Sale_x0020_Service_ActionCode Action;
	NSString * ID_;
	NSString * FirstName;
	NSString * MiddleName;
	NSString * LastName;
	NSString * Email;
	USBoolean * EmailOptIn;
	NSString * AddressLine1;
	NSString * AddressLine2;
	NSString * City;
	NSString * State;
	NSString * PostalCode;
	NSString * Country;
	NSString * MobilePhone;
	NSString * HomePhone;
	NSString * WorkPhone;
	NSString * WorkExtension;
	NSDate * BirthDate;
	NSDate * FirstAppointmentDate;
	NSString * ReferredBy;
	Sale_x0020_Service_Location * HomeLocation;
	NSString * YellowAlert;
	NSString * RedAlert;
	NSString * PhotoURL;
	USBoolean * IsProspect;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Client *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * NewID;
@property (retain) NSNumber * AccountBalance;
@property (retain) Sale_x0020_Service_ArrayOfClientIndex * ClientIndexes;
@property (retain) NSString * Username;
@property (retain) NSString * Password;
@property (retain) NSString * Notes;
@property (retain) Sale_x0020_Service_ClientCreditCard * ClientCreditCard;
@property (retain) NSString * LastFormulaNotes;
@property (retain) NSString * AppointmentGenderPreference;
@property (retain) NSString * Gender;
@property (retain) USBoolean * IsCompany;
@property (retain) Sale_x0020_Service_ArrayOfClientRelationship * ClientRelationships;
@property (retain) Sale_x0020_Service_ArrayOfRep * Reps;
@property (retain) Sale_x0020_Service_ArrayOfCustomClientField * CustomClientFields;
@property (retain) USBoolean * LiabilityRelease;
@property (retain) NSString * EmergencyContactInfoName;
@property (retain) NSString * EmergencyContactInfoRelationship;
@property (retain) NSString * EmergencyContactInfoPhone;
@property (retain) NSString * EmergencyContactInfoEmail;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSString * ID_;
@property (retain) NSString * FirstName;
@property (retain) NSString * MiddleName;
@property (retain) NSString * LastName;
@property (retain) NSString * Email;
@property (retain) USBoolean * EmailOptIn;
@property (retain) NSString * AddressLine1;
@property (retain) NSString * AddressLine2;
@property (retain) NSString * City;
@property (retain) NSString * State;
@property (retain) NSString * PostalCode;
@property (retain) NSString * Country;
@property (retain) NSString * MobilePhone;
@property (retain) NSString * HomePhone;
@property (retain) NSString * WorkPhone;
@property (retain) NSString * WorkExtension;
@property (retain) NSDate * BirthDate;
@property (retain) NSDate * FirstAppointmentDate;
@property (retain) NSString * ReferredBy;
@property (retain) Sale_x0020_Service_Location * HomeLocation;
@property (retain) NSString * YellowAlert;
@property (retain) NSString * RedAlert;
@property (retain) NSString * PhotoURL;
@property (retain) USBoolean * IsProspect;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ClientService : Sale_x0020_Service_MBObject {
	
/* elements */
	USBoolean * Current;
	NSNumber * Count;
	NSNumber * Remaining;
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	NSDate * PaymentDate;
	NSDate * ActiveDate;
	NSDate * ExpirationDate;
	Sale_x0020_Service_Program * Program;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ClientService *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * Current;
@property (retain) NSNumber * Count;
@property (retain) NSNumber * Remaining;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSDate * PaymentDate;
@property (retain) NSDate * ActiveDate;
@property (retain) NSDate * ExpirationDate;
@property (retain) Sale_x0020_Service_Program * Program;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Resource : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Resource *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfResource : NSObject {
	
/* elements */
	NSMutableArray *Resource;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfResource *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addResource:(Sale_x0020_Service_Resource *)toAdd;
@property (readonly) NSMutableArray * Resource;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Appointment : Sale_x0020_Service_ScheduleItem {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	Sale_x0020_Service_AppointmentStatus Status;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	NSString * Notes;
	USBoolean * StaffRequested;
	Sale_x0020_Service_Program * Program;
	Sale_x0020_Service_SessionType * SessionType;
	Sale_x0020_Service_Location * Location;
	Sale_x0020_Service_Staff * Staff;
	Sale_x0020_Service_Client * Client;
	USBoolean * FirstAppointment;
	Sale_x0020_Service_ClientService * ClientService;
	Sale_x0020_Service_ArrayOfResource * Resources;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Appointment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (assign) Sale_x0020_Service_AppointmentStatus Status;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * Notes;
@property (retain) USBoolean * StaffRequested;
@property (retain) Sale_x0020_Service_Program * Program;
@property (retain) Sale_x0020_Service_SessionType * SessionType;
@property (retain) Sale_x0020_Service_Location * Location;
@property (retain) Sale_x0020_Service_Staff * Staff;
@property (retain) Sale_x0020_Service_Client * Client;
@property (retain) USBoolean * FirstAppointment;
@property (retain) Sale_x0020_Service_ClientService * ClientService;
@property (retain) Sale_x0020_Service_ArrayOfResource * Resources;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfAppointment : NSObject {
	
/* elements */
	NSMutableArray *Appointment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfAppointment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addAppointment:(Sale_x0020_Service_Appointment *)toAdd;
@property (readonly) NSMutableArray * Appointment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfLong : NSObject {
	
/* elements */
	NSMutableArray *long_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfLong *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addLong_:(NSNumber *)toAdd;
@property (readonly) NSMutableArray * long_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CartItem : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_Item * Item;
	NSNumber * DiscountAmount;
	Sale_x0020_Service_ArrayOfAppointment * Appointments;
	Sale_x0020_Service_ArrayOfInt * EnrollmentIDs;
	Sale_x0020_Service_ArrayOfInt * ClassIDs;
	Sale_x0020_Service_ArrayOfLong * CourseIDs;
	Sale_x0020_Service_ArrayOfLong * VisitIDs;
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSNumber * Quantity;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CartItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_Item * Item;
@property (retain) NSNumber * DiscountAmount;
@property (retain) Sale_x0020_Service_ArrayOfAppointment * Appointments;
@property (retain) Sale_x0020_Service_ArrayOfInt * EnrollmentIDs;
@property (retain) Sale_x0020_Service_ArrayOfInt * ClassIDs;
@property (retain) Sale_x0020_Service_ArrayOfLong * CourseIDs;
@property (retain) Sale_x0020_Service_ArrayOfLong * VisitIDs;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSNumber * Quantity;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfCartItem : NSObject {
	
/* elements */
	NSMutableArray *CartItem;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfCartItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addCartItem:(Sale_x0020_Service_CartItem *)toAdd;
@property (readonly) NSMutableArray * CartItem;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_PaymentInfo : NSObject {
	
/* elements */
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_PaymentInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfPaymentInfo : NSObject {
	
/* elements */
	NSMutableArray *PaymentInfo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfPaymentInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addPaymentInfo:(Sale_x0020_Service_PaymentInfo *)toAdd;
@property (readonly) NSMutableArray * PaymentInfo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CheckoutShoppingCartRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
	NSString * CartID;
	NSString * ClientID;
	USBoolean * Test;
	Sale_x0020_Service_ArrayOfCartItem * CartItems;
	USBoolean * InStore;
	NSString * PromotionCode;
	Sale_x0020_Service_ArrayOfPaymentInfo * Payments;
	USBoolean * SendEmail;
	NSNumber * LocationID;
	NSData * Image;
	NSString * ImageFileName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CheckoutShoppingCartRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * CartID;
@property (retain) NSString * ClientID;
@property (retain) USBoolean * Test;
@property (retain) Sale_x0020_Service_ArrayOfCartItem * CartItems;
@property (retain) USBoolean * InStore;
@property (retain) NSString * PromotionCode;
@property (retain) Sale_x0020_Service_ArrayOfPaymentInfo * Payments;
@property (retain) USBoolean * SendEmail;
@property (retain) NSNumber * LocationID;
@property (retain) NSData * Image;
@property (retain) NSString * ImageFileName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CheckoutShoppingCart : NSObject {
	
/* elements */
	Sale_x0020_Service_CheckoutShoppingCartRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CheckoutShoppingCart *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_CheckoutShoppingCartRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Visit : Sale_x0020_Service_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSNumber * ClassID;
	NSDate * StartDateTime;
	USBoolean * LateCancelled;
	NSDate * EndDateTime;
	NSString * Name;
	Sale_x0020_Service_Staff * Staff;
	Sale_x0020_Service_Location * Location;
	Sale_x0020_Service_Client * Client;
	USBoolean * WebSignup;
	Sale_x0020_Service_ActionCode Action;
	USBoolean * SignedIn;
	USBoolean * MakeUp;
	Sale_x0020_Service_ClientService * Service;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Visit *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSNumber * ClassID;
@property (retain) NSDate * StartDateTime;
@property (retain) USBoolean * LateCancelled;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * Name;
@property (retain) Sale_x0020_Service_Staff * Staff;
@property (retain) Sale_x0020_Service_Location * Location;
@property (retain) Sale_x0020_Service_Client * Client;
@property (retain) USBoolean * WebSignup;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) USBoolean * SignedIn;
@property (retain) USBoolean * MakeUp;
@property (retain) Sale_x0020_Service_ClientService * Service;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfVisit : NSObject {
	
/* elements */
	NSMutableArray *Visit;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfVisit *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addVisit:(Sale_x0020_Service_Visit *)toAdd;
@property (readonly) NSMutableArray * Visit;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfClient : NSObject {
	
/* elements */
	NSMutableArray *Client;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfClient *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClient:(Sale_x0020_Service_Client *)toAdd;
@property (readonly) NSMutableArray * Client;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Level : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	NSString * Description;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Level *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Description;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ClassDescription : Sale_x0020_Service_MBObject {
	
/* elements */
	NSString * ImageURL;
	Sale_x0020_Service_Level * Level;
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	NSString * Description;
	NSString * Prereq;
	NSString * Notes;
	NSDate * LastUpdated;
	Sale_x0020_Service_Program * Program;
	Sale_x0020_Service_SessionType * SessionType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ClassDescription *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ImageURL;
@property (retain) Sale_x0020_Service_Level * Level;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Description;
@property (retain) NSString * Prereq;
@property (retain) NSString * Notes;
@property (retain) NSDate * LastUpdated;
@property (retain) Sale_x0020_Service_Program * Program;
@property (retain) Sale_x0020_Service_SessionType * SessionType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Class : Sale_x0020_Service_MBObject {
	
/* elements */
	NSNumber * ClassScheduleID;
	Sale_x0020_Service_ArrayOfVisit * Visits;
	Sale_x0020_Service_ArrayOfClient * Clients;
	Sale_x0020_Service_Location * Location;
	Sale_x0020_Service_Resource * Resource;
	NSNumber * MaxCapacity;
	NSNumber * WebCapacity;
	NSNumber * TotalBooked;
	NSNumber * TotalBookedWaitlist;
	NSNumber * WebBooked;
	NSNumber * SemesterID;
	USBoolean * IsCanceled;
	USBoolean * Substitute;
	USBoolean * Active;
	USBoolean * IsWaitlistAvailable;
	USBoolean * IsEnrolled;
	USBoolean * HideCancel;
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	USBoolean * IsAvailable;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	Sale_x0020_Service_ClassDescription * ClassDescription;
	Sale_x0020_Service_Staff * Staff;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Class *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ClassScheduleID;
@property (retain) Sale_x0020_Service_ArrayOfVisit * Visits;
@property (retain) Sale_x0020_Service_ArrayOfClient * Clients;
@property (retain) Sale_x0020_Service_Location * Location;
@property (retain) Sale_x0020_Service_Resource * Resource;
@property (retain) NSNumber * MaxCapacity;
@property (retain) NSNumber * WebCapacity;
@property (retain) NSNumber * TotalBooked;
@property (retain) NSNumber * TotalBookedWaitlist;
@property (retain) NSNumber * WebBooked;
@property (retain) NSNumber * SemesterID;
@property (retain) USBoolean * IsCanceled;
@property (retain) USBoolean * Substitute;
@property (retain) USBoolean * Active;
@property (retain) USBoolean * IsWaitlistAvailable;
@property (retain) USBoolean * IsEnrolled;
@property (retain) USBoolean * HideCancel;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) USBoolean * IsAvailable;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) Sale_x0020_Service_ClassDescription * ClassDescription;
@property (retain) Sale_x0020_Service_Staff * Staff;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfClass : NSObject {
	
/* elements */
	NSMutableArray *Class_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfClass *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClass_:(Sale_x0020_Service_Class *)toAdd;
@property (readonly) NSMutableArray * Class_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Course : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	NSString * Description;
	NSString * Notes;
	NSDate * StartDate;
	NSDate * EndDate;
	Sale_x0020_Service_Location * Location;
	Sale_x0020_Service_Staff * Organizer;
	Sale_x0020_Service_Program * Program;
	NSString * ImageURL;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Course *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Description;
@property (retain) NSString * Notes;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
@property (retain) Sale_x0020_Service_Location * Location;
@property (retain) Sale_x0020_Service_Staff * Organizer;
@property (retain) Sale_x0020_Service_Program * Program;
@property (retain) NSString * ImageURL;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ClassSchedule : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ArrayOfClass * Classes;
	Sale_x0020_Service_ArrayOfClient * Clients;
	Sale_x0020_Service_Course * Course;
	NSNumber * SemesterID;
	USBoolean * IsAvailable;
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	Sale_x0020_Service_ClassDescription * ClassDescription;
	USBoolean * DaySunday;
	USBoolean * DayMonday;
	USBoolean * DayTuesday;
	USBoolean * DayWednesday;
	USBoolean * DayThursday;
	USBoolean * DayFriday;
	USBoolean * DaySaturday;
	NSDate * StartTime;
	NSDate * EndTime;
	NSDate * StartDate;
	NSDate * EndDate;
	Sale_x0020_Service_Staff * Staff;
	Sale_x0020_Service_Location * Location;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ClassSchedule *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfClass * Classes;
@property (retain) Sale_x0020_Service_ArrayOfClient * Clients;
@property (retain) Sale_x0020_Service_Course * Course;
@property (retain) NSNumber * SemesterID;
@property (retain) USBoolean * IsAvailable;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) Sale_x0020_Service_ClassDescription * ClassDescription;
@property (retain) USBoolean * DaySunday;
@property (retain) USBoolean * DayMonday;
@property (retain) USBoolean * DayTuesday;
@property (retain) USBoolean * DayWednesday;
@property (retain) USBoolean * DayThursday;
@property (retain) USBoolean * DayFriday;
@property (retain) USBoolean * DaySaturday;
@property (retain) NSDate * StartTime;
@property (retain) NSDate * EndTime;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
@property (retain) Sale_x0020_Service_Staff * Staff;
@property (retain) Sale_x0020_Service_Location * Location;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ShoppingCart : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSString * ID_;
	Sale_x0020_Service_ArrayOfCartItem * CartItems;
	NSNumber * SubTotal;
	NSNumber * DiscountTotal;
	NSNumber * TaxTotal;
	NSNumber * GrandTotal;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ShoppingCart *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSString * ID_;
@property (retain) Sale_x0020_Service_ArrayOfCartItem * CartItems;
@property (retain) NSNumber * SubTotal;
@property (retain) NSNumber * DiscountTotal;
@property (retain) NSNumber * TaxTotal;
@property (retain) NSNumber * GrandTotal;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Size : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Size *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Color : Sale_x0020_Service_MBObject {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Color *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Service : Sale_x0020_Service_Item {
	
/* elements */
	NSNumber * Price;
	NSNumber * OnlinePrice;
	NSNumber * TaxRate;
	NSNumber * ProductID;
	Sale_x0020_Service_ActionCode Action;
	NSString * ID_;
	NSString * Name;
	NSNumber * Count;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Service *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Price;
@property (retain) NSNumber * OnlinePrice;
@property (retain) NSNumber * TaxRate;
@property (retain) NSNumber * ProductID;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSString * ID_;
@property (retain) NSString * Name;
@property (retain) NSNumber * Count;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfService : NSObject {
	
/* elements */
	NSMutableArray *Service;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfService *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addService:(Sale_x0020_Service_Service *)toAdd;
@property (readonly) NSMutableArray * Service;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Product : Sale_x0020_Service_Item {
	
/* elements */
	NSNumber * Price;
	Sale_x0020_Service_ActionCode Action;
	NSString * ID_;
	NSNumber * GroupID;
	NSString * Name;
	NSNumber * OnlinePrice;
	NSString * ShortDesc;
	NSString * LongDesc;
	Sale_x0020_Service_Color * Color;
	Sale_x0020_Service_Size * Size_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Product *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Price;
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSString * ID_;
@property (retain) NSNumber * GroupID;
@property (retain) NSString * Name;
@property (retain) NSNumber * OnlinePrice;
@property (retain) NSString * ShortDesc;
@property (retain) NSString * LongDesc;
@property (retain) Sale_x0020_Service_Color * Color;
@property (retain) Sale_x0020_Service_Size * Size_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfProduct : NSObject {
	
/* elements */
	NSMutableArray *Product;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfProduct *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addProduct:(Sale_x0020_Service_Product *)toAdd;
@property (readonly) NSMutableArray * Product;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Package : Sale_x0020_Service_Item {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	NSNumber * DiscountPercentage;
	USBoolean * SellOnline;
	Sale_x0020_Service_ArrayOfService * Services;
	Sale_x0020_Service_ArrayOfProduct * Products;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Package *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSNumber * DiscountPercentage;
@property (retain) USBoolean * SellOnline;
@property (retain) Sale_x0020_Service_ArrayOfService * Services;
@property (retain) Sale_x0020_Service_ArrayOfProduct * Products;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Tip : Sale_x0020_Service_Item {
	
/* elements */
	NSNumber * Amount;
	NSNumber * StaffID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Tip *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
@property (retain) NSNumber * StaffID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GiftCardInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
	NSString * Notes;
	NSString * CardNumber;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GiftCardInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
@property (retain) NSString * Notes;
@property (retain) NSString * CardNumber;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_DebitAccountInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_DebitAccountInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CheckInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
	NSString * Notes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CheckInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
@property (retain) NSString * Notes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CashInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
	NSString * Notes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CashInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
@property (retain) NSString * Notes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_TrackDataInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
	NSString * TrackData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_TrackDataInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
@property (retain) NSString * TrackData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_StoredCardInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
	NSString * LastFour;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_StoredCardInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
@property (retain) NSString * LastFour;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_EncryptedTrackDataInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
	NSString * TrackData;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_EncryptedTrackDataInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
@property (retain) NSString * TrackData;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CustomPaymentInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
	NSNumber * ID_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CustomPaymentInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
@property (retain) NSNumber * ID_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CreditCardInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	Sale_x0020_Service_ActionCode Action;
	NSString * CreditCardNumber;
	NSNumber * Amount;
	NSString * ExpMonth;
	NSString * ExpYear;
	NSString * BillingName;
	NSString * BillingAddress;
	NSString * BillingCity;
	NSString * BillingState;
	NSString * BillingPostalCode;
	USBoolean * SaveInfo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CreditCardInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Sale_x0020_Service_ActionCode Action;
@property (retain) NSString * CreditCardNumber;
@property (retain) NSNumber * Amount;
@property (retain) NSString * ExpMonth;
@property (retain) NSString * ExpYear;
@property (retain) NSString * BillingName;
@property (retain) NSString * BillingAddress;
@property (retain) NSString * BillingCity;
@property (retain) NSString * BillingState;
@property (retain) NSString * BillingPostalCode;
@property (retain) USBoolean * SaveInfo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CompInfo : Sale_x0020_Service_PaymentInfo {
	
/* elements */
	NSNumber * Amount;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CompInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * Amount;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfClassSchedule : NSObject {
	
/* elements */
	NSMutableArray *ClassSchedule;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfClassSchedule *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClassSchedule:(Sale_x0020_Service_ClassSchedule *)toAdd;
@property (readonly) NSMutableArray * ClassSchedule;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CheckoutShoppingCartResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ShoppingCart * ShoppingCart;
	Sale_x0020_Service_ArrayOfClass * Classes;
	Sale_x0020_Service_ArrayOfAppointment * Appointments;
	Sale_x0020_Service_ArrayOfClassSchedule * Enrollments;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CheckoutShoppingCartResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ShoppingCart * ShoppingCart;
@property (retain) Sale_x0020_Service_ArrayOfClass * Classes;
@property (retain) Sale_x0020_Service_ArrayOfAppointment * Appointments;
@property (retain) Sale_x0020_Service_ArrayOfClassSchedule * Enrollments;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_CheckoutShoppingCartResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_CheckoutShoppingCartResult * CheckoutShoppingCartResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_CheckoutShoppingCartResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_CheckoutShoppingCartResult * CheckoutShoppingCartResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetSalesRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
	NSNumber * SaleID;
	NSDate * StartSaleDateTime;
	NSDate * EndSaleDateTime;
	NSNumber * PaymentMethodID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetSalesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * SaleID;
@property (retain) NSDate * StartSaleDateTime;
@property (retain) NSDate * EndSaleDateTime;
@property (retain) NSNumber * PaymentMethodID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetSales : NSObject {
	
/* elements */
	Sale_x0020_Service_GetSalesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetSales *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetSalesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Payment : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSNumber * Amount;
	NSNumber * Method;
	NSString * Type;
	NSString * Notes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Payment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSNumber * Amount;
@property (retain) NSNumber * Method;
@property (retain) NSString * Type;
@property (retain) NSString * Notes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfPayment : NSObject {
	
/* elements */
	NSMutableArray *Payment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfPayment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addPayment:(Sale_x0020_Service_Payment *)toAdd;
@property (readonly) NSMutableArray * Payment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_Sale : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSDate * SaleTime;
	NSDate * SaleDate;
	NSDate * SaleDateTime;
	Sale_x0020_Service_Location * Location;
	Sale_x0020_Service_ArrayOfPayment * Payments;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_Sale *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSDate * SaleTime;
@property (retain) NSDate * SaleDate;
@property (retain) NSDate * SaleDateTime;
@property (retain) Sale_x0020_Service_Location * Location;
@property (retain) Sale_x0020_Service_ArrayOfPayment * Payments;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfSale : NSObject {
	
/* elements */
	NSMutableArray *Sale;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfSale *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addSale:(Sale_x0020_Service_Sale *)toAdd;
@property (readonly) NSMutableArray * Sale;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetSalesResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ArrayOfSale * Sales;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetSalesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfSale * Sales;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetSalesResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_GetSalesResult * GetSalesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetSalesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetSalesResult * GetSalesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetServicesRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
	Sale_x0020_Service_ArrayOfInt * ProgramIDs;
	Sale_x0020_Service_ArrayOfInt * SessionTypeIDs;
	Sale_x0020_Service_ArrayOfString * ServiceIDs;
	NSNumber * ClassID;
	NSNumber * ClassScheduleID;
	USBoolean * SellOnline;
	NSNumber * LocationID;
	USBoolean * HideRelatedPrograms;
	NSNumber * StaffID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetServicesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfInt * ProgramIDs;
@property (retain) Sale_x0020_Service_ArrayOfInt * SessionTypeIDs;
@property (retain) Sale_x0020_Service_ArrayOfString * ServiceIDs;
@property (retain) NSNumber * ClassID;
@property (retain) NSNumber * ClassScheduleID;
@property (retain) USBoolean * SellOnline;
@property (retain) NSNumber * LocationID;
@property (retain) USBoolean * HideRelatedPrograms;
@property (retain) NSNumber * StaffID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetServices : NSObject {
	
/* elements */
	Sale_x0020_Service_GetServicesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetServices *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetServicesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetServicesResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ArrayOfService * Services;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetServicesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfService * Services;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetServicesResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_GetServicesResult * GetServicesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetServicesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetServicesResult * GetServicesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UpdateServicesRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
	Sale_x0020_Service_ArrayOfService * Services;
	USBoolean * Test;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UpdateServicesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfService * Services;
@property (retain) USBoolean * Test;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UpdateServices : NSObject {
	
/* elements */
	Sale_x0020_Service_UpdateServicesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UpdateServices *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_UpdateServicesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UpdateServicesResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ArrayOfService * Services;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UpdateServicesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfService * Services;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UpdateServicesResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_UpdateServicesResult * UpdateServicesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UpdateServicesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_UpdateServicesResult * UpdateServicesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetPackagesRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
	Sale_x0020_Service_ArrayOfInt * PackageIDs;
	USBoolean * SellOnline;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetPackagesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfInt * PackageIDs;
@property (retain) USBoolean * SellOnline;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetPackages : NSObject {
	
/* elements */
	Sale_x0020_Service_GetPackagesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetPackages *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetPackagesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfPackage : NSObject {
	
/* elements */
	NSMutableArray *Package;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfPackage *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addPackage:(Sale_x0020_Service_Package *)toAdd;
@property (readonly) NSMutableArray * Package;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetPackagesResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ArrayOfPackage * Packages;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetPackagesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfPackage * Packages;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetPackagesResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_GetPackagesResult * GetPackagesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetPackagesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetPackagesResult * GetPackagesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetProductsRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
	Sale_x0020_Service_ArrayOfString * ProductIDs;
	NSString * SearchText;
	NSString * SearchDomain;
	Sale_x0020_Service_ArrayOfInt * CategoryIDs;
	Sale_x0020_Service_ArrayOfInt * SubCategoryIDs;
	USBoolean * SellOnline;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetProductsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfString * ProductIDs;
@property (retain) NSString * SearchText;
@property (retain) NSString * SearchDomain;
@property (retain) Sale_x0020_Service_ArrayOfInt * CategoryIDs;
@property (retain) Sale_x0020_Service_ArrayOfInt * SubCategoryIDs;
@property (retain) USBoolean * SellOnline;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetProducts : NSObject {
	
/* elements */
	Sale_x0020_Service_GetProductsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetProducts *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetProductsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetProductsResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ArrayOfProduct * Products;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetProductsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfProduct * Products;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetProductsResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_GetProductsResult * GetProductsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetProductsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetProductsResult * GetProductsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UpdateProductsRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
	Sale_x0020_Service_ArrayOfProduct * Products;
	USBoolean * Test;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UpdateProductsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfProduct * Products;
@property (retain) USBoolean * Test;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UpdateProducts : NSObject {
	
/* elements */
	Sale_x0020_Service_UpdateProductsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UpdateProducts *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_UpdateProductsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UpdateProductsResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ArrayOfProduct * Products;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UpdateProductsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfProduct * Products;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_UpdateProductsResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_UpdateProductsResult * UpdateProductsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_UpdateProductsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_UpdateProductsResult * UpdateProductsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_RedeemSpaFinderWellnessCardRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
	NSString * CardID;
	NSNumber * FaceAmount;
	NSString * Currency;
	NSString * ClientID;
	NSNumber * LocationID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_RedeemSpaFinderWellnessCardRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * CardID;
@property (retain) NSNumber * FaceAmount;
@property (retain) NSString * Currency;
@property (retain) NSString * ClientID;
@property (retain) NSNumber * LocationID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_RedeemSpaFinderWellnessCard : NSObject {
	
/* elements */
	Sale_x0020_Service_RedeemSpaFinderWellnessCardRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_RedeemSpaFinderWellnessCard *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_RedeemSpaFinderWellnessCardRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_RedeemSpaFinderWellnessCardResult : Sale_x0020_Service_MBResult {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_RedeemSpaFinderWellnessCardResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_RedeemSpaFinderWellnessCardResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_RedeemSpaFinderWellnessCardResult * RedeemSpaFinderWellnessCardResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_RedeemSpaFinderWellnessCardResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_RedeemSpaFinderWellnessCardResult * RedeemSpaFinderWellnessCardResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetCustomPaymentMethodsRequest : Sale_x0020_Service_MBRequest {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetCustomPaymentMethodsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetCustomPaymentMethods : NSObject {
	
/* elements */
	Sale_x0020_Service_GetCustomPaymentMethodsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetCustomPaymentMethods *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetCustomPaymentMethodsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_ArrayOfCustomPaymentInfo : NSObject {
	
/* elements */
	NSMutableArray *CustomPaymentInfo;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_ArrayOfCustomPaymentInfo *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addCustomPaymentInfo:(Sale_x0020_Service_CustomPaymentInfo *)toAdd;
@property (readonly) NSMutableArray * CustomPaymentInfo;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetCustomPaymentMethodsResult : Sale_x0020_Service_MBResult {
	
/* elements */
	Sale_x0020_Service_ArrayOfCustomPaymentInfo * PaymentMethods;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetCustomPaymentMethodsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_ArrayOfCustomPaymentInfo * PaymentMethods;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Sale_x0020_Service_GetCustomPaymentMethodsResponse : NSObject {
	
/* elements */
	Sale_x0020_Service_GetCustomPaymentMethodsResult * GetCustomPaymentMethodsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Sale_x0020_Service_GetCustomPaymentMethodsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Sale_x0020_Service_GetCustomPaymentMethodsResult * GetCustomPaymentMethodsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "Sale_x0020_Service.h"
@class Sale_x0020_ServiceSoapBinding;
@interface Sale_x0020_Service : NSObject {
	
}
+ (Sale_x0020_ServiceSoapBinding *)Sale_x0020_ServiceSoapBinding;
@end
@class Sale_x0020_ServiceSoapBindingResponse;
@class Sale_x0020_ServiceSoapBindingOperation;
@protocol Sale_x0020_ServiceSoapBindingResponseDelegate <NSObject>
- (void) operation:(Sale_x0020_ServiceSoapBindingOperation *)operation completedWithResponse:(Sale_x0020_ServiceSoapBindingResponse *)response;
@end
@interface Sale_x0020_ServiceSoapBinding : NSObject <Sale_x0020_ServiceSoapBindingResponseDelegate> {
	NSURL *address;
	NSTimeInterval defaultTimeout;
	NSMutableArray *cookies;
	BOOL logXMLInOut;
	BOOL synchronousOperationComplete;
	NSString *authUsername;
	NSString *authPassword;
}
@property (copy) NSURL *address;
@property (assign) BOOL logXMLInOut;
@property (assign) NSTimeInterval defaultTimeout;
@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *authUsername;
@property (nonatomic, retain) NSString *authPassword;
- (id)initWithAddress:(NSString *)anAddress;
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(Sale_x0020_ServiceSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (Sale_x0020_ServiceSoapBindingResponse *)GetAcceptedCardTypeUsingParameters:(Sale_x0020_Service_GetAcceptedCardType *)aParameters ;
- (void)GetAcceptedCardTypeAsyncUsingParameters:(Sale_x0020_Service_GetAcceptedCardType *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)CheckoutShoppingCartUsingParameters:(Sale_x0020_Service_CheckoutShoppingCart *)aParameters ;
- (void)CheckoutShoppingCartAsyncUsingParameters:(Sale_x0020_Service_CheckoutShoppingCart *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)GetSalesUsingParameters:(Sale_x0020_Service_GetSales *)aParameters ;
- (void)GetSalesAsyncUsingParameters:(Sale_x0020_Service_GetSales *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)GetServicesUsingParameters:(Sale_x0020_Service_GetServices *)aParameters ;
- (void)GetServicesAsyncUsingParameters:(Sale_x0020_Service_GetServices *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)UpdateServicesUsingParameters:(Sale_x0020_Service_UpdateServices *)aParameters ;
- (void)UpdateServicesAsyncUsingParameters:(Sale_x0020_Service_UpdateServices *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)GetPackagesUsingParameters:(Sale_x0020_Service_GetPackages *)aParameters ;
- (void)GetPackagesAsyncUsingParameters:(Sale_x0020_Service_GetPackages *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)GetProductsUsingParameters:(Sale_x0020_Service_GetProducts *)aParameters ;
- (void)GetProductsAsyncUsingParameters:(Sale_x0020_Service_GetProducts *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)UpdateProductsUsingParameters:(Sale_x0020_Service_UpdateProducts *)aParameters ;
- (void)UpdateProductsAsyncUsingParameters:(Sale_x0020_Service_UpdateProducts *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)RedeemSpaFinderWellnessCardUsingParameters:(Sale_x0020_Service_RedeemSpaFinderWellnessCard *)aParameters ;
- (void)RedeemSpaFinderWellnessCardAsyncUsingParameters:(Sale_x0020_Service_RedeemSpaFinderWellnessCard *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Sale_x0020_ServiceSoapBindingResponse *)GetCustomPaymentMethodsUsingParameters:(Sale_x0020_Service_GetCustomPaymentMethods *)aParameters ;
- (void)GetCustomPaymentMethodsAsyncUsingParameters:(Sale_x0020_Service_GetCustomPaymentMethods *)aParameters  delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
@end
@interface Sale_x0020_ServiceSoapBindingOperation : NSOperation {
	Sale_x0020_ServiceSoapBinding *binding;
	Sale_x0020_ServiceSoapBindingResponse *response;
	id<Sale_x0020_ServiceSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) Sale_x0020_ServiceSoapBinding *binding;
@property (readonly) Sale_x0020_ServiceSoapBindingResponse *response;
@property (nonatomic, assign) id<Sale_x0020_ServiceSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate;
@end
@interface Sale_x0020_ServiceSoapBinding_GetAcceptedCardType : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_GetAcceptedCardType * parameters;
}
@property (retain) Sale_x0020_Service_GetAcceptedCardType * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_GetAcceptedCardType *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_CheckoutShoppingCart : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_CheckoutShoppingCart * parameters;
}
@property (retain) Sale_x0020_Service_CheckoutShoppingCart * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_CheckoutShoppingCart *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_GetSales : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_GetSales * parameters;
}
@property (retain) Sale_x0020_Service_GetSales * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_GetSales *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_GetServices : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_GetServices * parameters;
}
@property (retain) Sale_x0020_Service_GetServices * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_GetServices *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_UpdateServices : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_UpdateServices * parameters;
}
@property (retain) Sale_x0020_Service_UpdateServices * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_UpdateServices *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_GetPackages : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_GetPackages * parameters;
}
@property (retain) Sale_x0020_Service_GetPackages * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_GetPackages *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_GetProducts : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_GetProducts * parameters;
}
@property (retain) Sale_x0020_Service_GetProducts * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_GetProducts *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_UpdateProducts : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_UpdateProducts * parameters;
}
@property (retain) Sale_x0020_Service_UpdateProducts * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_UpdateProducts *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_RedeemSpaFinderWellnessCard : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_RedeemSpaFinderWellnessCard * parameters;
}
@property (retain) Sale_x0020_Service_RedeemSpaFinderWellnessCard * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_RedeemSpaFinderWellnessCard *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_GetCustomPaymentMethods : Sale_x0020_ServiceSoapBindingOperation {
	Sale_x0020_Service_GetCustomPaymentMethods * parameters;
}
@property (retain) Sale_x0020_Service_GetCustomPaymentMethods * parameters;
- (id)initWithBinding:(Sale_x0020_ServiceSoapBinding *)aBinding delegate:(id<Sale_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Sale_x0020_Service_GetCustomPaymentMethods *)aParameters
;
@end
@interface Sale_x0020_ServiceSoapBinding_envelope : NSObject {
}
+ (Sale_x0020_ServiceSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface Sale_x0020_ServiceSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
