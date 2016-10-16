//
//  Schedule.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import Foundation

typealias ScheduleDict = [String:[ScheduleItem]]

struct Schedule{
	let scheduleThisWeek:ScheduleDict
	let scheduleNextWeek:ScheduleDict
	let scheduleInstructors:[Instructor]
	func instructorFromID(_ id:String)->Instructor?{
		return self.scheduleInstructors.filter{ $0.instructorID == id}.first
	}
	static func scheduleFromDictionary(_ dict:JsonDictionary?)->Schedule?{
	
		var instructors = [Instructor]()
		var thisWeekSchedule = ScheduleDict()
		var nextWeekSchedule = ScheduleDict()
		if let realDict = dict {
			if let instructor = realDict[instructorsKey] as? [AnyObject]{
				for i in instructor{
					if let iDict = i as? [String:AnyObject]{
						if let ins = Instructor.instructorFromDictionary(iDict){
							instructors.append(ins)
						}
					}
				}
			}
		
			if let thisWeek  = realDict[thisWeekKey] as? [AnyObject]{
				for s in thisWeek{
					if let sDict  = s as? [String:AnyObject]{
						let (d,items) = Schedule.scheduleItemFromDict(sDict)
						thisWeekSchedule[d] = items
					}
				}
			}
			if let nextWeek  = realDict[nextWeekKey] as? [AnyObject]{
				for s in nextWeek{
					if let sDict  = s as? [String:AnyObject]{
						let (d,items) = Schedule.scheduleItemFromDict(sDict)
						nextWeekSchedule[d] = items
					}
				}
			}
		}
		
		return Schedule(scheduleThisWeek: thisWeekSchedule, scheduleNextWeek: ScheduleDict(), scheduleInstructors: instructors)
	}
	fileprivate static func scheduleItemFromDict(_ dict:[String:AnyObject])->(String,[ScheduleItem]){
		let date = dict[dateKey] as! String
		var items = [ScheduleItem]()
		if let sitems = dict[scheduleKey] as? [AnyObject]{
			for si in sitems {
				items.append(ScheduleItem.scheduleItemFromDictionary((si as? [String:AnyObject])!)!)
			}
		}
		return (date,items)
		
	}
}
private let thisWeekKey = "ThisWeek"
private let nextWeekKey = "NextWeek"
private let instructorsKey = "Instructors"
private let classesKey = "classesByDay"
private let dateKey = "Date"
private let scheduleKey = "Schedule"
