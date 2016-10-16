//
//  ScheduleItemController.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import Foundation

typealias ScheduleCallback = (_ schedule:Schedule?,_ error:NSError?)-> Void

struct ScheduleController {
	func getSchedule(_ callback:@escaping ScheduleCallback){
		let conn = mainServerConnection
		conn.getDictionary(baseURL + schedulePath, serverCallback: { (dict, err) -> (Void) in
			if let d = dict{
				if let schedule = Schedule.scheduleFromDictionary(d){
					callback(schedule, nil)
				}
				
			}
		})
	}
}
