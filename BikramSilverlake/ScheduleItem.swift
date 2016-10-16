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
	static func scheduleItemTypeFromString(_ type:String)->ScheduleItemType{
		switch(type){
		case ScheduleItemType.Hour.rawValue:
			return ScheduleItemType.Hour
		default:
			return ScheduleItemType.Normal
		}
	}
}

struct ScheduleItem {
	private static var __once: () = { () -> Void in
			ScheduleItem.dateFormatter.dateFormat = "yyyy-MM-dd'T'HH:mm:ss.SSSZ"
			//ScheduleItem.dateFormatter.timeZone = NSTimeZone(name: "Americas")
		}()
	static var dateFormatter = DateFormatter()
	static var token:Int = 0
	static func scheduleItemFromDictionary(_ jSONDict:JsonDictionary?)->ScheduleItem?{
		
		_ = ScheduleItem.__once
		if let dict = jSONDict{
			if let d = dict[descriptionKey] as? String, let i = dict[idKey] as? Int, let t = dict[typeKey] as? String, let dt = dict[dateKey] as? String, let et = dict[endTimeKey] as? String, let teach = dict[teacherKey] as? String, let teachID = dict[teacherIDKey] as? String, let ft = dict[fullTimeKey] as? String{
				return ScheduleItem(scheduleItemID: i, scheduleDescription: d, scheduleType: t, scheduleStartDate: dateFormatter.date(from: dt)!	, scheduleEndDate: dateFormatter.date(from: et)!, scheduleTeacherName: teach, scheduleTeacherID: teachID, scheduleFullTime: ft)
			}
		}
		return nil
	}
	let scheduleItemID:Int
	let scheduleDescription:String
	let scheduleType : String
	let scheduleStartDate :Date
	let scheduleEndDate: Date
	let scheduleTeacherName :String
	let scheduleTeacherID: String
	let scheduleFullTime : String
	var scheduleItemMinutes : String{
		let diff = self.scheduleEndDate.timeIntervalSince(self.scheduleStartDate)
		let m = Int(diff /  60)
		return "\(m)"
	}
	var scheduleItemType : ScheduleItemType {
		get {
			 return ScheduleItemType.scheduleItemTypeFromString(self.scheduleType)
		}
	}
	var scheduleItemInPast:Bool{
		get{
			let now = Date()
			let tznow = self.toLocalTime(now)
			let result  = tznow.compare(self.scheduleStartDate)
			let boolResult = (result != ComparisonResult.orderedAscending)
			return boolResult
		}
	}
	var scheduleLocalStartTime:Date{
		get{
			return self.toAbsoluteLocalTime(self.scheduleStartDate)
		}
	}
	var scheduleLocalEndTime:Date{
		get{
			return self.toAbsoluteLocalTime(self.scheduleEndDate)
		}
	}
	fileprivate func toAbsoluteLocalTime(_ date:Date)->Date{
//		var calendar = NSCalendar.currentCalendar()
//		var components = calendar.components(NSCalendarUnit.CalendarUnitDay|NSCalendarUnit.CalendarUnitHour|NSCalendarUnit.CalendarUnitMinute|NSCalendarUnit.CalendarUnitYear|NSCalendarUnit.MonthCalendarUnit, fromDate: date)
//		
//		
//		var newComponents  = NSDateComponents()
//		newComponents.timeZone = NSTimeZone(name: "UTC")
//		newComponents.calendar = calendar
//		newComponents.month = components.month
//		newComponents.year = components.year
//		newComponents.day = components.day
//		newComponents.hour = components.hour + 7
//		newComponents.minute = components.minute
//		
//		var newDate = newComponents.date
		let seconds:Double =  (7 * 60 * 60) + 3600
		let newDate = date.addingTimeInterval(seconds)
		
		return date
	}
	fileprivate func toLocalTime(_ date:Date)->Date{
		let tx  = TimeZone.autoupdatingCurrent
		let sec = tx.secondsFromGMT(for: date)
		let tsec = Double(sec)
		return Date(timeInterval: tsec, since: date)
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
