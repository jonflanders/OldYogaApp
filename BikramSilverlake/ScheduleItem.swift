//
//  ScheduleItem.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import UIKit

struct ScheduleItem {
	static func scheduleItemFromDictionary(dict:JsonDictionary)->ScheduleItem?{
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
