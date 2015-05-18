//
//  ScheduleRowController.swift
//  BikramSilverlake
//
//  Created by Jon Flanders on 5/17/15.
//  Copyright (c) 2015 flounderware. All rights reserved.
//

import Foundation
import WatchKit

class ScheduleRowController: NSObject {
	var scheduleTime:String?{
		didSet{
			self.scheduleLabel .setText(self.scheduleTime)
		}
	}
	@IBOutlet weak var scheduleLabel: WKInterfaceLabel!
}
