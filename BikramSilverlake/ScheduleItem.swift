//
//  ScheduleItem.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit


enum ScheduleItemType : String{
	case Normal = "Bikram"
	case Hour = "Bikram Hour"
	static func scheduleItemTypeFromString(type:String)->ScheduleItemType{
		switch(type){
		case ScheduleItemType.Hour.rawValue:
			return ScheduleItemType.Hour
		default:
			return ScheduleItemType.Normal
		}
	}
}

struct ScheduleItem {
	static var dateFormatter = NSDateFormatter()
	static var token:dispatch_once_t = 0
	static func scheduleItemFromDictionary(jSONDict:JsonDictionary)->ScheduleItem?{
		
		dispatch_once(&token, { () -> Void in
			ScheduleItem.dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss.SSSZ"
			ScheduleItem.dateFormatter.timeZone = NSTimeZone(name: "UTC")
		})
		if let dict = jSONDict{
			if let d = dict[descriptionKey] as? String, let i = dict[idKey] as? Int, let t = dict[typeKey] as? String, let dt = dict[dateKey] as? String, let et = dict[endTimeKey] as? String, let teach = dict[teacherKey] as? String, let teachID = dict[teacherIDKey] as? String, let ft = dict[fullTimeKey] as? String{
				let rd  = d.stringByReplacingOccurrencesOfString("....", withString: "...")
				return ScheduleItem(scheduleItemID: i, scheduleDescription: rd, scheduleType: t, scheduleStartDate: dateFormatter.dateFromString(dt)!	, scheduleEndDate: dateFormatter.dateFromString(et)!, scheduleTeacherName: teach, scheduleTeacherID: teachID, scheduleFullTime: ft)
			}
		}
		return nil
	}
	let scheduleItemID:Int
	let scheduleDescription:String
	let scheduleType : String
	let scheduleStartDate :NSDate
	let scheduleEndDate: NSDate
	let scheduleTeacherName :String
	let scheduleTeacherID: String
	let scheduleFullTime : String
	var scheduleItemType : ScheduleItemType {
		get {
			 return ScheduleItemType.scheduleItemTypeFromString(self.scheduleType)
		}
	}
	var scheduleItemInPast:Bool{
		get{
			let now = NSDate()
			let tznow = self.toLocalTime(now)
			let result  = tznow.compare(self.scheduleStartDate)
			let boolResult = (result != NSComparisonResult.OrderedAscending)
			return boolResult
		}
	}
	private func toLocalTime(date:NSDate)->NSDate{
		var tx  = NSTimeZone.localTimeZone()
		var sec = tx.secondsFromGMTForDate(date)
		var tsec = Double(sec)
		return NSDate(timeInterval: tsec, sinceDate: date)
	}
//	-(NSDate *) toLocalTime
//	{
//	NSTimeZone *tz = [NSTimeZone localTimeZone];
//	NSInteger seconds = [tz secondsFromGMTForDate: self];
//	return [NSDate dateWithTimeInterval: seconds sinceDate: self];
//	}
// 
//	-(NSDate *) toGlobalTime
//	{
//	NSTimeZone *tz = [NSTimeZone localTimeZone];
//	NSInteger seconds = -[tz secondsFromGMTForDate: self];
//	return [NSDate dateWithTimeInterval: seconds sinceDate: self];
//	}
	
}
private let descriptionKey = "Description"
private let idKey = "ClassID"
private let typeKey = "Type"
private let dateKey = "DateTime"
private let endTimeKey = "EndTime"
private let teacherKey = "Teacher"
private let teacherIDKey = "TeacherID"
private let fullTimeKey = "FullTime"