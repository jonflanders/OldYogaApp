//
//  ScheduleItem.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit

struct ScheduleItem {
	static func scheduleItemFromDictionary(jSONDict:JsonDictionary)->ScheduleItem?{
		
		if let dict = jSONDict{
			if let d = dict[descriptionKey] as? String, let i = dict[idKey] as? Int, let t = dict[typeKey] as? String, let dt = dict[dateKey] as? String, let et = dict[endTimeKey] as? String, let teach = dict[teacherKey] as? String, let teachID = dict[teacherIDKey] as? String, let ft = dict[fullTimeKey] as? String{
				
				return ScheduleItem(scheduleItemID: i, scheduleDescription: d, scheduleType: t, scheduleStartDate: NSDate()	, scheduleEndDate: NSDate(), scheduleTeacherName: teach, scheduleTeacherID: teachID, scheduleFullTime: ft)
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
   
}
private let descriptionKey = "Description"
private let idKey = "ClassID"
private let typeKey = "Type"
private let dateKey = "DateTime"
private let endTimeKey = "EndTime"
private let teacherKey = "Teacher"
private let teacherIDKey = "TeacherID"
private let fullTimeKey = "FullTime"