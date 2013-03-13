#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class Client_x0020_ServiceSvc_AddArrival;
@class Client_x0020_ServiceSvc_AddArrivalRequest;
@class Client_x0020_ServiceSvc_MBRequest;
@class Client_x0020_ServiceSvc_SourceCredentials;
@class Client_x0020_ServiceSvc_UserCredentials;
@class Client_x0020_ServiceSvc_ArrayOfString;
@class Client_x0020_ServiceSvc_ArrayOfInt;
@class Client_x0020_ServiceSvc_AddArrivalResponse;
@class Client_x0020_ServiceSvc_AddArrivalResult;
@class Client_x0020_ServiceSvc_MBResult;
@class Client_x0020_ServiceSvc_ClientService;
@class Client_x0020_ServiceSvc_MBObject;
@class Client_x0020_ServiceSvc_Program;
@class Client_x0020_ServiceSvc_Site;
@class Client_x0020_ServiceSvc_AddOrUpdateClients;
@class Client_x0020_ServiceSvc_AddOrUpdateClientsRequest;
@class Client_x0020_ServiceSvc_ArrayOfClient;
@class Client_x0020_ServiceSvc_Client;
@class Client_x0020_ServiceSvc_ArrayOfClientIndex;
@class Client_x0020_ServiceSvc_ClientCreditCard;
@class Client_x0020_ServiceSvc_ArrayOfClientRelationship;
@class Client_x0020_ServiceSvc_ArrayOfRep;
@class Client_x0020_ServiceSvc_ArrayOfCustomClientField;
@class Client_x0020_ServiceSvc_Location;
@class Client_x0020_ServiceSvc_ClientIndex;
@class Client_x0020_ServiceSvc_ArrayOfClientIndexValue;
@class Client_x0020_ServiceSvc_ClientIndexValue;
@class Client_x0020_ServiceSvc_ClientRelationship;
@class Client_x0020_ServiceSvc_Relationship;
@class Client_x0020_ServiceSvc_Rep;
@class Client_x0020_ServiceSvc_Staff;
@class Client_x0020_ServiceSvc_ArrayOfAppointment;
@class Client_x0020_ServiceSvc_ArrayOfUnavailability;
@class Client_x0020_ServiceSvc_ArrayOfAvailability;
@class Client_x0020_ServiceSvc_Appointment;
@class Client_x0020_ServiceSvc_ScheduleItem;
@class Client_x0020_ServiceSvc_SessionType;
@class Client_x0020_ServiceSvc_ArrayOfResource;
@class Client_x0020_ServiceSvc_Unavailability;
@class Client_x0020_ServiceSvc_Availability;
@class Client_x0020_ServiceSvc_ArrayOfProgram;
@class Client_x0020_ServiceSvc_Resource;
@class Client_x0020_ServiceSvc_CustomClientField;
@class Client_x0020_ServiceSvc_AddOrUpdateClientsResponse;
@class Client_x0020_ServiceSvc_AddOrUpdateClientsResult;
@class Client_x0020_ServiceSvc_GetClients;
@class Client_x0020_ServiceSvc_GetClientsRequest;
@class Client_x0020_ServiceSvc_GetClientsResponse;
@class Client_x0020_ServiceSvc_GetClientsResult;
@class Client_x0020_ServiceSvc_GetCustomClientFields;
@class Client_x0020_ServiceSvc_GetCustomClientFieldsRequest;
@class Client_x0020_ServiceSvc_GetCustomClientFieldsResponse;
@class Client_x0020_ServiceSvc_GetCustomClientFieldsResult;
@class Client_x0020_ServiceSvc_GetClientIndexes;
@class Client_x0020_ServiceSvc_GetClientIndexesRequest;
@class Client_x0020_ServiceSvc_GetClientIndexesResponse;
@class Client_x0020_ServiceSvc_GetClientIndexesResult;
@class Client_x0020_ServiceSvc_GetClientContactLogs;
@class Client_x0020_ServiceSvc_GetClientContactLogsRequest;
@class Client_x0020_ServiceSvc_ArrayOfLong;
@class Client_x0020_ServiceSvc_GetClientContactLogsResponse;
@class Client_x0020_ServiceSvc_GetClientContactLogsResult;
@class Client_x0020_ServiceSvc_ArrayOfContactLog;
@class Client_x0020_ServiceSvc_ContactLog;
@class Client_x0020_ServiceSvc_ArrayOfContactLogComment;
@class Client_x0020_ServiceSvc_ArrayOfContactLogType;
@class Client_x0020_ServiceSvc_ContactLogComment;
@class Client_x0020_ServiceSvc_ContactLogType;
@class Client_x0020_ServiceSvc_ArrayOfContactLogSubtype;
@class Client_x0020_ServiceSvc_ContactLogSubtype;
@class Client_x0020_ServiceSvc_AddOrUpdateContactLogs;
@class Client_x0020_ServiceSvc_AddOrUpdateContactLogsRequest;
@class Client_x0020_ServiceSvc_AddOrUpdateContactLogsResponse;
@class Client_x0020_ServiceSvc_AddOrUpdateContactLogsResult;
@class Client_x0020_ServiceSvc_GetContactLogTypes;
@class Client_x0020_ServiceSvc_GetContactLogTypesRequest;
@class Client_x0020_ServiceSvc_GetContactLogTypesResponse;
@class Client_x0020_ServiceSvc_GetContactLogTypesResult;
@class Client_x0020_ServiceSvc_UploadClientDocument;
@class Client_x0020_ServiceSvc_UploadClientDocumentRequest;
@class Client_x0020_ServiceSvc_UploadClientDocumentResponse;
@class Client_x0020_ServiceSvc_UploadClientDocumentResult;
@class Client_x0020_ServiceSvc_GetClientReferralTypes;
@class Client_x0020_ServiceSvc_GetClientReferralTypesRequest;
@class Client_x0020_ServiceSvc_GetClientReferralTypesResponse;
@class Client_x0020_ServiceSvc_GetClientReferralTypesResult;
@class Client_x0020_ServiceSvc_GetActiveClientMemberships;
@class Client_x0020_ServiceSvc_GetActiveClientMembershipsRequest;
@class Client_x0020_ServiceSvc_GetActiveClientMembershipsResponse;
@class Client_x0020_ServiceSvc_GetActiveClientMembershipsResult;
@class Client_x0020_ServiceSvc_ArrayOfClientMembership;
@class Client_x0020_ServiceSvc_ClientMembership;
@class Client_x0020_ServiceSvc_ArrayOfLocation;
@class Client_x0020_ServiceSvc_GetClientContracts;
@class Client_x0020_ServiceSvc_GetClientContractsRequest;
@class Client_x0020_ServiceSvc_GetClientContractsResponse;
@class Client_x0020_ServiceSvc_GetClientContractsResult;
@class Client_x0020_ServiceSvc_ArrayOfClientContract;
@class Client_x0020_ServiceSvc_ClientContract;
@class Client_x0020_ServiceSvc_GetClientAccountBalances;
@class Client_x0020_ServiceSvc_GetClientAccountBalancesRequest;
@class Client_x0020_ServiceSvc_GetClientAccountBalancesResponse;
@class Client_x0020_ServiceSvc_GetClientAccountBalancesResult;
@class Client_x0020_ServiceSvc_GetClientServices;
@class Client_x0020_ServiceSvc_GetClientServicesRequest;
@class Client_x0020_ServiceSvc_GetClientServicesResponse;
@class Client_x0020_ServiceSvc_GetClientServicesResult;
@class Client_x0020_ServiceSvc_ArrayOfClientService;
@class Client_x0020_ServiceSvc_GetClientVisits;
@class Client_x0020_ServiceSvc_GetClientVisitsRequest;
@class Client_x0020_ServiceSvc_GetClientVisitsResponse;
@class Client_x0020_ServiceSvc_GetClientVisitsResult;
@class Client_x0020_ServiceSvc_ArrayOfVisit;
@class Client_x0020_ServiceSvc_Visit;
@class Client_x0020_ServiceSvc_GetClientPurchases;
@class Client_x0020_ServiceSvc_GetClientPurchasesRequest;
@class Client_x0020_ServiceSvc_GetClientPurchasesResponse;
@class Client_x0020_ServiceSvc_GetClientPurchasesResult;
@class Client_x0020_ServiceSvc_ArrayOfSaleItem;
@class Client_x0020_ServiceSvc_SaleItem;
@class Client_x0020_ServiceSvc_Sale;
@class Client_x0020_ServiceSvc_ArrayOfPayment;
@class Client_x0020_ServiceSvc_Payment;
@class Client_x0020_ServiceSvc_GetClientSchedule;
@class Client_x0020_ServiceSvc_GetClientScheduleRequest;
@class Client_x0020_ServiceSvc_GetClientScheduleResponse;
@class Client_x0020_ServiceSvc_GetClientScheduleResult;
@class Client_x0020_ServiceSvc_GetRequiredClientFields;
@class Client_x0020_ServiceSvc_GetRequiredClientFieldsRequest;
@class Client_x0020_ServiceSvc_GetRequiredClientFieldsResponse;
@class Client_x0020_ServiceSvc_GetRequiredClientFieldsResult;
@class Client_x0020_ServiceSvc_ValidateLogin;
@class Client_x0020_ServiceSvc_ValidateLoginRequest;
@class Client_x0020_ServiceSvc_ValidateLoginResponse;
@class Client_x0020_ServiceSvc_ValidateLoginResult;
@class Client_x0020_ServiceSvc_UpdateClientServices;
@class Client_x0020_ServiceSvc_UpdateClientServicesRequest;
@class Client_x0020_ServiceSvc_UpdateClientServicesResponse;
@class Client_x0020_ServiceSvc_UpdateClientServicesResult;
@class Client_x0020_ServiceSvc_SendUserNewPassword;
@class Client_x0020_ServiceSvc_ClientSendUserNewPasswordRequest;
@class Client_x0020_ServiceSvc_SendUserNewPasswordResponse;
@class Client_x0020_ServiceSvc_ClientSendUserNewPasswordResult;
@interface Client_x0020_ServiceSvc_ArrayOfInt : NSObject {
	
/* elements */
	NSMutableArray *int_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfInt *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addInt_:(NSNumber *)toAdd;
@property (readonly) NSMutableArray * int_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_SourceCredentials : NSObject {
	
/* elements */
	NSString * SourceName;
	NSString * Password;
	Client_x0020_ServiceSvc_ArrayOfInt * SiteIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_SourceCredentials *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * SourceName;
@property (retain) NSString * Password;
@property (retain) Client_x0020_ServiceSvc_ArrayOfInt * SiteIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UserCredentials : NSObject {
	
/* elements */
	NSString * Username;
	NSString * Password;
	Client_x0020_ServiceSvc_ArrayOfInt * SiteIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UserCredentials *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Username;
@property (retain) NSString * Password;
@property (retain) Client_x0020_ServiceSvc_ArrayOfInt * SiteIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Client_x0020_ServiceSvc_XMLDetailLevel_none = 0,
	Client_x0020_ServiceSvc_XMLDetailLevel_Bare,
	Client_x0020_ServiceSvc_XMLDetailLevel_Basic,
	Client_x0020_ServiceSvc_XMLDetailLevel_Full,
} Client_x0020_ServiceSvc_XMLDetailLevel;
Client_x0020_ServiceSvc_XMLDetailLevel Client_x0020_ServiceSvc_XMLDetailLevel_enumFromString(NSString *string);
NSString * Client_x0020_ServiceSvc_XMLDetailLevel_stringFromEnum(Client_x0020_ServiceSvc_XMLDetailLevel enumValue);
@interface Client_x0020_ServiceSvc_ArrayOfString : NSObject {
	
/* elements */
	NSMutableArray *string;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfString *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addString:(NSString *)toAdd;
@property (readonly) NSMutableArray * string;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_MBRequest : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_SourceCredentials * SourceCredentials;
	Client_x0020_ServiceSvc_UserCredentials * UserCredentials;
	Client_x0020_ServiceSvc_XMLDetailLevel XMLDetail;
	NSNumber * PageSize;
	NSNumber * CurrentPageIndex;
	Client_x0020_ServiceSvc_ArrayOfString * Fields;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_MBRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_SourceCredentials * SourceCredentials;
@property (retain) Client_x0020_ServiceSvc_UserCredentials * UserCredentials;
@property (assign) Client_x0020_ServiceSvc_XMLDetailLevel XMLDetail;
@property (retain) NSNumber * PageSize;
@property (retain) NSNumber * CurrentPageIndex;
@property (retain) Client_x0020_ServiceSvc_ArrayOfString * Fields;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddArrivalRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
	NSNumber * LocationID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddArrivalRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
@property (retain) NSNumber * LocationID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddArrival : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_AddArrivalRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddArrival *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_AddArrivalRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Client_x0020_ServiceSvc_StatusCode_none = 0,
	Client_x0020_ServiceSvc_StatusCode_Success,
	Client_x0020_ServiceSvc_StatusCode_InvalidCredentials,
	Client_x0020_ServiceSvc_StatusCode_InvalidParameters,
	Client_x0020_ServiceSvc_StatusCode_InternalException,
	Client_x0020_ServiceSvc_StatusCode_Unknown,
	Client_x0020_ServiceSvc_StatusCode_FailedAction,
} Client_x0020_ServiceSvc_StatusCode;
Client_x0020_ServiceSvc_StatusCode Client_x0020_ServiceSvc_StatusCode_enumFromString(NSString *string);
NSString * Client_x0020_ServiceSvc_StatusCode_stringFromEnum(Client_x0020_ServiceSvc_StatusCode enumValue);
@interface Client_x0020_ServiceSvc_MBResult : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_StatusCode Status;
	NSNumber * ErrorCode;
	NSString * Message;
	Client_x0020_ServiceSvc_XMLDetailLevel XMLDetail;
	NSNumber * ResultCount;
	NSNumber * CurrentPageIndex;
	NSNumber * TotalPageCount;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_MBResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Client_x0020_ServiceSvc_StatusCode Status;
@property (retain) NSNumber * ErrorCode;
@property (retain) NSString * Message;
@property (assign) Client_x0020_ServiceSvc_XMLDetailLevel XMLDetail;
@property (retain) NSNumber * ResultCount;
@property (retain) NSNumber * CurrentPageIndex;
@property (retain) NSNumber * TotalPageCount;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Site : NSObject {
	
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
+ (Client_x0020_ServiceSvc_Site *)deserializeNode:(xmlNodePtr)cur;
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
@interface Client_x0020_ServiceSvc_MBObject : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_Site * Site;
	Client_x0020_ServiceSvc_ArrayOfString * Messages;
	NSString * Execute;
	NSString * ErrorCode;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_MBObject *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_Site * Site;
@property (retain) Client_x0020_ServiceSvc_ArrayOfString * Messages;
@property (retain) NSString * Execute;
@property (retain) NSString * ErrorCode;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Client_x0020_ServiceSvc_ActionCode_none = 0,
	Client_x0020_ServiceSvc_ActionCode_None,
	Client_x0020_ServiceSvc_ActionCode_Added,
	Client_x0020_ServiceSvc_ActionCode_Updated,
	Client_x0020_ServiceSvc_ActionCode_Failed,
	Client_x0020_ServiceSvc_ActionCode_Removed,
} Client_x0020_ServiceSvc_ActionCode;
Client_x0020_ServiceSvc_ActionCode Client_x0020_ServiceSvc_ActionCode_enumFromString(NSString *string);
NSString * Client_x0020_ServiceSvc_ActionCode_stringFromEnum(Client_x0020_ServiceSvc_ActionCode enumValue);
typedef enum {
	Client_x0020_ServiceSvc_ScheduleType_none = 0,
	Client_x0020_ServiceSvc_ScheduleType_All,
	Client_x0020_ServiceSvc_ScheduleType_DropIn,
	Client_x0020_ServiceSvc_ScheduleType_Enrollment,
	Client_x0020_ServiceSvc_ScheduleType_Appointment,
	Client_x0020_ServiceSvc_ScheduleType_Resource,
	Client_x0020_ServiceSvc_ScheduleType_Media,
	Client_x0020_ServiceSvc_ScheduleType_Arrival,
} Client_x0020_ServiceSvc_ScheduleType;
Client_x0020_ServiceSvc_ScheduleType Client_x0020_ServiceSvc_ScheduleType_enumFromString(NSString *string);
NSString * Client_x0020_ServiceSvc_ScheduleType_stringFromEnum(Client_x0020_ServiceSvc_ScheduleType enumValue);
@interface Client_x0020_ServiceSvc_Program : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	Client_x0020_ServiceSvc_ScheduleType ScheduleType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_Program *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (assign) Client_x0020_ServiceSvc_ScheduleType ScheduleType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientService : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	USBoolean * Current;
	NSNumber * Count;
	NSNumber * Remaining;
	Client_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	NSDate * PaymentDate;
	NSDate * ActiveDate;
	NSDate * ExpirationDate;
	Client_x0020_ServiceSvc_Program * Program;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ClientService *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * Current;
@property (retain) NSNumber * Count;
@property (retain) NSNumber * Remaining;
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSDate * PaymentDate;
@property (retain) NSDate * ActiveDate;
@property (retain) NSDate * ExpirationDate;
@property (retain) Client_x0020_ServiceSvc_Program * Program;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddArrivalResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	USBoolean * ArrivalAdded;
	Client_x0020_ServiceSvc_ClientService * ClientService;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddArrivalResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * ArrivalAdded;
@property (retain) Client_x0020_ServiceSvc_ClientService * ClientService;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddArrivalResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_AddArrivalResult * AddArrivalResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddArrivalResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_AddArrivalResult * AddArrivalResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientIndexValue : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	Client_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ClientIndexValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfClientIndexValue : NSObject {
	
/* elements */
	NSMutableArray *ClientIndexValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfClientIndexValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientIndexValue:(Client_x0020_ServiceSvc_ClientIndexValue *)toAdd;
@property (readonly) NSMutableArray * ClientIndexValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientIndex : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	Client_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	Client_x0020_ServiceSvc_ArrayOfClientIndexValue * Values;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ClientIndex *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientIndexValue * Values;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfClientIndex : NSObject {
	
/* elements */
	NSMutableArray *ClientIndex;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfClientIndex *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientIndex:(Client_x0020_ServiceSvc_ClientIndex *)toAdd;
@property (readonly) NSMutableArray * ClientIndex;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientCreditCard : NSObject {
	
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
+ (Client_x0020_ServiceSvc_ClientCreditCard *)deserializeNode:(xmlNodePtr)cur;
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
@interface Client_x0020_ServiceSvc_Relationship : NSObject {
	
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
+ (Client_x0020_ServiceSvc_Relationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * RelationshipName1;
@property (retain) NSString * RelationshipName2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientRelationship : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	Client_x0020_ServiceSvc_Client * RelatedClient;
	Client_x0020_ServiceSvc_Relationship * Relationship;
	NSString * RelationshipName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ClientRelationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_Client * RelatedClient;
@property (retain) Client_x0020_ServiceSvc_Relationship * Relationship;
@property (retain) NSString * RelationshipName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfClientRelationship : NSObject {
	
/* elements */
	NSMutableArray *ClientRelationship;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfClientRelationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientRelationship:(Client_x0020_ServiceSvc_ClientRelationship *)toAdd;
@property (readonly) NSMutableArray * ClientRelationship;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ScheduleItem : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ScheduleItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Client_x0020_ServiceSvc_AppointmentStatus_none = 0,
	Client_x0020_ServiceSvc_AppointmentStatus_Booked,
	Client_x0020_ServiceSvc_AppointmentStatus_Completed,
	Client_x0020_ServiceSvc_AppointmentStatus_Confirmed,
	Client_x0020_ServiceSvc_AppointmentStatus_Arrived,
	Client_x0020_ServiceSvc_AppointmentStatus_NoShow,
	Client_x0020_ServiceSvc_AppointmentStatus_Cancelled,
} Client_x0020_ServiceSvc_AppointmentStatus;
Client_x0020_ServiceSvc_AppointmentStatus Client_x0020_ServiceSvc_AppointmentStatus_enumFromString(NSString *string);
NSString * Client_x0020_ServiceSvc_AppointmentStatus_stringFromEnum(Client_x0020_ServiceSvc_AppointmentStatus enumValue);
@interface Client_x0020_ServiceSvc_SessionType : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	Client_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_SessionType *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Location : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * BusinessID;
	NSNumber * SiteID;
	NSString * BusinessDescription;
	Client_x0020_ServiceSvc_ArrayOfString * AdditionalImageURLs;
	NSNumber * FacilitySquareFeet;
	NSNumber * TreatmentRooms;
	USBoolean * ProSpaFinderSite;
	USBoolean * HasClasses;
	NSString * PhoneExtension;
	Client_x0020_ServiceSvc_ActionCode Action;
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
+ (Client_x0020_ServiceSvc_Location *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * BusinessID;
@property (retain) NSNumber * SiteID;
@property (retain) NSString * BusinessDescription;
@property (retain) Client_x0020_ServiceSvc_ArrayOfString * AdditionalImageURLs;
@property (retain) NSNumber * FacilitySquareFeet;
@property (retain) NSNumber * TreatmentRooms;
@property (retain) USBoolean * ProSpaFinderSite;
@property (retain) USBoolean * HasClasses;
@property (retain) NSString * PhoneExtension;
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
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
@interface Client_x0020_ServiceSvc_Resource : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	Client_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_Resource *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfResource : NSObject {
	
/* elements */
	NSMutableArray *Resource;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfResource *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addResource:(Client_x0020_ServiceSvc_Resource *)toAdd;
@property (readonly) NSMutableArray * Resource;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Appointment : Client_x0020_ServiceSvc_ScheduleItem {
	
/* elements */
	Client_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	Client_x0020_ServiceSvc_AppointmentStatus Status;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	NSString * Notes;
	USBoolean * StaffRequested;
	Client_x0020_ServiceSvc_Program * Program;
	Client_x0020_ServiceSvc_SessionType * SessionType;
	Client_x0020_ServiceSvc_Location * Location;
	Client_x0020_ServiceSvc_Staff * Staff;
	Client_x0020_ServiceSvc_Client * Client;
	USBoolean * FirstAppointment;
	Client_x0020_ServiceSvc_ClientService * ClientService;
	Client_x0020_ServiceSvc_ArrayOfResource * Resources;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_Appointment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (assign) Client_x0020_ServiceSvc_AppointmentStatus Status;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * Notes;
@property (retain) USBoolean * StaffRequested;
@property (retain) Client_x0020_ServiceSvc_Program * Program;
@property (retain) Client_x0020_ServiceSvc_SessionType * SessionType;
@property (retain) Client_x0020_ServiceSvc_Location * Location;
@property (retain) Client_x0020_ServiceSvc_Staff * Staff;
@property (retain) Client_x0020_ServiceSvc_Client * Client;
@property (retain) USBoolean * FirstAppointment;
@property (retain) Client_x0020_ServiceSvc_ClientService * ClientService;
@property (retain) Client_x0020_ServiceSvc_ArrayOfResource * Resources;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfAppointment : NSObject {
	
/* elements */
	NSMutableArray *Appointment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfAppointment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addAppointment:(Client_x0020_ServiceSvc_Appointment *)toAdd;
@property (readonly) NSMutableArray * Appointment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Unavailability : Client_x0020_ServiceSvc_ScheduleItem {
	
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
+ (Client_x0020_ServiceSvc_Unavailability *)deserializeNode:(xmlNodePtr)cur;
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
@interface Client_x0020_ServiceSvc_ArrayOfUnavailability : NSObject {
	
/* elements */
	NSMutableArray *Unavailability;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfUnavailability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addUnavailability:(Client_x0020_ServiceSvc_Unavailability *)toAdd;
@property (readonly) NSMutableArray * Unavailability;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfProgram : NSObject {
	
/* elements */
	NSMutableArray *Program;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfProgram *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addProgram:(Client_x0020_ServiceSvc_Program *)toAdd;
@property (readonly) NSMutableArray * Program;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Availability : Client_x0020_ServiceSvc_ScheduleItem {
	
/* elements */
	NSNumber * ID_;
	Client_x0020_ServiceSvc_Staff * Staff;
	Client_x0020_ServiceSvc_SessionType * SessionType;
	Client_x0020_ServiceSvc_ArrayOfProgram * Programs;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	NSDate * BookableEndDateTime;
	Client_x0020_ServiceSvc_Location * Location;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_Availability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) Client_x0020_ServiceSvc_Staff * Staff;
@property (retain) Client_x0020_ServiceSvc_SessionType * SessionType;
@property (retain) Client_x0020_ServiceSvc_ArrayOfProgram * Programs;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSDate * BookableEndDateTime;
@property (retain) Client_x0020_ServiceSvc_Location * Location;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfAvailability : NSObject {
	
/* elements */
	NSMutableArray *Availability;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfAvailability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addAvailability:(Client_x0020_ServiceSvc_Availability *)toAdd;
@property (readonly) NSMutableArray * Availability;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Staff : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfAppointment * Appointments;
	Client_x0020_ServiceSvc_ArrayOfUnavailability * Unavailabilities;
	Client_x0020_ServiceSvc_ArrayOfAvailability * Availabilities;
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
	Client_x0020_ServiceSvc_ActionCode Action;
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
+ (Client_x0020_ServiceSvc_Staff *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfAppointment * Appointments;
@property (retain) Client_x0020_ServiceSvc_ArrayOfUnavailability * Unavailabilities;
@property (retain) Client_x0020_ServiceSvc_ArrayOfAvailability * Availabilities;
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
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
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
@interface Client_x0020_ServiceSvc_Rep : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	Client_x0020_ServiceSvc_Staff * Staff;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_Rep *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) Client_x0020_ServiceSvc_Staff * Staff;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfRep : NSObject {
	
/* elements */
	NSMutableArray *Rep;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfRep *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addRep:(Client_x0020_ServiceSvc_Rep *)toAdd;
@property (readonly) NSMutableArray * Rep;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_CustomClientField : NSObject {
	
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
+ (Client_x0020_ServiceSvc_CustomClientField *)deserializeNode:(xmlNodePtr)cur;
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
@interface Client_x0020_ServiceSvc_ArrayOfCustomClientField : NSObject {
	
/* elements */
	NSMutableArray *CustomClientField;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfCustomClientField *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addCustomClientField:(Client_x0020_ServiceSvc_CustomClientField *)toAdd;
@property (readonly) NSMutableArray * CustomClientField;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Client : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSString * NewID;
	NSNumber * AccountBalance;
	Client_x0020_ServiceSvc_ArrayOfClientIndex * ClientIndexes;
	NSString * Username;
	NSString * Password;
	NSString * Notes;
	Client_x0020_ServiceSvc_ClientCreditCard * ClientCreditCard;
	NSString * LastFormulaNotes;
	NSString * AppointmentGenderPreference;
	NSString * Gender;
	USBoolean * IsCompany;
	Client_x0020_ServiceSvc_ArrayOfClientRelationship * ClientRelationships;
	Client_x0020_ServiceSvc_ArrayOfRep * Reps;
	Client_x0020_ServiceSvc_ArrayOfCustomClientField * CustomClientFields;
	USBoolean * LiabilityRelease;
	NSString * EmergencyContactInfoName;
	NSString * EmergencyContactInfoRelationship;
	NSString * EmergencyContactInfoPhone;
	NSString * EmergencyContactInfoEmail;
	Client_x0020_ServiceSvc_ActionCode Action;
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
	Client_x0020_ServiceSvc_Location * HomeLocation;
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
+ (Client_x0020_ServiceSvc_Client *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * NewID;
@property (retain) NSNumber * AccountBalance;
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientIndex * ClientIndexes;
@property (retain) NSString * Username;
@property (retain) NSString * Password;
@property (retain) NSString * Notes;
@property (retain) Client_x0020_ServiceSvc_ClientCreditCard * ClientCreditCard;
@property (retain) NSString * LastFormulaNotes;
@property (retain) NSString * AppointmentGenderPreference;
@property (retain) NSString * Gender;
@property (retain) USBoolean * IsCompany;
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientRelationship * ClientRelationships;
@property (retain) Client_x0020_ServiceSvc_ArrayOfRep * Reps;
@property (retain) Client_x0020_ServiceSvc_ArrayOfCustomClientField * CustomClientFields;
@property (retain) USBoolean * LiabilityRelease;
@property (retain) NSString * EmergencyContactInfoName;
@property (retain) NSString * EmergencyContactInfoRelationship;
@property (retain) NSString * EmergencyContactInfoPhone;
@property (retain) NSString * EmergencyContactInfoEmail;
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
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
@property (retain) Client_x0020_ServiceSvc_Location * HomeLocation;
@property (retain) NSString * YellowAlert;
@property (retain) NSString * RedAlert;
@property (retain) NSString * PhotoURL;
@property (retain) USBoolean * IsProspect;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfClient : NSObject {
	
/* elements */
	NSMutableArray *Client;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfClient *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClient:(Client_x0020_ServiceSvc_Client *)toAdd;
@property (readonly) NSMutableArray * Client;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddOrUpdateClientsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * UpdateAction;
	USBoolean * Test;
	Client_x0020_ServiceSvc_ArrayOfClient * Clients;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddOrUpdateClientsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UpdateAction;
@property (retain) USBoolean * Test;
@property (retain) Client_x0020_ServiceSvc_ArrayOfClient * Clients;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddOrUpdateClients : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_AddOrUpdateClientsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddOrUpdateClients *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_AddOrUpdateClientsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddOrUpdateClientsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClient * Clients;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddOrUpdateClientsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClient * Clients;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddOrUpdateClientsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_AddOrUpdateClientsResult * AddOrUpdateClientsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddOrUpdateClientsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_AddOrUpdateClientsResult * AddOrUpdateClientsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfString * ClientIDs;
	NSString * SearchText;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfString * ClientIDs;
@property (retain) NSString * SearchText;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClients : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClients *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClient * Clients;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClient * Clients;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientsResult * GetClientsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientsResult * GetClientsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetCustomClientFieldsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetCustomClientFieldsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetCustomClientFields : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetCustomClientFieldsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetCustomClientFields *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetCustomClientFieldsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetCustomClientFieldsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfCustomClientField * CustomClientFields;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetCustomClientFieldsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfCustomClientField * CustomClientFields;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetCustomClientFieldsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetCustomClientFieldsResult * GetCustomClientFieldsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetCustomClientFieldsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetCustomClientFieldsResult * GetCustomClientFieldsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientIndexesRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientIndexesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientIndexes : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientIndexesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientIndexes *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientIndexesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientIndexesResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClientIndex * ClientIndexes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientIndexesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientIndex * ClientIndexes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientIndexesResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientIndexesResult * GetClientIndexesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientIndexesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientIndexesResult * GetClientIndexesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfLong : NSObject {
	
/* elements */
	NSMutableArray *long_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfLong *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addLong_:(NSNumber *)toAdd;
@property (readonly) NSMutableArray * long_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientContactLogsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
	NSDate * StartDate;
	NSDate * EndDate;
	Client_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
	USBoolean * ShowSystemGenerated;
	Client_x0020_ServiceSvc_ArrayOfInt * TypeIDs;
	Client_x0020_ServiceSvc_ArrayOfInt * SubtypeIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientContactLogsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
@property (retain) Client_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
@property (retain) USBoolean * ShowSystemGenerated;
@property (retain) Client_x0020_ServiceSvc_ArrayOfInt * TypeIDs;
@property (retain) Client_x0020_ServiceSvc_ArrayOfInt * SubtypeIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientContactLogs : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientContactLogsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientContactLogs *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientContactLogsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ContactLogComment : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Text;
	Client_x0020_ServiceSvc_Staff * CreatedBy;
	NSDate * CreatedDateTime;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ContactLogComment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Text;
@property (retain) Client_x0020_ServiceSvc_Staff * CreatedBy;
@property (retain) NSDate * CreatedDateTime;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfContactLogComment : NSObject {
	
/* elements */
	NSMutableArray *ContactLogComment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfContactLogComment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addContactLogComment:(Client_x0020_ServiceSvc_ContactLogComment *)toAdd;
@property (readonly) NSMutableArray * ContactLogComment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ContactLogSubtype : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ContactLogSubtype *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfContactLogSubtype : NSObject {
	
/* elements */
	NSMutableArray *ContactLogSubtype;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfContactLogSubtype *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addContactLogSubtype:(Client_x0020_ServiceSvc_ContactLogSubtype *)toAdd;
@property (readonly) NSMutableArray * ContactLogSubtype;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ContactLogType : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	Client_x0020_ServiceSvc_ArrayOfContactLogSubtype * Subtypes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ContactLogType *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) Client_x0020_ServiceSvc_ArrayOfContactLogSubtype * Subtypes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfContactLogType : NSObject {
	
/* elements */
	NSMutableArray *ContactLogType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfContactLogType *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addContactLogType:(Client_x0020_ServiceSvc_ContactLogType *)toAdd;
@property (readonly) NSMutableArray * ContactLogType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ContactLog : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	Client_x0020_ServiceSvc_Staff * CreatedBy;
	Client_x0020_ServiceSvc_Client * Client;
	NSDate * CreatedDateTime;
	NSDate * FollowupByDate;
	NSString * ContactName;
	NSString * Text;
	Client_x0020_ServiceSvc_Staff * AssignedTo;
	NSString * ContactMethod;
	USBoolean * IsSystemGenerated;
	Client_x0020_ServiceSvc_ArrayOfContactLogComment * Comments;
	Client_x0020_ServiceSvc_ArrayOfContactLogType * Types;
	Client_x0020_ServiceSvc_ActionCode Action;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ContactLog *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) Client_x0020_ServiceSvc_Staff * CreatedBy;
@property (retain) Client_x0020_ServiceSvc_Client * Client;
@property (retain) NSDate * CreatedDateTime;
@property (retain) NSDate * FollowupByDate;
@property (retain) NSString * ContactName;
@property (retain) NSString * Text;
@property (retain) Client_x0020_ServiceSvc_Staff * AssignedTo;
@property (retain) NSString * ContactMethod;
@property (retain) USBoolean * IsSystemGenerated;
@property (retain) Client_x0020_ServiceSvc_ArrayOfContactLogComment * Comments;
@property (retain) Client_x0020_ServiceSvc_ArrayOfContactLogType * Types;
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfContactLog : NSObject {
	
/* elements */
	NSMutableArray *ContactLog;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfContactLog *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addContactLog:(Client_x0020_ServiceSvc_ContactLog *)toAdd;
@property (readonly) NSMutableArray * ContactLog;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientContactLogsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfContactLog * ContactLogs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientContactLogsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfContactLog * ContactLogs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientContactLogsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientContactLogsResult * GetClientContactLogsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientContactLogsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientContactLogsResult * GetClientContactLogsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddOrUpdateContactLogsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * UpdateAction;
	USBoolean * Test;
	Client_x0020_ServiceSvc_ArrayOfContactLog * ContactLogs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddOrUpdateContactLogsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UpdateAction;
@property (retain) USBoolean * Test;
@property (retain) Client_x0020_ServiceSvc_ArrayOfContactLog * ContactLogs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddOrUpdateContactLogs : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_AddOrUpdateContactLogsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddOrUpdateContactLogs *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_AddOrUpdateContactLogsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddOrUpdateContactLogsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfContactLog * ContactLogs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddOrUpdateContactLogsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfContactLog * ContactLogs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_AddOrUpdateContactLogsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_AddOrUpdateContactLogsResult * AddOrUpdateContactLogsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_AddOrUpdateContactLogsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_AddOrUpdateContactLogsResult * AddOrUpdateContactLogsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetContactLogTypesRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetContactLogTypesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetContactLogTypes : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetContactLogTypesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetContactLogTypes *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetContactLogTypesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetContactLogTypesResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfContactLogType * ContatctLogTypes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetContactLogTypesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfContactLogType * ContatctLogTypes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetContactLogTypesResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetContactLogTypesResult * GetContactLogTypesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetContactLogTypesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetContactLogTypesResult * GetContactLogTypesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UploadClientDocumentRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
	NSString * FileName;
	NSData * Bytes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UploadClientDocumentRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
@property (retain) NSString * FileName;
@property (retain) NSData * Bytes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UploadClientDocument : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_UploadClientDocumentRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UploadClientDocument *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_UploadClientDocumentRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UploadClientDocumentResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	NSNumber * FileSize;
	NSString * FileName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UploadClientDocumentResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * FileSize;
@property (retain) NSString * FileName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UploadClientDocumentResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_UploadClientDocumentResult * UploadClientDocumentResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UploadClientDocumentResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_UploadClientDocumentResult * UploadClientDocumentResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientReferralTypesRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientReferralTypesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientReferralTypes : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientReferralTypesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientReferralTypes *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientReferralTypesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientReferralTypesResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfString * ReferralTypes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientReferralTypesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfString * ReferralTypes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientReferralTypesResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientReferralTypesResult * GetClientReferralTypesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientReferralTypesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientReferralTypesResult * GetClientReferralTypesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetActiveClientMembershipsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
	NSNumber * LocationID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetActiveClientMembershipsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
@property (retain) NSNumber * LocationID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetActiveClientMemberships : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetActiveClientMembershipsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetActiveClientMemberships *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetActiveClientMembershipsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfLocation : NSObject {
	
/* elements */
	NSMutableArray *Location;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfLocation *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addLocation:(Client_x0020_ServiceSvc_Location *)toAdd;
@property (readonly) NSMutableArray * Location;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientMembership : Client_x0020_ServiceSvc_ClientService {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfLocation * RestrictedLocations;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ClientMembership *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfLocation * RestrictedLocations;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfClientMembership : NSObject {
	
/* elements */
	NSMutableArray *ClientMembership;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfClientMembership *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientMembership:(Client_x0020_ServiceSvc_ClientMembership *)toAdd;
@property (readonly) NSMutableArray * ClientMembership;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetActiveClientMembershipsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClientMembership * ClientMemberships;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetActiveClientMembershipsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientMembership * ClientMemberships;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetActiveClientMembershipsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetActiveClientMembershipsResult * GetActiveClientMembershipsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetActiveClientMembershipsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetActiveClientMembershipsResult * GetActiveClientMembershipsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientContractsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientContractsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientContracts : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientContractsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientContracts *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientContractsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientContract : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	Client_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ClientContract *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfClientContract : NSObject {
	
/* elements */
	NSMutableArray *ClientContract;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfClientContract *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientContract:(Client_x0020_ServiceSvc_ClientContract *)toAdd;
@property (readonly) NSMutableArray * ClientContract;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientContractsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClientContract * Contracts;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientContractsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientContract * Contracts;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientContractsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientContractsResult * GetClientContractsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientContractsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientContractsResult * GetClientContractsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientAccountBalancesRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfString * ClientIDs;
	NSDate * BalanceDate;
	NSNumber * ClassID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientAccountBalancesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfString * ClientIDs;
@property (retain) NSDate * BalanceDate;
@property (retain) NSNumber * ClassID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientAccountBalances : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientAccountBalancesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientAccountBalances *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientAccountBalancesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientAccountBalancesResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClient * Clients;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientAccountBalancesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClient * Clients;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientAccountBalancesResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientAccountBalancesResult * GetClientAccountBalancesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientAccountBalancesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientAccountBalancesResult * GetClientAccountBalancesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientServicesRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
	Client_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
	Client_x0020_ServiceSvc_ArrayOfInt * SessionTypeIDs;
	Client_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
	NSNumber * VisitCount;
	NSDate * StartDate;
	NSDate * EndDate;
	USBoolean * ShowActiveOnly;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientServicesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
@property (retain) Client_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
@property (retain) Client_x0020_ServiceSvc_ArrayOfInt * SessionTypeIDs;
@property (retain) Client_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
@property (retain) NSNumber * VisitCount;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
@property (retain) USBoolean * ShowActiveOnly;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientServices : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientServicesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientServices *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientServicesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfClientService : NSObject {
	
/* elements */
	NSMutableArray *ClientService;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfClientService *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientService:(Client_x0020_ServiceSvc_ClientService *)toAdd;
@property (readonly) NSMutableArray * ClientService;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientServicesResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClientService * ClientServices;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientServicesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientService * ClientServices;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientServicesResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientServicesResult * GetClientServicesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientServicesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientServicesResult * GetClientServicesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientVisitsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
	NSDate * StartDate;
	NSDate * EndDate;
	USBoolean * UnpaidsOnly;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientVisitsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
@property (retain) USBoolean * UnpaidsOnly;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientVisits : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientVisitsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientVisits *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientVisitsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Visit : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSNumber * ClassID;
	NSDate * StartDateTime;
	USBoolean * LateCancelled;
	NSDate * EndDateTime;
	NSString * Name;
	Client_x0020_ServiceSvc_Staff * Staff;
	Client_x0020_ServiceSvc_Location * Location;
	Client_x0020_ServiceSvc_Client * Client;
	USBoolean * WebSignup;
	Client_x0020_ServiceSvc_ActionCode Action;
	USBoolean * SignedIn;
	USBoolean * MakeUp;
	Client_x0020_ServiceSvc_ClientService * Service;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_Visit *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSNumber * ClassID;
@property (retain) NSDate * StartDateTime;
@property (retain) USBoolean * LateCancelled;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * Name;
@property (retain) Client_x0020_ServiceSvc_Staff * Staff;
@property (retain) Client_x0020_ServiceSvc_Location * Location;
@property (retain) Client_x0020_ServiceSvc_Client * Client;
@property (retain) USBoolean * WebSignup;
@property (assign) Client_x0020_ServiceSvc_ActionCode Action;
@property (retain) USBoolean * SignedIn;
@property (retain) USBoolean * MakeUp;
@property (retain) Client_x0020_ServiceSvc_ClientService * Service;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfVisit : NSObject {
	
/* elements */
	NSMutableArray *Visit;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfVisit *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addVisit:(Client_x0020_ServiceSvc_Visit *)toAdd;
@property (readonly) NSMutableArray * Visit;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientVisitsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfVisit * Visits;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientVisitsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfVisit * Visits;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientVisitsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientVisitsResult * GetClientVisitsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientVisitsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientVisitsResult * GetClientVisitsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientPurchasesRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
	NSDate * StartDate;
	NSDate * EndDate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientPurchasesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientPurchases : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientPurchasesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientPurchases *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientPurchasesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Payment : NSObject {
	
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
+ (Client_x0020_ServiceSvc_Payment *)deserializeNode:(xmlNodePtr)cur;
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
@interface Client_x0020_ServiceSvc_ArrayOfPayment : NSObject {
	
/* elements */
	NSMutableArray *Payment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfPayment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addPayment:(Client_x0020_ServiceSvc_Payment *)toAdd;
@property (readonly) NSMutableArray * Payment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_Sale : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSDate * SaleTime;
	NSDate * SaleDate;
	NSDate * SaleDateTime;
	Client_x0020_ServiceSvc_Location * Location;
	Client_x0020_ServiceSvc_ArrayOfPayment * Payments;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_Sale *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSDate * SaleTime;
@property (retain) NSDate * SaleDate;
@property (retain) NSDate * SaleDateTime;
@property (retain) Client_x0020_ServiceSvc_Location * Location;
@property (retain) Client_x0020_ServiceSvc_ArrayOfPayment * Payments;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_SaleItem : Client_x0020_ServiceSvc_MBObject {
	
/* elements */
	Client_x0020_ServiceSvc_Sale * Sale;
	NSString * Description;
	NSNumber * Price;
	NSNumber * AmountPaid;
	NSNumber * Discount;
	NSNumber * Tax;
	USBoolean * Returned;
	NSNumber * Quantity;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_SaleItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_Sale * Sale;
@property (retain) NSString * Description;
@property (retain) NSNumber * Price;
@property (retain) NSNumber * AmountPaid;
@property (retain) NSNumber * Discount;
@property (retain) NSNumber * Tax;
@property (retain) USBoolean * Returned;
@property (retain) NSNumber * Quantity;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ArrayOfSaleItem : NSObject {
	
/* elements */
	NSMutableArray *SaleItem;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ArrayOfSaleItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addSaleItem:(Client_x0020_ServiceSvc_SaleItem *)toAdd;
@property (readonly) NSMutableArray * SaleItem;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientPurchasesResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfSaleItem * Purchases;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientPurchasesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfSaleItem * Purchases;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientPurchasesResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientPurchasesResult * GetClientPurchasesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientPurchasesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientPurchasesResult * GetClientPurchasesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientScheduleRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * ClientID;
	NSDate * StartDate;
	NSDate * EndDate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientScheduleRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ClientID;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientSchedule : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientScheduleRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientSchedule *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientScheduleRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientScheduleResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfVisit * Visits;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientScheduleResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfVisit * Visits;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetClientScheduleResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetClientScheduleResult * GetClientScheduleResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetClientScheduleResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetClientScheduleResult * GetClientScheduleResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetRequiredClientFieldsRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetRequiredClientFieldsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetRequiredClientFields : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetRequiredClientFieldsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetRequiredClientFields *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetRequiredClientFieldsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetRequiredClientFieldsResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfString * RequiredClientFields;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetRequiredClientFieldsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfString * RequiredClientFields;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_GetRequiredClientFieldsResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_GetRequiredClientFieldsResult * GetRequiredClientFieldsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_GetRequiredClientFieldsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_GetRequiredClientFieldsResult * GetRequiredClientFieldsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ValidateLoginRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * Username;
	NSString * Password;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ValidateLoginRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Username;
@property (retain) NSString * Password;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ValidateLogin : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_ValidateLoginRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ValidateLogin *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ValidateLoginRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ValidateLoginResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	NSString * GUID;
	Client_x0020_ServiceSvc_Client * Client;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ValidateLoginResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * GUID;
@property (retain) Client_x0020_ServiceSvc_Client * Client;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ValidateLoginResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_ValidateLoginResult * ValidateLoginResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ValidateLoginResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ValidateLoginResult * ValidateLoginResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UpdateClientServicesRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClientService * ClientServices;
	USBoolean * Test;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UpdateClientServicesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientService * ClientServices;
@property (retain) USBoolean * Test;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UpdateClientServices : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_UpdateClientServicesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UpdateClientServices *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_UpdateClientServicesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UpdateClientServicesResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
	Client_x0020_ServiceSvc_ArrayOfClientService * ClientServices;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UpdateClientServicesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ArrayOfClientService * ClientServices;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_UpdateClientServicesResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_UpdateClientServicesResult * UpdateClientServicesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_UpdateClientServicesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_UpdateClientServicesResult * UpdateClientServicesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientSendUserNewPasswordRequest : Client_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSString * UserEmail;
	NSString * UserFirstName;
	NSString * UserLastName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ClientSendUserNewPasswordRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * UserEmail;
@property (retain) NSString * UserFirstName;
@property (retain) NSString * UserLastName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_SendUserNewPassword : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_ClientSendUserNewPasswordRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_SendUserNewPassword *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ClientSendUserNewPasswordRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_ClientSendUserNewPasswordResult : Client_x0020_ServiceSvc_MBResult {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_ClientSendUserNewPasswordResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Client_x0020_ServiceSvc_SendUserNewPasswordResponse : NSObject {
	
/* elements */
	Client_x0020_ServiceSvc_ClientSendUserNewPasswordResult * SendUserNewPasswordResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Client_x0020_ServiceSvc_SendUserNewPasswordResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Client_x0020_ServiceSvc_ClientSendUserNewPasswordResult * SendUserNewPasswordResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "Client_x0020_ServiceSvc.h"
@class Client_x0020_ServiceSoapBinding;
@interface Client_x0020_ServiceSvc : NSObject {
	
}
+ (Client_x0020_ServiceSoapBinding *)Client_x0020_ServiceSoapBinding;
@end
@class Client_x0020_ServiceSoapBindingResponse;
@class Client_x0020_ServiceSoapBindingOperation;
@protocol Client_x0020_ServiceSoapBindingResponseDelegate <NSObject>
- (void) operation:(Client_x0020_ServiceSoapBindingOperation *)operation completedWithResponse:(Client_x0020_ServiceSoapBindingResponse *)response;
@end
@interface Client_x0020_ServiceSoapBinding : NSObject <Client_x0020_ServiceSoapBindingResponseDelegate> {
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
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(Client_x0020_ServiceSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (Client_x0020_ServiceSoapBindingResponse *)AddArrivalUsingParameters:(Client_x0020_ServiceSvc_AddArrival *)aParameters ;
- (void)AddArrivalAsyncUsingParameters:(Client_x0020_ServiceSvc_AddArrival *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)AddOrUpdateClientsUsingParameters:(Client_x0020_ServiceSvc_AddOrUpdateClients *)aParameters ;
- (void)AddOrUpdateClientsAsyncUsingParameters:(Client_x0020_ServiceSvc_AddOrUpdateClients *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientsUsingParameters:(Client_x0020_ServiceSvc_GetClients *)aParameters ;
- (void)GetClientsAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClients *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetCustomClientFieldsUsingParameters:(Client_x0020_ServiceSvc_GetCustomClientFields *)aParameters ;
- (void)GetCustomClientFieldsAsyncUsingParameters:(Client_x0020_ServiceSvc_GetCustomClientFields *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientIndexesUsingParameters:(Client_x0020_ServiceSvc_GetClientIndexes *)aParameters ;
- (void)GetClientIndexesAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientIndexes *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientContactLogsUsingParameters:(Client_x0020_ServiceSvc_GetClientContactLogs *)aParameters ;
- (void)GetClientContactLogsAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientContactLogs *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)AddOrUpdateContactLogsUsingParameters:(Client_x0020_ServiceSvc_AddOrUpdateContactLogs *)aParameters ;
- (void)AddOrUpdateContactLogsAsyncUsingParameters:(Client_x0020_ServiceSvc_AddOrUpdateContactLogs *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetContactLogTypesUsingParameters:(Client_x0020_ServiceSvc_GetContactLogTypes *)aParameters ;
- (void)GetContactLogTypesAsyncUsingParameters:(Client_x0020_ServiceSvc_GetContactLogTypes *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)UploadClientDocumentUsingParameters:(Client_x0020_ServiceSvc_UploadClientDocument *)aParameters ;
- (void)UploadClientDocumentAsyncUsingParameters:(Client_x0020_ServiceSvc_UploadClientDocument *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientReferralTypesUsingParameters:(Client_x0020_ServiceSvc_GetClientReferralTypes *)aParameters ;
- (void)GetClientReferralTypesAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientReferralTypes *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetActiveClientMembershipsUsingParameters:(Client_x0020_ServiceSvc_GetActiveClientMemberships *)aParameters ;
- (void)GetActiveClientMembershipsAsyncUsingParameters:(Client_x0020_ServiceSvc_GetActiveClientMemberships *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientContractsUsingParameters:(Client_x0020_ServiceSvc_GetClientContracts *)aParameters ;
- (void)GetClientContractsAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientContracts *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientAccountBalancesUsingParameters:(Client_x0020_ServiceSvc_GetClientAccountBalances *)aParameters ;
- (void)GetClientAccountBalancesAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientAccountBalances *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientServicesUsingParameters:(Client_x0020_ServiceSvc_GetClientServices *)aParameters ;
- (void)GetClientServicesAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientServices *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientVisitsUsingParameters:(Client_x0020_ServiceSvc_GetClientVisits *)aParameters ;
- (void)GetClientVisitsAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientVisits *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientPurchasesUsingParameters:(Client_x0020_ServiceSvc_GetClientPurchases *)aParameters ;
- (void)GetClientPurchasesAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientPurchases *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetClientScheduleUsingParameters:(Client_x0020_ServiceSvc_GetClientSchedule *)aParameters ;
- (void)GetClientScheduleAsyncUsingParameters:(Client_x0020_ServiceSvc_GetClientSchedule *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)GetRequiredClientFieldsUsingParameters:(Client_x0020_ServiceSvc_GetRequiredClientFields *)aParameters ;
- (void)GetRequiredClientFieldsAsyncUsingParameters:(Client_x0020_ServiceSvc_GetRequiredClientFields *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)ValidateLoginUsingParameters:(Client_x0020_ServiceSvc_ValidateLogin *)aParameters ;
- (void)ValidateLoginAsyncUsingParameters:(Client_x0020_ServiceSvc_ValidateLogin *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)UpdateClientServicesUsingParameters:(Client_x0020_ServiceSvc_UpdateClientServices *)aParameters ;
- (void)UpdateClientServicesAsyncUsingParameters:(Client_x0020_ServiceSvc_UpdateClientServices *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Client_x0020_ServiceSoapBindingResponse *)SendUserNewPasswordUsingParameters:(Client_x0020_ServiceSvc_SendUserNewPassword *)aParameters ;
- (void)SendUserNewPasswordAsyncUsingParameters:(Client_x0020_ServiceSvc_SendUserNewPassword *)aParameters  delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
@end
@interface Client_x0020_ServiceSoapBindingOperation : NSOperation {
	Client_x0020_ServiceSoapBinding *binding;
	Client_x0020_ServiceSoapBindingResponse *response;
	id<Client_x0020_ServiceSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) Client_x0020_ServiceSoapBinding *binding;
@property (readonly) Client_x0020_ServiceSoapBindingResponse *response;
@property (nonatomic, assign) id<Client_x0020_ServiceSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate;
@end
@interface Client_x0020_ServiceSoapBinding_AddArrival : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_AddArrival * parameters;
}
@property (retain) Client_x0020_ServiceSvc_AddArrival * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_AddArrival *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_AddOrUpdateClients : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_AddOrUpdateClients * parameters;
}
@property (retain) Client_x0020_ServiceSvc_AddOrUpdateClients * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_AddOrUpdateClients *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClients : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClients * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClients * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClients *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetCustomClientFields : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetCustomClientFields * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetCustomClientFields * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetCustomClientFields *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientIndexes : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientIndexes * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientIndexes * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientIndexes *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientContactLogs : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientContactLogs * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientContactLogs * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientContactLogs *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_AddOrUpdateContactLogs : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_AddOrUpdateContactLogs * parameters;
}
@property (retain) Client_x0020_ServiceSvc_AddOrUpdateContactLogs * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_AddOrUpdateContactLogs *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetContactLogTypes : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetContactLogTypes * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetContactLogTypes * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetContactLogTypes *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_UploadClientDocument : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_UploadClientDocument * parameters;
}
@property (retain) Client_x0020_ServiceSvc_UploadClientDocument * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_UploadClientDocument *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientReferralTypes : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientReferralTypes * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientReferralTypes * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientReferralTypes *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetActiveClientMemberships : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetActiveClientMemberships * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetActiveClientMemberships * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetActiveClientMemberships *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientContracts : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientContracts * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientContracts * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientContracts *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientAccountBalances : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientAccountBalances * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientAccountBalances * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientAccountBalances *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientServices : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientServices * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientServices * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientServices *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientVisits : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientVisits * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientVisits * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientVisits *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientPurchases : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientPurchases * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientPurchases * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientPurchases *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetClientSchedule : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetClientSchedule * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetClientSchedule * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetClientSchedule *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_GetRequiredClientFields : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_GetRequiredClientFields * parameters;
}
@property (retain) Client_x0020_ServiceSvc_GetRequiredClientFields * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_GetRequiredClientFields *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_ValidateLogin : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_ValidateLogin * parameters;
}
@property (retain) Client_x0020_ServiceSvc_ValidateLogin * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_ValidateLogin *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_UpdateClientServices : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_UpdateClientServices * parameters;
}
@property (retain) Client_x0020_ServiceSvc_UpdateClientServices * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_UpdateClientServices *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_SendUserNewPassword : Client_x0020_ServiceSoapBindingOperation {
	Client_x0020_ServiceSvc_SendUserNewPassword * parameters;
}
@property (retain) Client_x0020_ServiceSvc_SendUserNewPassword * parameters;
- (id)initWithBinding:(Client_x0020_ServiceSoapBinding *)aBinding delegate:(id<Client_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Client_x0020_ServiceSvc_SendUserNewPassword *)aParameters
;
@end
@interface Client_x0020_ServiceSoapBinding_envelope : NSObject {
}
+ (Client_x0020_ServiceSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface Client_x0020_ServiceSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
