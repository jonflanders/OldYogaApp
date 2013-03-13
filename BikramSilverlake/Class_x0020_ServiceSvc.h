#import <Foundation/Foundation.h>
#import "USAdditions.h"
#import <libxml/tree.h>
#import "USGlobals.h"
@class Class_x0020_ServiceSvc_GetClasses;
@class Class_x0020_ServiceSvc_GetClassesRequest;
@class Class_x0020_ServiceSvc_MBRequest;
@class Class_x0020_ServiceSvc_ArrayOfInt;
@class Class_x0020_ServiceSvc_ArrayOfLong;
@class Class_x0020_ServiceSvc_SourceCredentials;
@class Class_x0020_ServiceSvc_UserCredentials;
@class Class_x0020_ServiceSvc_ArrayOfString;
@class Class_x0020_ServiceSvc_GetClassesResponse;
@class Class_x0020_ServiceSvc_GetClassesResult;
@class Class_x0020_ServiceSvc_MBResult;
@class Class_x0020_ServiceSvc_ArrayOfClass;
@class Class_x0020_ServiceSvc_Class;
@class Class_x0020_ServiceSvc_MBObject;
@class Class_x0020_ServiceSvc_ArrayOfVisit;
@class Class_x0020_ServiceSvc_ArrayOfClient;
@class Class_x0020_ServiceSvc_Location;
@class Class_x0020_ServiceSvc_Resource;
@class Class_x0020_ServiceSvc_ClassDescription;
@class Class_x0020_ServiceSvc_Staff;
@class Class_x0020_ServiceSvc_Site;
@class Class_x0020_ServiceSvc_Level;
@class Class_x0020_ServiceSvc_Program;
@class Class_x0020_ServiceSvc_SessionType;
@class Class_x0020_ServiceSvc_ClientService;
@class Class_x0020_ServiceSvc_Rep;
@class Class_x0020_ServiceSvc_ArrayOfAppointment;
@class Class_x0020_ServiceSvc_ArrayOfUnavailability;
@class Class_x0020_ServiceSvc_ArrayOfAvailability;
@class Class_x0020_ServiceSvc_Appointment;
@class Class_x0020_ServiceSvc_ScheduleItem;
@class Class_x0020_ServiceSvc_Client;
@class Class_x0020_ServiceSvc_ArrayOfResource;
@class Class_x0020_ServiceSvc_Unavailability;
@class Class_x0020_ServiceSvc_Availability;
@class Class_x0020_ServiceSvc_ArrayOfProgram;
@class Class_x0020_ServiceSvc_ArrayOfClientIndex;
@class Class_x0020_ServiceSvc_ClientCreditCard;
@class Class_x0020_ServiceSvc_ArrayOfClientRelationship;
@class Class_x0020_ServiceSvc_ArrayOfRep;
@class Class_x0020_ServiceSvc_ArrayOfCustomClientField;
@class Class_x0020_ServiceSvc_ClientIndex;
@class Class_x0020_ServiceSvc_ArrayOfClientIndexValue;
@class Class_x0020_ServiceSvc_ClientIndexValue;
@class Class_x0020_ServiceSvc_ClientRelationship;
@class Class_x0020_ServiceSvc_Relationship;
@class Class_x0020_ServiceSvc_CustomClientField;
@class Class_x0020_ServiceSvc_Visit;
@class Class_x0020_ServiceSvc_UpdateClientVisits;
@class Class_x0020_ServiceSvc_UpdateClientVisitsRequest;
@class Class_x0020_ServiceSvc_UpdateClientVisitsResponse;
@class Class_x0020_ServiceSvc_UpdateClientVisitsResult;
@class Class_x0020_ServiceSvc_GetClassVisits;
@class Class_x0020_ServiceSvc_GetClassVisitsRequest;
@class Class_x0020_ServiceSvc_GetClassVisitsResponse;
@class Class_x0020_ServiceSvc_GetClassVisitsResult;
@class Class_x0020_ServiceSvc_GetClassDescriptions;
@class Class_x0020_ServiceSvc_GetClassDescriptionsRequest;
@class Class_x0020_ServiceSvc_GetClassDescriptionsResponse;
@class Class_x0020_ServiceSvc_GetClassDescriptionsResult;
@class Class_x0020_ServiceSvc_ArrayOfClassDescription;
@class Class_x0020_ServiceSvc_GetEnrollments;
@class Class_x0020_ServiceSvc_GetEnrollmentsRequest;
@class Class_x0020_ServiceSvc_GetEnrollmentsResponse;
@class Class_x0020_ServiceSvc_GetEnrollmentsResult;
@class Class_x0020_ServiceSvc_ArrayOfClassSchedule;
@class Class_x0020_ServiceSvc_ClassSchedule;
@class Class_x0020_ServiceSvc_Course;
@class Class_x0020_ServiceSvc_GetClassSchedules;
@class Class_x0020_ServiceSvc_GetClassSchedulesRequest;
@class Class_x0020_ServiceSvc_GetClassSchedulesResponse;
@class Class_x0020_ServiceSvc_GetClassSchedulesResult;
@class Class_x0020_ServiceSvc_AddClientsToClasses;
@class Class_x0020_ServiceSvc_AddClientsToClassesRequest;
@class Class_x0020_ServiceSvc_AddClientsToClassesResponse;
@class Class_x0020_ServiceSvc_AddClientsToClassesResult;
@class Class_x0020_ServiceSvc_RemoveClientsFromClasses;
@class Class_x0020_ServiceSvc_RemoveClientsFromClassesRequest;
@class Class_x0020_ServiceSvc_RemoveClientsFromClassesResponse;
@class Class_x0020_ServiceSvc_RemoveClientsFromClassesResult;
@class Class_x0020_ServiceSvc_AddClientsToEnrollments;
@class Class_x0020_ServiceSvc_AddClientsToEnrollmentsRequest;
@class Class_x0020_ServiceSvc_ArrayOfDateTime;
@class Class_x0020_ServiceSvc_AddClientsToEnrollmentsResponse;
@class Class_x0020_ServiceSvc_AddClientsToEnrollmentsResult;
@class Class_x0020_ServiceSvc_RemoveFromWaitlist;
@class Class_x0020_ServiceSvc_RemoveFromWaitlistRequest;
@class Class_x0020_ServiceSvc_RemoveFromWaitlistResponse;
@class Class_x0020_ServiceSvc_RemoveFromWaitlistResult;
@class Class_x0020_ServiceSvc_GetSemesters;
@class Class_x0020_ServiceSvc_GetSemestersRequest;
@class Class_x0020_ServiceSvc_GetSemestersResponse;
@class Class_x0020_ServiceSvc_GetSemestersResult;
@class Class_x0020_ServiceSvc_ArrayOfSemester;
@class Class_x0020_ServiceSvc_Semester;
@class Class_x0020_ServiceSvc_GetCourses;
@class Class_x0020_ServiceSvc_GetCoursesRequest;
@class Class_x0020_ServiceSvc_GetCoursesResponse;
@class Class_x0020_ServiceSvc_GetCoursesResult;
@class Class_x0020_ServiceSvc_ArrayOfCourse;
@class Class_x0020_ServiceSvc_GetWaitlistEntries;
@class Class_x0020_ServiceSvc_GetWaitlistEntriesRequest;
@class Class_x0020_ServiceSvc_GetWaitlistEntriesResponse;
@class Class_x0020_ServiceSvc_GetWaitlistEntriesResult;
@class Class_x0020_ServiceSvc_ArrayOfWaitlistEntry;
@class Class_x0020_ServiceSvc_WaitlistEntry;
@interface Class_x0020_ServiceSvc_ArrayOfInt : NSObject {
	
/* elements */
	NSMutableArray *int_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfInt *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addInt_:(NSNumber *)toAdd;
@property (readonly) NSMutableArray * int_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_SourceCredentials : NSObject {
	
/* elements */
	NSString * SourceName;
	NSString * Password;
	Class_x0020_ServiceSvc_ArrayOfInt * SiteIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_SourceCredentials *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * SourceName;
@property (retain) NSString * Password;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SiteIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_UserCredentials : NSObject {
	
/* elements */
	NSString * Username;
	NSString * Password;
	Class_x0020_ServiceSvc_ArrayOfInt * SiteIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_UserCredentials *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * Username;
@property (retain) NSString * Password;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SiteIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Class_x0020_ServiceSvc_XMLDetailLevel_none = 0,
	Class_x0020_ServiceSvc_XMLDetailLevel_Bare,
	Class_x0020_ServiceSvc_XMLDetailLevel_Basic,
	Class_x0020_ServiceSvc_XMLDetailLevel_Full,
} Class_x0020_ServiceSvc_XMLDetailLevel;
Class_x0020_ServiceSvc_XMLDetailLevel Class_x0020_ServiceSvc_XMLDetailLevel_enumFromString(NSString *string);
NSString * Class_x0020_ServiceSvc_XMLDetailLevel_stringFromEnum(Class_x0020_ServiceSvc_XMLDetailLevel enumValue);
@interface Class_x0020_ServiceSvc_ArrayOfString : NSObject {
	
/* elements */
	NSMutableArray *string;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfString *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addString:(NSString *)toAdd;
@property (readonly) NSMutableArray * string;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_MBRequest : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_SourceCredentials * SourceCredentials;
	Class_x0020_ServiceSvc_UserCredentials * UserCredentials;
	Class_x0020_ServiceSvc_XMLDetailLevel XMLDetail;
	NSNumber * PageSize;
	NSNumber * CurrentPageIndex;
	Class_x0020_ServiceSvc_ArrayOfString * Fields;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_MBRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_SourceCredentials * SourceCredentials;
@property (retain) Class_x0020_ServiceSvc_UserCredentials * UserCredentials;
@property (assign) Class_x0020_ServiceSvc_XMLDetailLevel XMLDetail;
@property (retain) NSNumber * PageSize;
@property (retain) NSNumber * CurrentPageIndex;
@property (retain) Class_x0020_ServiceSvc_ArrayOfString * Fields;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfLong : NSObject {
	
/* elements */
	NSMutableArray *long_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfLong *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addLong_:(NSNumber *)toAdd;
@property (readonly) NSMutableArray * long_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassesRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfInt * ClassDescriptionIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ClassIDs;
	Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	NSString * ClientID;
	Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * SessionTypeIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * SemesterIDs;
	USBoolean * HideCanceledClasses;
	USBoolean * SchedulingWindow;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassDescriptionIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * ClientID;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SessionTypeIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SemesterIDs;
@property (retain) USBoolean * HideCanceledClasses;
@property (retain) USBoolean * SchedulingWindow;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClasses : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetClassesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClasses *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetClassesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Class_x0020_ServiceSvc_StatusCode_none = 0,
	Class_x0020_ServiceSvc_StatusCode_Success,
	Class_x0020_ServiceSvc_StatusCode_InvalidCredentials,
	Class_x0020_ServiceSvc_StatusCode_InvalidParameters,
	Class_x0020_ServiceSvc_StatusCode_InternalException,
	Class_x0020_ServiceSvc_StatusCode_Unknown,
	Class_x0020_ServiceSvc_StatusCode_FailedAction,
} Class_x0020_ServiceSvc_StatusCode;
Class_x0020_ServiceSvc_StatusCode Class_x0020_ServiceSvc_StatusCode_enumFromString(NSString *string);
NSString * Class_x0020_ServiceSvc_StatusCode_stringFromEnum(Class_x0020_ServiceSvc_StatusCode enumValue);
@interface Class_x0020_ServiceSvc_MBResult : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_StatusCode Status;
	NSNumber * ErrorCode;
	NSString * Message;
	Class_x0020_ServiceSvc_XMLDetailLevel XMLDetail;
	NSNumber * ResultCount;
	NSNumber * CurrentPageIndex;
	NSNumber * TotalPageCount;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_MBResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Class_x0020_ServiceSvc_StatusCode Status;
@property (retain) NSNumber * ErrorCode;
@property (retain) NSString * Message;
@property (assign) Class_x0020_ServiceSvc_XMLDetailLevel XMLDetail;
@property (retain) NSNumber * ResultCount;
@property (retain) NSNumber * CurrentPageIndex;
@property (retain) NSNumber * TotalPageCount;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Site : NSObject {
	
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
+ (Class_x0020_ServiceSvc_Site *)deserializeNode:(xmlNodePtr)cur;
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
@interface Class_x0020_ServiceSvc_MBObject : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_Site * Site;
	Class_x0020_ServiceSvc_ArrayOfString * Messages;
	NSString * Execute;
	NSString * ErrorCode;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_MBObject *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_Site * Site;
@property (retain) Class_x0020_ServiceSvc_ArrayOfString * Messages;
@property (retain) NSString * Execute;
@property (retain) NSString * ErrorCode;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ScheduleItem : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ScheduleItem *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
typedef enum {
	Class_x0020_ServiceSvc_ActionCode_none = 0,
	Class_x0020_ServiceSvc_ActionCode_None,
	Class_x0020_ServiceSvc_ActionCode_Added,
	Class_x0020_ServiceSvc_ActionCode_Updated,
	Class_x0020_ServiceSvc_ActionCode_Failed,
	Class_x0020_ServiceSvc_ActionCode_Removed,
} Class_x0020_ServiceSvc_ActionCode;
Class_x0020_ServiceSvc_ActionCode Class_x0020_ServiceSvc_ActionCode_enumFromString(NSString *string);
NSString * Class_x0020_ServiceSvc_ActionCode_stringFromEnum(Class_x0020_ServiceSvc_ActionCode enumValue);
typedef enum {
	Class_x0020_ServiceSvc_AppointmentStatus_none = 0,
	Class_x0020_ServiceSvc_AppointmentStatus_Booked,
	Class_x0020_ServiceSvc_AppointmentStatus_Completed,
	Class_x0020_ServiceSvc_AppointmentStatus_Confirmed,
	Class_x0020_ServiceSvc_AppointmentStatus_Arrived,
	Class_x0020_ServiceSvc_AppointmentStatus_NoShow,
	Class_x0020_ServiceSvc_AppointmentStatus_Cancelled,
} Class_x0020_ServiceSvc_AppointmentStatus;
Class_x0020_ServiceSvc_AppointmentStatus Class_x0020_ServiceSvc_AppointmentStatus_enumFromString(NSString *string);
NSString * Class_x0020_ServiceSvc_AppointmentStatus_stringFromEnum(Class_x0020_ServiceSvc_AppointmentStatus enumValue);
typedef enum {
	Class_x0020_ServiceSvc_ScheduleType_none = 0,
	Class_x0020_ServiceSvc_ScheduleType_All,
	Class_x0020_ServiceSvc_ScheduleType_DropIn,
	Class_x0020_ServiceSvc_ScheduleType_Enrollment,
	Class_x0020_ServiceSvc_ScheduleType_Appointment,
	Class_x0020_ServiceSvc_ScheduleType_Resource,
	Class_x0020_ServiceSvc_ScheduleType_Media,
	Class_x0020_ServiceSvc_ScheduleType_Arrival,
} Class_x0020_ServiceSvc_ScheduleType;
Class_x0020_ServiceSvc_ScheduleType Class_x0020_ServiceSvc_ScheduleType_enumFromString(NSString *string);
NSString * Class_x0020_ServiceSvc_ScheduleType_stringFromEnum(Class_x0020_ServiceSvc_ScheduleType enumValue);
@interface Class_x0020_ServiceSvc_Program : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	Class_x0020_ServiceSvc_ScheduleType ScheduleType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Program *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (assign) Class_x0020_ServiceSvc_ScheduleType ScheduleType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_SessionType : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_SessionType *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Location : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * BusinessID;
	NSNumber * SiteID;
	NSString * BusinessDescription;
	Class_x0020_ServiceSvc_ArrayOfString * AdditionalImageURLs;
	NSNumber * FacilitySquareFeet;
	NSNumber * TreatmentRooms;
	USBoolean * ProSpaFinderSite;
	USBoolean * HasClasses;
	NSString * PhoneExtension;
	Class_x0020_ServiceSvc_ActionCode Action;
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
+ (Class_x0020_ServiceSvc_Location *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * BusinessID;
@property (retain) NSNumber * SiteID;
@property (retain) NSString * BusinessDescription;
@property (retain) Class_x0020_ServiceSvc_ArrayOfString * AdditionalImageURLs;
@property (retain) NSNumber * FacilitySquareFeet;
@property (retain) NSNumber * TreatmentRooms;
@property (retain) USBoolean * ProSpaFinderSite;
@property (retain) USBoolean * HasClasses;
@property (retain) NSString * PhoneExtension;
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
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
@interface Class_x0020_ServiceSvc_ClientIndexValue : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ClientIndexValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfClientIndexValue : NSObject {
	
/* elements */
	NSMutableArray *ClientIndexValue;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfClientIndexValue *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientIndexValue:(Class_x0020_ServiceSvc_ClientIndexValue *)toAdd;
@property (readonly) NSMutableArray * ClientIndexValue;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ClientIndex : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	Class_x0020_ServiceSvc_ArrayOfClientIndexValue * Values;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ClientIndex *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) Class_x0020_ServiceSvc_ArrayOfClientIndexValue * Values;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfClientIndex : NSObject {
	
/* elements */
	NSMutableArray *ClientIndex;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfClientIndex *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientIndex:(Class_x0020_ServiceSvc_ClientIndex *)toAdd;
@property (readonly) NSMutableArray * ClientIndex;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ClientCreditCard : NSObject {
	
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
+ (Class_x0020_ServiceSvc_ClientCreditCard *)deserializeNode:(xmlNodePtr)cur;
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
@interface Class_x0020_ServiceSvc_Relationship : NSObject {
	
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
+ (Class_x0020_ServiceSvc_Relationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * RelationshipName1;
@property (retain) NSString * RelationshipName2;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ClientRelationship : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	Class_x0020_ServiceSvc_Client * RelatedClient;
	Class_x0020_ServiceSvc_Relationship * Relationship;
	NSString * RelationshipName;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ClientRelationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_Client * RelatedClient;
@property (retain) Class_x0020_ServiceSvc_Relationship * Relationship;
@property (retain) NSString * RelationshipName;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfClientRelationship : NSObject {
	
/* elements */
	NSMutableArray *ClientRelationship;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfClientRelationship *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClientRelationship:(Class_x0020_ServiceSvc_ClientRelationship *)toAdd;
@property (readonly) NSMutableArray * ClientRelationship;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Rep : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	Class_x0020_ServiceSvc_Staff * Staff;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Rep *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) Class_x0020_ServiceSvc_Staff * Staff;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfRep : NSObject {
	
/* elements */
	NSMutableArray *Rep;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfRep *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addRep:(Class_x0020_ServiceSvc_Rep *)toAdd;
@property (readonly) NSMutableArray * Rep;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_CustomClientField : NSObject {
	
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
+ (Class_x0020_ServiceSvc_CustomClientField *)deserializeNode:(xmlNodePtr)cur;
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
@interface Class_x0020_ServiceSvc_ArrayOfCustomClientField : NSObject {
	
/* elements */
	NSMutableArray *CustomClientField;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfCustomClientField *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addCustomClientField:(Class_x0020_ServiceSvc_CustomClientField *)toAdd;
@property (readonly) NSMutableArray * CustomClientField;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Client : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSString * NewID;
	NSNumber * AccountBalance;
	Class_x0020_ServiceSvc_ArrayOfClientIndex * ClientIndexes;
	NSString * Username;
	NSString * Password;
	NSString * Notes;
	Class_x0020_ServiceSvc_ClientCreditCard * ClientCreditCard;
	NSString * LastFormulaNotes;
	NSString * AppointmentGenderPreference;
	NSString * Gender;
	USBoolean * IsCompany;
	Class_x0020_ServiceSvc_ArrayOfClientRelationship * ClientRelationships;
	Class_x0020_ServiceSvc_ArrayOfRep * Reps;
	Class_x0020_ServiceSvc_ArrayOfCustomClientField * CustomClientFields;
	USBoolean * LiabilityRelease;
	NSString * EmergencyContactInfoName;
	NSString * EmergencyContactInfoRelationship;
	NSString * EmergencyContactInfoPhone;
	NSString * EmergencyContactInfoEmail;
	Class_x0020_ServiceSvc_ActionCode Action;
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
	Class_x0020_ServiceSvc_Location * HomeLocation;
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
+ (Class_x0020_ServiceSvc_Client *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * NewID;
@property (retain) NSNumber * AccountBalance;
@property (retain) Class_x0020_ServiceSvc_ArrayOfClientIndex * ClientIndexes;
@property (retain) NSString * Username;
@property (retain) NSString * Password;
@property (retain) NSString * Notes;
@property (retain) Class_x0020_ServiceSvc_ClientCreditCard * ClientCreditCard;
@property (retain) NSString * LastFormulaNotes;
@property (retain) NSString * AppointmentGenderPreference;
@property (retain) NSString * Gender;
@property (retain) USBoolean * IsCompany;
@property (retain) Class_x0020_ServiceSvc_ArrayOfClientRelationship * ClientRelationships;
@property (retain) Class_x0020_ServiceSvc_ArrayOfRep * Reps;
@property (retain) Class_x0020_ServiceSvc_ArrayOfCustomClientField * CustomClientFields;
@property (retain) USBoolean * LiabilityRelease;
@property (retain) NSString * EmergencyContactInfoName;
@property (retain) NSString * EmergencyContactInfoRelationship;
@property (retain) NSString * EmergencyContactInfoPhone;
@property (retain) NSString * EmergencyContactInfoEmail;
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
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
@property (retain) Class_x0020_ServiceSvc_Location * HomeLocation;
@property (retain) NSString * YellowAlert;
@property (retain) NSString * RedAlert;
@property (retain) NSString * PhotoURL;
@property (retain) USBoolean * IsProspect;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ClientService : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	USBoolean * Current;
	NSNumber * Count;
	NSNumber * Remaining;
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	NSDate * PaymentDate;
	NSDate * ActiveDate;
	NSDate * ExpirationDate;
	Class_x0020_ServiceSvc_Program * Program;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ClientService *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) USBoolean * Current;
@property (retain) NSNumber * Count;
@property (retain) NSNumber * Remaining;
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSDate * PaymentDate;
@property (retain) NSDate * ActiveDate;
@property (retain) NSDate * ExpirationDate;
@property (retain) Class_x0020_ServiceSvc_Program * Program;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Resource : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Resource *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfResource : NSObject {
	
/* elements */
	NSMutableArray *Resource;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfResource *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addResource:(Class_x0020_ServiceSvc_Resource *)toAdd;
@property (readonly) NSMutableArray * Resource;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Appointment : Class_x0020_ServiceSvc_ScheduleItem {
	
/* elements */
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	Class_x0020_ServiceSvc_AppointmentStatus Status;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	NSString * Notes;
	USBoolean * StaffRequested;
	Class_x0020_ServiceSvc_Program * Program;
	Class_x0020_ServiceSvc_SessionType * SessionType;
	Class_x0020_ServiceSvc_Location * Location;
	Class_x0020_ServiceSvc_Staff * Staff;
	Class_x0020_ServiceSvc_Client * Client;
	USBoolean * FirstAppointment;
	Class_x0020_ServiceSvc_ClientService * ClientService;
	Class_x0020_ServiceSvc_ArrayOfResource * Resources;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Appointment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (assign) Class_x0020_ServiceSvc_AppointmentStatus Status;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * Notes;
@property (retain) USBoolean * StaffRequested;
@property (retain) Class_x0020_ServiceSvc_Program * Program;
@property (retain) Class_x0020_ServiceSvc_SessionType * SessionType;
@property (retain) Class_x0020_ServiceSvc_Location * Location;
@property (retain) Class_x0020_ServiceSvc_Staff * Staff;
@property (retain) Class_x0020_ServiceSvc_Client * Client;
@property (retain) USBoolean * FirstAppointment;
@property (retain) Class_x0020_ServiceSvc_ClientService * ClientService;
@property (retain) Class_x0020_ServiceSvc_ArrayOfResource * Resources;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfAppointment : NSObject {
	
/* elements */
	NSMutableArray *Appointment;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfAppointment *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addAppointment:(Class_x0020_ServiceSvc_Appointment *)toAdd;
@property (readonly) NSMutableArray * Appointment;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Unavailability : Class_x0020_ServiceSvc_ScheduleItem {
	
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
+ (Class_x0020_ServiceSvc_Unavailability *)deserializeNode:(xmlNodePtr)cur;
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
@interface Class_x0020_ServiceSvc_ArrayOfUnavailability : NSObject {
	
/* elements */
	NSMutableArray *Unavailability;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfUnavailability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addUnavailability:(Class_x0020_ServiceSvc_Unavailability *)toAdd;
@property (readonly) NSMutableArray * Unavailability;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfProgram : NSObject {
	
/* elements */
	NSMutableArray *Program;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfProgram *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addProgram:(Class_x0020_ServiceSvc_Program *)toAdd;
@property (readonly) NSMutableArray * Program;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Availability : Class_x0020_ServiceSvc_ScheduleItem {
	
/* elements */
	NSNumber * ID_;
	Class_x0020_ServiceSvc_Staff * Staff;
	Class_x0020_ServiceSvc_SessionType * SessionType;
	Class_x0020_ServiceSvc_ArrayOfProgram * Programs;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	NSDate * BookableEndDateTime;
	Class_x0020_ServiceSvc_Location * Location;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Availability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) Class_x0020_ServiceSvc_Staff * Staff;
@property (retain) Class_x0020_ServiceSvc_SessionType * SessionType;
@property (retain) Class_x0020_ServiceSvc_ArrayOfProgram * Programs;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) NSDate * BookableEndDateTime;
@property (retain) Class_x0020_ServiceSvc_Location * Location;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfAvailability : NSObject {
	
/* elements */
	NSMutableArray *Availability;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfAvailability *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addAvailability:(Class_x0020_ServiceSvc_Availability *)toAdd;
@property (readonly) NSMutableArray * Availability;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Staff : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfAppointment * Appointments;
	Class_x0020_ServiceSvc_ArrayOfUnavailability * Unavailabilities;
	Class_x0020_ServiceSvc_ArrayOfAvailability * Availabilities;
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
	Class_x0020_ServiceSvc_ActionCode Action;
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
+ (Class_x0020_ServiceSvc_Staff *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfAppointment * Appointments;
@property (retain) Class_x0020_ServiceSvc_ArrayOfUnavailability * Unavailabilities;
@property (retain) Class_x0020_ServiceSvc_ArrayOfAvailability * Availabilities;
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
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
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
@interface Class_x0020_ServiceSvc_Visit : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ID_;
	NSNumber * ClassID;
	NSDate * StartDateTime;
	USBoolean * LateCancelled;
	NSDate * EndDateTime;
	NSString * Name;
	Class_x0020_ServiceSvc_Staff * Staff;
	Class_x0020_ServiceSvc_Location * Location;
	Class_x0020_ServiceSvc_Client * Client;
	USBoolean * WebSignup;
	Class_x0020_ServiceSvc_ActionCode Action;
	USBoolean * SignedIn;
	USBoolean * MakeUp;
	Class_x0020_ServiceSvc_ClientService * Service;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Visit *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSNumber * ClassID;
@property (retain) NSDate * StartDateTime;
@property (retain) USBoolean * LateCancelled;
@property (retain) NSDate * EndDateTime;
@property (retain) NSString * Name;
@property (retain) Class_x0020_ServiceSvc_Staff * Staff;
@property (retain) Class_x0020_ServiceSvc_Location * Location;
@property (retain) Class_x0020_ServiceSvc_Client * Client;
@property (retain) USBoolean * WebSignup;
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) USBoolean * SignedIn;
@property (retain) USBoolean * MakeUp;
@property (retain) Class_x0020_ServiceSvc_ClientService * Service;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfVisit : NSObject {
	
/* elements */
	NSMutableArray *Visit;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfVisit *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addVisit:(Class_x0020_ServiceSvc_Visit *)toAdd;
@property (readonly) NSMutableArray * Visit;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfClient : NSObject {
	
/* elements */
	NSMutableArray *Client;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfClient *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClient:(Class_x0020_ServiceSvc_Client *)toAdd;
@property (readonly) NSMutableArray * Client;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Level : NSObject {
	
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
+ (Class_x0020_ServiceSvc_Level *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Description;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ClassDescription : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSString * ImageURL;
	Class_x0020_ServiceSvc_Level * Level;
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	NSString * Name;
	NSString * Description;
	NSString * Prereq;
	NSString * Notes;
	NSDate * LastUpdated;
	Class_x0020_ServiceSvc_Program * Program;
	Class_x0020_ServiceSvc_SessionType * SessionType;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ClassDescription *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSString * ImageURL;
@property (retain) Class_x0020_ServiceSvc_Level * Level;
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Description;
@property (retain) NSString * Prereq;
@property (retain) NSString * Notes;
@property (retain) NSDate * LastUpdated;
@property (retain) Class_x0020_ServiceSvc_Program * Program;
@property (retain) Class_x0020_ServiceSvc_SessionType * SessionType;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Class : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	NSNumber * ClassScheduleID;
	Class_x0020_ServiceSvc_ArrayOfVisit * Visits;
	Class_x0020_ServiceSvc_ArrayOfClient * Clients;
	Class_x0020_ServiceSvc_Location * Location;
	Class_x0020_ServiceSvc_Resource * Resource;
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
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	USBoolean * IsAvailable;
	NSDate * StartDateTime;
	NSDate * EndDateTime;
	Class_x0020_ServiceSvc_ClassDescription * ClassDescription;
	Class_x0020_ServiceSvc_Staff * Staff;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Class *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ClassScheduleID;
@property (retain) Class_x0020_ServiceSvc_ArrayOfVisit * Visits;
@property (retain) Class_x0020_ServiceSvc_ArrayOfClient * Clients;
@property (retain) Class_x0020_ServiceSvc_Location * Location;
@property (retain) Class_x0020_ServiceSvc_Resource * Resource;
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
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) USBoolean * IsAvailable;
@property (retain) NSDate * StartDateTime;
@property (retain) NSDate * EndDateTime;
@property (retain) Class_x0020_ServiceSvc_ClassDescription * ClassDescription;
@property (retain) Class_x0020_ServiceSvc_Staff * Staff;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfClass : NSObject {
	
/* elements */
	NSMutableArray *Class_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfClass *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClass_:(Class_x0020_ServiceSvc_Class *)toAdd;
@property (readonly) NSMutableArray * Class_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassesResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfClass * Classes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfClass * Classes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassesResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetClassesResult * GetClassesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetClassesResult * GetClassesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_UpdateClientVisitsRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfVisit * Visits;
	USBoolean * Test;
	USBoolean * SendEmail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_UpdateClientVisitsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfVisit * Visits;
@property (retain) USBoolean * Test;
@property (retain) USBoolean * SendEmail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_UpdateClientVisits : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_UpdateClientVisitsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_UpdateClientVisits *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_UpdateClientVisitsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_UpdateClientVisitsResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfVisit * Visits;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_UpdateClientVisitsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfVisit * Visits;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_UpdateClientVisitsResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_UpdateClientVisitsResult * UpdateClientVisitsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_UpdateClientVisitsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_UpdateClientVisitsResult * UpdateClientVisitsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassVisitsRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	NSNumber * ClassID;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassVisitsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ClassID;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassVisits : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetClassVisitsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassVisits *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetClassVisitsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassVisitsResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_Class * Class_;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassVisitsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_Class * Class_;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassVisitsResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetClassVisitsResult * GetClassVisitsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassVisitsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetClassVisitsResult * GetClassVisitsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassDescriptionsRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfInt * ClassDescriptionIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
	Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
	NSDate * StartClassDateTime;
	NSDate * EndClassDateTime;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassDescriptionsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassDescriptionIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
@property (retain) NSDate * StartClassDateTime;
@property (retain) NSDate * EndClassDateTime;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassDescriptions : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetClassDescriptionsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassDescriptions *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetClassDescriptionsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfClassDescription : NSObject {
	
/* elements */
	NSMutableArray *ClassDescription;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfClassDescription *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClassDescription:(Class_x0020_ServiceSvc_ClassDescription *)toAdd;
@property (readonly) NSMutableArray * ClassDescription;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassDescriptionsResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfClassDescription * ClassDescriptions;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassDescriptionsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfClassDescription * ClassDescriptions;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassDescriptionsResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetClassDescriptionsResult * GetClassDescriptionsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassDescriptionsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetClassDescriptionsResult * GetClassDescriptionsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetEnrollmentsRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ClassScheduleIDs;
	Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * SessionTypeIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * SemesterIDs;
	Class_x0020_ServiceSvc_ArrayOfLong * CourseIDs;
	NSDate * StartDate;
	NSDate * EndDate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetEnrollmentsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassScheduleIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SessionTypeIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SemesterIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfLong * CourseIDs;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetEnrollments : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetEnrollmentsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetEnrollments *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetEnrollmentsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Course : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	NSString * Description;
	NSString * Notes;
	NSDate * StartDate;
	NSDate * EndDate;
	Class_x0020_ServiceSvc_Location * Location;
	Class_x0020_ServiceSvc_Staff * Organizer;
	Class_x0020_ServiceSvc_Program * Program;
	NSString * ImageURL;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Course *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Description;
@property (retain) NSString * Notes;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
@property (retain) Class_x0020_ServiceSvc_Location * Location;
@property (retain) Class_x0020_ServiceSvc_Staff * Organizer;
@property (retain) Class_x0020_ServiceSvc_Program * Program;
@property (retain) NSString * ImageURL;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ClassSchedule : Class_x0020_ServiceSvc_MBObject {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfClass * Classes;
	Class_x0020_ServiceSvc_ArrayOfClient * Clients;
	Class_x0020_ServiceSvc_Course * Course;
	NSNumber * SemesterID;
	USBoolean * IsAvailable;
	Class_x0020_ServiceSvc_ActionCode Action;
	NSNumber * ID_;
	Class_x0020_ServiceSvc_ClassDescription * ClassDescription;
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
	Class_x0020_ServiceSvc_Staff * Staff;
	Class_x0020_ServiceSvc_Location * Location;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ClassSchedule *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfClass * Classes;
@property (retain) Class_x0020_ServiceSvc_ArrayOfClient * Clients;
@property (retain) Class_x0020_ServiceSvc_Course * Course;
@property (retain) NSNumber * SemesterID;
@property (retain) USBoolean * IsAvailable;
@property (assign) Class_x0020_ServiceSvc_ActionCode Action;
@property (retain) NSNumber * ID_;
@property (retain) Class_x0020_ServiceSvc_ClassDescription * ClassDescription;
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
@property (retain) Class_x0020_ServiceSvc_Staff * Staff;
@property (retain) Class_x0020_ServiceSvc_Location * Location;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfClassSchedule : NSObject {
	
/* elements */
	NSMutableArray *ClassSchedule;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfClassSchedule *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addClassSchedule:(Class_x0020_ServiceSvc_ClassSchedule *)toAdd;
@property (readonly) NSMutableArray * ClassSchedule;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetEnrollmentsResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfClassSchedule * Enrollments;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetEnrollmentsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfClassSchedule * Enrollments;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetEnrollmentsResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetEnrollmentsResult * GetEnrollmentsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetEnrollmentsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetEnrollmentsResult * GetEnrollmentsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassSchedulesRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ClassScheduleIDs;
	Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * SessionTypeIDs;
	NSDate * StartDate;
	NSDate * EndDate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassSchedulesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassScheduleIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SessionTypeIDs;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassSchedules : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetClassSchedulesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassSchedules *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetClassSchedulesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassSchedulesResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfClassSchedule * ClassSchedules;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassSchedulesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfClassSchedule * ClassSchedules;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetClassSchedulesResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetClassSchedulesResult * GetClassSchedulesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetClassSchedulesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetClassSchedulesResult * GetClassSchedulesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_AddClientsToClassesRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfString * ClientIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ClassIDs;
	USBoolean * Test;
	USBoolean * RequirePayment;
	USBoolean * Waitlist;
	USBoolean * SendEmail;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_AddClientsToClassesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfString * ClientIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassIDs;
@property (retain) USBoolean * Test;
@property (retain) USBoolean * RequirePayment;
@property (retain) USBoolean * Waitlist;
@property (retain) USBoolean * SendEmail;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_AddClientsToClasses : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_AddClientsToClassesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_AddClientsToClasses *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_AddClientsToClassesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_AddClientsToClassesResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfClass * Classes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_AddClientsToClassesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfClass * Classes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_AddClientsToClassesResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_AddClientsToClassesResult * AddClientsToClassesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_AddClientsToClassesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_AddClientsToClassesResult * AddClientsToClassesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_RemoveClientsFromClassesRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfString * ClientIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ClassIDs;
	USBoolean * Test;
	USBoolean * SendEmail;
	USBoolean * LateCancel;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_RemoveClientsFromClassesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfString * ClientIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassIDs;
@property (retain) USBoolean * Test;
@property (retain) USBoolean * SendEmail;
@property (retain) USBoolean * LateCancel;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_RemoveClientsFromClasses : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_RemoveClientsFromClassesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_RemoveClientsFromClasses *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_RemoveClientsFromClassesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_RemoveClientsFromClassesResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfClass * Classes;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_RemoveClientsFromClassesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfClass * Classes;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_RemoveClientsFromClassesResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_RemoveClientsFromClassesResult * RemoveClientsFromClassesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_RemoveClientsFromClassesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_RemoveClientsFromClassesResult * RemoveClientsFromClassesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfDateTime : NSObject {
	
/* elements */
	NSMutableArray *dateTime;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfDateTime *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addDateTime:(NSDate *)toAdd;
@property (readonly) NSMutableArray * dateTime;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_AddClientsToEnrollmentsRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfString * ClientIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ClassScheduleIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * CourseIDs;
	NSDate * EnrollDateForward;
	Class_x0020_ServiceSvc_ArrayOfDateTime * EnrollOpen;
	USBoolean * Test;
	USBoolean * SendEmail;
	USBoolean * Waitlist;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_AddClientsToEnrollmentsRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfString * ClientIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassScheduleIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * CourseIDs;
@property (retain) NSDate * EnrollDateForward;
@property (retain) Class_x0020_ServiceSvc_ArrayOfDateTime * EnrollOpen;
@property (retain) USBoolean * Test;
@property (retain) USBoolean * SendEmail;
@property (retain) USBoolean * Waitlist;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_AddClientsToEnrollments : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_AddClientsToEnrollmentsRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_AddClientsToEnrollments *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_AddClientsToEnrollmentsRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_AddClientsToEnrollmentsResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfClassSchedule * Enrollments;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_AddClientsToEnrollmentsResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfClassSchedule * Enrollments;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_AddClientsToEnrollmentsResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_AddClientsToEnrollmentsResult * AddClientsToEnrollmentsResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_AddClientsToEnrollmentsResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_AddClientsToEnrollmentsResult * AddClientsToEnrollmentsResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_RemoveFromWaitlistRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfInt * WaitlistEntryIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_RemoveFromWaitlistRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * WaitlistEntryIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_RemoveFromWaitlist : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_RemoveFromWaitlistRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_RemoveFromWaitlist *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_RemoveFromWaitlistRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_RemoveFromWaitlistResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_RemoveFromWaitlistResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_RemoveFromWaitlistResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_RemoveFromWaitlistResult * RemoveFromWaitlistResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_RemoveFromWaitlistResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_RemoveFromWaitlistResult * RemoveFromWaitlistResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetSemestersRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfInt * SemesterIDs;
	NSDate * StartDate;
	NSDate * EndDate;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetSemestersRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SemesterIDs;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetSemesters : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetSemestersRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetSemesters *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetSemestersRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_Semester : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSString * Name;
	NSString * Description;
	NSDate * StartDate;
	NSDate * EndDate;
	NSNumber * MultiRegistrationDiscount;
	NSDate * MultiRegistrationDeadline;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_Semester *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSString * Name;
@property (retain) NSString * Description;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
@property (retain) NSNumber * MultiRegistrationDiscount;
@property (retain) NSDate * MultiRegistrationDeadline;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfSemester : NSObject {
	
/* elements */
	NSMutableArray *Semester;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfSemester *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addSemester:(Class_x0020_ServiceSvc_Semester *)toAdd;
@property (readonly) NSMutableArray * Semester;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetSemestersResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfSemester * Semesters;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetSemestersResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfSemester * Semesters;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetSemestersResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetSemestersResult * GetSemestersResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetSemestersResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetSemestersResult * GetSemestersResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetCoursesRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
	Class_x0020_ServiceSvc_ArrayOfLong * CourseIDs;
	Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
	NSDate * StartDate;
	NSDate * EndDate;
	Class_x0020_ServiceSvc_ArrayOfInt * SemesterIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetCoursesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * LocationIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfLong * CourseIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfLong * StaffIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ProgramIDs;
@property (retain) NSDate * StartDate;
@property (retain) NSDate * EndDate;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * SemesterIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetCourses : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetCoursesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetCourses *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetCoursesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfCourse : NSObject {
	
/* elements */
	NSMutableArray *Course;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfCourse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addCourse:(Class_x0020_ServiceSvc_Course *)toAdd;
@property (readonly) NSMutableArray * Course;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetCoursesResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfCourse * Courses;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetCoursesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfCourse * Courses;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetCoursesResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetCoursesResult * GetCoursesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetCoursesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetCoursesResult * GetCoursesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetWaitlistEntriesRequest : Class_x0020_ServiceSvc_MBRequest {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfInt * ClassScheduleIDs;
	Class_x0020_ServiceSvc_ArrayOfString * ClientIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * WaitlistEntryIDs;
	Class_x0020_ServiceSvc_ArrayOfInt * ClassIDs;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetWaitlistEntriesRequest *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassScheduleIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfString * ClientIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * WaitlistEntryIDs;
@property (retain) Class_x0020_ServiceSvc_ArrayOfInt * ClassIDs;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetWaitlistEntries : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetWaitlistEntriesRequest * Request;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetWaitlistEntries *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetWaitlistEntriesRequest * Request;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_WaitlistEntry : NSObject {
	
/* elements */
	NSNumber * ID_;
	NSNumber * ClassID;
	Class_x0020_ServiceSvc_Client * Client;
	Class_x0020_ServiceSvc_ClassSchedule * ClassSchedule;
	NSDate * EnrollmentDateForward;
	NSDate * RequestDateTime;
	USBoolean * Web;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_WaitlistEntry *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) NSNumber * ID_;
@property (retain) NSNumber * ClassID;
@property (retain) Class_x0020_ServiceSvc_Client * Client;
@property (retain) Class_x0020_ServiceSvc_ClassSchedule * ClassSchedule;
@property (retain) NSDate * EnrollmentDateForward;
@property (retain) NSDate * RequestDateTime;
@property (retain) USBoolean * Web;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_ArrayOfWaitlistEntry : NSObject {
	
/* elements */
	NSMutableArray *WaitlistEntry;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_ArrayOfWaitlistEntry *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
- (void)addWaitlistEntry:(Class_x0020_ServiceSvc_WaitlistEntry *)toAdd;
@property (readonly) NSMutableArray * WaitlistEntry;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetWaitlistEntriesResult : Class_x0020_ServiceSvc_MBResult {
	
/* elements */
	Class_x0020_ServiceSvc_ArrayOfWaitlistEntry * WaitlistEntries;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetWaitlistEntriesResult *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_ArrayOfWaitlistEntry * WaitlistEntries;
/* attributes */
- (NSDictionary *)attributes;
@end
@interface Class_x0020_ServiceSvc_GetWaitlistEntriesResponse : NSObject {
	
/* elements */
	Class_x0020_ServiceSvc_GetWaitlistEntriesResult * GetWaitlistEntriesResult;
/* attributes */
}
- (NSString *)nsPrefix;
- (xmlNodePtr)xmlNodeForDoc:(xmlDocPtr)doc elementName:(NSString *)elName elementNSPrefix:(NSString *)elNSPrefix;
- (void)addAttributesToNode:(xmlNodePtr)node;
- (void)addElementsToNode:(xmlNodePtr)node;
+ (Class_x0020_ServiceSvc_GetWaitlistEntriesResponse *)deserializeNode:(xmlNodePtr)cur;
- (void)deserializeAttributesFromNode:(xmlNodePtr)cur;
- (void)deserializeElementsFromNode:(xmlNodePtr)cur;
/* elements */
@property (retain) Class_x0020_ServiceSvc_GetWaitlistEntriesResult * GetWaitlistEntriesResult;
/* attributes */
- (NSDictionary *)attributes;
@end
/* Cookies handling provided by http://en.wikibooks.org/wiki/Programming:WebObjects/Web_Services/Web_Service_Provider */
#import <libxml/parser.h>
#import "xsd.h"
#import "Class_x0020_ServiceSvc.h"
@class Class_x0020_ServiceSoapBinding;
@interface Class_x0020_ServiceSvc : NSObject {
	
}
+ (Class_x0020_ServiceSoapBinding *)Class_x0020_ServiceSoapBinding;
@end
@class Class_x0020_ServiceSoapBindingResponse;
@class Class_x0020_ServiceSoapBindingOperation;
@protocol Class_x0020_ServiceSoapBindingResponseDelegate <NSObject>
- (void) operation:(Class_x0020_ServiceSoapBindingOperation *)operation completedWithResponse:(Class_x0020_ServiceSoapBindingResponse *)response;
@end
@interface Class_x0020_ServiceSoapBinding : NSObject <Class_x0020_ServiceSoapBindingResponseDelegate> {
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
- (void)sendHTTPCallUsingBody:(NSString *)body soapAction:(NSString *)soapAction forOperation:(Class_x0020_ServiceSoapBindingOperation *)operation;
- (void)addCookie:(NSHTTPCookie *)toAdd;
- (Class_x0020_ServiceSoapBindingResponse *)GetClassesUsingParameters:(Class_x0020_ServiceSvc_GetClasses *)aParameters ;
- (void)GetClassesAsyncUsingParameters:(Class_x0020_ServiceSvc_GetClasses *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)UpdateClientVisitsUsingParameters:(Class_x0020_ServiceSvc_UpdateClientVisits *)aParameters ;
- (void)UpdateClientVisitsAsyncUsingParameters:(Class_x0020_ServiceSvc_UpdateClientVisits *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)GetClassVisitsUsingParameters:(Class_x0020_ServiceSvc_GetClassVisits *)aParameters ;
- (void)GetClassVisitsAsyncUsingParameters:(Class_x0020_ServiceSvc_GetClassVisits *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)GetClassDescriptionsUsingParameters:(Class_x0020_ServiceSvc_GetClassDescriptions *)aParameters ;
- (void)GetClassDescriptionsAsyncUsingParameters:(Class_x0020_ServiceSvc_GetClassDescriptions *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)GetEnrollmentsUsingParameters:(Class_x0020_ServiceSvc_GetEnrollments *)aParameters ;
- (void)GetEnrollmentsAsyncUsingParameters:(Class_x0020_ServiceSvc_GetEnrollments *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)GetClassSchedulesUsingParameters:(Class_x0020_ServiceSvc_GetClassSchedules *)aParameters ;
- (void)GetClassSchedulesAsyncUsingParameters:(Class_x0020_ServiceSvc_GetClassSchedules *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)AddClientsToClassesUsingParameters:(Class_x0020_ServiceSvc_AddClientsToClasses *)aParameters ;
- (void)AddClientsToClassesAsyncUsingParameters:(Class_x0020_ServiceSvc_AddClientsToClasses *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)RemoveClientsFromClassesUsingParameters:(Class_x0020_ServiceSvc_RemoveClientsFromClasses *)aParameters ;
- (void)RemoveClientsFromClassesAsyncUsingParameters:(Class_x0020_ServiceSvc_RemoveClientsFromClasses *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)AddClientsToEnrollmentsUsingParameters:(Class_x0020_ServiceSvc_AddClientsToEnrollments *)aParameters ;
- (void)AddClientsToEnrollmentsAsyncUsingParameters:(Class_x0020_ServiceSvc_AddClientsToEnrollments *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)RemoveFromWaitlistUsingParameters:(Class_x0020_ServiceSvc_RemoveFromWaitlist *)aParameters ;
- (void)RemoveFromWaitlistAsyncUsingParameters:(Class_x0020_ServiceSvc_RemoveFromWaitlist *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)GetSemestersUsingParameters:(Class_x0020_ServiceSvc_GetSemesters *)aParameters ;
- (void)GetSemestersAsyncUsingParameters:(Class_x0020_ServiceSvc_GetSemesters *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)GetCoursesUsingParameters:(Class_x0020_ServiceSvc_GetCourses *)aParameters ;
- (void)GetCoursesAsyncUsingParameters:(Class_x0020_ServiceSvc_GetCourses *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
- (Class_x0020_ServiceSoapBindingResponse *)GetWaitlistEntriesUsingParameters:(Class_x0020_ServiceSvc_GetWaitlistEntries *)aParameters ;
- (void)GetWaitlistEntriesAsyncUsingParameters:(Class_x0020_ServiceSvc_GetWaitlistEntries *)aParameters  delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)responseDelegate;
@end
@interface Class_x0020_ServiceSoapBindingOperation : NSOperation {
	Class_x0020_ServiceSoapBinding *binding;
	Class_x0020_ServiceSoapBindingResponse *response;
	id<Class_x0020_ServiceSoapBindingResponseDelegate> delegate;
	NSMutableData *responseData;
	NSURLConnection *urlConnection;
}
@property (retain) Class_x0020_ServiceSoapBinding *binding;
@property (readonly) Class_x0020_ServiceSoapBindingResponse *response;
@property (nonatomic, assign) id<Class_x0020_ServiceSoapBindingResponseDelegate> delegate;
@property (nonatomic, retain) NSMutableData *responseData;
@property (nonatomic, retain) NSURLConnection *urlConnection;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate;
@end
@interface Class_x0020_ServiceSoapBinding_GetClasses : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_GetClasses * parameters;
}
@property (retain) Class_x0020_ServiceSvc_GetClasses * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_GetClasses *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_UpdateClientVisits : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_UpdateClientVisits * parameters;
}
@property (retain) Class_x0020_ServiceSvc_UpdateClientVisits * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_UpdateClientVisits *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_GetClassVisits : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_GetClassVisits * parameters;
}
@property (retain) Class_x0020_ServiceSvc_GetClassVisits * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_GetClassVisits *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_GetClassDescriptions : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_GetClassDescriptions * parameters;
}
@property (retain) Class_x0020_ServiceSvc_GetClassDescriptions * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_GetClassDescriptions *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_GetEnrollments : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_GetEnrollments * parameters;
}
@property (retain) Class_x0020_ServiceSvc_GetEnrollments * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_GetEnrollments *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_GetClassSchedules : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_GetClassSchedules * parameters;
}
@property (retain) Class_x0020_ServiceSvc_GetClassSchedules * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_GetClassSchedules *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_AddClientsToClasses : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_AddClientsToClasses * parameters;
}
@property (retain) Class_x0020_ServiceSvc_AddClientsToClasses * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_AddClientsToClasses *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_RemoveClientsFromClasses : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_RemoveClientsFromClasses * parameters;
}
@property (retain) Class_x0020_ServiceSvc_RemoveClientsFromClasses * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_RemoveClientsFromClasses *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_AddClientsToEnrollments : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_AddClientsToEnrollments * parameters;
}
@property (retain) Class_x0020_ServiceSvc_AddClientsToEnrollments * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_AddClientsToEnrollments *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_RemoveFromWaitlist : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_RemoveFromWaitlist * parameters;
}
@property (retain) Class_x0020_ServiceSvc_RemoveFromWaitlist * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_RemoveFromWaitlist *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_GetSemesters : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_GetSemesters * parameters;
}
@property (retain) Class_x0020_ServiceSvc_GetSemesters * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_GetSemesters *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_GetCourses : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_GetCourses * parameters;
}
@property (retain) Class_x0020_ServiceSvc_GetCourses * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_GetCourses *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_GetWaitlistEntries : Class_x0020_ServiceSoapBindingOperation {
	Class_x0020_ServiceSvc_GetWaitlistEntries * parameters;
}
@property (retain) Class_x0020_ServiceSvc_GetWaitlistEntries * parameters;
- (id)initWithBinding:(Class_x0020_ServiceSoapBinding *)aBinding delegate:(id<Class_x0020_ServiceSoapBindingResponseDelegate>)aDelegate
	parameters:(Class_x0020_ServiceSvc_GetWaitlistEntries *)aParameters
;
@end
@interface Class_x0020_ServiceSoapBinding_envelope : NSObject {
}
+ (Class_x0020_ServiceSoapBinding_envelope *)sharedInstance;
- (NSString *)serializedFormUsingHeaderElements:(NSDictionary *)headerElements bodyElements:(NSDictionary *)bodyElements;
@end
@interface Class_x0020_ServiceSoapBindingResponse : NSObject {
	NSArray *headers;
	NSArray *bodyParts;
	NSError *error;
}
@property (retain) NSArray *headers;
@property (retain) NSArray *bodyParts;
@property (retain) NSError *error;
@end
