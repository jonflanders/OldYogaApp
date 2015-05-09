//
//  ScheduleItemController.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/7/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import Foundation

typealias ScheduleCallback = (schedule:[Schedule],error:NSError)-> Void

struct ScheduleController {
	func getSchedule(callback:ScheduleCallback){
		var conn = mainServerConnection
		conn.getDictionary(baseURL + schedulePath, serverCallback: { (dict, err) -> (Void) in
				
		})
	}
}