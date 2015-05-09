//
//  Schedule.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import Foundation


struct Schedule{
	let scheduleThisWeek:[ScheduleItem]
	let scheduleNextWeek:[ScheduleItem]
	let scheduleInstructors:[Instructor]
	static func scheduleFromDictionary(dict:JsonDictionary)->Schedule?{
	
		return nil
	}
}